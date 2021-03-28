<?php
include 'header.php';
require ('organizationalRegistry.php');

$ad = new authenticate();
$ad->authenticateUser();
?>