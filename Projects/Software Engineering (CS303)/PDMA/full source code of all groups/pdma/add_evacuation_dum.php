<?php
include 'conn.php';
session_start();
?>

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
        <th height="53" valign="top" scope="col"><div align="left">
          <table width="780" border="0" cellspacing="0" cellpadding="0">
            <tr>
              <th height="62" valign="top" background="images/header.jpg" scope="col"><div align="left">
                <table width="780" height="53" border="0" cellpadding="0" cellspacing="0">
                  <tr>
                    <th width="125" scope="col"><br /></th>
                    <th width="377" valign="bottom" scope="col"><div align="left" class="Heading">PROVINCIAL DISASTER<br />
                    MANAGEMENT ASSOCIATION </div></th>
                    <th width="278" scope="col"><table width="275" border="0" cellpadding="0" cellspacing="0" class="FooterLinks">
                      <tr>
                        <th width="126" height="47" align="right" valign="bottom" scope="col">                          <a href="index.php" class="FooterLinks">HOME</a></th>
                        <th width="28" valign="bottom" scope="col"><div align="center">I</div></th>
                        <th width="121" valign="bottom" scope="col"><div align="left">CONTACT US </div></th>
                      </tr>
                    </table></th>
                  </tr>
                </table>
              </div></th>
            </tr>
            <tr>
              <td><table width="780" border="0" cellspacing="0" cellpadding="0">
                <tr>
                  <th width="295" height="185" valign="top" background="images/header_down.jpg" scope="col"><div align="left">
                    <table width="295" border="0" cellspacing="0" cellpadding="0">
                      <tr>
                        <th height="47" valign="bottom" scope="col"><table width="295" border="0" cellspacing="0" cellpadding="0">
                          <tr>
                            <th width="141" scope="col">&nbsp;</th>
                            <th width="154" scope="col"><div align="left" class="WelcomeHeading">Welcome to Our Site! </div></th>
                          </tr>
                        </table></th>
                      </tr>
                      <tr>
                        <td><br />
                          <table width="295" height="90" border="0" cellpadding="0" cellspacing="0">
                          <tr>
                            <th width="23" scope="col">&nbsp;</th>
                            <th width="252" valign="top" scope="col"><div align="justify"><span class="WelcomeText"><br />
                              It is a collection of web based disaster <br />
                              management applications that provides solutions 
                              to large-scale humanitarian coordination and 
                              collaboration in disaster situation and its 
                              aftermath.</span><br />  
                            </div>
                              <div align="left" class="WelcomeText"></div></th>
                            <th width="20" valign="top" scope="col">&nbsp;</th>
                          </tr>
                        </table>                          </td>
                      </tr>
                    </table>
                  </div></th>
                  <th width="206" valign="top" scope="col"><div align="left">
                    <table width="206" border="0" cellspacing="0" cellpadding="0">
                      <tr>
                        <th width="206" height="24" background="images/menu_top.jpg" scope="col"><div align="left">
                          <table width="198" border="0" align="center" cellpadding="0" cellspacing="0" class="MainMenu">
                            <tr>
                              <th scope="col"><div align="left">MISSING PERSON REGISTRY </div></th>
                            </tr>
                          </table>
                        </div></th>
                      </tr>
                      <tr>
                        <td height="23" background="images/menu_top_down.jpg"><div align="left">
                          <div align="left">
                            <table width="198" border="0" align="center" cellpadding="0" cellspacing="0" class="MainMenu">
                              <tr>
                                <th scope="col"><div align="left">ORGANIZATION REGISTRY </div></th>
                              </tr>
                            </table>
                          </div>
                        </div></td>
                      </tr>
                      <tr>
                        <td height="23" background="images/menu_top_down.jpg"><div align="left">
                          <div align="left">
                            <div align="left">
                              <table width="198" border="0" align="center" cellpadding="0" cellspacing="0" class="MainMenu">
                                <tr>
                                  <th scope="col"><div align="left">EVACUATION POINT REGISTRY </div></th>
                                </tr>
                              </table>
                            </div>
                          </div>
                        </div></td>
                      </tr>
                      <tr>
                        <td height="23" background="images/menu_top_down.jpg"><div align="left">
                          <div align="left">
                            <div align="left">
                              <table width="198" border="0" align="center" cellpadding="0" cellspacing="0" class="MainMenu">
                                <tr>
                                  <th scope="col"><div align="left">VOLUNTEER MANAGEMENT </div></th>
                                </tr>
                              </table>
                            </div>
                          </div>
                        </div></td>
                      </tr>
                      <tr>
                        <td height="23" background="images/menu_top_down.jpg"><div align="left">
                          <div align="left">
                            <div align="left">
                              <table width="198" border="0" align="center" cellpadding="0" cellspacing="0" class="MainMenu">
                                <tr>
                                  <th scope="col"><div align="left">INVENTORY MANAGEMENT </div></th>
                                </tr>
                              </table>
                            </div>
                          </div>
                        </div></td>
                      </tr>
                      <tr>
                        <td height="23" background="images/menu_top_down.jpg"><div align="left">
                          <div align="left">
                            <div align="left">
                              <table width="198" border="0" align="center" cellpadding="0" cellspacing="0" class="MainMenu">
                                <tr>
                                  <th scope="col"><div align="left">SITUATION AWARENESS </div></th>
                                </tr>
                              </table>
                            </div>
                          </div>
                        </div></td>
                      </tr>
                      <tr>
                        <td height="23" background="images/menu_top_down.jpg"><div align="left">
                          <div align="left">
                            <div align="left">
                              <table width="198" border="0" align="center" cellpadding="0" cellspacing="0" class="MainMenu">
                                <tr>
                                  <th scope="col"><div align="left">MONITORING SYSTEM </div></th>
                                </tr>
                              </table>
                            </div>
                          </div>
                        </div></td>
                      </tr>
                      <tr>
                        <td height="22" background="images/menu_top_down.jpg"><div align="left">
                          <div align="left">
                            <div align="left">
                              <table width="198" border="0" align="center" cellpadding="0" cellspacing="0" class="MainMenu">
                                <tr>
                                  <th scope="col"><div align="left">TRAINING</div></th>
                                </tr>
                              </table>
                            </div>
                          </div>
                        </div></td>
                      </tr>
                    </table>
                  </div></th>
                  <th width="282" valign="top" background="images/login_bg.jpg" scope="col"><div align="left">
                    <table width="280" height="176" border="0" cellpadding="0" cellspacing="0">
                      <tr>
                        <th width="34" height="27" scope="col">&nbsp;</th>
                        <th width="245" scope="col"><div align="left" class="WelcomeHeading">SIGN IN</div></th>
                      </tr>
                      <tr>
                        <td>&nbsp;</td>
                        <td><form id="form1" name="form1" method="post" action="">
                          <table width="220" border="0" cellspacing="0" cellpadding="0">
                            <tr>
                              <th width="104" height="33" class="FooterLinks" scope="col"><div align="left">Username</div></th>
                              <th width="116" scope="col"><div align="left">
                                <input name="01" type="text" class="TextField" id="01" />
                              </div></th>
                            </tr>
                            <tr>
                              <td height="30" class="FooterLinks"><div align="left">Password</div></td>
                              <td><input name="02" type="password" class="TextField" id="02" /></td>
                            </tr>
                            <tr>
                              <td>&nbsp;</td>
                              <td><table width="130" border="0" align="right" cellpadding="0" cellspacing="0">
                                <tr>
                                  <th width="29" height="40" scope="col">&nbsp;</th>
                                  <th width="101" scope="col"><div align="right">
                                    <input name="Submit" type="submit" class="Login" value="Log in" />
                                  </div></th>
                                </tr>
                              </table></td>
                            </tr>
                          </table>
                                                </form>
                        </td>
                      </tr>
                      <tr>
                        <td>&nbsp;</td>
                        <td class="FooterLinks"><div align="center">If not a user <span class="WelcomeText">REGISTER NOW !</span></div></td>
                      </tr>
                    </table>
                  </div></th>
                </tr>
              </table></td>
            </tr>
          </table>
        </div></th>
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

echo "<form method=post action=record_form.php>";
echo "<table align=top width=300>";
echo"<tr><td>Enter Account No.:</td> <td><input type=text name=acc_no> <br></td></tr>";
echo"<tr><td>Enter Student ID:</td> <td><input type=text name=std_id><br></td></tr>";
echo"<tr><td>Enter Student Balance:</td> <td><input type=text name=std_bal><br></td></tr>";
echo"<tr><td>Enter Student Due:</td> <td><input type=text name=std_due><br></td></tr>";
echo"<tr></tr>";
echo"<tr></tr>";
echo "<tr><td></td><td align=center><input type=submit  value=submit></td></tr>";
echo"</table>";
echo"</form>";



?>
                        </td>
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
