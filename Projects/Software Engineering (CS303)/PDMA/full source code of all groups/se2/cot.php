<?php

if ($_POST['pswd']==$_POST['cpswd'])  {
$con = mysql_connect("127.0.0.1", "root", "");
mysql_select_db("sms_alert", $con);

$mysql_query = mysql_query("insert into employee (Name,emp_no, password) values ('$_POST[nam]', '$_POST[id]', '$_POST[pswd]')");
}
else
    echo 'Re-witer your password. Both not matched. Thanks';


?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
        <title>SMS ALERT SYS:t</title>
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
                    <td width="708" align="right" bgcolor="#D6D6D6"><a href="sign_in.gui.php">Sign-in</a></td>
                </tr>
            </table>
            <table width="799" align="center">
                <tr>
                    <td height="596" align="center" valign="top"><table width="600">
                            <tr>
                                <td height="50" align="center" valign="top" bgcolor="#CCCCCC"><h2>NOTICE</h2>
                                    <p>If you are the authorized Employee of the PDMA you can sign-in </p>
                                    <h3>Thanks</h3></td>
                            </tr>
                        </table> </td>
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
