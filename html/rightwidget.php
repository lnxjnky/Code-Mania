<?php
include "dbconnect.php";
$query="select * from score order by rank";
$result=mysql_query($query) or die(mysql_error());
?>	
<div class="rightwidget"
	<div class="leaderboard-heading">
		<h2><center>Leader Board</center><hr/></h2>
<table >
	<?php
     for($c=1 ; $c <11 ; $c++)	
	 {
	 $row = mysql_fetch_array($result);

	 ?>
		<tr class='ldr_brd'>
		<td width="140"><?php echo  $row['tname'] ; ?></td><td><?php echo  $row['score'] ; ?></td>
	</tr>
	<?php
	}
	?>	 
	</table>

	</div>	
	
</div>
  
