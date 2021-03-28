<?php
defined( '_JEXEC' ) or die( 'Restricted access' );
JPlugin::loadLanguage( 'tpl_SG1' );
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php echo $this->language; ?>" lang="<?php echo $this->language; ?>" >
<head>
<jdoc:include type="head" />

<link rel="stylesheet" href="templates/system/css/system.css" type="text/css" />
<link rel="stylesheet" href="templates/<?php echo $this->template ?>/css/template.css" type="text/css" />

<!--[if lte IE 6]>
<link rel="stylesheet" href="templates/<?php echo $this->template ?>/css/ie6.css" type="text/css" />
<![endif]-->

</head>
<body class="body_bg">
	<div id="page_bg">
		<!-- Logo -->
		<div id="logo">
			<table cellspacing="0" cellpadding="0">
				<tr>
					<td>
						<a href="index.php"><?php echo $mainframe->getCfg('sitename') ;?></a>
					</td>
				</tr>
			</table>
		</div>
		<!-- /Logo -->

		<!-- Header -->
		<div id="header">
			<div class="header_img">
				<?php if($this->countModules('user1') and $this->countModules('user2') and JRequest::getCmd('layout') != 'form') : ?>
					<!-- News -->
					<div class="news">
						<?php if($this->countModules('user1') and JRequest::getCmd('layout') != 'form') : ?>
						<div class="latest">
							<jdoc:include type="modules" name="user1" style="rounded" />
						</div>
						<?php endif; ?>
						
						<?php if($this->countModules('user1') and $this->countModules('user2') and JRequest::getCmd('layout') != 'form') : ?>
						<div class="separator"></div>
						<?php endif; ?>
						
						<?php if($this->countModules('user2') and JRequest::getCmd('layout') != 'form') : ?>
						<div class="popular">
							<jdoc:include type="modules" name="user2" style="rounded" />
						</div>
						<?php endif; ?>
						<div class="clr"></div>
					</div>
					<div class="clr"></div>
					<!-- /News -->
				<?php endif; ?>
			</div>
			
			<!-- Pillmenu -->
			<div id="pillmenu">
				<!-- User Help: Center menu replace float: left; or float: right; with : margin: 0 auto;  -->
				<table cellspacing="0" cellpadding="0" style="float: left;">
					<tr>
						<td>
							<jdoc:include type="modules" name="user3" />
						</td>
					</tr>
				</table>
				<div class="clr"></div>
			</div>
			<!-- /Pillmenu -->
		</div>
		<!-- /Header -->
		
		<!-- Pathway col -->
			<div id="pathway_col">
				<div class="pathway">
					<jdoc:include type="module" name="breadcrumbs" />
				</div>
				<div class="search_box">
					<jdoc:include type="modules" name="user4" />
				</div>
				<div class="clr"></div>
			</div>
		<!-- /Pathway col -->
		
		<!-- Wrapper -->
		<div id="wrapper">
			<div id="content">
				<?php if($this->countModules('left') and JRequest::getCmd('layout') != 'form') : ?>
					<div id="leftcolumn">	
						<jdoc:include type="modules" name="left" style="rounded" />
						<?php $sg = 'banner'; include "templates.php"; ?>
					</div>
					<?php endif; ?>
					
					<?php if($this->countModules('right') and JRequest::getCmd('layout') != 'form') : ?>
					<div id="maincolumn">
					<?php else: ?>
					<div id="maincolumn_full">
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
			</div>		
		</div>
		<!-- /Wrapper -->
		
		<!--footer start-->
		<div id="footer">
			<div id="f123">
				<div>
					<div style="text-align: center; padding: 10px 0 0;">
						<?php $sg = ''; include "templates.php"; ?>
					</div> 
					<div style="padding: 5px 0; text-align: center; color: #829300;">
						Valid <a style="color: #829300;" href="http://validator.w3.org/check/referer">XHTML</a> and <a style="color: #829300;" href="http://jigsaw.w3.org/css-validator/check/referer">CSS</a>.
					</div>
				</div>
			</div>
		</div>
		<!--footer end-->	
		
	</div>
	<jdoc:include type="modules" name="debug" />
</body>
</html>
