<?php //include 'header.php';
$con = mysql_connect("127.0.0.1", "root", "");
mysql_select_db("organ_reg", $con);

$username = $_GET["user"];
$res = mysql_query("select * from contact_pending where username='$username'");
$cont = mysql_fetch_array($res);
?>
<?php echo "<div align='center' class='VERDANA14' style='color:#FFFFFF; background-color:#000099; font-weight: bold;'>".$cont['name']."</div>" ?>
<table border="0" class="title_action" align="center" cellspacing="5" cellpadding="2">
    <tbody>
        <tr>
            <td>
            <td style="background-color:silver; font-weight:bold">Address</td>
            <?php echo "<td style='background-color:silver'>".$cont['address']."</td>"; ?>
            </td>
        </tr>
        <tr>
            <td>
            <td style="background-color:silver; font-weight:bold">Phone</td>
            <?php echo "<td style='background-color:silver'>".$cont['phone']."</td>"; ?>
            </td>
        </tr>        
        <tr>
            <td>
            <td style="background-color:silver; font-weight:bold">Cell</td>
            <?php echo "<td style='background-color:silver'>".$cont['cell']."</td>"; ?>
            </td>
        </tr>
        <tr>
            <td>
            <td style="background-color:silver; font-weight:bold">Fax</td>
            <?php echo "<td style='background-color:silver'>".$cont['fax']."</td>"; ?>
            </td>
        </tr>
        <tr>
            <td>
            <td style="background-color:silver; font-weight:bold">Email</td>
            <?php echo "<td style='background-color:silver'>".$cont['email']."</td>"; ?>
            </td>
        </tr>
    </tbody>
</table>

<?php include 'footer.php';?>
