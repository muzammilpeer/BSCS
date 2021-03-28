<?php

echo $_FILES["file"]["name"];

if ($_FILES["file"]["error"] > 0)
  {
  echo "Error: " . $_FILES["file"]["error"];
  }
else
  {
  echo "Upload: " . $_FILES["file"]["name"] . "<br />";
  echo "Type: " . $_FILES["file"]["type"] . "<br />";
  echo "Size: " . ($_FILES["file"]["size"] / 1024) . " Kb<br />";
  $path = "upload/".$_FILES["file"]["name"];
  echo $path;
  echo "Stored in: " . $path;

  if (file_exists($path))
      {
      echo $path . " already exists. ";
      }
    else
      {
      move_uploaded_file($_FILES["file"]["tmp_name"], $path);
      echo "Stored in: " . "upload/" . $_FILES["file"]["name"];
      }
  }


$file = fopen($path, "r") or exit("Unable to open file!");

while(!feof($file))
  {
  echo fgets($file). "<br />";
  $sento =fgetc($file);
  $ozeki_user = "admin";
$ozeki_password = "abc123";
$ozeki_url = "http://127.0.0.1:9501/api?";


function httpRequest($url){
    $pattern = "/http...([0-9a-zA-Z-.]*).([0-9]*).(.*)/";
    preg_match($pattern,$url,$args);
    $in = "";
    $fp = fsockopen("$args[1]", $args[2], $errno, $errstr, 30);
    if (!$fp) {
       return("$errstr ($errno)");
    } else {
        $out = "GET /$args[3] HTTP/1.1\r\n";
        $out .= "Host: $args[1]:$args[2]\r\n";
        $out .= "User-agent: Ozeki PHP client\r\n";
        $out .= "Accept: */*\r\n";
        $out .= "Connection: Close\r\n\r\n";

        fwrite($fp, $out);
        while (!feof($fp)) {
           $in.=fgets($fp, 128);
        }
    }
    fclose($fp);
    return($in);
}



function ozekiSend($phone, $msg, $debug=false){
      global $ozeki_user,$ozeki_password,$ozeki_url;

      $url = 'username='.$ozeki_user;
      $url.= '&password='.$ozeki_password;
      $url.= '&action=sendmessage';
      $url.= '&messagetype=SMS:TEXT';
      $url.= '&recipient='.urlencode($phone);
      $url.= '&messagedata='.urlencode($msg);

      $urltouse =  $ozeki_url.$url;
      if ($debug) { echo "Request: <br>$urltouse<br><br>"; }

      //Open the URL to send the message
      $response = httpRequest($urltouse);
      if ($debug) {
           echo "Response: <br><pre>".
           str_replace(array("<",">"),array("&lt;","&gt;"),$response).
           "</pre><br>"; }

      return($response);
}



$phonenum = $sento;
$message = $_POST['msg_org'];
$debug = true;

ozekiSend($phonenum,$message,$debug);


  header('Location:send_people.php');
  }
fclose($file);


?>
