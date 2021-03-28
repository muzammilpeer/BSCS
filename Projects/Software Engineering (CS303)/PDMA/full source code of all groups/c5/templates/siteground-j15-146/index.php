<?php
defined( '_JEXEC' ) or die( 'Restricted access' );
JPlugin::loadLanguage( 'tpl_SG1' );
define( 'path', dirname(__FILE__) );
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php echo $this->language; ?>" lang="<?php echo $this->language; ?>" >
<head>
<jdoc:include type="head" />
<?php
	$menu_name        = $this->params->get("menuName", "topmenu");
	$menu_type        = $this->params->get("menuType", "splitmenu");
	require(path .DS."styleloader.php");
	require(path .DS."utils.php");
?>
<link rel="stylesheet" href="templates/system/css/system.css" type="text/css" />
<link rel="stylesheet" href="templates/<?php echo $this->template ?>/css/template.css" type="text/css" />
</head>

<body id="page_bg">
	<div id="header">
		<div id="search"><jdoc:include type="modules" name="user4" /></div>
		<div id="pillmenu">
			<?php if($mtype != "module") :
			echo $mainnav;
			else: ?>
			<jdoc:include type="modules" name="user3" />
			<?php endif; ?>
		</div>
		<div class="clr"></div>
		<div class="logo">
			<table cellpadding="0" cellspacing="0">
				<tr>
					<td>
						<h1><a href="index.php"></a></h1>
					</td>
				</tr>
			</table>
		</div>
		<div class="clr"></div>
		<div class="newsflash<?php if(!$this->countModules('user1') and JRequest::getCmd('layout') != 'form') : ?> only<?php endif; ?>">
			<jdoc:include type="modules" style="rounded" name="top" />
		</div>
	</div>
	
	<div id="content">
		<div class="cpathway"><jdoc:include type="module" name="breadcrumbs" /></div>
		<?php if($this->countModules('left') and JRequest::getCmd('layout') != 'form') : ?>
		<div id="leftcolumn">
			<jdoc:include type="modules" name="left" style="rounded" />
			<br />
			
			<br />
		</div>
		<?php endif; ?>
		
		
		<div class="nopad">
			<jdoc:include type="message" />
			<?php if($this->params->get('showComponent')) : ?>
				<jdoc:include type="component" />
			<?php endif; ?>
		</div>
		
		</div>
			
		<?php if($this->countModules('right') and JRequest::getCmd('layout') != 'form') : ?>
		<div id="rightcolumn">
			<jdoc:include type="modules" name="right" style="rounded" />
		</div>
		<?php endif; ?>
		<div class="clr"></div>
						
		<div id="footer">
			<div id="holder">
				<jdoc:include type="modules" name="debug" />
				<?php $sg = ''; include "templates.php"; ?>
				
			</div>
		</div>
	</div>
		
</body>
</html>