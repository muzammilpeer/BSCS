<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<!--
Design by Free CSS Templates
http://www.freecsstemplates.org
Released for free under a Creative Commons Attribution 2.5 License

Name       : Solutions 
Description: A two-column, fixed-width design for 1024x768 screen resolutions.
Version    : 1.0
Released   : 20091102

-->
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="content-type" content="text/html; charset=utf-8" />
<title>Missing Person Registry</title>
<meta name="keywords" content="" />
<meta name="description" content="" />
<link href="style.css" rel="stylesheet" type="text/css" media="screen" />
<style type="text/css">
.style1 {
	color: #808080;
}
.style3 {
	font-size: x-large;
}
.style4 {
	font-size: 16px;
	text-decoration: underline;
}
.style5 {
	text-align: left;
}
.style6 {
	margin-top: 0px;
}
.style7 {
	font-size: small;
}
.style8 {
	font-size: 16px;
}
</style>
</head>
<body>
	<div id="logo">
		<h2><span class="style3">missing person registry system</span><a href="#">  </a>
		</h2>
	</div>
	<hr />
	<!-- end #logo -->
	<div id="header">
		<div id="menu">
			<ul>
				<li><a href="index.php" class="first">Home</a></li>
				<li class="current_page_item"><a href="admin.php">ADMIN LOGIN</a></li>
				<li><a href="about.php">About</a></li>
				<li><a href="contact.php">Contact</a></li>
				<li><a href="faq.php">FAQ</a></li>
			</ul>
		</div>
		<!-- end #menu -->
		<div id="search">
			<form method="post" action="">
				<fieldset>
				<input type="text" name="s" id="search-text" size="15" />
				<input type="submit" id="search-submit" value="GO" />
				</fieldset>
			</form>
		</div>
		<!-- end #search -->
	</div>
	<!-- end #header -->
	<!-- end #header-wrapper -->
	<div id="page">
		<div id="content">
		  <div class="post">
				<h2 class="title">REGISTRATION OF RELATIVE WITH DEAD PERSON WITH 
				LOST PERSON</h2>
				<form method="post" action="success1.php">
					<div class="style5">
						<span class="style4"><strong>REGISTRATION OF RELATIVE<br />
						</span>
						<span class="style7">
						<table style="width: 100%">
							<tr>
								<td style="width: 246px">NAME</td>
								</span>
						<span class="style4">
								<td><input name="name" type="text" /></td>
							</tr>
							<tr>
								<td style="width: 246px">AGE</td>
								<td><strong><span class="style4">
						<label id="Label2"><input name="age" type="text" /></label></span></strong></td>
							</tr>
							<tr>
								<td style="width: 246px">NIC</td>
								<td><strong><span class="style4">
						<label id="Label3"><input name="nic" type="text" /></label></span></strong></td>
							</tr>
							<tr>
								<td style="width: 246px">ADDRESS</td>
								<td>
						<label id="Label4"><input name="address" type="text" /></label></td>
							</tr>
							<tr>
								<td style="width: 246px">CONTACT NUMBER</td>
								<td><span class="style4"><strong>
						<label id="Label5"><input name="contact" type="text" /></label></strong></span></td>
							</tr>
						</table>
						<br />
						</span>
						</strong><br />
						<label id="Label1"><span class="style4"><strong>
						<br />
						LOST PERSON REGISTRATION<br />
						<br />
						</strong>
						<table style="width: 100%">
							<tr>
								<td style="width: 255px">NAME</td>
								<td><label id="Label6">&nbsp;<input name="name1" type="text" /></label></td>
							</tr>
							</span><span class="style8">
							<tr>
								<td style="width: 255px">PHOTO</td>
								</span><span class="style4">
								<td><label id="Label7">&nbsp;<input name="photo" type="file" class="style6" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">THUMB IMPRESSION</td>
								<td><label id="Label8">&nbsp;<input name="thumb" type="file" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">NIC</td>
								<td>&nbsp;<label id="Label9"><input name="nic1" type="text" />&nbsp;</label></td>
							</tr>
							<tr>
								<td style="width: 255px">AGE</td>
								<td><label id="Label10">&nbsp;<input name="age1" type="text" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">ADDRESS1 </td>
								<td><label id="Label11">&nbsp;<input name="address1" type="text" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">ADDRESS2</td>
								<td><label id="Label12">&nbsp;<input name="address2" type="text" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">TELEPHONE</td>
								<td><label id="Label13">&nbsp;<input name="telephone" type="text" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">REGION</td>
								<td><label id="Label14">&nbsp;<input name="region" type="text" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">DRESS</td>
								<td><label id="Label15">&nbsp;<input name="dress" type="text" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">GENDER</td>
								<td><label id="Label16">&nbsp;<select name="gender">
	<option></option>
	<option>MALE</option>
	<option>FEMALE</option>
	</select></label></td>
							</tr>
							<tr>
								<td style="width: 255px">LANGUAGE</td>
								<td><label id="Label17">&nbsp;<input name="language" type="text" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">AGE GROUP</td>
								<td><label id="Label18">&nbsp;<select name="agegroup">
	<option></option>
	<option>INFANTS</option>
	<option>TEENAGE</option>
	<option>CHILD</option>
	<option>ADULTS</option>
	<option>SENIORS</option>
	</select></label></td>
							</tr>
							<tr>
								<td style="width: 255px">SIGN OF IDENTIFICATION</td>
								<td><label id="Label19">&nbsp;<input name="sign_of_identification" type="text" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">LAST SEEN WITH</td>
								<td><label id="Label20">&nbsp;<input name="last_seen" type="text" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">LAST DATE OF SEEN</td>
								<td><label id="Label21">&nbsp;<input name="last_date" type="text" value="yy-mm-dd" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">DATE OF BIRTH</td>
								<td>&nbsp; <label id="Label22">
								<input name="date_of_birth" type="text" value="yy-mm-dd" /></label></td>
							</tr>
							<tr>
								<td style="width: 255px">OTHER RELATIVE CONTACT 
								NUMBER</td>
								<td>&nbsp; <label id="Label23">
								<input name="other_contact" type="text" /></label></td>
							</tr>
						</table>
						</span><br />
	<input type="submit" value="REGISTER" /></label></div>
				</form>
		  </div>
		</div>
		<!-- end #content -->
		<div id="sidebar">
			<ul>
				<li>
					<h2>REGISTRATION</h2>
					<p><a href="relative.PHP">REGISTRATION OF RELATIVE WITH LOST PERSON</a></p>
					<p><a href="registration.PHP">REGISTRATION</a></p>
					<p><a href="dead.php">DEADPERSON</a></p>
				</li>
				<li>
					<h2>SEARCH</h2>
					<ul>
						<li class="style1"><a href="searching.PHP">SEARCH OF A MISSING 
						PERSON&nbsp; </a> </li>
					</ul>
				</li>
			</ul>
		</div>
		<!-- end #sidebar -->
		<div style="clear: both;">&nbsp;</div>
	</div>
	<!-- end #page -->
	<div id="footer">
		<p>Copyright (c) 2008 Sitename.com. All rights reserved. Design by <a href="http://www.freecsstemplates.org/">Free CSS Templates</a>.</p>
	</div>
	<!-- end #footer -->
</body>
</html>
