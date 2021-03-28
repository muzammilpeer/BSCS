<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>PDMA</title>
<link href="css.css" rel="stylesheet" type="text/css" />
</head>

<body>
<table width="545" border="0" align="center" cellpadding="0" cellspacing="0">
  <tr>
    <th width="17" height="47" scope="col">&nbsp;</th>
    <th width="528" valign="middle" scope="col"><div align="left" class="WelcomeHeading">
      <div align="center">SEARCHED CAMP / EVACUATION POINT</div>
    </div></th>
  </tr>
  <tr>
    <td height="30">&nbsp;</td>

	<?php include 'conn.php'; ?>
    <td valign="top"><?php 
$eva_name=$_POST['eva_name'];
$cam_type=$_POST['cam_type'];

//echo"$eva_name";
//echo"$cam_type";

$sql1="insert into pdma.temp(camp_name,camp_type)
values('$eva_name','$cam_type')";
mysql_query($sql1);
				
$sql="select camp_name,camp_type,camp_province,camp_city,men,women,children from main_table where camp_name='$eva_name' AND camp_type='$cam_type'";
				$stmt= mysql_query($sql);
				
				echo"<table width=520 border=0 cellpadding=0 cellspacing=0 class=TableTextnBorder>";
				echo"<tr bgcolor=#90b8c8 class=FooterLinks align=center>
			<td>Name</td>
			<td>Type</td>
			<td>Location</td>
			<td>Men</td>
			<td>Women</td>
			<td>Children</td>
			<td>Total</td>
			</tr>";
			
			
while ($res=mysql_fetch_array($stmt))
{
echo "<tr>";
echo "<td class=TableTextnBorder>$res[0]</td>";
echo "<td class=TableTextnBorder>$res[1]</td>";
echo "<td class=TableTextnBorder>$res[3],$res[2]</td>";
echo "<td class=TableTextnBorder>$res[4]</td>";
echo "<td class=TableTextnBorder>$res[5]</td>";
echo "<td class=TableTextnBorder>$res[6]</td>";
echo "<td class=TableTextnBorder>$res[4]"."$res[5]</td>";

echo "</tr>";
}
echo"</table>";

?></td>
  </tr>
  <tr>
    <td>&nbsp;</td>
    <td valign="top"><img src="camp_demographics.php" /></td>
  </tr>
</table>
</body>
</html>
