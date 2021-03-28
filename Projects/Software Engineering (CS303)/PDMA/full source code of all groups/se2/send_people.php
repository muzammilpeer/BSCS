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
<form id="form1" name="form1" method="post" action="sms_peo.php" enctype="multipart/form-data">
  <table width="700" border="0" align="center">
    <tr>
      <td><img src="pics/see.jpg" width="799" height="133" /></td>
    </tr>
  </table>
  <table width="799" height="31" border="0" align="center">
    <tr>
      <td width="708" align="right" bgcolor="#D6D6D6"><a href="mainhtml.php">Home</a>| <a href="ad_op.php">Send Optoin</a> | <a href="sign_in.gui.php">Sign-out</a></td>
    </tr>
  </table>
  <table width="799" align="center">
    <tr>
      <td height="596" align="center" valign="top"><h1>Enter Text</h1>
      <p>
        <label>
          <textarea name="msg_org" id="msg_org" cols="45" rows="10"></textarea>
        </label>
      </p>
      <p>
          <label>
              <input type="file" name="file" id="file" />
          <input type="submit" name="send_peo" id="send_peo" value="  Send To Area People" />
        </label>
      </p></td>
    </tr>
  </table>
  
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
