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

.style5 {
	background-color: #76A512;
}
.style6 {
	background-color: #FFFFFF;
}
.style7 {
	background-color: #76A512;
	color: #000000;
}
.style8 {
	color: #000000;
}
</style>
</head>
<body>
	<div id="logo">
		<h1><a href="#">  </a></h1>
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
				<div class="entry" style="height: 134px">
					
	
	<?php
	include("connect.php");
$colom = $_POST['coloumn'];
$age = $_POST['target'];
connect();

$result = mysql_query("SELECT * from jos_registration WHERE $colom='$age';");

while($row = mysql_fetch_array($result))
  {
 //echo 'its prints';
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
		</div><!-- end #content -->
		<div id="sidebar">
			<ul>
				<li>
							<h2 class="style1">REGISTRATION</h2>
							<ul>
								<li><a href="relative.php">REGISTRATION OF RELATIVE WITH LOST PERSON</a></li>
								<li><a href="registration.php">LOST PERSON</a> </li>
								<li><a href="dead.php">DEAD PERSON</li>
							</ul>
						</li>
						<li>
						<ul>
							<li class="style1"><a href="searching.php">SEARCH</li>
						</ul>
						</li>

				<li>
					<h2> ..</h2>
					<ul>
						<li></li>
					</ul>
			  ..</li>
			  <li></li>
		  </ul>
	  </div>
		<!-- end #sidebar -->
		<div style="clear: both;">&nbsp;</div>
	</div>
	<!-- end #page -->
	<div id="footer">
		<p>&nbsp;</p>
</div>
	<!-- end #footer -->
</body>
</html>
