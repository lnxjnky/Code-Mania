<?php
session_start();
$user='root';
$password='a';
$database='cb';
$host='localhost';
$tname=$_SESSION['tname'];
$conn=mysql_connect($host,$user,$password) or die(mysql_error());
mysql_select_db($database) or die(mysql_error());

$query="delete from online where tname='$tname'";
//echo $query;
$tmp=mysql_query($query) or die(mysql_error());

header("Cache-Control: no-cache, must-revalidate");

setcookie("userstats[loggedin]", 0);
$t=time();
if($tmp>0)
header("Location:index.php?t=$t");

//$tname=$_POST['tname'];echo $tname;


?>
