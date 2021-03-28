<?php
include 'conn.php';

$eva_name=$_GET['eva_name'];
$cam_type=$_GET['cam_type'];
$address=$_GET['address'];
$province=$_GET['province'];
$city=$_GET['city'];
$full_name=$_GET['full_name'];
$org_belong=$_GET['org_belong'];
$contact_no=$_GET['contact_no'];
$nic_no=$_GET['nic_no'];
$capacity=$_GET['capacity'];
$men=$_GET['men'];
$women=$_GET['women'];
$children=$_GET['children'];
$fac_admin=$_GET['fac_admin'];
$fac_san=$_GET['fac_san'];
$fac_water=$_GET['fac_water'];
$fac_med=$_GET['fac_med'];

echo "<form method=POST action=update.php>";
echo "Evacuation Point Name: <input type=text name=eva_name value=$eva_name><br>";
echo "Student Name: <input type=text name=std_name value=$std_name><br>";
echo "Student Class: <input type=text name=std_class value=$std_class><br>";
echo "Student Sec: <input type=text name=std_sec value=$std_sec><br>";
echo "Student School: <input type=text name=std_school value=$std_school><br><br>";
echo "<input type=submit  value=submit>";
echo"</form>";

?>