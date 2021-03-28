<?php
$con = mysql_connect("127.0.0.1", "root", "");
   mysql_select_db("sms_alert", $con);

   $mysql_query = mysql_query("insert into contact (name,cell_no, design) values ('$_POST[con_name]', '$_POST[con_no]', '$_POST[con_design]')");
header("Location:addcon.php");
?>
