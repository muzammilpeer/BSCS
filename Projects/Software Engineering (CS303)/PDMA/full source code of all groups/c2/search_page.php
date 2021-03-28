<?php include 'header.php'?>
        
    	<div align="center" class="VERDANA14" style="color:#FFFFFF; background-color:#000099; font-weight: bold;">Search Organization</div>
        <FORM ACTION="searchprocess.php" METHOD="POST">
       <fieldset><legend>Primary Details</legend>
       <table width="100%" border="0">
  <tr bgcolor="#CCCCCC">
    <td width="32%" align="right"><label>Organization Name: </label></td>
    <td><input name="OrgName" type="text" width="250%" /></td>
  </tr>
  <tr bgcolor="#CCCCCC">
  	<td height="40" align="right"><label>Organization Type: </label></td>
    <td><select name="TypeSelect">
    <option>Government</option>
    <option>Private</option>
    <option>NGO</option>
    <option>International NGO</option>
    <option>Multinational NGO</option>
    </select></td>
  </tr>
   <tr bgcolor="#CCCCCC">
  	<td height="101" align="right" valign="top"><label>Organization Sector: </label></td>
    <td valign="top">
    	<table width="100%" border="0">
    	  <tr bgcolor="#CCCCCC">
    	    <td><input name="SupplierCB" type="checkbox" value="Supplier of Goods" />
    	      Supplier of Goods</td>
    	    <td><input name="RehabilitationCB" type="checkbox" value="Rehabilitation" />
    	      Rehabilitation </td>
  	    </tr>
    	  <tr bgcolor="#CCCCCC">
    	    <td><input name="CommunicationCB" type="checkbox" value="Communication" />
    	      Communication</td>
    	    <td><input name="EducationCB" type="checkbox" value="Education" />
    	      Education</td>
  	    </tr>
    	  <tr bgcolor="#CCCCCC">
    	    <td><input name="MedicalCB" type="checkbox" value="Medical Services" />
    	      Medical Services </td>
    	    <td>&nbsp;</td>
  	    </tr>
  	  </table>    	
      </tr>
