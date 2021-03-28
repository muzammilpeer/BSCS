<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
<title>process1</title>
</head>

<body>
<?php
include("connect.php");
echo ' yes this is printed';

echo $name = $_POST['name'];
echo $nic = $_POST['nic'];
echo $look = $_POST['look'];
echo $height = $_POST['height'];
echo $color = $_POST['color'];
//echo $facetype = $_POST['facetype'];
echo $bodytype = $_POST['bodytype'];
echo $eyecolor = $_POST['eyecolor'];
echo $sign_of_identification = $_POST['sign_of_identification'];
echo $gender = $_POST['gender'];
echo $date_found = $_POST['date_found'];
echo $found_location = $_POST['found_location'];
echo $age_group = $_POST['age_group'];
echo $condition = $_POST['condition'];
echo $identifiable = $_POST['identifiable'];
echo $compansation = $_POST['compansation'];
echo $cause_of_death = $_POST['cause_of_death'];
echo $weight = $_POST['weight'];
echo $compansation_eligible = $_POST['compansation_eligible'];
echo $who_reported = $_POST['who_reported'];
echo $contact_reported = $_POST['contact_reported'];
echo $address_of_reported = $_POST['address_of_repoted'];
connect();
mysql_query("INSERT INTO jos_deadpersonreg VALUES (NULL,'$name','$nic','$look','$height','$color','face','$bodytype','$eyecolor','$sign_of_identification','$gender','$date_found','$found_location','d:\\jkjakjkj','c:\\abvhyy','$age_group','$condition','$identifiable','$compansation','$cause_of_death','80','$compansation_eligible','$who_reported','$contact_reported','$address_of_reported');");
//header ("location:success1.php");

/*
if (!mysql_query($sql,$con))
  {
  die('Error: ' . mysql_error());
  }
echo "1 record added";
*/

mysql_close($con)
?> 

</body>

</html>
