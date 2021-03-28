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

<meta name="keywords" content="" />
<meta name="description" content="" />
<link href="style.css" rel="stylesheet" type="text/css" media="screen" />
<style type="text/css">
.style1 {
	color: #808080;
}
.style2 {
	color: #000000;
}
.style3 {
	background-color: #00FF00;
}
.style4 {
	color: #000000;
	background-color: #00FF00;
}
.style5 {
	color: #77B003;
}
.style7 {
	font-weight: bold;
}
.style8 {
	color: #8A8A8A;
}
.style9 {
	color: #8A8A8A;
	font-weight: bold;
}
</style>
</head>
<body>
	<div id="logo">
		<h2 class="title" style="height: 72px; font-size: xx-large"><strong>
		MISSING PERSON REGISTRY&nbsp; SYSTEM </strong>  </h2>
	</div>
	<hr />
	<!-- end #logo -->
	<div id="header">
		<div id="menu">
			<ul>
				<li><a class="first" href="index.php">Home</a></li>
				<li class="current_page_item"><a href="adminlogin.php">ADMIN LOGIN</a></li>
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
		  <div class="post">
				<h1 class="title">list of missing person</h1>
				<p class="title">&nbsp;</p>
				<?php

include("connect.php");
$colom = $_POST['coloumn'];
$age = $_POST['target'];
//echo 'it prints';
connect();

$result = mysql_query("SELECT * from jos_registration;");

while($row = mysql_fetch_array($result))
  {
// echo 'its prints';
 //echo $row['name'];
	///////////////////////////////////////////////////////////////////////////////////////////////				
				
				
					
				       	echo 'Registration Id                 ',$row['reg_id'],"<br />";
						echo 'Name                            ',$row['name'],"<br />";
						echo 'Age                             ',$row['age'],"<br />";
						echo 'NIC                             ',$row['nic'],"<br />";
						echo 'Address                         ',$row['address1'],"<br />";
						echo 'Telephone                       ',$row['telephone'],"<br />";
						echo 'Region                          ',$row['region'],"<br />";
						echo 'Last Seen                       ',$row['last_seen'],"<br />";
						echo 'Last Date of Seen               ',$row['last_seen_date'],"<br />";
						echo 'Date of Birth                   ',$row['date_of_birth'],"<br />";
				
				
			 echo "<br />","<br />","<br />";
  }
?> 		
		  </div>
		</div>
		<!-- end #content -->
		<div id="sidebar">
			<ul>
				<li>
					<h2>REGISTRATION</h2>
					<p class="style7"><a href="relative.PHP">
					<span class="style8">REGISTRATION OF RELATIVE WITH LOST PERSON</span></a></p>
					<p><a href="registration.PHP"><span class="style8">REGISTRATION</span></a></p>
					<p><a href="dead.php"><span class="style8">DEADPERSON</span></a></p>
				</li>
				<li>
					<h2>SEARCH</h2>
					<ul>
						<li class="style1"><strong><a href="searching.PHP">
						<span class="style8">SEARCH OF A MISSING 
						PERSON</span></a><span class="style5">&nbsp; </span></strong> </li>
						<li class="style1">
					<h2>LIST</h2>
						</li>
						<li class="style1"><strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
						<span class="style8">&nbsp;</span></strong><span class="style9">LIST OF MISSING 
						PERSON</span><strong><a href="admin_missinglist.php"><span class="style8"></span></a></strong></li>
						<li class="style1"><strong>&nbsp;</strong><a href="admin_foundlist.php"><span class="style8">LIST 
						OF FOUND PERSON</span></a></li>
						<li class="style1"><strong>&nbsp;</strong><a href="admin_deadlist.php"><span class="style8">LIST OF DEAD</span></a></li>
					</ul>
				</li>
			</ul>
		</div>
		<!-- end #sidebar -->
		<div style="clear: both;">&nbsp;</div>
	</div>
	<!-- end #page -->
	<div id="footer">
	</div>
	<!-- end #footer -->
</body>
</html>