</table>
 
       </fieldset>
       
       <fieldset><legend>Base Location</legend>
       <table width="100%" border="0"> 
  <tr bgcolor="#CCCCCC">
  	<td width="32%" align="right"><label>District: </label></td>
    <td width="68%"><select name="DistrictName">
    					<option></option>
    					<option>CDG Karachi</option>
                        <option>Badin</option>
                        <option>Dadu</option>
                        <option>Ghotki</option>
                        <option>Hyderabad</option>
                        <option>Tando Allahyar</option>
                        <option>Tando M Khan</option>
                        <option>Matiari</option>
                        <option>Jamshoro</option>
                        <option>Jaccobabad</option>
                        <option>Kashmore</option>
                        <option>Thatta</option>
                        <option>Khaipur</option>
                        <option>Kamber</option>
                        <option>Mirpurkhas</option>
                        <option>Naushehroferoze</option>
                        <option>Nawab Shah</option>
                        <option>Sanghar</option>
                        <option>Shikarpur</option>
                        <option>Sukkur</option>
                        <option>Tharparkar</option>
                        <option>Umerkot</option>
    </select></td>
  </tr>
   <tr bgcolor="#CCCCCC">
  	<td align="right"><label>Town/Taluka: </label></td>
    <td><select name="TownName">
    					<option></option>
    					<option>CDGK</option>
                        <option>Baldia</option>
                        <option>Bin Qasim</option>
                        <option>Gadap</option>
                        <option>Gulberg</option>
                        <option>Gulshan</option>
                        <option>Jamshed</option>
                        <option>Keamari</option>
                        <option>Korangi</option>
                        <option>Landhi</option>
                        <option>Liaqatabad</option>
                        <option>Lyari</option>
                        <option>Malir</option>
                        <option>N. Nazimabad</option>
                        <option>New Karachi</option>
                        <option>Orangi</option>
                        <option>Saddar</option>
                        <option>Shah Faisal</option>
                        <option>SITE</option>
                        <option>Hyderabad</option>
                        <option>Hyderabad City</option>
                        <option>Qasimabad</option>
                        <option>Latifabad</option>
                        <option>Tando Ghulam Hyder</option>
                        <option>T.M. Khan</option>
                        <option>Bulri Shah Karim</option>
                        <option>Jhando Mari</option>
                        <option>Tando Allah Yar</option>
                        <option>Chamber</option>
                        <option>Matiari</option>
                        <option>Hala</option>
                        <option>Saeedabad</option>
                        <option>Badin</option>
                        <option>Matli</option>
                        <option>S.F. Rahu</option>
                        <option>Talhar</option>
                        <option>Tando Bago</option>
                        <option>Dadu</option>
                        <option>Johi</option>
                        <option>Mehar</option>
                        <option>K.N Shah</option>
                        <option>Sehwan Sharif</option>
                        <option>Thana Bula Khan</option>
                        <option>Kotri</option>
                        <option>Manjhand</option>
                        <option>Ghotki</option>
                        <option>Ubauro</option>
                        <option>Khan Ghar</option>
                        <option>Mirpur Mathelo</option>
                        <option>Jaccobabad</option>
                        <option>Ghari Khairo</option>
                        <option>Thull</option>
                        <option>Kashmore</option>
                        <option>KandhKot</option>
                        <option>Thatta</option>
                        <option>Mirpur Sakhro</option>
                        <option>GhoraBari</option>
                        <option>Mirpur Bathoro</option>
                        <option>Shah Bander</option>
                        <option>Jati</option>
                        <option>Sujawal</option>
                        <option>Khairpur</option>
                        <option>Nara</option>
                        <option>Kot Diji</option>
                        <option>Sobho Dero</option>
                        <option>Mirwah</option>
                        <option>Kingri</option>
                        <option>Faiz Ganj</option>
                        <option>Gambat</option>
                        <option>Larkana</option>
                        <option>Ratodero</option>
                        <option>Dokri</option>
                        <option>Kamber</option>
                        <option>Shadad Kot</option>
                        <option>Warah</option>
                        <option>Miro Khan</option>
                        <option>Mirpurkhas</option>
                        <option>Digri</option>
                        <option>Kot G. Muhammad</option>
                        <option>Jhuddo</option>
                        <option>Sindhri</option>
                        <option>Naushehroferoze</option>
                        <option>Bhiria</option>
                        <option>Moro</option>
                        <option>Kandiaro</option>
                        <option>Nawabshah</option>
                        <option>Sakrand</option>
                        <option>Daulatpur</option>
                        <option>Sanghar</option>
                        <option>Jam Nawaz Ali</option>
                        <option>Shahdadpur</option>
                        <option>Khipro</option>
                        <option>Sinjro</option>
                        <option>Tando Adam</option>
                        <option>Shikarpur</option>
                        <option>Lakhi</option>
                        <option>Khan Pur</option>
                        <option>Garhi Yaseen</option>
                        <option>Sukkur</option>
                        <option>Rohri</option>
                        <option>Pano Aqil</option>
                        <option>Saleh Pat</option>
                        <option>Diplo</option>
                        <option>Chachro</option>
                        <option>Mithi</option>
                        <option>Nagarparkar</option>
                        <option>Pitharo</option>
                        <option>Umerkot</option>
                        <option>Samaro</option>
                        <option>Kunri</option>
    </select></td>
  </tr>
  <tr bgcolor="#CCCCCC">
  	<td align="right" bgcolor="#CCCCCC"><label>Address: </label></td>
    <td><textarea name="Add" cols="" rows=""></textarea></td>
  </tr>
</table>
 
       </fieldset>
       <div align="center"><input name="SubmitSearch" type="Submit" value="Search" /></div>
       </FORM>
    </td>
  </tr>
</table>
 
</body>
</html>


