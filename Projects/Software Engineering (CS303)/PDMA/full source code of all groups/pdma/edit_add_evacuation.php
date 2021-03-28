<?php
include 'conn.php';
//session_start();
?>

<?php
	
	$list1[1] = "Sindh";
	$list1[2] = "Balochistan";
	
	if( isset($_GET['Param']) )
	{
		$NewData = "";
		$P = (int)$_GET['Param'];

		//Emulate the database
		$DB[1]['Hyderabad'] = "Hyderabad";
		$DB[1]['Karachi'] = "Karachi";

		$DB[2]['Quetta'] = "Quetta";
		$DB[2]['Ziarat'] = "Ziarat";
		
		//Emulate the select
		$row = $DB[$P];
		
		//use contents from DB to build the Options
		foreach($row as $K1 => $V1)
		{
			$NewData .= "<option value='$K1'>$V1</option>\n";
		}
		echo $NewData; //Send Data back
		exit; //we're finished so exit..
	}
?>
<head>

<script language="javascript">


function ajaxFunction(ID, Param)
{
	//link to the PHP file your getting the data from
	//var loaderphp = "register.php";
	//i have link to this file
	var loaderphp = "<?php echo $_SERVER['PHP_SELF'] ?>";
	
	//we don't need to change anymore of this script
	var xmlHttp;
	try
    {
		// Firefox, Opera 8.0+, Safari
		xmlHttp=new XMLHttpRequest();
    }catch(e){
		// Internet Explorer
		try
		{
			xmlHttp=new ActiveXObject("Msxml2.XMLHTTP");
		}catch(e){
			try
			{
				xmlHttp=new ActiveXObject("Microsoft.XMLHTTP");
			}catch(e){
				alert("Your browser does not support AJAX!");
				return false;
			}
		}
	}
    xmlHttp.onreadystatechange=function()
	{
		if(xmlHttp.readyState==4)
        {
			document.getElementById(ID).innerHTML = xmlHttp.responseText;
        }
	}
    xmlHttp.open("GET", loaderphp+"?Param="+Param,true);
    xmlHttp.send(null);
}
</script>

<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>PDMA</title>
<link href="css.css" rel="stylesheet" type="text/css" />
</head>

<body>
<table width="545" height="190" border="0" align="center" cellpadding="0" cellspacing="0">
  <tr>
    <th width="17" height="47" scope="col">&nbsp;</th>
    <th width="528" valign="middle" scope="col"><div align="left" class="WelcomeHeading">
      <div align="center">EDIT EVACUATION POINT / CAMP </div>
    </div></th>
  </tr>
  <tr>
    <td>&nbsp;</td>
    <td valign="top"><?php

include 'conn.php';

$eva_name=$_GET['eva_name'];
$cam_type=$_GET['cam_type'];
$address=$_GET['address'];
$province=$_GET['province'];
$city=$_GET['city'];
$full_name=$_GET['full_name'];
$org_belong=$_GET['org_belong'];
$contact_no=$_GET['contact_no'];
$nic_no=$_GET['nic_no'];
$capacity=$_GET['capacity'];
$men=$_GET['men'];
$women=$_GET['women'];
$children=$_GET['children'];
$fac_admin=$_GET['fac_admin'];
$fac_san=$_GET['fac_san'];
$fac_water=$_GET['fac_water'];
$fac_med=$_GET['fac_med'];

