<?php
/**
 * @version $Id: mosiframe.php  2008-02-16 12:47 
 * @ Viet Nguyen Hoang - viet4777 - www.xahoihoctap.net & www.luyenkim.net $
 * @package     Joomla
 * @subpackage Content
 * @copyright  Copyright (C) 2005 - 2007 Open Source Matters. All rights reserved.
 * @license    GNU/GPL, see LICENSE.php
 * Joomla! is free software. This version may have been modified pursuant
 * to the GNU General Public License, and as distributed it includes or
 * is derivative of works licensed under the GNU General Public License or
 * other free or open source software licenses.
 * See COPYRIGHT.php for copyright notices and details.
 */
// Check to ensure this file is included in Joomla!
defined( '_JEXEC' ) or die();
jimport( 'joomla.event.plugin' );

$enabled = JPluginHelper :: isEnabled  ('content','plg_picturecube');  
/**
 * Content Plugin
 *
 * @package    Joomla
 * @subpackage Content
 * @since      1.5
 */

class plgContentplg_picturecube extends JPlugin
{
   /**
    * Constructor
    *
    * For php4 compatability we must not use the __constructor as a constructor for plugins
    * because func_get_args ( void ) returns a copy of all passed arguments NOT references.
    * This causes problems with cross-referencing necessary for the observer design pattern.
    *
    * @param object $subject The object to observe
    * @param object $params  The object that holds the plugin parameters
    * @since 1.5
    */
   function plgContentplg_picturecube( &$subject, $params )
   {  
        parent::__construct( $subject, $params );
         $this->_plugin =& JPluginHelper::getPlugin('content','plg_picturecube');
         $this->params =& new JParameter( $this->_plugin->params );
   }

   /**
    * prepare content method
    *
    * Method is called by the view
    *
    * @param   object      The article object.  Note $article->text is also available
    * @param   object      The article params
    * @param   int         The 'page' number
    */
   function onPrepareContent( &$article, &$params, $limitstart )
   {
   // require_once( JURI::root(true).'/includes/domit/xml_saxy_lite_parser.php' );//xml_domit_lite_parser.php
   //$live_site = JURI::base();

   $regex = "#{picturecube*(.*?)}(.*?){/picturecube}#s";
   $plugin_enabled = $this->params->get('enabled','1');
   if($plugin_enabled=="0"){
   $article->text = preg_replace($regex, '', $article->text);
   }
   else {
   if (preg_match_all($regex, $article->text, $matches, PREG_SET_ORDER) > 0) {  
   foreach ($matches as $match) {

   $params0 = & JUtility::parseAttributes($match[1]);
   $params0['src'] = (@$params0['src'])? $params0['src']:$this->params->get( 'src', '' );
   $params0['height'] = (@$params0['height'])? $params0['height']: $this->params->get( 'height', '450' );
   $params0['width'] = (@$params0['width'])? $params0['width'] : $this->params->get( 'width', '350' );
   $params0['cubesize'] = (@$params0['cubesize'])? $params0['cubesize']: $this->params->get( 'cubesize', '200' );

   if(@$match[2]) $url = $match[2]; else $url = $params0['src'];
   $url = strip_tags(rtrim(ltrim($url)));
   
   $images = array();
   $images = explode("|", $url);
   if(count($images)>5){
		$images_link = 'im0='.$images[0];
		for($i=1;$i<6;$i++) $images_link .= '&amp;im' . $i . '=' . $images[$i];
   } else { 
   			$article->text = preg_replace($regex, '', $article->text); 
   			//continue; 
		}

	$html ='<object type="application/x-shockwave-flash" data="'.JURI::base().'plugins/content/plg_picturecube/plg_picturecube.swf?'.
		$images_link.'&amp;cubesize='.$params0['cubesize'].'" width="'.$params0['width'].'" height="'.$params0['height'].
		'"><param name="movie" value="'.JURI::base().'plugins/content/plg_picturecube/plg_picturecube.swf?'.
		$images_link.'&amp;cubesize='.$params0['cubesize'].'" width="'.$params0['width'].'" height="'.$params0['height'].'"/>';
	$html .='<param name="wmode" value="transparent"></object>';		
	$article->text = preg_replace($regex, $html, $article->text, 1);
   unset($params0);
        }
   }     
        // End of Replacement         
}//end of else enable
   } // End Function
} // End Class