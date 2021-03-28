<html>
<head>
<title>Details</title>
</head>
<body>
<?php


echo "<table border='1'>";
echo "<tr><th>District</th><th>Description</th><th>Disaster</th>
    <th>Number of People</th><th>Start Date</th><th>End Date</th>
    <th>Duration in Days</th></tr>";

foreach ($dishtrict as $dis)
{
  echo "<tr>";
 
  foreach ($dis as $val)
  {
    echo "<td>" . $val . "</td>";  //Display all the fields on one line
  }
  echo "</tr>";
echo "<br>";  //put a break after each database entry
}
echo "</table>";


?>
</body>

