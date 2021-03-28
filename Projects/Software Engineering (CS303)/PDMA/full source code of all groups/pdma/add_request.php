<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>PDMA</title>
<link href="css.css" rel="stylesheet" type="text/css" />
</head>

<body>
<table width="545" height="190" border="0" align="center" cellpadding="0" cellspacing="0">
  <tr>
    <th width="17" height="47" scope="col">&nbsp;</th>
    <th width="528" valign="middle" scope="col"><div align="left" class="WelcomeHeading">
      <div align="center">REQUESTED RESOURCES </div>
    </div></th>
  </tr>
  <tr>
    <td>&nbsp;</td>
    <?php

$eva_name=$_POST['eva_name'];
$req_cat=$_POST['request_cat'];
$req_subcat=$_POST['request_subcat'];
$quantity=$_POST['quantity'];


$con = mysql_connect("localhost","root","");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("pdma", $con);


$sql1 = "select product_in_stock from jos_vm_product where product_name = '$req_subcat';";
$result1= mysql_query($sql1);
$val="";
while($row = mysql_fetch_array($result1))
  {
  	$val=$row['product_in_stock'];
  	//echo $val;
}
mysql_close($con);
if ( $val < $quantity )
{
	echo " Out of Stock Value ";
	//header("location: http://localhost/pdma/request_resources.php");
} else
{


//echo"$fac_med";
include 'conn.php';

$sql="INSERT INTO `pdma`.`request_resources` (
`camp_name` ,
`request_name_cat` ,
`request_name_subcat` ,
`quantity`
)
VALUES (
'$eva_name', '$req_cat', '$req_subcat', '$quantity'
);";

mysql_query($sql);
mysql_close($conn);

$newqty = $val - $quantity;
//echo " new qty = $newqty  and old is = $result1";


$con1 = mysql_connect("localhost","root","");
if (!$con1)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("pdma", $con1);


$sql2 = "UPDATE jos_vm_product SET product_in_stock = '$newqty' WHERE product_name = '$req_subcat';";
mysql_query($sql2);
mysql_close($con1);
}
?>
    <td valign="top"><form id="form2" name="form2" method="post" action="index.php">
      <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
        <tr>
          <th scope="col"><div align="left" class="WelcomeText"><br />
                    <span class="InsidePageHeading">Request Resources</span><br />
                    <br />
          </div>
                <table width="448" border="0" cellspacing="4" cellpadding="0">
                  <tr>
                    <th width="196" class="Text" scope="col"><div align="right">Camp Name:</div></th>
                    <th width="14" scope="col">&nbsp;</th>
                    <th width="234" scope="col"><div align="left" class="WelcomeText"><?php echo"$eva_name"; ?></div></th>
                  </tr>
                  <tr>
                    <td class="Text"><div align="right">Quantity</div></td>
                    <td>&nbsp;</td>
                    <td><div align="left"><span class="WelcomeText"><?php echo"$quantity"; ?></span></div></td>
                  </tr>
                </table>
            <br /></th>
        </tr>
      </table>
      <table width="450" border="0" align="center" cellpadding="0" cellspacing="0">
        <tr>
          <th scope="col"> <div align="center">
            <input name="Submit22" type="submit" class="Login" value="Finish"  action='index.php' />
          </div></th>
        </tr>
      </table>
    </form></td>
  </tr>
</table>
</body>
</html>
