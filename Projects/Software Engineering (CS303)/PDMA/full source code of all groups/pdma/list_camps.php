<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>PDMA</title>
<link href="css.css" rel="stylesheet" type="text/css" />
</head>

<body>
<table width="500" border="0" align="center" cellpadding="0" cellspacing="0">
  <tr>
    <th width="17" height="47" scope="col">&nbsp;</th>
    <th width="528" valign="middle" scope="col"><div align="left" class="WelcomeHeading">
      <div align="center">LIST ALL CAMPS </div>
    </div></th>
  </tr>
  <tr>
    <td height="62">&nbsp;</td>
	<?php include 'conn.php'; ?>
    <td valign="top"><p><span class="WelcomeText">Records per page</span>
            <select name="select" class="List">
              <option>Default</option>
              <option>All</option>
              <option>10</option>
              <option>20</option>
            </select>
    </p>
        <p>
          <?php
		include 'conn.php';
				
				$sql="select camp_name,camp_type,camp_province,camp_city,men,women,children from main_table";
				$stmt= mysql_query($sql);
				
				echo"<table width=520 border=0 cellpadding=0 cellspacing=0 class=TableTextnBorder>";
				echo"<tr bgcolor=#90b8c8 class=FooterLinks align=center>
			<td>Name</td>
			<td>Type</td>
			<td>Location</td>
			<td>Men</td>
			<td>Women</td>
			<td>Children</td>
			</tr>";
			
			
while ($res=mysql_fetch_array($stmt))
{
echo "<tr align=center>";
echo "<td class=TableTextnBorder>$res[0]</td>";
echo "<td class=TableTextnBorder>$res[1]</td>";
echo "<td class=TableTextnBorder>$res[3],$res[2]</td>";
echo "<td class=TableTextnBorder>$res[4]</td>";
echo "<td class=TableTextnBorder>$res[5]</td>";
echo "<td class=TableTextnBorder>$res[6]</td>";

echo "</tr>";
}
echo"</table>";
?>
        </p>        </td>
  </tr>
  <tr>
    <td height="62">&nbsp;</td>
    <td valign="top"><img src="list_all_camps_graph.php" /></td>
  </tr>
  <tr>
    <td height="62">&nbsp;</td>
    <td valign="top" align="center"><div align="left"><img src="list_all_camps_graph2.php" /></div></td>
  </tr>
</table>
</body>
</html>
