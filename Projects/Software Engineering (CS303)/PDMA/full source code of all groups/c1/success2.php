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
</head>
<body>
	<div id="logo">
		<h1><a href="#">MPRS  </a></h1>
		<p><em> Missing Person Registry</a></em></p>
	</div>
	<hr />
	<!-- end #logo -->
	<div id="header">
		<div id="menu">
			<ul>
				<li class="current_page_item"><a href="index.php">Homepage</a></li>
			<li><a href="admin.php">ADMINSTRATOR</a></li>
			<li><a href="faq.php">FAQ</a></li>
			<li><a href="about.php">About US </a></li>
			<li><a href="contact.php">CONTACT US</a></li>
			</ul>
		</div>
		<!-- end #menu -->
		<div id="search">
			<form method="get" action="">
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
				<div class="entry">
<?php
/////////////////////////////////////////////////////////////////////////////////////////////
include("connect.php");
/*echo $name = $_POST['name'];
echo $age = $_POST['age'];
echo $nic = $_POST['nic'];
echo $address = $_POST['address'];
echo $contact = $_POST['contact'];*/
echo $name1 = $_POST['name1'];
echo $nic1 = $_POST['nic1'];
echo $age1 = $_POST['age1'];
echo $address1 = $_POST['address1'];
echo $address2 = $_POST['address2'];
echo $telephone = $_POST['telephone'];
echo $region = $_POST['region'];
echo $dress = $_POST['dress'];
echo $gender = $_POST['gender'];
echo $agegroup = $_POST['agegroup'];
echo $language = $_POST['language'];
echo $last_seen = $_POST['last_seen'];
echo $last_date = $_POST['last_date'];
echo $date_of_birth = $_POST['date_of_birth'];
echo $other_contact = $_POST['other_contact'];
echo $sign_of_identification = $_POST['sign_of_identification'];
connect();
//mysql_query("INSERT INTO jos_relative VALUES ('$name','$age','$nic','address','$contact', NULL);");
mysql_query("INSERT INTO jos_registration VALUES (NULL,'$name1','C:\\abcd','$age1','$nic1','$address1','$address2','$telephone','$region','$dress','$gender','$agegroup','$language','$last_seen','$last_date','$date_of_birth','$other_contact','d:\\jhklhkj','$sign_of_identification');");mysql_close($con);
///////////////////////////////////////////////////////////////////////////////////////////// 
?>				
					your request have been placed. Thaks for your time.</div>
		  </div>
		</div><!-- end #content -->
		<div id="sidebar">
			<ul>
				<li>
							<h2 class="style1">REGISTRATION</h2>
							<ul>
								<li><a href="relative.php">REGISTRATION OF RELATIVE WITH LOST PERSON</a></li>
								<li><a href="registration.php">LOST PERSON</a> </li>
								<li><a href="dead.php">DEAD PERSON</a?</li>
							</ul>
						</li>
						<li>
						<ul>
							<li class="style1"><a href="searching.php">SEARCH</li>
						</ul>
						</li>

				<li>
					<h2>Pellenteque ornare </h2>
					<ul>
						<li><a href="#">Nec metus sed donec</a></li>
						<li><a href="#">Magna lacus bibendum mauris</a></li>
						<li><a href="#">Velit semper nisi molestie</a></li>
						<li><a href="#">Eget tempor eget nonummy</a></li>
						<li><a href="#">Nec metus sed donec</a></li>
						<li><a href="#">Velit semper nisi molestie</a></li>
						<li><a href="#">Eget tempor eget nonummy</a></li>
						<li><a href="#">Nec metus sed donec</a></li>
					</ul>
				</li>
				<li>
					<h2>Turpis nulla</h2>
					<ul>
						<li><a href="#">Nec metus sed donec</a></li>
						<li><a href="#">Magna lacus bibendum mauris</a></li>
						<li><a href="#">Velit semper nisi molestie</a></li>
						<li><a href="#">Eget tempor eget nonummy</a></li>
						<li><a href="#">Nec metus sed donec</a></li>
						<li><a href="#">Nec metus sed donec</a></li>
						<li><a href="#">Magna lacus bibendum mauris</a></li>
						<li><a href="#">Velit semper nisi molestie</a></li>
						<li><a href="#">Eget tempor eget nonummy</a></li>
						<li><a href="#">Nec metus sed donec</a></li>
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
