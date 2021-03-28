<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>Untitled 1</title>
</head>

<body>
<?php
include("connect.php");
//	echo 'cheking';
$admin = $_POST['username'];
$password = $_POST['Password'];

connect();
$result = mysql_query("select * from jos_admin WHERE username='$admin'");
//$row = mysql_fetch_array($result);

while($row = mysql_fetch_array($result)) 
  {
  $ues = $row['username'];
  $pass= $row['password'];
  
 // echo $row['password'];
 // echo $pass;
  }

if ( $pass == $password )
{
session_start();
echo $_SESSION['admin']=$ues;
echo $_SESSION['password']=$password;
echo 'matched';
$URL = "adminlogin.php";
 header ("Location: $URL");
}
else
{
$URL = "wrong.php";
header ("Location: $URL");
}

mysql_close($con);

	?>
</body>

</html>
