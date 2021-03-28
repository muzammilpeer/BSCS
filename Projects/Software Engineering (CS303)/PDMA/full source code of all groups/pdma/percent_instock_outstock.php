<?php
include("connect.php");

function instock()
{
connect();
$result = mysql_query("select count(*) as total from jos_vm_product where product_in_stock=0");
$row = mysql_fetch_array($result);
$instock = $row[total];
return $instock;
//echo $instock.$outstock;

}
function outstock()
{
connect();
$result1 = mysql_query("select count(*) as total from jos_vm_product where product_in_stock!=0");
$row1 = mysql_fetch_array($result1);
$outstock = $row1[total];
return $outstock;
} 

function generate_graph($in,$out)
{
$curr=date("Y/m/d");

include('graph/phpgraphlib.php');
include('graph/phpgraphlib_pie.php');
$graph = new PHPGraphLibPie(800, 400);
$data = array("Instock" => $in, "OutStock" => $out);
$graph->addData($data);
$graph->setTitle("$curr  : In and Out Stock Product Percentage");
$graph->setLabelTextColor('50,50,50');
$graph->setLegendTextColor('50,50,50');
$graph->createGraph();
}

//mysql_close($con);

//echo instock().outstock();

generate_graph(instock(),outstock());



?>
