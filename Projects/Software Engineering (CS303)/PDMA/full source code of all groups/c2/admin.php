<?php
//include 'header.php';
require ('organizationalRegistry.php');

$ad = new admin();
$ad->verifyAdmin();
?>
<div align="center" class="VERDANA14" style="color:#FFFFFF; background-color:#000099; font-weight: bold;">PENDING ORGANIZATIONS</div>
<br/>
<table width="50%" border="0" cellpadding="" align="CENTER" class="title_action">
    <thead class="sub_title">
        <tr>
            <th>NAME</th>
            <th>LOCATION</th>
        </tr>
    </thead>

    <tbody>
        <?php
        $count = 1;
        $con = mysql_connect("127.0.0.1", "root", "");
        mysql_select_db("organ_reg", $con);
        $res = mysql_query("select * from organ_pending");
        while($row = mysql_fetch_array($res)) {

            $username = $row['username'];
            if ($count == 1) {
                echo "<tr bgcolor='#9999CC'>";
                echo "<td>"."<a href='organDetail.php?user=$username' style='color:white'>".$row['name']."</a>"."</td>";
                echo "<td>".$row['city']."</td>";
                echo "</tr>";
                $count = 0;
            }
            else {
                echo "<tr bgcolor='#66CC99'>";
                echo "<td>"."<a href='organDetail.php?user=$username' style='color:white'>".$row['name']."</a>"."</td>";
                echo "<td>".$row['city']."</td>";
                echo "</tr>";
                $count = 1;
            }
        }
        ?>
    </tbody>
</table>                            


<?php include 'footer.php' ?>
