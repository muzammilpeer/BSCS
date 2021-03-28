<?php
//no direct accees
defined ('_JEXEC') or die ('resticted aceess');
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php echo $this->language; ?>" lang="<?php echo $this->language; ?>" >
<head>
<jdoc:include type="head" />
<link rel="stylesheet" href="<?php echo $this->baseurl?>/templates/system/css/system.css" type="text/css" />
<link rel="stylesheet" href="<?php echo $this->baseurl?>/templates/system/css/general.css" type="text/css" />
<link rel="stylesheet" href="<?php echo $this->baseurl?>/templates/<?php echo $this->template?>/css/template.css" type="text/css" />
<link rel="stylesheet" href="<?php echo $this->baseurl?>/templates/<?php echo $this->template?>/css/typography.css" type="text/css" />
<link rel="stylesheet" href="<?php echo $this->baseurl?>/templates/<?php echo $this->template?>/css/joomla.css" type="text/css" />
<link rel="stylesheet" href="<?php echo $this->baseurl?>/templates/<?php echo $this->template?>/css/navigation.css" type="text/css" />
<script type="text/javascript" src="<?php echo $this->baseurl?>/templates/<?php echo $this->template?>/js/jquery-1.2.6.min.js"></script>

<?php
if ($this->countModules( 'left and right' )==0) $contentwidth="100";
if ($this->countModules( 'left or right' )==1) $contentwidth="80";
if ($this->countModules( 'left and right' )==1) $contentwidth="60";
?>
<script type="text/javascript">
function slideSwitch() {
    var $active = $('#slideshow IMG.active');

    if ( $active.length == 0 ) $active = $('#slideshow IMG:last');

    // use this to pull the images in the order they appear in the markup
    var $next =  $active.next().length ? $active.next()
        : $('#slideshow IMG:first');

    // uncomment the 3 lines below to pull the images in random order
    
    // var $sibs  = $active.siblings();
    // var rndNum = Math.floor(Math.random() * $sibs.length );
    // var $next  = $( $sibs[ rndNum ] );


    $active.addClass('last-active');

    $next.css({opacity: 0.0})
        .addClass('active')
        .animate({opacity: 1.0}, 1000, function() {
            $active.removeClass('active last-active');
        });
}

$(function() {
    setInterval( "slideSwitch()", 5000 );
});

</script>

</head>
<body>
<div id="wrap">
	<div id="header">
		<div id="logo">
			<h1><?php echo $this->params->get ( 'title' ); ?></h1>
			<div class="clear"></div>
			<h2><?php echo $this->params->get ( 'slogan' ); ?></h2>
		</div>

		<div id="login">
			<div class="inside">
				<jdoc:include type="modules" name="login" style="xhtml" />
			</div>
		</div>

	</div>
	<?php if ($this->countModules ('top' )) :?>
		<div id="topnav">
			<jdoc:include type="modules" name="top" style="none" />
			<jdoc:include type="modules" name="search" style="none" />
		</div>
	<?php endif; ?>	

	<?php if ($this->countModules( 'left' )) : ?>
	<div id="left">
			<jdoc:include type="modules" name="left" style="xhtml" />
	</div>
	<?php endif; ?>
	
	<div id="content<?php echo $contentwidth; ?>">
		<div class="inside">
		<?php $show= $this->params->get ( 'showslide' );
		if ($show=='show') { 
	?>		
		<?php
		if ( JRequest::getVar('view') == 'frontpage' ) {

		?>
			<div id="box">
			<div id="slideshow">
			<?php
			$dirname= $this->params->get ( 'slideshowpath' );
			$first_image = TRUE;
			$dir = opendir ($dirname);
					while (false !== ($file = readdir($dir))) {
							if (strpos($file, '.gif',1)||strpos($file, '.jpg',1)||strpos($file, '.png',1) ) {
								if ($first_image) {
                                  $first_image = FALSE;
                                  $class = 'class="active"';
								}
                                 else $class="";
								echo "<img src='$dirname/$file' alt='iTech SlideShow' $class />";
							}
					}			
			?>			
			</div>
			</div>
		<?php } ?>
		<?php } ?>
		
			<jdoc:include type="module" name="bredcumbs" style="none" />
			<jdoc:include type="component" />
		</div>
	</div>
	<?php if ($this->countModules ( 'right' )) : ?>
	<div id="right">
		<jdoc:include type="modules" name="right" style="xhtml" />
	</div>	
	<?php endif; ?>
	
	<div id="footer">
	<div class="inside">
	<div id="copyright">
	<p>Copyright &copy; <?php echo $mainframe->getCfg( 'sitename' ); ?>. All Rights Reserved. <?php echo JText::_('Powered by') ?> <a href="http://www.joomla.org">Joomla!</a>. <?php echo JText::_('Valid') ?> <a href="http://validator.w3.org/check/referer">XHTML</a> <?php echo JText::_('and') ?> <a href="http://jigsaw.w3.org/css-validator/check/referer">CSS</a>.</p>
	</div>
	<div id="design"><p>Template By <a target="_blank" href="http://i-tech-system.com">iTech System</a></p></div>
	</div>
	</div>	
	
</div>
</body>
</html>
