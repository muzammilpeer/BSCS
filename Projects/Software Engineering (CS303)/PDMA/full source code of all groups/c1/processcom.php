<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>Untitled 1</title>
</head>

<body>
<?php
		session_start();

   if (isset($_SESSION['admin'] ))
   {
   echo "<p>welcome ," . $_SESSION['admin']."</p>";
   } else
   header ("location:wrong.php");
   ?>

<?php
include("connect.php");
connect();

$result = mysql_query("SELECT * from jos_deadpersonreg;");
$result1 = mysql_query("select*from jos_registration;");
while($row = mysql_fetch_array($result))
  {
  while($row1 = mysql_fetch_array($result1))
  {
  if ($row['gender']==$row1['gender'] && $row['agegroup']==$row['age_group'])
  $name = $row['name'];
  $compansation = $row['compansation'];
  $region = $row1['region'];
  $gender = $row['gender'];
  $agegroup = $row['agegroup'];
  mysql_query("insert into jos_found_body(NULL,'$name','$compansation','$region','$gender','$agegroup');");'
  }
  }

header("location:admin_login1.php");
?>

</body>

</html>
