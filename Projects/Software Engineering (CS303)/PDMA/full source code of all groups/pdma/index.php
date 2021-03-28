<?php
include 'conn.php';
session_start();
?>

<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>PDMA</title>
<link href="css.css" rel="stylesheet" type="text/css" />
</head>

<body>
<table width="545" border="0" align="left" cellpadding="0" cellspacing="0">
  <tr>
    <th width="17" height="47" scope="col">&nbsp;</th>
    <th width="528" valign="middle" scope="col"><div align="left" class="WelcomeHeading">
      <div align="center">MAIN MENU</div>
    </div></th>
  </tr>
  <tr>
    <td>&nbsp;</td>
    <td><table width="500" border="0" cellpadding="0" cellspacing="0" class="SubHeading">
      <tr>
        <th width="13" height="92" scope="col">&nbsp;</th>
        <th width="96" scope="col"><div align="left"><img src="images/add.gif" width="68" height="66" /></div></th>
        <th width="161" scope="col"><div align="left"><a href="add_evacuation.php" class="SubHeading">ADD AN <br />
          EVACUATION POINT</a> </div></th>
        <th width="100" scope="col"><div align="left"><img src="images/LIST.gif" width="76" height="68" /></div></th>
        <th width="130" scope="col"><div align="left"><a href="list_camps.php" class="SubHeading">LIST ALL CAMPS </a></div></th>
      </tr>
      <tr>
        <td height="115">&nbsp;</td>
        <td><img src="images/search.gif" width="80" height="89" class="MainBorder" /></td>
        <td><a href="search_camps.php" class="SubHeading">SEARCH AN <br />
          EVACUATION POINT </a></td>
        <td><div align="left"><img src="images/admin.gif" width="87" height="90" class="MainBorder" /></div></td>
        <td><a href="admin_details.php" class="SubHeading">ADMIN DETAILS</a> </td>
      </tr>
      <tr>
        <td height="124">&nbsp;</td>
        <td><img src="images/report.gif" width="83" height="83" /></td>
        <td><a href="view_reports.php" class="SubHeading">VIEW ALL REPORTS</a> </td>
        <td><div align="left"><img src="images/request.gif" width="88" height="28" class="MainBorder" /></div></td>
        <td><a href="request_resources.php" class="SubHeading">REQUEST FOR RESOURCES</a> </td>
      </tr>
      
    </table></td>
  </tr>
</table>
</body>
</html>
