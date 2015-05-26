<?php

/************Check if a user is logged in*************/
header("Cache-Control: no-cache, must-revalidate");
if($_COOKIE!=null){
$user=$_COOKIE['userstats'];
}
$t=time();
if(isset($user))
{
	$tid=$user["tid"];
	$loggedin=$user["loggedin"];
	$logintime=$user["logintime"];
}
else
{
	$loggedin=0;
}
if($loggedin){
	include "retrieve.php";
	$t=time();
	}
include "header.php";
?>
<script type="text/javascript">
document.title=document.title + " | Contact";
</script>


<div class="main_content">
	<?php if ($loggedin){
		include "leftwidget.php";
		echo "<div class=\"center\">";
		
			include "rankcard.php"; 
		}?>		
			<div class="contact">
			<p>If you have any queries regarding the format of the competition, or some technical issues contact:-</p>
			<br/>
			<table width="700" border="1" align="center" cellpadding="5" cellspacing="0" bordercolor="#000000">
			<tr>
				<td><b>NAME</b></td>
				<td><b>PHONE NO</b></td>
				<td><b>GTALK ID</b></td>
				<td><b>Hall &amp; Room</b></td>
			</tr>  
            	<tr>
				<td>Navin Kumar</td>
				<td>8986811361</td>
				<td>coolnvn@gmail.com</td>
				<td>Hall F, Room 123</td>
			</tr>
			<tr>
				<td>Abhilash Arora</td>
				<td>8797908545</td>
				<td>abhilasharora@gmail.com</td>
				<td>Hall F, Room 119</td>
			</tr>
			<tr>
				<td>Vivek Kumar</td>
				<td>8083197963</td>
				<td>vivkumjsr@gmail.com</td>
				<td>Hall F, Room 113</td>
			</tr>
		
			<tr>
				<td>Deep Sinha</td>
				<td>8986811353</td>
				<td>deep_sinha131@sify.com</td>
				<td>Hall F, Room 104</td>
			</tr>
			<tr>
				<td>Vikrant Singh</td>
				<td>9031991089</td>
				<td>vickywiz001@gmail.com</td>
				<td>Hall F, Room 202</td>
			</tr>
			<tr>
				<td>Md. Shahnawaz Alam</td>
				<td>9031812303</td>
				<td>shona92822@gmail.com</td>
				<td>Hall F, Room 203</td>
			</tr>
		
        </table>
			<p>&nbsp;</p>
			</div>
			
		<?php if($loggedin)
			echo "</div>";
		?>
</div>

<?php include "footer.php"; ?> 
</body>
</html>

