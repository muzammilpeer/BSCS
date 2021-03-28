<?php //include ('header.php')?><html>

    <?php
	$SqlConnection = @mysql_connect("localhost", "root", "");
		if (!$SqlConnection) {
  			echo( "<P>Unable to connect to the " . "database server at this time.</P>" );
  		exit();
			}
        $BID = $_POST['branchID'] ;
	mysql_select_db("organ_reg", $SqlConnection);
		if (! @mysql_select_db("organ_reg") ) {
 		 	echo( "<P>Unable to locate the Organizational Registry Database at this time.</P>" );
  			exit();
			}
        $QueryStr = "update branch SET" ;
        $District = $_POST['DistrictList'] ;
        $Add = $_POST['AddressBranch'] ;
        $Town = $_POST['TalukaList'] ;
        $check = false ;
        if ($District) {
            $QueryStr .= " district ='".$District."'" ;
            $check = true ;
        }
        if ($Town) {
            if ($check) {
                $QueryStr .=", city='".$Town."'" ;
            }
            else {
                $QueryStr .=" city='".$Town."'" ;
                $check = true ;
            }
        }

        if ($Add) {
            if ($check) {
                $QueryStr .=", address='".$Add."'" ;
            }
            else {
                $QueryStr .=" address='".$Add."'" ;
                $check = true ;
            }
        }
        if ($check) {
        $QueryStr .=" where branchID=".$BID ;
        if ( !mysql_query($QueryStr) ) {
  		echo("<P>Error performing update: " .
       	mysql_error() . "</P>");
       	exit() ;
	}
        }

        $QueryStr = "UPDATE branch_contact SET" ;

        $Name = $_POST['conName'] ;
        $Add = $_POST['conAddress'] ;
        $Phone = $_POST['conPhone'] ;
        $Mobile = $_POST['conMobile'] ;
        $Fax = $_POST['conFax'] ;
        $Email = $_POST['conEmail'] ;

        $check = false ;
        if ($Name) {
            $QueryStr .= " name='".$Name."'" ;
            $check = true ;
        }
        
        if ($Add) {
            if ($check) {
                $QueryStr .=", address='".$Add."'" ;
            }
            else {
                $QueryStr .=" address='".$Add."'" ;
                $check = true ;
            }
        }

        if ($Phone) {
            if ($check) {
                $QueryStr .=", phone='".$Phone."'" ;
            }
            else {
                $QueryStr .=" phone='".$Phone."'" ;

                $check = true ;
            }
        }

        if ($Mobile) {
            if ($check) {
                $QueryStr .=", cell='".$Mobile."'" ;
            }
            else {
                $QueryStr .=" cell='".$Mobile."'" ;
                $check = true ;
            }
        }

         if ($Fax) {
            if ($check) {
                $QueryStr .=", fax='".$Fax."'" ;
            }
            else {
                $QueryStr .=" fax='".$Fax."'" ;
                $check = true ;
            }
        }

         if ($Email) {
            if ($check) {
                $QueryStr .=", email='".$Email."'" ;
            }
            else {
                $QueryStr .=" email='".$Email."'" ;
                $check = true ;
            }
        }

        if ($check) {

        $QueryStr .=" where branch=".$BID ;
       if ( !mysql_query($QueryStr) ) {
  		echo("<P>Error performing update: " .
       	mysql_error() . "</P>");
       	exit() ;
	} 
        }

	
	?>
    </body>
    </noframes>
</frameset>
</html>
