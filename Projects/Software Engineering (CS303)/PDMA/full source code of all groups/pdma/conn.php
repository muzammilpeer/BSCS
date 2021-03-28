<?php

$host='localhost';
$user='root';
$pass='';
$db='pdma';

$conn=mysql_connect($host,$user,$pass) or die('Error');

/*if($conn)
{
echo"connected";
}

echo"<br>";*/

$db_check=mysql_select_db($db) or die('Error');

/*if ($db_check)
{
echo"selected";
}
else
echo"not selected";*/


?>