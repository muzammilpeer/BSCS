<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>PDMA</title>
<link href="css.css" rel="stylesheet" type="text/css" />
</head>

<body>
<table width="545" height="190" border="0" align="center" cellpadding="0" cellspacing="0">
  <tr>
    <th width="17" height="47" scope="col">&nbsp;</th>
    <th width="528" valign="middle" scope="col"><div align="left" class="WelcomeHeading">
      <div align="left">UPDATE EVACUATION POINT / CAMP </div>
    </div></th>
  </tr>
  <tr>
    <td>&nbsp;</td>
    <?php
include 'conn.php';

$eva_name=$_POST['eva_name'];
$cam_type=$_POST['cam_type'];
$address=$_POST['address'];
$province=$_POST['province'];
$city=$_POST['city'];
$full_name=$_POST['full_name'];
$org_belong=$_POST['org_belong'];
$contact_no=$_POST['contact_no'];
$nic_no=$_POST['nic_no'];
$capacity=$_POST['capacity'];
$men=$_POST['men'];
$women=$_POST['women'];
$children=$_POST['children'];
$fac_admin=$_POST['fac_admin'];
$fac_san=$_POST['fac_san'];
$fac_water=$_POST['fac_water'];
$fac_med=$_POST['fac_med'];


$result = mysql_query("SELECT name FROM province where id='$province'");


while($row = mysql_fetch_array($result))
{
$arr = $row['name'];
}
$province=$arr;

/*$sql="select camp_id from main_table where camp_name='$eva_name'";
$stmt=mysql_query($sql);

while ($res=mysql_fetch_array($stmt))
{

echo "$res[0]";

}*/

/*while ($res=mysql_fetch_array($stmt))
{
echo "<table><tr>Class ID matched is: $res[0] </tr></table>";
}*/

