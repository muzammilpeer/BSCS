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
<title>Solutions  by Free CSS Templates</title>
<meta name="keywords" content="" />
<meta name="description" content="" />
<link href="style.css" rel="stylesheet" type="text/css" media="screen" />
<style type="text/css">
.style1 {
	margin-left: 0px;
}
.style2 {
	font-size: xx-large;
}
</style>
</head>
<body>
	<div id="logo">
		<h2 style="height: 69px" class="style2"><strong>MISSING PERSON REGISTORY SYSTEM&nbsp;</strong></h2>
	</div>
	<hr />
	<!-- end #logo -->
	<div id="header">
		<div id="menu">
			<ul>
				<li><a href="#" class="index.php">Home</a></li>
				<li class="admin.php"><a href="adminlogin.php">Admin Login</a></li>
				<li><a href="about.php">About</a></li>
				<li><a href="contact.php">Contact</a></li>
				<li><a href="faq.php">FAQ</a></li>
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
	<?php
		session_start();

   if (isset($_SESSION['admin'] ))
   {
   echo "<p>welcome ," . $_SESSION['admin']."</p>";
   } else
   header ("location:wrong.php");
   ?>

	<div id="page">
		<div id="content">
		  <div class="post" id="header-wrapper" style="height: 638px">
		  <?php
		  echo $_SESSION['username'];
		  ?>
				<h2 class="title"><a href="#">Welcome Admin </a></h2>
				<p class="title"><strong>Sindh province&nbsp; of Pakistan 
				comprises of 23 distracts few which of&nbsp; are most important 
				are Karachi: for its business jacobabad:for its hot weather, 
				Larkana for ancient memories and so on and so forth .&nbsp;&nbsp;
				</strong>&nbsp;</p>
				 
				<img alt=" " src="sindh.jpg" class="style1" /></div>
		</div>
		<!-- end #content -->
		<div id="sidebar">
			<ul>
				<li>
					<h2>Rigistration</h2>
					<li><a href="relative.php"><strong>REGISTRATION OF RELATIVE WITH LOST PERSON</strong></a></li>
					<li><a href="registration.php"><strong>REGISTRATION</strong></a></li>
					<li><a href="dead.php"><strong>DEAD PERSON</strong></a></li>
					<p><strong>&nbsp;</strong></p>
				</li>
				<li>
					<h2>SEARCH </h2>
					<ul>
						<li><a href="searching.php"><strong>SEARCH</strong></a></li>
					</ul>
				</li>
				<li>
					<h2>COMPARE </h2>
					<ul>
						<li><a href="compare.php"><strong>Start Compareing</strong></a></li>
					</ul>
				</li>

				<li>
					<h2>LISTS</h2>
					<ul>
						<li><a href="admin_foundlist.php"><strong>LIST OF FOUND PERSON</strong></a></li>
						<li><a href="admin_missinglist.php"><strong>LIST OF LOST PERSON</strong></a></li>
						<li><a href="admin_deadlist.php"><strong>LIST OF DEAD PERSON</strong></a></li>
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
