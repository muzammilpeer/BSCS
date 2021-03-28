<?php
/**
 * Deflaut View for CKForms Component
 * 
 * @package    CKForms
 * @subpackage Components
 * @link http://dev.joomla.org/component/option,com_jd-wiki/Itemid,31/id,tutorials:components/
 * @license		GNU/GPL
 */

jimport( 'joomla.application.component.view');

/**
 * HTML View class for the CKForms Component
 *
 * @package		CKForms
 * @subpackage	Components
 */
class CkformsViewCkforms extends JView
{
	function display($tpl = null)
	{	
		global $mainframe;
		$ckforms = & $this->get('Data');
	
		$post = JRequest::get('post', JREQUEST_ALLOWHTML);
		$this->assignRef( 'post',$post );
		
		$params =& $mainframe->getParams('com_content');
		$this->assignRef('params' , $params);
	
		$this->assignRef( 'ckforms',$ckforms );
		
		$formLink = "index.php?option=com_ckforms&view=ckforms&task=send&id=".$ckforms->id;		
		$this->assignRef( 'formLink',$formLink );

		$document =& JFactory::getDocument();
		
		$lgfactory = &JFactory::getLanguage();
		$lg = $lgfactory->_default;
		$lg = substr($lg,0,2);
		
		if (isset($_GET['lang']))
		{
			$lg = $_GET['lang'];
		}
		
		$document->addCustomTag('<script type="text/javascript" src="'.JURI::root(true).'/components/com_ckforms/js/jquery-1.3.2.min.js"></script>');
		$document->addCustomTag('<script type="text/javascript" src="'.JURI::root(true).'/components/com_ckforms/js/jquery.tooltip.min.js"></script>');
		$document->addCustomTag('<script type="text/javascript" src="'.JURI::root(true).'/components/com_ckforms/js/ui.datepicker.packed.js"></script>');
		if($lg != "en")
		{
			$document->addCustomTag('<script type="text/javascript" src="'.JURI::root(true).'/components/com_ckforms/js/i18n/ui.datepicker-'.$lg.'.js"></script>');
		}
		$document->addCustomTag('<script type="text/javascript" src="'.JURI::root(true).'/components/com_ckforms/js/jquery.validate.min.js"></script>');

		$document->addStyleSheet(JURI::root(true).'/components/com_ckforms/css/ui.datepicker.css');
		$document->addStyleSheet(JURI::root(true).'/components/com_ckforms/css/ckforms.css');
		
		parent::display($tpl);
		
	}

}
?>
