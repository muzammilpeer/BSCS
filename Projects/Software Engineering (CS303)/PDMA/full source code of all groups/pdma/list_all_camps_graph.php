<?php
include("connect.php");
include('graph/phpgraphlib.php');
include('graph/phpgraphlib_pie.php');
$arr;
function total_stock()
{
$eva_name; 
connect();
$result = mysql_query("SELECT camp_name,capacity
FROM main_table ");


while($row = mysql_fetch_array($result))
{
$arr[$row['camp_name']] = $row['capacity'];
}

return $arr;
}

function generate_graph($data)
{
$curr=date("Y/m/d");


$graph = new PHPGraphLibPie(500, 350);
$graph->addData($data);
$graph->setTitle("$curr  : Relative Capacity of All Camps");
$graph->setLabelTextColor('100,100,175');
$graph->setLegendTextColor('65,650,85');
$graph->createGraph();
}



generate_graph(total_stock());

?>
