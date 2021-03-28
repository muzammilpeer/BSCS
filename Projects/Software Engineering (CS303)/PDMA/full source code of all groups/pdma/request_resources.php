<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<?php
$con = mysql_connect("localhost","root","");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("pdma", $con);
$i=1;
$result = mysql_query("SELECT * from jos_vm_category");

while($row = mysql_fetch_array($result))
  {
  	$list1[$i++] = $row['category_name'] ;
// echo $list1[$i];
  }

mysql_close($con);
/*	$list1[2] = "Power Tools";
	$list1[3] = "Garden Tools";
	$list1[4] = "Indoor Tools";
	$list1[5] = "Outdoor Tools";
	$list1[6] = "Food";
*/
	
	if( isset($_GET['Param']) )
	{
		$NewData = "";
		$P = (int)$_GET['Param'];
/*$con = mysql_connect("localhost","root","");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("ims", $con);
$j=0;
$result = mysql_query("select p.product_name,p.product_id from jos_vm_product p inner join  jos_vm_product_category_xref rel 
on p.product_id =  rel.product_id inner join jos_vm_category c on rel.category_id = c.category_id where c.category_name = $list;");

while($row = mysql_fetch_array($result))
  {
  	$DB[$row['product_id'] = $row['product_name'] ;
// echo $list1[$i];
  }

mysql_close($con);
	*/
		//Emulate the database
		$DB[1]['Hand Shovel'] = "Hand Shovel";
		$DB[1]['Nice Saw'] = "Nice Saw";
		$DB[1]['Hammer'] = "Hammer";

		$DB[2]['Circular Saw'] = "Circular Saw";
		$DB[2]['Power Sander'] = "Power Sander";
		
		$DB[3]['Ladder'] = "Ladder";
		$DB[3]['Shovel'] = "Shovel";
		$DB[3]['Smaller Shovel'] = "Smaller Shovel";
		
		$DB[4]['Chain Saw'] = "Chain Saw";
		
		$DB[5]['Drill'] = "Drill";
		
		$DB[6]['Ghee'] = "Ghee";
		$DB[6]['Onion'] = "Onion";
		$DB[6]['Mango'] = "Mango";
		$DB[6]['Banana'] = "Banana";
		
		//Emulate the select
		$row = $DB[$P];
		//use contents from DB to build the Options
		$row = $DB[$P];
		foreach($row as $K1 => $V1)
		{
			$NewData .= "<option value='$K1'>$V1</option>\n";
		}
		echo $NewData; //Send Data back
		exit; //we're finished so exit..
	}
?>

<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>PDMA</title>
<link href="css.css" rel="stylesheet" type="text/css" />
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
</head>

<body>
<table width="545" border="0" align="center" cellpadding="0" cellspacing="0">
  <tr>
    <th width="17" height="47" scope="col">&nbsp;</th>
    <th width="528" valign="middle" scope="col"><div align="left" class="WelcomeHeading">
      <div align="center">REQUEST RESOURCES </div>
    </div></th>
  </tr>
  <tr>
    <td>&nbsp;</td>
    <?php
include 'conn.php';

$eva_name=$_POST['eva_name'];


?>
    <td valign="top"><form id="form1" name="form1" method="post" action="add_request.php">
      <p><span class="InsidePageHeading"><br />
        Request Resources </span></p>
      <table width="448" border="0" align="center" cellpadding="0" cellspacing="4">
        <tr>
          <th width="157" class="Text" scope="col"><div align="right">Camp Name</div></th>
          <th width="10" scope="col">&nbsp;</th>
          <th width="283" scope="col"><div align="left"><?php echo"<input name=eva_name type=text class=TextField2 />" ?></div></th>
        </tr>
        <tr>
          <td class="Text"><div align="right">Request Name </div></td>
          <td>&nbsp;</td>
          <td><table width="250" border="0" cellpadding="0" cellspacing="0">
            <tr>
              <td width="127">
			  
			  
			  
 <select name="request_cat" class="List" onchange="ajaxFunction('LBox2', this.value)";>
                <option value=''></option>
			
             <?php 
			foreach($list1 as $K1 => $V1)
			{
				echo "<option value='$K1' selected=selected>$V1</option>";
			}
			?>
		
              </select>
			  
			
              <select name="request_subcat" class="List" id="LBox2">
              </select>
			  </tr>
			  
			  
			  
          </table></td>
        </tr>
        <tr>
          <td class="Text"><div align="right">Quantity</div></td>
          <td>&nbsp;</td>
          <td><?php echo"<input name=quantity type=text class=TextField2 />" ?></td>
        </tr>
        <tr>
          <td class="Text"><div align="right">Date</div></td>
          <td>&nbsp;</td>
          <td class="SubHeading"><?php $curr= date("Y/m/d"); 
		  echo "$curr";
		  ?></td>
        </tr>
      </table>
      <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
        <tr>
          <th width="368" scope="col">&nbsp;</th>
          <th width="82" scope="col"> <div align="left">
            <input name="Submit2" type="submit" class="Login" value="Request"  action='' />
          </div></th>
        </tr>
      </table>
    </form>
        <p><span class="InsidePageHeading"><br />
      </span></p></td>
  </tr>
</table>
</body>
</html>
