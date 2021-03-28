<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>PDMA</title>
<link href="css.css" rel="stylesheet" type="text/css" />
<script type="text/JavaScript">
<!--
function MM_swapImgRestore() { //v3.0
  var i,x,a=document.MM_sr; for(i=0;a&&i<a.length&&(x=a[i])&&x.oSrc;i++) x.src=x.oSrc;
}

function MM_preloadImages() { //v3.0
  var d=document; if(d.images){ if(!d.MM_p) d.MM_p=new Array();
    var i,j=d.MM_p.length,a=MM_preloadImages.arguments; for(i=0; i<a.length; i++)
    if (a[i].indexOf("#")!=0){ d.MM_p[j]=new Image; d.MM_p[j++].src=a[i];}}
}

function MM_findObj(n, d) { //v4.01
  var p,i,x;  if(!d) d=document; if((p=n.indexOf("?"))>0&&parent.frames.length) {
    d=parent.frames[n.substring(p+1)].document; n=n.substring(0,p);}
  if(!(x=d[n])&&d.all) x=d.all[n]; for (i=0;!x&&i<d.forms.length;i++) x=d.forms[i][n];
  for(i=0;!x&&d.layers&&i<d.layers.length;i++) x=MM_findObj(n,d.layers[i].document);
  if(!x && d.getElementById) x=d.getElementById(n); return x;
}

function MM_swapImage() { //v3.0
  var i,j=0,x,a=MM_swapImage.arguments; document.MM_sr=new Array; for(i=0;i<(a.length-2);i+=3)
   if ((x=MM_findObj(a[i]))!=null){document.MM_sr[j++]=x; if(!x.oSrc) x.oSrc=x.src; x.src=a[i+2];}
}
//-->
</script>
</head>

<body onload="MM_preloadImages('images/sidemenu_list_camps_on.jpg','images/sidemenu_sear_camps_on.jpg','images/sidemenu_admin_on.jpg','images/sidemenu_view_rep_on.jpg','images/sidemenu_req_res_on.jpg')">
<table width="780" border="0" align="center" cellpadding="0" cellspacing="0" class="MainBorder">
  <tr>
    <td height="590" valign="top"><table width="780" border="0" cellspacing="0" cellpadding="0">
      <tr>
        <th height="19" valign="top" scope="col"><div align="left">
		<?php

include 'conn.php';
include 'header.php';

?></div></th>
      </tr>
      <tr>
        <td height="132" valign="top"><table width="780" border="0" cellspacing="0" cellpadding="0">
          <tr>
            <th width="780" background="images/grey_seperator_line.jpg" scope="col"><div align="left"><img src="images/grey_seperator_line.jpg" width="780" height="8" /></div></th>
          </tr>
          <tr>
            <td width="780" height="28" background="images/blue_seperator_line.jpg"> <MARQUEE BEHAVIOR=SCROLL DIRECTION=LEFT WIDTH=100% class="FooterLinks">
                  Towards a Safer Sindh !!
            </MARQUEE></td>
          </tr>
          <tr>
            <td height="90" valign="top"><div align="left">
              <table width="780" border="0" cellspacing="0" cellpadding="0">
                <tr>
                  <th width="235" valign="top" scope="col"><div align="left">
                    <table width="235" border="0" cellspacing="0" cellpadding="0">
                      <tr>
                        <th scope="col"><div align="left"><img src="images/sidemenu_01.jpg" width="235" height="27" /></div></th>
                      </tr>
                      <tr>
                        <th scope="col"><div align="left"><a href="add_evacuation.php" onmouseout="MM_swapImgRestore()" onmouseover="MM_swapImage('add evacuation','','images/sidemenu_add_eva_on.jpg',0)"></a><a href="add_evacuation.php"></a><img src="images/sidemenu_add_eva_on.jpg" width="235" height="29" /></div></th>
                      </tr>
                      <tr>
                        <th scope="col"><div align="left"><a href="#" onmouseout="MM_swapImgRestore()" onmouseover="MM_swapImage('list camps','','images/sidemenu_list_camps_on.jpg',1)"></a><a href="list_camps.php" onmouseout="MM_swapImgRestore()" onmouseover="MM_swapImage('list camps','','images/sidemenu_list_camps_on.jpg',1)"><img src="images/sidemenu_list_camps_off.jpg" name="list camps" width="235" height="29" border="0" id="list camps" /></a></div></th>
                      </tr>
                      <tr>
                        <th scope="col"><div align="left"><a href="#" onmouseout="MM_swapImgRestore()" onmouseover="MM_swapImage('search camp','','images/sidemenu_sear_camps_on.jpg',1)"></a><a href="search_camps.php" onmouseout="MM_swapImgRestore()" onmouseover="MM_swapImage('search camps','','images/sidemenu_sear_camps_on.jpg',1)"><img src="images/sidemenu_sear_camps_off.jpg" name="search camps" width="235" height="29" border="0" id="search camps" /></a></div></th>
                      </tr>
                      <tr>
                        <th scope="col"><div align="left"><a href="#" onmouseout="MM_swapImgRestore()" onmouseover="MM_swapImage('admin details','','images/sidemenu_admin_on.jpg',1)"></a><a href="admin_details.php" onmouseout="MM_swapImgRestore()" onmouseover="MM_swapImage('admin details','','images/sidemenu_admin_on.jpg',1)"><img src="images/sidemenu_admin_off.jpg" name="admin details" width="235" height="29" border="0" id="admin details" /></a></div></th>
                      </tr>
                      <tr>
                        <th scope="col"><div align="left"><a href="#" onmouseout="MM_swapImgRestore()" onmouseover="MM_swapImage('view reports','','images/sidemenu_view_rep_on.jpg',1)"></a><a href="view_reports.php" onmouseout="MM_swapImgRestore()" onmouseover="MM_swapImage('view reports','','images/sidemenu_view_rep_on.jpg',0)"><img src="images/sidemenu_view_rep_off.jpg" name="view reports" width="235" height="29" border="0" id="view reports" /></a></div></th>
                      </tr>
                      <tr>
                        <th scope="col"><div align="left"><a href="#" onmouseout="MM_swapImgRestore()" onmouseover="MM_swapImage('request for resources','','images/sidemenu_req_res_on.jpg',1)"></a><a href="request_resources.php" onmouseout="MM_swapImgRestore()" onmouseover="MM_swapImage('request resources','','images/sidemenu_req_res_on.jpg',1)"><img src="images/sidemenu_req_res_off.jpg" name="request resources" width="235" height="38" border="0" id="request resources" /></a></div></th>
                      </tr>
                    </table>
                  </div></th>
                  <th width="545" valign="top" scope="col"><div align="left">
                    <table width="545" height="190" border="0" cellpadding="0" cellspacing="0">
                      <tr>
                        <th width="17" height="47" scope="col">&nbsp;</th>
                        <th width="528" valign="middle" scope="col"><div align="left" class="WelcomeHeading">
                            <div align="center">ADD EVACUATION POINT / CAMP </div>
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

