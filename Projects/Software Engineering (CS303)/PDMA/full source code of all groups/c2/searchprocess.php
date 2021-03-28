<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Frameset//EN">
<?php include 'SearchClass.php'?>
<?php include 'header.php' ?>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=encoding">
<title>Insert title here</title>
</head>

    <body>
 
    <td valign="top">
    	<div align="center" class="VERDANA14" style="color:#FFFFFF; background-color:#000099; font-weight: bold;">Search Result</div>
    	<table width="807" border="1">
    	  <tr>
    	    <td width="109" height="25">Name</td>
    	    <td width="99">URL</td>
    	    <td width="71">Type</td>
    	    <td width="111">Sector</td>
    	    <td width="88">District</td>
    	    <td width="97">Town/Taluka</td>
    	    <td width="186">Address</td>
  	    </tr>
        
  	  
    <?php
		$Srch = new Search() ;
		//if ($_POST['SupplierCB']) {
		//	echo ("    --GOT IT YYYY") ;
		//}
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

		$Result = $Srch->Generate_Query($_POST['OrgName'],$_POST['TypeSelect'],$supp,$comm,$edu,$rehab,$med,$_POST['DistrictName'],$_POST['TownName']);
		while ( $Row = mysql_fetch_array($Result) ) {
  			echo "<tr>" ;
  			echo("<td width='109' height='81'>" . $Row["name"]. "</td>");
  			echo("<td width='99'>". $Row["url"]. "</td>");
  			echo("<td width='71'>" . $Row["type"] . "</td>")  ;
  			$SecStr ;
  			if ($Row["sec_rehabilitation"]) {
  				$SecStr .= "Rehabilitation, " ;
  			}
			if ($Row["sec_medical"]) {
  				$SecStr .= "Medical Services, " ;
  			}
			if ($Row["sec_communication"]) {
  				$SecStr .= "Communication, " ;
  			}
			if ($Row["sec_education"]) {
  				$SecStr .= "Education, " ;
  			}
			if ($Row["sec_supplier"]) {
  				$SecStr .= "Supplier of Goods, " ;
  			}
  			echo("<td width='111'>" . $SecStr . "</td>" ) ;
  			echo("<td width='88'>" . $Row["district"] . "</td>");
  			echo("<td width='97'>" . $Row["city"] . "</td>");
  			echo("<td width='186'>" . $Row["address"] . "</td>");
  			echo "</tr>" ;
  		
		}	
	?>
		</table></td>
    	</tr>
	</table>
    </body>
</html>