$sql1="UPDATE `pdma`.`main_table` SET `camp_name` =  '$eva_name', `camp_type` =  '$cam_type', `camp_address` =  '$address', `camp_province` =  '$province', `camp_city` =  '$city', `person_name` =  '$full_name', `person_organization` =  '$org_belong', `person_contact` =  '$contact_no', `person_nic` =  '$nic_no', `capacity` =  '$capacity', `men` =  '$men', `women` =  '$women', `children` =  '$children', `fac_medical` =  '$fac_med', `fac_sanitation` =  '$fac_san', `fac_water` =  '$fac_water', `fac_administrative` =  '$fac_admin' WHERE `main_table`.`camp_id` =$res[0]";
mysql_query($sql1);
?>
    <td valign="top"><table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
      <tr>
        <th scope="col"><div align="left" class="WelcomeText">
          <table width="425" border="0" align="center" cellpadding="0" cellspacing="0">
            <tr>
              <th scope="col"><div align="right">To Edit this record <?php echo "<a href=edit_add_evacuation.php?eva_name=$eva_name&cam_type=$cam_type&address=$address&province=$province&city=$city&full_name=$full_name&org_belong=$org_belong&contact_no=$contact_no&nic_no=$nic_no&capacity=$capacity&men=$men&women=$women&children=$children&fac_admin=$fac_admin&fac_san=$fac_san&fac_water=$fac_water&fac_med=$fac_med>CLICK HERE<a>"; ?></a> </div></th>
            </tr>
            <tr>
              <th scope="col" class="WelcomeHeading">&nbsp;</th>
            </tr>
          </table>
          <br />
          <span class="InsidePageHeading">General Details</span><br />
          <br />
        </div>
              <table width="448" border="0" cellspacing="4" cellpadding="0">
                <tr>
                  <th width="157" class="Text" scope="col"><div align="right">Evacuation Point Name:</div></th>
                  <th width="10" scope="col">&nbsp;</th>
                  <th width="283" scope="col"><div align="left" class="WelcomeText"><?php echo"$eva_name"; ?></div></th>
                </tr>
                <tr>
                  <td class="Text"><div align="right">Camp Type:</div></td>
                  <td>&nbsp;</td>
                  <td><div align="left"><span class="WelcomeText"><?php echo"$cam_type"; ?></span></div></td>
                </tr>
                <tr>
                  <td class="Text"><div align="right">Address:</div></td>
                  <td>&nbsp;</td>
                  <td><div align="left"><span class="WelcomeText"><?php echo"$address"; ?></span></div></td>
                </tr>
              </table>
          <br /></th>
      </tr>
    </table>
        <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
          <tr>
            <th scope="col"><div align="left" class="WelcomeText"><br />
                    <span class="InsidePageHeading">Location Details</span><br />
                    <br />
              </div>
                <table width="448" border="0" cellspacing="4" cellpadding="0">
                  <tr>
                    <td width="157" class="Text"><div align="right">Province:</div></td>
                    <td width="10">&nbsp;</td>
                    <td width="283"><div align="left"><span class="WelcomeText"><?php echo"$province"; ?></span></div></td>
                  </tr>
                  <tr>
                    <td class="Text"><div align="right">City:</div></td>
                    <td>&nbsp;</td>
                    <td><div align="left"><span class="WelcomeText"><?php echo"$city"; ?></span></div></td>
                  </tr>
                </table>
              <br /></th>
          </tr>
        </table>
      <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
          <tr>
            <th scope="col"><div align="left" class="WelcomeText"><br />
                    <span class="InsidePageHeading">Contact Person  Details</span><br />
                    <br />
              </div>
                <table width="448" border="0" cellspacing="4" cellpadding="0">
                  <tr>
                    <th width="157" class="Text" scope="col"><div align="right">Full Name:</div></th>
                    <th width="10" scope="col">&nbsp;</th>
                    <th width="283" scope="col"><div align="left"><span class="WelcomeText"><?php echo"$full_name"; ?></span></div></th>
                  </tr>
                  <tr>
                    <th class="Text" scope="col"><div align="right">Organization Belonged: </div></th>
                    <th scope="col">&nbsp;</th>
                    <th scope="col"><div align="left"><span class="WelcomeText"><?php echo"$org_belong"; ?></span></div></th>
                  </tr>
                  <tr>
                    <th class="Text" scope="col"><div align="right">Contact No:. </div></th>
                    <th scope="col">&nbsp;</th>
                    <th scope="col"><div align="left"><span class="WelcomeText"><?php echo"$contact_no"; ?></span></div></th>
                  </tr>
                  <tr>
                    <th class="Text" scope="col"><div align="right">NIC No:. </div></th>
                    <th scope="col">&nbsp;</th>
                    <th scope="col"><div align="left"><span class="WelcomeText"><?php echo"$nic_no"; ?></span></div></th>
                  </tr>
                </table>
              <br /></th>
          </tr>
        </table>
      <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
          <tr>
            <th scope="col"><div align="left" class="WelcomeText"><br />
                    <span class="InsidePageHeading">Camp Population </span><br />
                    <br />
              </div>
                <table width="448" border="0" cellspacing="4" cellpadding="0">
                  <tr>
                    <th width="157" class="Text" scope="col"><div align="right">Capacity:</div></th>
                    <th width="10" scope="col">&nbsp;</th>
                    <th width="283" scope="col"><div align="left"><span class="WelcomeText"><?php echo"$capacity"; ?></span></div></th>
                  </tr>
                  <tr>
                    <th class="Text" scope="col"><div align="right">Men: </div></th>
                    <th scope="col">&nbsp;</th>
                    <th scope="col"><div align="left"><span class="WelcomeText"><?php echo"$men"; ?></span></div></th>
                  </tr>
                  <tr>
                    <th class="Text" scope="col"><div align="right">Women: </div></th>
                    <th scope="col">&nbsp;</th>
                    <th scope="col"><div align="left"><span class="WelcomeText"><?php echo"$women"; ?></span></div></th>
                  </tr>
                  <tr>
                    <th class="Text" scope="col"><div align="right">Children: </div></th>
                    <th scope="col">&nbsp;</th>
                    <th scope="col"><div align="left"><span class="WelcomeText"><?php echo"$children"; ?></span></div></th>
                  </tr>
                </table>
              <br /></th>
          </tr>
        </table>
      <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
          <tr>
            <th scope="col"><div align="left" class="WelcomeText"><br />
                    <span class="InsidePageHeading">Services / Facilities Available </span><br />
                    <br />
              </div>
                <table width="448" border="0" cellspacing="4" cellpadding="0">
                  <tr>
                    <th width="157" class="Text" scope="col"><div align="right">Administrative Facilities: </div></th>
                    <th width="10" scope="col">&nbsp;</th>
                    <th width="283" scope="col"><div align="left"><span class="WelcomeText"><?php echo"$fac_admin"; ?></span></div></th>
                  </tr>
                  <tr>
                    <td class="Text"><div align="right">Sanitation Facilities: </div></td>
                    <td>&nbsp;</td>
                    <td><div align="left"><span class="WelcomeText"><?php echo"$fac_san"; ?></span></div></td>
                  </tr>
                  <tr>
                    <td class="Text"><div align="right">Water Facilities: </div></td>
                    <td>&nbsp;</td>
                    <td><div align="left"><span class="WelcomeText"><?php echo"$fac_water"; ?></span></div></td>
                  </tr>
                  <tr>
                    <td class="Text"><div align="right">Medical Facilities: </div></td>
                    <td>&nbsp;</td>
                    <td><div align="left"><span class="WelcomeText"><?php echo"$fac_med"; ?></span></div></td>
                  </tr>
                </table>

				
              <br /></th>
          </tr>
        </table>
      <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
          <tr>
            <th scope="col"> <div align="center">
                <input name="Submit22" type="submit" class="Login" value="Finish"  action='index.php' />
            </div></th>
          </tr>
      </table></td>
  </tr>
</table>
</body>
</html>
