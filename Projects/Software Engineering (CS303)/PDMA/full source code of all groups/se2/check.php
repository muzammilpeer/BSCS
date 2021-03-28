<?php

$con = mysql_connect("127.0.0.1", "root", "");
mysql_select_db("sms_alert", $con);
$id= $_POST['empno'];
$pasd=$_POST['pasword'];
$sql="select * from employee where emp_no='$id' and password='$pasd'";
$result=mysql_query($sql);
$count= mysql_num_rows($result);
if ($count==1)
    header("Location:mainhtml.php");
else echo 'wrong username or pasword';

?>
