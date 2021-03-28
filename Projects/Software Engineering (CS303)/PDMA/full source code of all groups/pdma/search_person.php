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
      <div align="center">SEARCHED ADMIN DETAILS </div>
    </div></th>
  </tr>
  <tr>
    <td>&nbsp;</td>
	<?php include 'conn.php'; ?>
    <td valign="top"><p><span class="WelcomeText">Records per page</span>
            <select name="select" class="List">
              <option>Default</option>
              <option>All</option>
              <option>10</option>
              <option>20</option>
            </select>
    </p>
        <?php 
				
$eva_name=$_POST['eva_name'];
$cam_type=$_POST['cam_type'];

//echo"$eva_name";
//echo"$cam_type";
				
				$sql="select camp_name,person_name,person_contact,person_nic,person_organization from main_table where camp_name='$eva_name' AND camp_type='$cam_type'";
				$stmt= mysql_query($sql);
				
				echo"<table width=520 border=0 cellpadding=0 cellspacing=0 class=TableTextnBorder>";
				echo"<tr bgcolor=#90b8c8 class=FooterLinks align=center>
			<td>Camp Name</td>
			<td>Person Name</td>
			<td>Contact #</td>
			<td>NIC #</td>
			<td>Oragnization Belonged</td>
			</tr>";
			
			
while ($res=mysql_fetch_array($stmt))
{
echo "<tr align=center>";
echo "<td class=TableTextnBorder>$res[0]</td>";
echo "<td class=TableTextnBorder>$res[1]</td>";
echo "<td class=TableTextnBorder>$res[2]</td>";
echo "<td class=TableTextnBorder>$res[3]</td>";
echo "<td class=TableTextnBorder>$res[4]</td>";

echo "</tr>";
}
echo"</table>";
?></td>
  </tr>
</table>
</body>
</html>
