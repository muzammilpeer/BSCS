﻿var xmlhttp

function deleteRow(i){
    document.getElementById('myTable').deleteRow(i)
}

function showMenuBar(opt)
{
xmlhttp=GetXmlHttpObject();
if (xmlhttp==null)
  {
  alert ("Your browser does not support XMLHTTP!");
  return;
  }
var url="tst.php";
url=url+"?q="+opt;
url=url+"&sid="+Math.random();
xmlhttp.onreadystatechange=stateChangedMenuBar;
xmlhttp.open("GET",url,true);
xmlhttp.send(null);
}
function stateChangedMenuBar()
{
if (xmlhttp.readyState==4)
  {
  document.getElementById("menubar").innerHTML=xmlhttp.responseText;
  }
}
var temp;
function changeRigths(email,rights)
{
//alert("hello "+email+rights);
/*
if (rights.length==0 || email.length == 0)
  {
  document.getElementById(email+"status").innerHTML="not completed";
  return;
  }
  temp = email;*/
xmlhttp=GetXmlHttpObject();
if (xmlhttp==null)
  {
  alert ("Your browser does not support XMLHTTP!");
  return;
  }
var url="processing.php";
url=url+"?grp="+rights;
url=url+"&email="+email;
url=url+"&sid="+Math.random();
xmlhttp.onreadystatechange=ChangeRoles;
xmlhttp.open("GET",url,true);
xmlhttp.send(null);
//alert("hello new "+email+rights);

}

function ChangeRoles()
{
if (xmlhttp.readyState==4)
  {
  alert(xmlhttp.responseText+" has assigned new Role");
  //document.getElementById("Status").innerHTML=xmlhttp.responseText;
  }
}


function showHint(email,str)
{
if (str.length==0)
  {
  document.getElementById("txtHint").innerHTML="";
  return;
  }
xmlhttp=GetXmlHttpObject();
if (xmlhttp==null)
  {
  alert ("Your browser does not support XMLHTTP!");
  return;
  }
var url="tst.php";
url=url+"?q="+str;
url=url+"&p="+email;
url=url+"&sid="+Math.random();
xmlhttp.onreadystatechange=stateChanged;
xmlhttp.open("GET",url,true);
xmlhttp.send(null);
}

function stateChanged()
{
if (xmlhttp.readyState==4)
  {
//  document.getElementById("menubar").innerHTML=xmlhttp.responseText;
  document.getElementById("mainbody").innerHTML=xmlhttp.responseText;
  }
}

function ShowBody(menubars,optnos)
{
/*if (str.length==0)
  {
  document.getElementById("txtHint").innerHTML="";
  return;
  }*/
xmlhttp=GetXmlHttpObject();
if (xmlhttp==null)
  {
  alert ("Your browser does not support XMLHTTP!");
  return;
  }
var url="tst.php";
url=url+"?menubar="+menubars;
url=url+"&optno="+optnos;
url=url+"&sid="+Math.random();
xmlhttp.onreadystatechange=ShowBodyChanged;
xmlhttp.open("GET",url,true);
xmlhttp.send(null);
}

function ShowBodyChanged()
{
if (xmlhttp.readyState==4)
  {
//  document.getElementById("mainbody").innerHTML=null;
  document.getElementById("mainbody").innerHTML=xmlhttp.responseText;
  }
}



function ListUser(str)
{
if (str.length==0)
  {
  document.getElementById("refreshtable").innerHTML="";
  return;
  }
xmlhttp=GetXmlHttpObject();
if (xmlhttp==null)
  {
  alert ("Your browser does not support XMLHTTP!");
  return;
  }
var url="response.php";
if ( str == "13")
{str="*";}
url=url+"?q="+str;
url=url+"&sid="+Math.random();
xmlhttp.onreadystatechange=stateChangedListUser;
xmlhttp.open("GET",url,true);
xmlhttp.send(null);
}

function stateChangedListUser()
{
if (xmlhttp.readyState==4)
  {
  document.getElementById("refreshtable").innerHTML=xmlhttp.responseText;
  }
}


function GetXmlHttpObject()
{
if (window.XMLHttpRequest)
  {
  // code for IE7+, Firefox, Chrome, Opera, Safari
  return new XMLHttpRequest();
  }
if (window.ActiveXObject)
  {
  // code for IE6, IE5
  return new ActiveXObject("Microsoft.XMLHTTP");
  }
return null;
}
