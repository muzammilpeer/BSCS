<?php
/**
 * ckdata Model for CK Forms Component
 * 
/**
 * ckforms entry point file for CK Forms Component
 * 
 * @package    CK.Joomla
 * @subpackage Components
 * @link http://www.cookex.eu
 * @license		GNU/GPL
 */

// Check to ensure this file is included in Joomla!
defined('_JEXEC') or die();

jimport( 'joomla.application.component.model' );

/**
 * Ckdata Model
 *
 * @package    Joomla.Tutorials
 * @subpackage Components
 */
class CkformsModelCkformsdata extends JModel
{
	/**
	* Ckdata data array
	*
	* @var array
	*/
	var $_data;
	
	/*
	* Ckdata fields array
	*
	* @var array
	*/
	var $_datafields;
	
	/**
	* Items total
	* @var integer
	*/
	var $_total = null;
	
	/**
	* Pagination object
	* @var object
	*/
	var $_pagination = null;
	
	/*
	 * Constructor
	 *
	 */
	function __construct()
	{
		parent::__construct();

		global $mainframe, $option;

        // Get pagination request variables
        $limit = $mainframe->getUserStateFromRequest('global.list.limit', 'limit', $mainframe->getCfg('list_limit'), 'int');
        $limitstart = JRequest::getVar('limitstart', 0, '', 'int');
 
        // In case limit has been changed, adjust it
        $limitstart = ($limit != 0 ? (floor($limitstart / $limit) * $limit) : 0);
 
        $this->setState('limit', $limit);
        $this->setState('limitstart', $limitstart);

		$this->setId(JRequest::getVar('id',  '-1'));	
				
	}
	
	/**
	 * Method to set the form identifier
	 *
	 * @access	public
	 * @param	int form identifier
	 * @return	void
	 */
	function setId($id)
	{
		// Set id and wipe data
		$this->_id = $id;
	}

	function getId()
	{
		return $this->_id;
	}

	/**
	 * Retrieves the forms data
	 * @return array Array of objects containing the data from the database
	 */
	function getData()
	{
		
		if ($this->_id == '-1')
		{
			return;
		} 
		
		// Get Sort parameters
		$sortfield = JRequest::getVar('sortf',  'id');
		$sortdirection = JRequest::getVar('sortd',  'asc');
		
		// Lets load the data if it doesn't already exist
		if (empty( $this->_data ))
		{
			$real_id = substr($this->_id, 1);
			
			if (strtoupper(substr($this->_id, 0, 1)) == 'F')
			{
				$tn = "#__ckforms_".$real_id;
				
				$query = ' SELECT c.* from '.$tn.' c where c.published = 1 ';
				$query = $query .' order by '.$sortfield.' '.$sortdirection;
	
				$this->_data = $this->_getList($query, $this->getState('limitstart'), $this->getState('limit'));				
			} 
			else if (strtoupper(substr($this->_id, 0, 1)) == 'P')
			{
				
			}
		}

		return $this->_data;
	}

	function getTotal()
	{
		if ($this->_id == '-1')
		{
			return;
		}
		
		$real_id = substr($this->_id, 1);
		
		if (strtoupper(substr($this->_id, 0, 1)) == 'F')
		{
			$tn = "#__ckforms_".$real_id;
			
			$query = ' SELECT c.* from '.$tn.' c where c.published = 1 ';
			$this->_total = $this->_getListCount($query);			
		} 
		else if (strtoupper(substr($this->_id, 0, 1)) == 'P')
		{
			
		}
		
		return $this->_total;
	}
	
	function getPagination()
	{
		// Load the content if it doesn't already exist
		if (empty($this->_pagination)) {
			jimport('joomla.html.pagination');
			$this->_pagination = new JPagination($this->getTotal(), $this->getState('limitstart'), $this->getState('limit') );
		}
		return $this->_pagination;
	}

	/**
	 * Retrieves the fields list
	 * @return array Array of objects containing the data from the database
	 */
	function getDatafields()
	{
		// Lets load the data if it doesn't already exist
		if (empty( $this->_datafields ))
		{

			$real_id = substr($this->_id, 1);
			
			if (strtoupper(substr($this->_id, 0, 1)) == 'F')
			{
				$query = ' SELECT * from #__ckfields c where c.fid='.$real_id." and (c.frontdisplay is null or c.frontdisplay = '1') ";	
				$this->_datafields = $this->_getList($query);		
			} 
			else if (strtoupper(substr($this->_id, 0, 1)) == 'P')
			{
				
			}			
		}

		return $this->_datafields;
	}

	/**
	 * Retrieves the fields list
	 * @return array Array of objects containing the data from the database
	 */
	function getDatafields4detail()
	{
		$query = ' SELECT * from #__ckfields c where c.fid='.JRequest::getVar('fid',  '-1')." and (c.frontdisplay is null or c.frontdisplay = '1') ";	
		$this->_datafields = $this->_getList($query);		

		return $this->_datafields;
	}
	
	/**
		* Method to get a hello
		* @return object with data
	*/
	function getDetail()
	{
		$array = JRequest::getVar('cid',  0, '', 'array');
		
		$query = ' SELECT * FROM #__ckforms_'.JRequest::getVar('fid',  '-1').
				'  WHERE id = '.(int)$array[0];
		$this->_db->setQuery( $query );
		$this->_detail = $this->_db->loadObject();
		
		return $this->_detail;
	}

	
	/**
		* Method to get a hello
		* @return object with data
	*/
	function getForm()
	{
		
		$real_id = substr($this->_id, 1);
		
		if (strtoupper(substr($this->_id, 0, 1)) == 'F')
		{
			$query = ' SELECT * FROM #__ckforms '.
					'  WHERE id = '.(int)$real_id;
			$this->_db->setQuery( $query );
			$this->_detail = $this->_db->loadObject();
		} 
		else if (strtoupper(substr($this->_id, 0, 1)) == 'P')
		{
			
		}			
		
		return $this->_detail;
	}

	/**
		* Method to get a hello
		* @return object with data
	*/
	function getForm4detail()
	{
		$query = ' SELECT * FROM #__ckforms '.
				'  WHERE id = '.JRequest::getVar('fid',  '-1');
		$this->_db->setQuery( $query );
		$this->_detail = $this->_db->loadObject();
		
		return $this->_detail;
	}


	/**
		* Method to get a hello
		* @return object with data
	*/
	function getItemid()
	{
		return  JRequest::getVar('Itemid','-1');
	}
}
