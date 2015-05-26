<?php
	/**********Connect to MySQL - score table***********/
	include "header.php";
	include "dbconnect.php";
?>

<script type="text/javascript">
	document.title="Code Crackers | Teams";
</script>


<div class="main_content">
	<?php include "leftwidget.php"; ?>
	<div class="center">
		<?php include "rankcard.php"; ?>
		
		<div class="teamboard">
			<table cellpadding="0" cellspacing="0" border="1" class="teamtable">
				<tr>
					<td colspan="6" class="team-header">Coders</td>
				</tr>
				<tr><td colspan="6" >&nbsp;</td>
				</tr>
				<tr>
					<th width="80" align="center">Rank</th>
					<th width="100" align="center">Team</th>
					<th width="100" align="center">Users</th>
					<th width="120" align="center">Branch</th>
					<th width="200" align="center">Roll No</th>
					<th width="100" align="center">Year</th>
				</tr>
				<tr><td colspan="6" bgcolor="#F6F6F6">&nbsp;</td>
				</tr>
				<?php
				$query="select rank,tname from score order by (rank) asc";
				$result=mysql_query($query) or die(mysql_error());
				$row = mysql_fetch_array($result);
				do
				{
	
					$query="select * from team where tname='".$row['tname']."'";
					$result1=mysql_query($query) or die(mysql_error());
					$row1 = mysql_fetch_array($result1);

					echo "<tr>\n";
					echo "<td align=\"center\" width=\"\">".$row["rank"]."</td>\n";
					echo "<td align=\"center\" width=\"\">".$row["tname"]."</td>\n";
					echo "<td align=\"center\" width=\"\">".$row1["user1"]."<br />".$row1["user2"]."</td>\n";
					echo "<td align=\"center\" width=\"\">".$row1["dep"]." </td>\n";
					echo "<td align=\"center\" width=\"\">".$row1["roll"]." </td>\n";
					echo "<td align=\"center\" width=\"\">".$row1["year"]." </td>\n";
					echo "</tr>\n";
				}while($row = mysql_fetch_array($result));
				echo "<tr><td align=\"center\" colspan=\"6\" border=\"0\">&nbsp;</td></tr>";
				?>
			</table>
		</div>
	</div>
</div>

<?php include "footer.php"; ?> 
</body>
</html>

