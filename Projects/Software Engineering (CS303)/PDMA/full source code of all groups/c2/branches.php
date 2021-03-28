<?php //include 'header.php';
$con = mysql_connect("127.0.0.1", "root", "");
mysql_select_db("organ_reg", $con);

$username = $_GET["user"];
$res = mysql_query("select * from branch_pending where username='$username'");

echo "<table width='50%' border='0' align='CENTER' class='title_action'>";
echo "<thead class='sub_title'>";
echo "<tr>";
echo "<th>"."DISTRICT"."</th>";
echo "<th>"."TOWN/TALUKA"."</th>";
echo "</tr>";
echo "</thead>";


echo "<tbody>";
$count = 1;
while($row = mysql_fetch_array($res)) {

    $username = $row['username'];
    if ($count == 1) {
        echo "<tr bgcolor='#9999CC'>";
        echo "<td>".$row['district']."</td>";
        echo "<td>".$row['city']."</td>";
        echo "</tr>";
        $count = 0;
    }
    else {
        echo "<tr bgcolor='#66CC99'>";
        echo "<td>".$row['district']."</a>"."</td>";
        echo "<td>".$row['city']."</td>";
        echo "</tr>";
        $count = 1;
    }
}
?>
</tbody>
</table>


<?php include 'footer.php';

?>
