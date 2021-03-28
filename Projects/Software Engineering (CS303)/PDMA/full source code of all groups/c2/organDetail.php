<?php //include 'header.php';
$con = mysql_connect("127.0.0.1", "root", "");
mysql_select_db("organ_reg", $con);

$username = $_GET["user"];
$res = mysql_query("select * from organ_pending where username='$username'");
$organ = mysql_fetch_array($res);
?>

<?php echo "<div align='center' class='VERDANA14' style='color:#FFFFFF; background-color:#000099; font-weight: bold;'>".$organ['name']."</div>" ?>
<br class="item_divider" />
<?php echo "<a href='branches.php?user=$username'>"."Branches"."</a>";
echo "<br/>";
echo "<a href='contact.php?user=$username'>"."Conact Details"."</a>"
?>
<form name="organDetail" action="processOrgan.php" method="POST">
    <?php
    echo "<input type='hidden' name='username' value='$username' readonly='readonly' />"
    ?>
    <table border="0" class="title_action" align="center" cellspacing="5" cellpadding="2">
        <tbody>
            <tr>
                <td>
                <td style="background-color:silver; font-weight:bold">URL</td>
                <?php echo "<td style='background-color:silver'>".$organ['url']."</td>"; ?>
                </td>
            </tr>
            <tr>
                <td>
                <td style="background-color:silver; font-weight:bold">Type</td>
                <?php echo "<td style='background-color:silver'>".$organ['type']."</td>"; ?>
                </td>
            </tr>
            <tr>
                <td>
                <td style="background-color:silver; font-weight:bold">Sector</td>
                <td style="background-color:silver;">
                    <?php
                    if ($organ['sec_rehabilitation'])
                        echo "<div>"."Rehabilitation"."</div>";
                    if ($organ['sec_communication'])
                        echo "<div>"."Communication"."</div>";
                    if ($organ['sec_education'])
                        echo "<div>"."Education, "."</div>";
                    if ($organ['sec_medical'])
                        echo "<div>"."Medical"."</div>";
                    if ($organ['sec_supplier'])
                        echo "<div>"."Supplier"."</div>";
                    ?>
                </td>
            </tr>
            <tr>
                <td>
                <td style="background-color:silver; font-weight:bold">District</td>
                <?php echo "<td style='background-color:silver'>".$organ['district']."</td>"; ?>
                </td>
            </tr>
            <tr>
                <td>
                <td style="background-color:silver; font-weight:bold">Town/Taluka</td>
                <?php echo "<td style='background-color:silver'>".$organ['city']."</td>"; ?>
                </td>
            </tr>
            <tr>
                <td>
                <td style="background-color:silver; font-weight:bold">Address</td>
                <?php echo "<td style='background-color:silver'>".$organ['address']."</td>"; ?>
                </td>
            </tr>
        </tbody>
    </table>
    <blockquote>
        <p align="center">
            <input type="submit" value="Accept" name="accept" />
            <input type="submit" value="Reject" name="reject" />
        </p>
    </blockquote>
</form>

<?php include 'footer.php'?>
