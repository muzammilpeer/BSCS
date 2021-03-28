<?php
require ('organizationalRegistry.php');

$regBranch = new registerBranch();
$branch = $regBranch->insertPendingBranch($_POST['username'], $_POST['district'], $_POST['city'], $_POST['address']);
$regBranch->insertBranchContact($_POST['conName'], $_POST['conAddress'], $_POST['conPhone'], $_POST['conMobile'], $_POST['conFax'], $_POST['conEmail'], $_POST['username'], $branch);

$resource = NULL;
$qty = NULL;
for ($i = 0; $i < mb_strlen($_POST['manpower']); $i++) {
    $char = mb_substr($_POST['manpower'], $i, 1);

    if ($char == '=') {
        do {
            $char = mb_substr($_POST['manpower'], ++$i, 1);
            if ($char == ';')break;
            $qty = $qty.$char;
        }while (true);

        $regBranch->insertBranchResource($resource, $qty, $_POST['username'], $branch);
        $resource = NULL;
        $qty = NULL;
    }else {
        if ($char == ' ')
            $char = '_';
        $resource = $resource.$char;
    }
}

$resource = NULL;
$qty = NULL;
for ($i = 0; $i < mb_strlen($_POST['equip']); $i++) {
    $char = mb_substr($_POST['equip'], $i, 1);

    if ($char == '=') {
        do {
            $char = mb_substr($_POST['equip'], ++$i, 1);
            if ($char == ';')break;
            $qty = $qty.$char;
        }while (true);

        $regBranch->insertBranchResource($resource, $qty, $_POST['username'], $branch);
        $resource = NULL;
        $qty = NULL;
    }else {
        if ($char == ' ')
            $char = '_';
        $resource = $resource.$char;
    }   
}
if ($_POST['finish']) {
        header( 'Location: index.php' ) ;
    }else
        header( 'Location: branchForm.php?username='.$username ) ;
?>
