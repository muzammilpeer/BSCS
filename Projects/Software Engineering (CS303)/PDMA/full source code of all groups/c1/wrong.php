<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="content-type" content="text/html; charset=utf-8" />
<title>Missing person registry management system</title>
<meta name="keywords" content="" />
<meta name="description" content="" />
<link href="style.css" rel="stylesheet" type="text/css" media="screen" />
<style type="text/css">
.style1 {
	color: #000000;
	font-size: medium;
}
.style2 {
	text-align: center;
}
.style3 {
	font-size: xx-large;
}
</style>
</head>
<body>
	<div id="logo">
		<h2 class="style3" style="height: 68px"><strong>MISSING PERSON REGISTRY SYSTEM</strong><a href="#"><strong>
		</strong>  </a></h2>
	</div>
	<hr />
	<!-- end #logo -->
	<div id="header">
		<div id="menu">
			<ul>
				<li><a class="first" href="index.php">Home</a></li>
				<li class="current_page_item"><a href="admin.php">Admin Login</a></li>
				<li><a href="#">About</a></li>
				<li><a href="#">Contact</a></li>
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
	<div id="page">
		<div id="content">
		  <div class="post" id="header-wrapper">
				<h2 class="title"><a href="#"> Admin Login </a></h2>
				 
				</div>
			<div class="post">
				
				<div class="entry">
					<div class="style2">
						<form method="post" action="process1.php">
						    <br />
						    <?php
						    echo 'You have enter the invelid user name or password or Your are unauthourised user please login first',"<br />";
						    ?>
&nbsp;&nbsp;&nbsp; <span class="style1"><label id="Label1"><strong>Name:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;
							</strong></label></span>
							<input name="username" type="text" /><br />
							<label id="Label2"><strong><span class="style1">&nbsp; &nbsp;&nbsp;&nbsp; 
							Password:&nbsp;&nbsp; </span></strong></label>
							<input name="Password" type="password" /><br />
							<br />
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
							<input name="Submit" type="submit" value="Submit" style="width: 102px; height: 28px" /><br />
						</form>
					</div>
			</div>
		  </div>
		</div>
		<!-- end #content -->
		<!-- end #sidebar -->
		<div style="clear: both;">&nbsp;</div>
	</div>
	<!-- end #page -->
	<div id="footer">
		
	</div>
	<!-- end #footer -->
</body>
</html>