//echo"$address";
?>
      <form id="form2" name="form2" method="post" action="update_evacuation.php">
          <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
            <tr>
              <th scope="col"><div align="left" class="WelcomeText">
                  <p><span class="WelcomeHeading">Enter New Values</span><br>
                      <br />
                      <span class="InsidePageHeading">General Details</span><br />
                      <br />
                  </p>
              </div>
                  <table width="448" border="0" cellspacing="4" cellpadding="0">
                    <tr>
                      <th width="157" class="Text" scope="col"><div align="right">Camp Name</div></th>
                      <th width="10" scope="col">&nbsp;</th>
                      <th width="283" scope="col"><div align="left"> <?php echo"<input name=eva_name value=$eva_name type=text class=TextField2 />" ?> </div></th>
                    </tr>
                    <tr>
                      <td class="Text"><div align="right">Camp Type</div></td>
                      <td>&nbsp;</td>
                      <td><div align="left"><?php echo"<select name=cam_type size=1 class=List>
                                          <option selected=selected>Temporary</option>
                                          <option>Permanent</option>
                                      </select>"; ?></div>                      </td>
                    </tr>
                    <tr>
                      <td class="Text"><div align="right">Address</div></td>
                      <td>&nbsp;</td>
                      <td><div align="left"><?php echo"<textarea name=address value=$address class=TextArea1 ></textarea>"; ?> </div></td>
                    </tr>
                  </table>
                <br /></th>
            </tr>
          </table>
          <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
            <tr>
              <th scope="col"><div align="left" class="WelcomeText"><br />
                      <span class="InsidePageHeading">Location  Details</span><br />
                      <br />
                </div>
                  <table width="448" border="0" cellpadding="0" cellspacing="4">
                    <tr>
                      <td width="148" class="Text"><div align="right">Province </div></td>
                      <td width="114"><div align="center">
                          <select name="province" class="List" onChange="ajaxFunction('LBox2', this.value);">
                            <option value=''></option>
                            <?php 
			foreach($list1 as $K1 => $V1)
			{
				echo "<option value='$K1'>$V1</option>";
			}
		?>
                          </select>
                      </div></td>
                      <td width="30" class="Text"><div align="right">City</div></td>
                      <td width="136"><select name="city" class="List" id="LBox2">
                      </select></td>
                    </tr>
                </table></th>
            </tr>
          </table>
          <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
            <tr>
              <th scope="col"><div align="left" class="WelcomeText"><br />
                      <span class="InsidePageHeading">Contact Person  Details</span><br />
                      <br />
                </div>
                  <table width="448" border="0" cellspacing="4" cellpadding="0">
                    <tr>
                      <th width="157" class="Text" scope="col"><div align="right">Full Name</div></th>
                      <th width="10" scope="col">&nbsp;</th>
                      <th width="283" scope="col"><div align="left"><?php echo"<input value=$full_name name=full_name  type=text class=TextField2 />"; ?></div></th>
                    </tr>
                    <tr>
                      <th class="Text" scope="col"><div align="right">Organization Belonged </div></th>
                      <th scope="col">&nbsp;</th>
                      <th scope="col"><div align="left"><span class="WelcomeText"><?php echo"<input name=org_belong value=$org_belong type=text class=TextField2 />"; ?></span></div></th>
                    </tr>
                    <tr>
                      <th class="Text" scope="col"><div align="right">Contact No. </div></th>
                      <th scope="col">&nbsp;</th>
                      <th scope="col"><div align="left"><span class="WelcomeText"><?php echo"<input name=contact_no value=$contact_no type=text class=TextField2 />"; ?></span></div></th>
                    </tr>
                    <tr>
                      <th class="Text" scope="col"><div align="right">NIC No. </div></th>
                      <th scope="col">&nbsp;</th>
                      <th scope="col"><div align="left"> <?php echo"<input name=nic_no value=$nic_no type=text class=TextField2 />"; ?> </div></th>
                    </tr>
                  </table>
                <br /></th>
            </tr>
          </table>
        <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
            <tr>
              <th scope="col"><div align="left" class="WelcomeText"><br />
                      <span class="InsidePageHeading">Camp Population </span><br />
                      <br />
                </div>
                  <table width="448" border="0" cellspacing="4" cellpadding="0">
                    <tr>
                      <th width="157" class="Text" scope="col"><div align="right">Capacity</div></th>
                      <th width="10" scope="col">&nbsp;</th>
                      <th width="283" scope="col"><div align="left"> <?php echo"<input name=capacity value=$capacity type=text class=TextField2 />"; ?> </div></th>
                    </tr>
                    <tr>
                      <th class="Text" scope="col"><div align="right">Men </div></th>
                      <th scope="col">&nbsp;</th>
                      <th scope="col"><div align="left"><span class="WelcomeText"><?php echo"<input name=men value=$men type=text class=TextField2 />"; ?></span></div></th>
                    </tr>
                    <tr>
                      <th class="Text" scope="col"><div align="right">Women </div></th>
                      <th scope="col">&nbsp;</th>
                      <th scope="col"><div align="left"> <?php echo"<input name=women value=$women type=text class=TextField2 />"; ?> </div></th>
                    </tr>
                    <tr>
                      <th class="Text" scope="col"><div align="right">Children </div></th>
                      <th scope="col">&nbsp;</th>
                      <th scope="col"><div align="left"> <?php echo"<input name=children value=$children type=text class=TextField2 />"; ?> </div></th>
                    </tr>
                  </table>
                <br /></th>
            </tr>
        </table>
        <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
            <tr>
              <th scope="col"><div align="left" class="WelcomeText"><br />
                      <span class="InsidePageHeading">Services / Facilities Available </span><br />
                      <br />
                </div>
                  <table width="448" border="0" cellspacing="4" cellpadding="0">
                    <tr>
                      <th width="157" class="Text" scope="col"><div align="right">Administrative Facilities </div></th>
                      <th width="10" scope="col">&nbsp;</th>
                      <th width="283" scope="col"><div align="left"> <?php echo"<select name=fac_admin size=1 class=List>
                                                                <option>Available</option>
                                                                <option>Not Available</option>
                                                              </select>"; ?> </div></th>
                    </tr>
                    <tr>
                      <td class="Text"><div align="right">Sanitation Facilities </div></td>
                      <td>&nbsp;</td>
                      <td><div align="left"><?php echo"<select name=fac_san size=1 class=List>
                                                                <option>Available</option>
                                                                <option>Not Available</option>
                                                              </select>"; ?></div>                      </td>
                    </tr>
                    <tr>
                      <td class="Text"><div align="right">Water Facilities </div></td>
                      <td>&nbsp;</td>
                      <td><div align="left"><?php echo"<select name=fac_water size=1 class=List>
                                                                <option>Available</option>
                                                                <option>Not Available</option>
                                                              </select>"; ?></div>                      </td>
                    </tr>
                    <tr>
                      <td class="Text"><div align="right">Medical Facilities </div></td>
                      <td>&nbsp;</td>
                      <td><div align="left"><?php echo"<select name=fac_med size=1 class=List>
                                                                <option>Available</option>
                                                                <option>Not Available</option>
                                                              </select>"; ?></div>                      </td>
                    </tr>
                  </table>
                <br /></th>
            </tr>
        </table>
        <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
            <tr>
              <th width="368" scope="col">&nbsp;</th>
              <th width="82" scope="col"> <div align="left">
                  <input name="Submit2" type="submit" class="Login" value="Update"  action='' />
              </div></th>
            </tr>
        </table>
      </form></td>
  </tr>
</table>
</body>
</html>
