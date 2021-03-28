<?php
include("connect.php");
include('graph/phpgraphlib.php');
include('graph/phpgraphlib_pie.php');
$arr;
function total_stock()
{
$eva_name; 
connect();
$result = mysql_query("SELECT camp_name,quantity
FROM request_resources");


while($row = mysql_fetch_array($result))
{
$arr[$row['camp_name']] = $row['quantity'];
}

return $arr;
}


function generate_graph2($data)
{
$curr=date("Y/m/d");
 

$graph = new PHPGraphLib(350,300);

$graph->setBackgroundColor("white");
$graph->addData($data);
$graph->setBarColor('255,255,204');
$graph->setTitle("$curr : Quantity");
$graph->setTitleColor('black');
$graph->setupYAxis(12, 'black');
$graph->setupXAxis(20, 'black');
$graph->setGrid(false);
$graph->setGradient('blue', 'white');
$graph->setBarOutlineColor('white');
$graph->setTextColor('red');
$graph->setDataPoints(true);
$graph->setDataPointColor('yellow');
$graph->setLine(true);
$graph->setLineColor('purple');
$graph->createGraph();

}



generate_graph2(total_stock());
?>

