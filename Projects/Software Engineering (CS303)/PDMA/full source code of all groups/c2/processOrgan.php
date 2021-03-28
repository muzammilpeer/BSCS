<?php
require ('organizationalRegistry.php');
if ($_POST['accept']) {
    $ad = new admin();
    $ad->accept($_POST['username']);
    header( 'Location: admin.php') ;
}
else {
    $ad = new admin();
    $ad->reject($_POST['username']);
    header( 'Location: admin.php') ;
}
?>
