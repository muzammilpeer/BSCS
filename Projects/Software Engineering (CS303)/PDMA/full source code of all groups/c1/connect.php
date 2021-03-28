<?php

$con ;

function connect()
{
	$g_host = "localhost";
	$g_user = "root";
	$g_pass = "";
	$g_db = "missing_person";

	$con = mysql_connect($g_host,$g_user,$g_pass);
	if (!$con) {  die('Could not connect: ' . mysql_error());  }

	mysql_select_db($g_db, $con);
}

?>
