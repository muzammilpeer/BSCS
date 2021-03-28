<?php
include("connect.php");

$arr;
function total_stock()
{
$eva_name; 
connect();
$result = mysql_query("SELECT m.camp_name,m.camp_type, m.men, m.women, m.children
FROM main_table m, temp t
WHERE m.camp_name = t.camp_name AND m.camp_type = t.camp_type");


while($row = mysql_fetch_array($result))
{
$arr/*[$row['camp_name']]-*/ = array("Men" => $row['men'], "Women" => $row['women'],"Children" => $row['children']);
$eva_name = $row['camp_name'];
}


mysql_query("DELETE FROM `pdma`.`temp` WHERE `temp`.`camp_name` = '$eva_name' ");


return $arr;
}

function generate_graph($data)
{
$curr=date("Y/m/d");

include('graph/phpgraphlib.php');
include('graph/phpgraphlib_pie.php');
$graph = new PHPGraphLibPie(550, 350);
$graph->addData($data);
$graph->setTitle("$curr  : Camp Demographics");
$graph->setLabelTextColor('100,100,175');
$graph->setLegendTextColor('65,650,85');
$graph->createGraph();
}

generate_graph(total_stock());

?>
