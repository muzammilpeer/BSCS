<?php //include ('header.php')?>


<?php
$SqlConnection = @mysql_connect("localhost", "root", "");
if (!$SqlConnection) {
    echo( "<P>Unable to connect to the " . "database server at this time.</P>" );
    exit();
}
mysql_select_db("organ_reg", $SqlConnection);
if (! @mysql_select_db("organ_reg") ) {
    echo( "<P>Unable to locate the Organizational Registry Database at this time.</P>" );
    exit();
}
$UserName = $_GET['username'] ;
$QueryStr = "SELECT o.name, b.address, b.district, b.city, b.branchID FROM branch b INNER JOIN organization o on o.username = b.username where b.username='".$UserName."'" ;
$QueryStr2 = "SELECT name FROM organization where username='".$UserName."'" ;
$Result = mysql_query($QueryStr2);
$Row = mysql_fetch_array($Result) ;
echo "<div align='center' class='VERDANA14' style='color:#FFFFFF; background-color:#000099; font-weight: bold;'>".$Row['name']."</div>";


$Result = mysql_query($QueryStr);
if (!$Result) {
    echo("<P>Error performing query: " .
            mysql_error() . "</P>");
    exit();
}
echo "<table width='50%' align='CENTER' class='title_action'>";
echo "<tbody>";
$count = 1;
while ( $Row = mysql_fetch_array($Result) ) {

    $bid = $Row['branchID'] ;
    echo "<tr>";
    echo "<td>"."<a href='editbranchdetail.php?branchID=$bid'>".$Row['address']."</a>"."</td>";
    echo "<td>".$Row['district']."</td>" ;
    echo "<td>".$Row['city']."</td>" ;
    echo "</tr>";

}
echo "</tbody>";
echo "</table>";
?>

</body>
</html>
