<?php
class Search {
    var $OrgName ;
    var $OrgType ;
    var $SecSup ;
    var $SecCom ;
    var $SecEdu ;
    var $SecRehb ;
    var $SecMed ;
    var $District ;
    var $Town ;
    var $SqlConnection ;
    var $QueryStr ;
    var $Result ;

    function __construct() {
        $SqlConnection = @mysql_connect("127.0.0.1", "root", "");
        if (!$SqlConnection) {
            echo( "<P>Unable to connect to the " . "database server at this time.</P>" );
            exit();
        }
        $OrgName = NULL ;
        $OrgType = NULL ;
        $SecSup = NULL ;
        $SecCom = NULL ;
        $SecEdu = NULL ;
        $SecRehb = NULL ;
        $SecMed = NULL ;
        $District = NULL ;
        $Town = NULL ;
        mysql_select_db("organ_reg", $SqlConnection);
        if (! @mysql_select_db("organ_reg") ) {
            echo( "<P>Unable to locate the Organizational Registry Database at this time.</P>" );
            exit();
        }


    }

    function Generate_Query($N, $OT, $SecS, $SecC, $SecEd, $SecReh, $SecM, $D, $T) {
        $OrgName = $N ;
        $OrgType = $OT ;
        $SecSup = $SecS ;
        $SecCom = $SecC ;
        $SecEdu = $SecEd ;
        $SecRehb = $SecReh ;
        $SecMed = $SecM ;
        $District = $D ;
        $Town = $T ;
        $check = false ;
        $QueryStr = "select * from organization where " ;


        if ($SecSup) {
            $QueryStr .= "( sec_supplier=true " ;
            $check = true ;
        }

        if ($SecCom) {
            if (!$check) {
                $QueryStr .= "(sec_communication=true" ;
                $check = true ;
            }
            else {
                $QueryStr .= " or sec_communication=true" ;

            }
        }

        if ($SecEdu) {
            if (!$check) {
                $QueryStr .= "(sec_education=true" ;
                $check = true ;
            }
            else {
                $QueryStr .= " or sec_education=true" ;

            }
        }

        if ($SecMed) {
            if (!$check) {
                $QueryStr .="(sec_medical=true" ;
                $check = true ;
            }
            else {
                $QueryStr .=" or sec_medical=true" ;

            }
        }

        if ($SecRehb) {
            if (!$check) {
                $QueryStr .="(sec_rehabilitation=true" ;
                $check = true ;
            }
            else {
                $QueryStr .=" or sec_rehabilitation=true" ;

            }
        }
        if ($check) {
            $QueryStr .= " )" ;
        }
        if ($OrgName) {
            if (!$check) {
                $QueryStr .="name='$OrgName'" ;
                $check = true ;
            }
            else {
                $QueryStr .=" or name='$OrgName'" ;
            }

        }
        if ($OrgType) {
            if (!$check) {
                $QueryStr .="type='$OrgType'" ;
                $check = true ;
            }
            else {
                $QueryStr .=" or type='$OrgType'" ;

            }
        }

        if ($District) {
            if (!$check) {
                $QueryStr .="district='$District'" ;
                $check = true ;
            }
            else {
                $QueryStr .=" or district='$District'" ;

            }
        }

        if ($Town) {
            if (!$check) {
                $QueryStr .="town='$Town'" ;
                $check = true ;
            }
            else {
                $QueryStr .=" or town='$Town'" ;

            }
        }
        //echo ($QueryStr) ;

        $Result = mysql_query($QueryStr);
        if (!$Result) {
            echo("<P>Error performing query: " .
                    mysql_error() . "</P>");
            exit();
        }
        return $Result ;
    }
}
?>