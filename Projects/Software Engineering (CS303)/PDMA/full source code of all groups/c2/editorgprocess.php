<?php include ('editorgclass.php')?>
<?php //include ('header.php' ) ; 
  ?>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=encoding">
<title>Edit Result</title>
</head>

    <body>
    <?php
		$Edit = new EditOrg() ;
                session_start();
		$user = $_SESSION['user'];
                if(isset($_POST['SupplierCB']))
                    $supp = 1;
                else
                    $supp = 0;

                if(isset($_POST['CommunicationCB']))
                    $comm = 1;
                else
                    $comm = 0;

                if(isset($_POST['EducationCB']))
                    $edu = 1;
                else
                    $edu = 0;
                if(isset($_POST['RehabilitaionCB']))
                    $rehab = 1;
                else
                    $rehab = 0;

                if(isset($_POST['MedicalCB']))
                    $med = 1;
                else
                    $med = 0;

		$Edit->Generate_Query($_POST['OrgURL'],$_POST['OrgTypeSelect'],$supp,$comm,$edu,$rehab,$med,$user) ;
		echo ("<a href='EditComplete.php'></a>") ; ?>
    </body>
</html>
