<?php
include 'header.php';


require ('organizationalRegistry.php');
$reg = new register();

$reg->insertPendingOrgan($_POST['userName'], $_POST['pword'], $_POST['organName'], $_POST['url'], $_POST['type'], $_POST['district'], $_POST['city'], $_POST['address'], $_POST['supplier'], $_POST['rehab'], $_POST['com'], $_POST['edu'], $_POST['medical']);
$reg->insertPendingContact($_POST['conName'], $_POST['conAddress'], $_POST['conPhone'], $_POST['conMobile'], $_POST['conFax'], $_POST['conEmail'], $_POST['userName']);        
?>

<div align="center" class="VERDANA14" style="color:#FFFFFF; background-color:#000099; font-weight: bold;">Organization Registration : STEP 3 (ADD BRANCH)</div>
<form name="regStep3" action="addBranch.php" method="POST">
    <fieldset>
        <legend>Base Location</legend>
        <table width="100%" border="0">
            <?php echo "<input type='hidden' name='username' value='$_POST[userName]' readonly='readonly' />" ?>
            <tr bgcolor="#CCCCCC">
                <td width="27%" align="right"><label>District: </label></td>
                <td width="73%"><select name="district">
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
                <td><select name="city">
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
                        <<option>Khairpur</option>
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
                <td align="right"><label>Address: </label></td>
                <td><textarea name="address" cols="" rows=""></textarea></td>
            </tr>
        </table>

    </fieldset>
    <fieldset>
        <legend>Contact Information
        </legend><table width="100%" border="0">
            <tr bgcolor="#CCCCCC">
                <td width="27%" align="right"><label>Name: </label></td>
                <td width="73%"><input name="conName" type="text" width="250%" /></td>
            </tr>
            <tr bgcolor="#CCCCCC">
                <td width="27%" align="right"><label>Address: </label></td>
                <td><input name="conAddress" type="text" width="250%" /></td>
            </tr>
            <tr bgcolor="#CCCCCC">
                <td width="27%" align="right"><label>Phone: </label></td>
                <td><input name="conPhone" type="text" width="250%" /></td>
            </tr>
            <tr bgcolor="#CCCCCC">
                <td width="27%" align="right"><label>Mobile No: </label></td>
                <td><input name="conMobile" type="text" width="250%" /></td>
            </tr>
            <tr bgcolor="#CCCCCC">
                <td width="27%" align="right"><label>Fax: </label></td>
                <td><input name="conFax" type="text" width="250%" /></td>
            </tr>
            <tr bgcolor="#CCCCCC">
                <td width="27%" align="right"><label>Email: </label></td>
                <td><input name="conEmail" type="text" width="250%" /></td>
            </tr>
        </table>

    </fieldset>
    <fieldset>
        <legend>Resources Available
        </legend>
        <table width="100%" border="0">
            <tr bgcolor="#CCCCCC">
                <td width="27%" align="right"><label>Man Power: </label></td>
                <td width="73%"><input name="manpower" type="text" width="250%" /></td>
            </tr>
            <tr bgcolor="#CCCCCC">
                <td width="27%" align="right"><label>Equipments: </label></td>
                <td><input name="equip" type="text" width="250%" /></td>
            </tr>
        </table>

    </fieldset>
    <div align="center">
        <input type="submit" value="Finish" name="finish" />
        <input type="submit" value="Add Another" name="add" />
    </div>

    <div align="center"></div>
</form>
<?php include 'footer.php' ?>
