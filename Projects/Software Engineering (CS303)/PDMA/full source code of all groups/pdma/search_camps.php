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
      <div align="center">SEARCH A CAMP / EVACUATION POINT </div>
    </div></th>
  </tr>
  <tr>
    <td>&nbsp;</td>
	<?php include 'conn.php'; ?>
	
	
    <td valign="top"><form id="form2" name="form2" method="post" action="search_name.php">
      <table width="450" border="0" cellpadding="0" cellspacing="0">
        <tr>
          <th scope="col"><div align="left" class="WelcomeText"><br />
                    <span class="InsidePageHeading">Search by Name </span><br />
                    <br />
          </div>
                <table width="448" border="0" cellspacing="4" cellpadding="0">
                  <tr>
                    <th width="157" class="Text" scope="col"><div align="right">Evacuation Point Name</div></th>
                    <th width="10" scope="col">&nbsp;</th>
                    <th width="283" scope="col"><div align="left"> <?php echo"<input name=eva_name type=text class=TextField2 />"; ?> </div></th>
                  </tr>
                  <tr>
                    <td class="Text"><div align="right">Camp Type</div></td>
                    <td>&nbsp;</td>
                    <td><div align="left"><?php echo"<select name=cam_type size=1 class=List>
                                          <option selected=selected>Temporary</option>
                                          <option>Permanent</option>
                                      </select>"; ?> </div></td>
                  </tr>
              </table>
			  
			  </th>
        </tr>
      </table>
      <table width="450" border="0" cellpadding="0" cellspacing="0">
        <tr>
          <th width="368" scope="col">&nbsp;</th>
          <th width="82" scope="col"> <div align="left">
            <input name="Submit2" type="submit" class="Login" value="Search"  action='' />
          </div></th>
        </tr>
      </table>
    </form>
        </td>
  </tr>
</table>

</body>
</html>
