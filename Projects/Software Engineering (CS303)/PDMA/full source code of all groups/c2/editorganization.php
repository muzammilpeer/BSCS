<?php //include ('header.php' ) ; ?>
 <?php 
 session_start();
 $User = $_SESSION['user'];
    
    $SqlConnection = @mysql_connect("localhost", "root", "");
		if (!$SqlConnection) {
  			echo( "<P>Unable to connect to the " . "database server at this time.</P>" );
  		exit();
			}
			mysql_select_db("organ_reg", $SqlConnection);
		if (! @mysql_select_db("organ_reg") ) {
 		 	echo( "<P>Unable to locate the Organizational Registry Database at this time.</P>" );
  			exit();
			}
			$Query = "select name, url, type, sec_rehabilitation, sec_education, sec_medical, sec_supplier, sec_communication from organization where username='".$User."'" ;
			$Result = mysql_query($Query) ;
			$Row = mysql_fetch_array($Result) ; 
			//echo $User ;  
			

   echo "<td valign='top'>
    	<div align='center' class='VERDANA14' style='color:#FFFFFF; background-color:#000099; font-weight: bold;'>Edit Organization Details</div>
       <form action='editorgprocess.php' method='POST'><fieldset>
         <legend>Edit Organization Primary Details </legend>
       <table width='100%' border='0'>
  <tr bgcolor='#CCCCCC'>
    <td width='32%' align='right'><label>Organization Name: </label></td>
    <td><label>".$Row['name']. 
   "</label></td>
  </tr>
  <tr bgcolor='#CCCCCC'>
    <td width='32%' align='right'><label>URL: </label></td>
    <td><input name='OrgURL' type='text' width='250%' value=".$Row['url']."></td>
  </tr>
  <tr bgcolor='#CCCCCC'>
  	<td height='40' align='right'><label>Organization Type: </label></td>
    <td><table width='100%' border='0'>
      <tr bgcolor='#CCCCCC'>
        <td></td>
        </tr>
      <tr bgcolor='#CCCCCC'>
        <td><label>
          <select name='OrgTypeSelect' id='OrgTypeSelect'>";
   			$DefaultCheck = true ;
   			
          	if ($Row['type']=="Government") { echo "<option SELECTED>Government</option>" ; $DefaultCheck = false ; }
          	else { echo "<option>Government</option>"  ; } 
          	if ($Row['type']=="Private" and $DefaultCheck ) { echo "<option SELECTED>Private</option>" ;  $DefaultCheck = false ;}
          	else { echo "<option>Private</option>"  ; } 
          	if ($Row['type']=="NGO" and $DefaultCheck ) { echo "<option SELECTED>NGO</option>" ; $DefaultCheck = false ;}
          	else { echo "<option>NGO</option>"  ; } 
          	if ($Row['type']=="International" and $DefaultCheck ) { echo "<option SELECTED>International NGO</option>" ; $DefaultCheck = false ;}
          	else { echo "<option>International NGO</option>"  ; } 
          	if ($Row['type']=="Multinational NGO" and $DefaultCheck ) { echo "<option SELECTED>Multinational NGO</option>"  ;$DefaultCheck = false ;}
          	else { echo "<option>MultiNational NGO</option>"  ; } 
          	
            echo "</select>
        </label></td>
        </tr>
      <tr bgcolor='#CCCCCC'>
        <td>&nbsp;</td>
        </tr>
    </table></td>
  </tr>  
   <tr bgcolor='#CCCCCC'>
  	<td height='101'' align='right' valign='top'><label>Organization Sector: </label></td>
    <td valign='top'>
    	<table width='100%' border='0'>
    	  <tr bgcolor='#CCCCCC'>
    	    <td width='51%'><input name='SupplierCB' type='checkbox'" ;
            if ($Row['sec_supplier']) { echo "checked" ;} echo "/>
    	      Supplier of Goods</td>
    	    <td width='49%'><input name='RehabilitationCB' type='checkbox' ";
            if ($Row['sec_rehabilitation']) { echo "checked" ;}  echo "/>
    	      Rehabilitation </td>
  	    </tr>
    	  <tr bgcolor='#CCCCCC'>
    	    <td><input name='CommunicationCB' type='checkbox' ";
            if ($Row['sec_communication']) { echo "checked" ;}  echo "/>
    	      Communication</td>
    	    <td><input name='EducationCB' type='checkbox' ";
            if ($Row['sec_education']) { echo "checked" ;}  echo "/>
    	      Education</td>
  	    </tr>
    	  <tr bgcolor='#CCCCCC'>
    	    <td><input name='MedicalCB' type='checkbox' ";
            if ($Row['sec_medical']) { echo "checked" ;} echo "/>
    	      Medical Services </td>
    	    <td>&nbsp;</td>
  	    </tr>
  	  </table>    	
      </tr>
</table>" ; ?>

       </fieldset>
       
       
       <div align="center"><input name="EditSaveButton" type="Submit" value="Save Changes" /></div>
       </form>
    </td>
    </tr>
</table>

</body>
</html> ?>
