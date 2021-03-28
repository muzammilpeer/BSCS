<?php include 'header.php';
session_start();
if (!isset($_SESSION['user']))
    header( 'Location: login.php' ) ;?>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=encoding">
<title>Insert title here</title>
</head>

    <body> 
 		<?php $username = $_SESSION['user'];
 		echo ("<a href='editorganization.php?username=$username'>"."Edit Organization Detail" ."</a>"."<br /") ;
 		echo ("<a href='BranchSelect.php?username=$username'>"."Edit Branch Details"."</a>") ; ?>
		 
 </body>
</html>