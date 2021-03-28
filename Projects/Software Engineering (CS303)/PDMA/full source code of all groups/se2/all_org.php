<?php
/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
*/
$deg="org";

?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
        <title>SMS ALERT SYS:</title>
    </head>

    <body>
        <form id="form1" name="form1" method="post" action="">
            <table width="700" border="0" align="center">
                <tr>
                    <td><img src="pics/see.jpg" width="799" height="133" /></td>
                </tr>
            </table>
            <table width="799" height="31" border="0" align="center">
                <tr>
                    <td width="708" align="right" bgcolor="#D6D6D6"><a href="mainhtml.php">Home</a> | <a href="sign_in.gui.php">sgin-out</a></td>
                </tr>
            </table>
            <table width="799" align="center">
                <tr>
                    <td width="181" align="center" valign="top"><table width="185" border="1">
                            <tr>
                                <td width="175" align="center" bgcolor="#0000FF"><h3><strong><em>Contact Menu</em></strong></h3></td>
                            </tr>
                            <tr>
                                <td bgcolor="#CCCCCC"><ul>
                                        <li><a href="all_org.php">All Organization</a></li>
                                        <li><a href="all_admin.php">All Admin</a></li>
                                        <li><a href="all_vol.php">All volunteer</a></li>
                                        <li><a href="addcon.php">Add New Contact</a></li>
                                    </ul>
                                    <p>&nbsp;</p></td>
                            </tr>
                        </table></td>
                    <td width="606" height="596" align="center" valign="top"><h1><strong><em>Organization Contacts</em></strong></h1>
                        <table width="460" height="34">
                            <tr>
                                <td width="127" align="center" bgcolor="#6600FF">Name</td>
                                <td width="133" align="center" bgcolor="#6600FF"> Cell Phone No:</td>
                            </tr>
                        </table>


                              <p>


<?php
$con = mysql_connect("127.0.0.1", "root", "");
   mysql_select_db("sms_alert", $con);
$result=mysql_query("select * from contact where design='org'");
while ($row=mysql_fetch_array($result)) {
    echo  "<table width='460'>";

 echo" <tr>";
  echo"  <td width='127' bgcolor='silver' > ".$row['name']."</td>";
 
    echo"<td width='133' bgcolor='#CCCCCC'>"."<a href='main_1.php?cell_no=$row[cell_no]'>".$row['cell_no']."</td>";
  echo"</tr>";
echo"</table>";

}
?>

        </p>
                        <p>&nbsp;</p>
                        <p>&nbsp;</p></td>
                </tr>
            </table>


      
                \
                <table width="799" border="0" align="center">
                    <tr>
                        <td>footer</td>
                    </tr>
                </table>
                <p>&nbsp;</p>
                <p>&nbsp;</p>
        </form>
    </body>
</html>
