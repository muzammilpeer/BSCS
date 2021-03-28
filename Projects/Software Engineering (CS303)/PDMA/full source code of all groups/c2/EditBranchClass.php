<?php
class EditOrg {
	var $OrgURL ;
	var $OrgType ;
	var $SecSup ;
	var $SecCom ;
	var $SecEdu ;
	var $SecRehb ;
	var $SecMed ;
	var $SqlConnection ;
	var $QueryStr ;
	var $Result ;
	var $UserName ;
	
	function __construct() {
		$SqlConnection = @mysql_connect("localhost", "root", "");
		if (!$SqlConnection) {
  			echo( "<P>Unable to connect to the " . "database server at this time.</P>" );
  		exit();
			}
		$OrgURL = NULL ;
		$OrgType = NULL ;
		$SecSup = NULL ;
		$SecCom = NULL ;
		$SecEdu = NULL ;
		$SecRehb = NULL ;
		$SecMed = NULL ;
		$UserName = NULL ;
		mysql_select_db("organ_reg", $SqlConnection);
		if (! @mysql_select_db("organ_reg") ) {
 		 	echo( "<P>Unable to locate the Organizational Registry Database at this time.</P>" );
  			exit();
			}
		
		
	}
	
	function Generate_Query($U, $OT, $SecS, $SecC, $SecEd, $SecReh, $SecM, $user) {
		if ($user == NULL)
		{
			echo ("Invalid Username") ;
			return ;
		}
		$OrgURL = $U ;
		$OrgType = $OT ;
		$SecSup = $SecS ;
		$SecCom = $SecC ;
		$SecEdu = $SecEd ;
		$SecRehb = $SecReh ;
		$SecMed = $SecM ;
		$UserName = $user ;
		$check = false ;
		$QueryStr .= "update organization SET" ;
		
		
		if ($SecSup) {
				$QueryStr .= " sec_supplier=true " ;
				$check = true ;
		}
		
		if ($SecCom) {
			if (!$check) {
				$QueryStr .= " sec_communication=true" ;
				$check = true ;
			}
			else {
				$QueryStr .= ", sec_communication=true" ;
				
			}
		}
		
		if ($SecEdu) {
			if (!$check){
				$QueryStr .= " sec_education=true" ;
				$check = true ;
			}
			else {
				$QueryStr .= ", sec_education=true" ;
				
			}
		}
		
		if ($SecMed) {
			if (!$check) {
				$QueryStr .=" sec_medical=true" ;
				$check = true ;
			}
			else {
				$QueryStr .=", sec_medical=true" ;
				
			}
		}
		
		if ($SecRehb) {
			if (!$check) {
				$QueryStr .=" sec_rehabilitation=true" ;
				$check = true ;
			}
			else {
				$QueryStr .=", sec_rehabilitation=true" ;
				
			}
		}
		if ($OrgURL) {
			if (!$check) {
				$QueryStr .=" url='$OrgURL'" ;
				$check = true ;
			}
			else
			{
				$QueryStr .=", url='$OrgURL'" ;
			}
			
		}
		if ($OrgType) {
			if (!$check) {
				$QueryStr .="type='$OrgType'" ; 
				$check = true ;
			}
				else {
					$QueryStr .=", type='$OrgType'" ;
					
				}
		}
		$QueryStr .= " Where username='$UserName'" ;
		
		echo ($QueryStr) ;
		
		
		
		//if ( !mysql_query($QueryStr) ) {
  		//		echo("<P>Error performing update: " .
       	//		mysql_error() . "</P>");
       	//		exit() ;
	//		}
				
}
}

?>