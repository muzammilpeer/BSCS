<?php
include("connect.php");


$arr;
function total_stock()
{

connect();
$result = mysql_query("select product_name,product_in_stock from jos_vm_product where product_in_stock=0");
while($row = mysql_fetch_array($result))
{
$arr[$row['product_name']]=1;
}
return $arr;
}

function generate_graph($data)
{
$curr=date("Y/m/d");

include('graph/phpgraphlib.php');
include('graph/phpgraphlib_pie.php');
$graph = new PHPGraphLibPie(800, 400);
//$data = array("Instock" => $in, "OutStock" => $out);
$graph->addData($data);
$graph->setTitle("$curr  : All Out of stock Product");
$graph->setLabelTextColor('50,50,50');
$graph->setLegendTextColor('50,50,50');
$graph->createGraph();
}

//mysql_close($con);

//echo instock().outstock();
//(total_stock();
generate_graph(total_stock());



?>