$sql="select camp_id from main_table where camp_name='$eva_name' AND 
camp_type='$cam_type' AND camp_address='$address' AND person_name='$full_name' AND person_organization='$org_belong'";

/*$sql="UPDATE `pdma`.`main_table` SET `person_nic` =  '42301' WHERE `main_table`.`camp_id` =1*/

$stmt= mysql_query($sql);

echo"<table width=150 border=0 cellpadding=0 cellspacing=0 class=TableTextnBorder>";
				echo"<tr bgcolor=#90b8c8 class=FooterLinks align=center>
			<td>Camp ID</td>
			</tr>";
			
			
while ($res=mysql_fetch_array($stmt))
{
echo "<tr>";
echo "<td class=TableTextnBorder>$res[0]</td>";
echo "</tr>";
}
echo"</table>";

//echo"camp_id";

?>
                        <td valign="top"><form id="form2" name="form2" method="post" action="index.php">
                            <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
                              <tr>
                                <th scope="col"><div align="left" class="WelcomeText">
                                  <table width="425" border="0" align="center" cellpadding="0" cellspacing="0">
                                    <tr>
                                      <th scope="col"><div align="right">To Edit this record <span class="WelcomeText">
<?php echo "<a href=edit_add_evacuation.php?eva_name=$eva_name&cam_type=$cam_type&address=$address&province=$province&city=$city&full_name=$full_name&org_belong=$org_belong&contact_no=$contact_no&nic_no=$nic_no&capacity=$capacity&men=$men&women=$women&children=$children&fac_admin=$fac_admin&fac_san=$fac_san&fac_water=$fac_water&fac_med=$fac_med>CLICK HERE<a>"; ?></a></span>  </div></th>
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
                                        <td><span class="WelcomeText"><?php echo"$cam_type"; ?></span></td>
                                      </tr>
                                      <tr>
                                        <td class="Text"><div align="right">Address:</div></td>
                                        <td>&nbsp;</td>
                                        <td><span class="WelcomeText"><?php echo"$address"; ?></span></td>
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
                                        <td width="283"><span class="WelcomeText"><?php echo"$province"; ?></span></td>
                                      </tr>
                                      <tr>
                                        <td class="Text"><div align="right">City:</div></td>
                                        <td>&nbsp;</td>
                                        <td><span class="WelcomeText"><?php echo"$city"; ?></span></td>
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
                                      <td><span class="WelcomeText"><?php echo"$fac_san"; ?></span></td>
                                    </tr>
                                    <tr>
                                      <td class="Text"><div align="right">Water Facilities: </div></td>
                                      <td>&nbsp;</td>
                                      <td><span class="WelcomeText"><?php echo"$fac_water"; ?></span></td>
                                    </tr>
                                    <tr>
                                      <td class="Text"><div align="right">Medical Facilities: </div></td>
                                      <td>&nbsp;</td>
                                      <td><span class="WelcomeText"><?php echo"$fac_med"; ?></span></td>
                                    </tr>
                                  </table>
                                <br /></th>
                            </tr>
                          </table>
                          <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
                              <tr>
                                <th scope="col"> 
                                  
                                  <div align="center">
                                    <input name="Submit22" type="submit" class="Login" value="Finish"  action='index.php' />
                                  </div></th>
                                </tr>
                            </table>
                        </form></td>
                      </tr>
                    </table>
                  </div></th>
                </tr>
              </table>
            </div></td>
          </tr>
        </table></td>
      </tr>
      <tr>
        <td height="37" valign="top"><br />
          <br />
          <table width="780" border="0" cellspacing="0" cellpadding="0">
            <tr>
              <th height="28" valign="middle" background="images/blue_seperator_line.jpg" scope="col"><table width="200" border="0" align="center" cellpadding="0" cellspacing="0">
                <tr>
                  <th width="68" scope="col"><a href="index.php" class="FooterLinks">HOME</a></th>
                  <th width="36" valign="bottom" class="FooterLinks" scope="col"><div align="center">I</div></th>
                  <th width="96" valign="bottom" class="FooterLinks" scope="col"><div align="center">CONTACT US </div></th>
                </tr>
              </table></th>
            </tr>
            <tr>
              <td><div align="center" class="CopyrightText">
                <p>2010 &copy; Copyright PDMA<br />
                </p>
                </div></td>
            </tr>
          </table>
          <br /></td>
      </tr>
    </table></td>
  </tr>
</table>

</body>
</html>
