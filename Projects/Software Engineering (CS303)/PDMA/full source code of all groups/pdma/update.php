<?php
include 'conn.php';


$std_id=$_POST['std_id'];
$std_name=$_POST['std_name'];
$std_class=$_POST['std_class'];
$std_sec=$_POST['std_sec'];
$std_school=$_POST['std_school'];

$sql="UPDATE `ali`.`student` 
	SET 'std_id' = '$std_id',`std_name` = '$std_name',`std_class` = '$std_class',`std_sec` = '$std_sec',`std_school` = '$std_school' 
	WHERE `student`.`std_id` = '$std_id'";
mysql_query($sql);


echo "<br><br>";
echo "<b><i>RECORD SUCCESSFULLY UPDATED INTO DATABASE !!</b></i>";


echo "<br><br>";
echo "<form method=post action=record.php?>";
echo "<b>To go back to the main menu: </b> <input type=submit  value=CLICK_HERE>";


?>