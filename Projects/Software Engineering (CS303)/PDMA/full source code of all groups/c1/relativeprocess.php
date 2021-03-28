<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>Untitled 1</title>
</head>

<body>
<?php

echo $name = $_POST['name'];
echo $age = $_POST['age'];
echo $nic = $_POST['nic'];
echo $address = $_POST['address'];
echo $contact = $_POST['contact'];
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
$con = mysql_connect("localhost","root","Bilal786");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("jm", $con);
mysql_query("INSERT INTO jos_relative VALUES ('$name','$age','$nic','address','$contact', NULL);");
mysql_query("INSERT INTO jos_registration VALUES (NULL,'$name1','C:\\abcd','$age1','$nic1','$address1','$address2','$telephone','$region','$dress','$gender','$agegroup','$language','$last_seen','$last_date','$date_of_birth','$other_contact','d:\\jhklhkj','$sign_of_identification');");


/*
if (!mysql_query($sql,$con))
  {
  die('Error: ' . mysql_error());
  }
echo "1 record added";

mysql_close($con);
echo 'check';*/

?> 

</body>

</html>
