<?php

$reg_page=$_POST['reg_page'];
$tname=$_POST['tname'];
$tpass=$_POST['tpass1'];
$user1=$_POST['leader'];
$email1=$_POST['email_1'];
$user2=$_POST['user'];
$email2=$_POST['email_2'];
$sex=$_POST['sex'];
$roll=$_POST['roll'];
$year=$_POST['year'];
$dept=$_POST['dep'];
$mobile=$_POST['mobile'];


$flag = 0;

header("Cache-Control: no-cache, must-revalidate");
include "header.php";

?>
<script type="text/javascript">
document.title= "Code Crackers New User Registration";
</script>


<?php if($reg_page): /////Came from register.html/////<!---------Registration processing begins----------> ?>


<?php
$t=time();
include "dbconnect.php";
/*
$query="SELECT count(*) FROM user ".
	"WHERE username=\"$username\"";
$result = stripSlashes($query) ;
$result = mysql_query($query) or die(mysql_error());
$row=mysql_fetch_array($result);
mysql_free_result($result);

if($row[0]==0)
{
	$flag=1;
}
else
{
	echo "<center><h3>Error 203: Username already exists.<br> Please <a href=\"register.php?t="; echo $t; echo "\">Register</a> again with a different username!!!</h3></center>";
	$flag=0;
}*/
$query="SELECT * FROM team ".
		"WHERE tname=\"$tname\"";
$result = stripSlashes($query) ;
$result = mysql_query($query) or die(mysql_error());

$exists_team=mysql_num_rows($result);
if(!$exists_team)
	{
		$flag=1;
	}
	else
	{
		echo "<center><h3>Error 203: Team already exists.<br> Please <a href=\"register.php?t="; echo $t; echo "\">Register</a> again with a different Teamname!!!</h3></center>";
	$flag=0;
}

/*if($flag)
{
	$query="SELECT * FROM team ".
		"WHERE tname=\"$tname\"";
	$result = stripSlashes($query) ;
	$result = mysql_query($query) or die(mysql_error());

	$exists_team=mysql_num_rows($result);
	if(!$exists_team)
	{
		$flag=1;
	}
	else
	{
		$row=mysql_fetch_array($result);
		$pass=$row['tpass'];
		if($tpass == $pass)
		{
			$user2=$row['user2'];
			if($user2=="")
			{
				$flag=1;
				$user1=$row['user1'];
			}
			else
			{
				echo ("Sorry, this team already has two members!");
				$flag=0;
			}
		}
		else
		{
			echo "The Team Password is invalid!";
			$flag=0;
		}
	}
}
*/
mysql_free_result($result);

if($flag)
{
	$tid=time()%1000;
	$len=strlen($tname);
	for($i=1;$i<=$len;$i++)
	{
		$tid=($tid + 3 + ($tid + $i)) % 100000;
	}
	$query = "insert into team
    	    (tname,tpass,user1,email1,user2,email2,sex,roll,dep,year,mobile,tid) values
        	('$tname','$tpass','$user1','$email1','$user2','$email2','$sex','$roll','$dept','$year','$mobile',$tid)";
	$result = stripSlashes($query);
	mysql_query($query) or die('Could not update DB \'user\':'.mysql_error());
	
	/*$query="SELECT * FROM score ".
		"WHERE tname=\"$tname\"";
	$result = stripSlashes($query) ;
	$result = mysql_query($query) or die(mysql_error());
	$exists_score=mysql_num_rows($result);
	mysql_free_result($result);
	
	
	if(!$exists_score)
	{*/
	$query="SELECT * FROM score ";
	$result = mysql_query($query) or die(mysql_error());
	$no_of_teams = mysql_num_rows($result);
	mysql_free_result($result);

	$query = "INSERT INTO score ".
		"VALUES('$tname',0,0,0,0,$no_of_teams+1)";
	$result = stripSlashes($query) ;
	mysql_query($query) or die('SQL error:'.mysql_error());
	//}
	
	/*if(!($exists_team))
	{
		$tid=time()%1000;
		$len=strlen($tname);
		for($i=1;$i<=$len;$i++)
		{
			$tid=($tid + 3 + ($tid + $i)) % 100000;
		}
		$query = "insert into team ".
			"(tname,tpass,user1,user2,tid) ".
			"values('$tname','$tpass','$username','','$tid')";
	}
	else
	{
		$query = "update team ".
			"set user2='$username'".
			"where tname='$tname'";
	}
	$result = stripSlashes($query) ;
	mysql_query($query) or die('SQL error:'.mysql_error());
*/
	echo "<center><h3>You have been successfully registered !!!";
	echo "<br>Click here to <a href=\"index.php?t=$t"; echo $t; echo "\">compete</a></h3></center>";
}

///////Processed page since came from register.html
?>

<?php else: //////////Opened this page by typing in the URL directly into address bar of web-browser!//////////  ?>

<p align="center"><b><h3>Looks like the Penguin has learnt flying!!! <br>Error 503: Bad bad Server</h3>
<?php echo date("d-m-Y H:i:s", mktime()); ?></b></p>

<?php endif; ?>

<!------Inserted this $reg_page feature as someone would try to insert blank entries into the MySQL table by opening this script through typing the URL directly into the address bar.----------->

<!-- -------End of Processing----------------------- --></div>
<div class="footer" style="position: relative;top: 20px">
		  <p><a href="http://google.com">Ojass '10</a> | <a href="contact.php">Contact Us</a> | <a href="http://jigsaw.w3.org/css-validator/check/referer">CSS</a> and <a href="http://validator.w3.org/check?uri=referer">XHTML</a><br />
			</p>
		</div>
	</div>
</body>
</html>
