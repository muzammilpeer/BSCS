<?php
/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

?>
<?php
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
*/



?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
        <title>SMS ALERT SYS:</title>
    </head>

    <body>
        <form id="form1" name="form1" method="post" action="sms.php">
            <table width="700" border="0" align="center">
                <tr>
                    <td><img src="pics/see.jpg" width="799" height="133" /></td>
                </tr>
            </table>
            <table width="799" height="31" border="0" align="center">
                <tr>
                    <td width="708" align="right" bgcolor="#D6D6D6"><a href="sign_in.gui.php">sign-out</a></td>
                </tr>
            </table>
            <table width="799" align="center">
                <tr>
                    <td width="230" valign="top"><table width="200" border="1" align="center">
                            <tr>
                                <td align="center" bgcolor="#0000FF">MENU</td>
                            </tr>
                            <tr>
                                <td height="212" valign="top" bgcolor="#999999"><ul>
                                        <li><a href="mainhtml.php">Home</a></li>
                                        <li><a href="addcon.php">Save Contact</a></li>
                                        <li><a href="vu_con.php">View Contact</a></li>
                                        <li><a href="ad_op.php">Send Option </a></li>
                                    </ul></td>
                            </tr>
                        </table></td>
                    <td width="1000" height="596" align="center" valign="top" bgcolor="#FFFFFF"><h1><strong>ENTER TEXT</strong><br />
                        </h1>
                        <p>
                            <label>
                                <textarea name="sms" id="sms" cols="45" rows="10">To:
Subject:</textarea>
                            </label>
                        </p>
                        <p>Enter Cell No:
                            <label>
                            <?php  echo " <input name='cell no' type='text' id='cell no' size='30' value='$_GET[cell_no]'  />"?>
                                 <input type="submit" name="send" id="send" value="SEND" />


                            </label>
                        </p>

                    </td>
                </tr>
            </table>
            \
            <table width="799" border="0" align="center">
                <tr>
                    <td align="center">footer</td>
                </tr>
            </table>
            <p>&nbsp;</p>
            <p>&nbsp;</p>
        </form>
    </body>
</html>
