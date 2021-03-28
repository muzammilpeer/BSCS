<?php // @version $Id: default.php 10864 2008-08-30 07:08:04Z willebil $
defined('_JEXEC') or die('Restricted access');
?>

<?php
$return = base64_encode(base64_decode($return).'#content');

if ($type == 'logout') : ?>
<form action="index.php" method="post" name="login" class="log">
	<?php if ($params->get('greeting')) : ?>
	<p>
	<?php if ($params->get('name')) : {
		echo JText::sprintf( 'HINAME', $user->get('name') );
	} else : {
		echo JText::sprintf( 'HINAME', $user->get('username') );
	} endif; ?>
	</p>
	<?php endif; ?>
	<p>
		<input type="submit" name="Submit" class="button" value="<?php echo JText::_('BUTTON_LOGOUT'); ?>" />
	</p>
	<input type="hidden" name="option" value="com_user" />
	<input type="hidden" name="task" value="logout" />
	<input type="hidden" name="return" value="<?php echo $return; ?>" />
</form>
<?php else : ?>
<form action="<?php echo JRoute::_( 'index.php', true, $params->get('usesecure')); ?>" method="post" name="login" class="form-login">
	<?php if ($params->get('pretext')) : ?>
	<p>
		<?php echo $params->get('pretext'); ?>
	</p>
	<?php endif; ?>
		<input name="username" value="<?php echo JText::_( 'Username' ); ?>" type="text" class="inputbox1" onblur="if(this.value=='') this.value='<?php echo JText::_( 'Username' ); ?>';" onfocus="if(this.value=='<?php echo JText::_( 'Username' ); ?>') this.value='';" />
		<input type="password" name="passwd" value="<?php echo JText::_( 'Password' ); ?>" class="inputbox2" onblur="if(this.value=='') this.value='<?php echo JText::_( 'Password' ); ?>';" onfocus="if(this.value=='<?php echo JText::_( 'Password' ); ?>') this.value='';" />
	<input type="submit" name="Submit" class="button" value="<?php echo JText::_('BUTTON_LOGIN'); ?>" />

	<a href="<?php echo JRoute::_('index.php?option=com_user&view=reset#content'); ?>"><img src="templates/itech_bd_edition/images/lost_password.png" title="<?php echo JText::_('FORGOT_YOUR_PASSWORD'); ?>" alt="<?php echo JText::_('FORGOT_YOUR_PASSWORD'); ?>" /></a>
				
		<a href="<?php echo JRoute::_('index.php?option=com_user&view=remind#content'); ?>"><img src="templates/itech_bd_edition/images/lost_username.png" title="<?php echo JText::_('FORGOT_YOUR_USERNAME'); ?>" alt="<?php echo JText::_('FORGOT_YOUR_USERNAME'); ?>" /></a>
			
	<?php $usersConfig =& JComponentHelper::getParams('com_users');
	if ($usersConfig->get('allowUserRegistration')) : ?>

	<a href="<?php echo JRoute::_('index.php?option=com_user&task=register#content'); ?>"><img src="templates/itech_bd_edition/images/registration.png" title="<?php echo JText::_('REGISTER'); ?>" alt="<?php echo JText::_('REGISTER'); ?>" /></a>
	<?php endif;
	echo $params->get('posttext'); ?>
	<input type="hidden" name="option" value="com_user" />
	<input type="hidden" name="task" value="login" />
	<input type="hidden" name="return" value="<?php echo $return; ?>" />
	<?php echo JHTML::_( 'form.token' ); ?>
</form>
<?php endif;
