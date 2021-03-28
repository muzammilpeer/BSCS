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
<form id="form1" name="form1" method="post" action="sav_con.php">
  <table width="700" border="0" align="center">
    <tr>
      <td><img src="pics/see.jpg" width="799" height="133" /></td>
    </tr>
  </table>
  <table width="799" height="31" border="0" align="center">
    <tr>
      <td width="708" align="right" bgcolor="#D6D6D6"><a href="mainhtml.php">Home</a> | <a href="sign_in.gui.php">Sgin-out</a></td>
    </tr>
  </table>
  <table width="799" align="center">
    <tr>
      <td height="596" align="center" valign="top"><h1>Add New Contact</h1>
        <table width="400">
          <tr>
            <td align="center" bgcolor="#CCCCCC">Name</td>
            <td align="center" bgcolor="#CCCCCC"><label>
              <input name="con_name" type="text" id="con_name" size="30" />
            </label></td>
          </tr>
          <tr>
            <td align="center" bgcolor="#CCCCCC">Designtion</td>
            <td align="center" bgcolor="#CCCCCC"> <br class="item_divider" />

                                    <select name="con_design">
                                        <option>     Org        </option>
                                        <option>    Admin      </option>
                                        <option>   volunteer   </option>
                                    </select></td>
          </tr>
          <tr>
            <td height="21" align="center" bgcolor="#CCCCCC">Cell Phone No:</td>
            <td align="center" bgcolor="#CCCCCC"><input name="con_no" type="text" id="con_no" size="30" /></td>
          </tr>
        </table>
        <p>
          <label>
            <input type="submit" name="save_con" id="save_con" value="   Save   " />
          </label>
        </p></td>
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
