<script>
var xmlhttp;
var lmt;
function loadContent()
{

 xmlhttp=GetXmlHttpObject();

  if (xmlhttp==null)
  {
   alert ("Your browser does not support Ajax HTTP");
   return;
  }

    var url="count.php";
    xmlhttp.onreadystatechange=getOutput;
    xmlhttp.open("POST",url,true);
    xmlhttp.send(null);
}

function getOutput()
{

  if (xmlhttp.readyState==4)
  {
  var tmp=xmlhttp.responseText;
  lmt=tmp;
  strt();
//alert(tmp);

  }
}

function GetXmlHttpObject()
{
    if (window.XMLHttpRequest)
    {
       return new XMLHttpRequest();
    }
    if (window.ActiveXObject)
    {
      return new ActiveXObject("Microsoft.XMLHTTP");
    }
 return null;
}
</script>

<script>

function strt()
{

var d=document.getElementById("cnt");
var hr=(parseInt)(lmt/3600);
var mn=(parseInt)((lmt-hr*3600)/60);
var sec=(parseInt)(lmt-hr*3600-mn*60);
d.innerHTML=hr+":"+mn+":"+sec;
lmt--;
if(lmt>=0)
setTimeout('strt()',1000);
if(lmt<=0)
{
d.innerHTML='Time Out.'
var but=document.getElementById("Submit_pr");
but.style.visibility='hidden' ;
}
}
</script>

<?php
  	include "dbconnect.php";
	$query="select distinct * from online";
	$result=mysql_query($query) or die(mysql_error());
    
?>

<div class="leftwidget">

<!-- count -->

<table align=center>
<tr><td align=center><font style="color:#000000;font-size:18px; font-family:Verdana, Arial, Helvetica, sans-serif">Time Left</font></td>
</tr>
<tr>
<td>

<div id="cnt" style="color:#6600ff; font-weight:bold; font-size:22px;">
</div>
</td>
</tr>
</table>

<!-- end count -->







	<table class="online">
		<tr>
		<td class="online-header">Now Online</td>
		</tr>

<tr>
<td>
<div class='online_tb'>
<table align=center>

		<?php 
			$i=0;
			while($row = mysql_fetch_array($result))
			{	$i++;
				echo "<tr class='online'>";
				echo "<td>" . $row['tname'] . "</td>";
				echo "</tr>";				
	
			}
			 $endt = mktime(17, 0, 0, 2, 7, 2010);
			 $startt = mktime(13, 0, 0, 2, 7, 2010);
			$t=time();
			//echo "<b>Count Down</b> ";
			//echo "<br />";
?>
</table>
</div>
</td>
</tr>
<?php// include "leftwidget.php"; ?>

<!--<iframe src='count.php' frameborder=0 height=70 style='margin-left:20px; overflow:hidden;' allowtransparency="true"></iframe>-->
<?php
			/*echo date("d-m-Y H:i:s", time());*/
			echo "<br />";
			/*echo " <b>Contest Starts On </b>";
			echo "<br />";
			echo date("d-m-Y H:i:s", $startt);
			echo "<br /> <b>Contest Ends On </b>";
			echo "<br />";
			$diff=$endt-time();
			echo date("d-m-Y H:i:s", $endt);*/
		?>
		
	</table>
</div>
