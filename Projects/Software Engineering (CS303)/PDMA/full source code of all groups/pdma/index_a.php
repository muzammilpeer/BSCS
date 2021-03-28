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

<body onLoad="MM_preloadImages('images/sidemenu_list_camps_on.jpg','images/sidemenu_sear_camps_on.jpg','images/sidemenu_admin_on.jpg','images/sidemenu_view_rep_on.jpg','images/sidemenu_req_res_on.jpg')">
<table width="780" border="0" align="center" cellpadding="0" cellspacing="0" class="MainBorder">
  <tr>
    <td height="772" valign="top"><table width="780" border="0" cellspacing="0" cellpadding="0">
      <tr>
        <th height="24" valign="top" scope="col"><div align="left">
<?php

include 'header.php';
?>
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
                        <th scope="col"><div align="left"><a href="add_evacuation.php" onMouseOut="MM_swapImgRestore()" onMouseOver="MM_swapImage('add evacuation','','images/sidemenu_add_eva_on.jpg',0)"><img src="images/sidemenu_add_eva_off.jpg" name="add evacuation" width="235" height="29" border="0" id="add evacuation" /></a><a href="add_evacuation.php"></a></div></th>
                      </tr>
                      <tr>
                        <th scope="col"><div align="left"><a href="#" onMouseOut="MM_swapImgRestore()" onMouseOver="MM_swapImage('list camps','','images/sidemenu_list_camps_on.jpg',1)"></a><a href="list_camps.php" onMouseOut="MM_swapImgRestore()" onMouseOver="MM_swapImage('list camps','','images/sidemenu_list_camps_on.jpg',1)"><img src="images/sidemenu_list_camps_off.jpg" name="list camps" width="235" height="29" border="0" id="list camps" /></a></div></th>
                      </tr>
                      <tr>
                        <th scope="col"><div align="left"><a href="#" onMouseOut="MM_swapImgRestore()" onMouseOver="MM_swapImage('search camp','','images/sidemenu_sear_camps_on.jpg',1)"></a><a href="search_camps.php" onMouseOut="MM_swapImgRestore()" onMouseOver="MM_swapImage('search camps','','images/sidemenu_sear_camps_on.jpg',1)"><img src="images/sidemenu_sear_camps_off.jpg" name="search camps" width="235" height="29" border="0" id="search camps" /></a></div></th>
                      </tr>
                      <tr>
                        <th scope="col"><div align="left"><a href="#" onMouseOut="MM_swapImgRestore()" onMouseOver="MM_swapImage('admin details','','images/sidemenu_admin_on.jpg',1)"></a><a href="admin_details.php" onMouseOut="MM_swapImgRestore()" onMouseOver="MM_swapImage('admin details','','images/sidemenu_admin_on.jpg',1)"><img src="images/sidemenu_admin_off.jpg" name="admin details" width="235" height="29" border="0" id="admin details" /></a></div></th>
                      </tr>
                      <tr>
                        <th scope="col"><div align="left"><a href="#" onMouseOut="MM_swapImgRestore()" onMouseOver="MM_swapImage('view reports','','images/sidemenu_view_rep_on.jpg',1)"></a><a href="view_reports.php" onMouseOut="MM_swapImgRestore()" onMouseOver="MM_swapImage('view reports','','images/sidemenu_view_rep_on.jpg',0)"><img src="images/sidemenu_view_rep_off.jpg" name="view reports" width="235" height="29" border="0" id="view reports" /></a></div></th>
                      </tr>
                      <tr>
                        <th scope="col"><div align="left"><a href="#" onMouseOut="MM_swapImgRestore()" onMouseOver="MM_swapImage('request for resources','','images/sidemenu_req_res_on.jpg',1)"></a><a href="request_resources.php" onMouseOut="MM_swapImgRestore()" onMouseOver="MM_swapImage('request resources','','images/sidemenu_req_res_on.jpg',1)"><img src="images/sidemenu_req_res_off.jpg" name="request resources" width="235" height="38" border="0" id="request resources" /></a></div></th>
                      </tr>
                    </table>
                  </div></th>
                  <th width="545" valign="top" scope="col">&nbsp;</th>
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
