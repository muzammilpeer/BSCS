<h2>Login</h2>
<?php $base_url = "http://localhost/basmic/"; ?>

<?php echo $this->session->flashdata('message'); ?>
<?php echo validation_errors(); ?>
<?php echo form_open('author/login'); ?>
<table border="0"><tr><td width="370">

<table>
    <!--<thead>
        <tr><th colspan="2">Required Fields</th></tr>
    </thead>-->
    <tbody>
        <tr>
            <td>Email Address</td>
            <td><?php echo form_input('email', set_value('email')); ?></td>
        </tr>
        <tr>
            <td>Password</td>
            <td><?php echo form_password('password'); ?></td>
        </tr>
		<tr><td></td>
			<td><?php echo anchor('home/forgotten_password', 'Forgot your Password?'); ?>
			</td>
		</tr>
    </tbody>
    <tfoot>
        <tr><td></td><td><?php echo form_submit('submit', ' Login '); ?></td></tr>
    </tfoot>
</table>
<?php echo form_close(''); ?>

</td><td>
<img src="<?php echo $base_url; ?>images/Key.png">
</td></tr>

<tr>
	<td><br><br><br>
	<center><b>Not a user yet?</b></center></td>
</tr>
<tr>
	<td><center><?php echo anchor('home/register','Register here for FREE!'); ?></center></td>
</tr>

</table>

