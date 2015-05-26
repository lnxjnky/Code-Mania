<?php
include "authenticate.php";
include "retrieve.php";
$t=time();
include "header.php";
?>

<script type="text/javascript">
	document.title='Code Mania' + " | Arena" ;
</script>

<div class="main_content">
	<?php include "leftwidget.php"; ?>
	<div class="center">
		<?php include "rankcard.php"; ?>
		<div class="problembox">
			<div class="problembox-header">
				<h2>Select A Problem Statement From The Following:<hr/></h2>
			</div>
			
			<table width="600" border="1" align="center">
			<tr>
				<td width="173" rowspan="3">
				<div align="center"><h1>EASY</h1><br />(100 points)
				</div>
				</td>
				<td width="570"><center/>
					<a href="problem.php?probid=1&t=<?php echo $t; ?>">Problem Statement 1</a>
				</td>
			</tr>
			<tr>
				<td><center/>
					<a href="problem.php?probid=2&t=<?php echo $t; ?>">Problem Statement 2</a>
				</td>
			</tr>
			</table>
		
			<br/>
			<table width="600" border="1" align="center">
				<tr>
				<td width="173" rowspan="3">
				<div align="center" class="style4"><h2>MEDIUM</h2><br />(200 points)
				</div>
				</td>
				<td width="570"><a href="problem.php?probid=3&t=<?php echo $t; ?>"><center/>Problem Statement 3</a></td>
				</tr>
				<tr>
				<td><a href="problem.php?probid=4&t=<?php echo $t; ?>"><center />Problem Statement 4</a></td>
				</tr>
			</table>
		
			<br/>
			<table width="600" border="1" align="center">
				<tr>
				<td width="173" rowspan="3">
					<div align="center" class="style4"><h2>HARD</h2><br />(400 points)
					</div>
				</td>
				<td width="570" rowspan="3">
					<center/><a href="problem.php?probid=5&t=<?php echo $t; ?>">Problem Statement 5</a>
				</td>
				</tr>
				<!--<tr>
				<td><a href="problem.php?probid=6&t=<?php echo $t; ?>"><center />Problem Statement 6</a></td>
				</tr>-->
			</table>
		</div>
		<?php include "rightwidget.php"; ?> 
	</div>
</div>

<?php include "footer.php"; ?> 

</body>
</html>
