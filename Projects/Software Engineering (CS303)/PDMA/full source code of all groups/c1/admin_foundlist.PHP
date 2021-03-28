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
				<li><a href="#" class="index.php">Home</a></li>
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
	<?php
		session_start();

   if (isset($_SESSION['admin'] ))
   {
   echo "<p>welcome ," . $_SESSION['admin']."</p>";
   } else
   header ("location:wrong.php");
   ?>

	<!-- end #header -->
	<!-- end #header-wrapper -->
	<div id="page">
		<div id="content">
		  <div class="post">
				<h1 class="title">list of found persons</h1>
				<p class="title">&nbsp;</p>
				<?php
				include("connect.php");
connect();
$result = mysql_query("SELECT * from jos_found_person;");

while($row = mysql_fetch_array($result))
  {
 //echo 'its prints';
 //echo $row['name'];
	///////////////////////////////////////////////////////////////////////////////////////////////				
				
				
					
				       	echo 'Found Id                 ',$row['found_id'],"<br />";
						echo 'Name                            ',$row['name'],"<br />";
						echo 'Current Address                             ',$row['current_address'],"<br />";
					//	echo 'Name of Relative                             ',$row['relative_name'],"<br />";
						echo 'Age                         ',$row['age'],"<br />";
						echo 'Date of Found                       ',$row['date_of_found'],"<br />";
						echo 'Region                       ',$row['region'],"<br />";
				
				
			 echo "<br />","<br />","<br />";
  }
?> 			  </div>
		</div>
		<!-- end #content -->
		<div id="sidebar">
			<ul>
				<li>
					<h2>REGISTRATION</h2>
					<li><a href="relative.php"><strong>REGISTRATION OF RELATIVE WITH LOST PERSON</strong></a></li>
					<li><a href="registration.php"><strong>REGISTRATION</strong></a></li>
					<li><a href="dead.php"><strong>DEAD PERSON</strong></a></li>
					
				</li>
				<li>
					<h2>SEARCH</h2>
					<ul>
						<li class="style1"><a href="searching.php"><strong>SEARCH OF A MISSING 
						PERSON</strong></a><strong>&nbsp; </strong> </li>
						<li class="style1">
					<h2>LIST</h2>
						</li>
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
	</div>
	<!-- end #footer -->
</body>
</html>
