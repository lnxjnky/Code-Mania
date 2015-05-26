<?php
header("Cache-Control: no-cache, must-revalidate");
if($_COOKIE!=null){
$user=$_COOKIE['userstats'];
}
$t=time();
if(isset($user))
{
	if($user["loggedin"])
	{
		header("Location:home.php?t=$t");
	}
}
?>



<!-- html starts here -->

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
	<link rel="stylesheet" href="css/style.css" type="text/css" />
	<title>The Code Mania</title>
	<link rel="shortcut icon" href="images/favicon.jpg">
<style type="text/css">
<!--
body,td,th {
	color: #000000;
	filter: opacity:50;
	background-image: url(images/background.png);
	background-repeat: repeat;
}
-->
</style>
</head>
<body background="images/background.png">
	<div align="center" class=""><h1><img src="images/code_mania_24.png" alt="header" width="1003" height="127" /></h1>
	</div>
	<div class="bar">
			<ul>
				<li class=""><a href="#">Compete</a></li>
				<li><a href="faq.php?t=<?php echo $t; ?>" title="FAQ">FAQs</a></li>
				<li><a href="contact.php?t=<?php echo $t; ?>" title="Contact us">Contact Us </a></li>
				<li><a href="sample.php?t=<?php echo $t; ?>" title="Sample">Sample Program</a></li>
				<li><a href="register.php?t=<?php echo $t; ?>" title="Register Here">Registration</a></li>
			</ul>
</div>
		<div class="">
		<div class="left"><h2><strong>Code Mania</strong></h2>
	      <div class="">
				<img src="images/bigimage.jpg" alt="Big Image" width="173" height="113" class="image" />
				<h2 style="background:none">Code Mania </h2>
				<p><strong>The best programmers are not marginally better than merely good ones. They are an order-of-magnitude better, measured by whatever standard: conceptual creativity, speed, ingenuity of design, or problem-solving ability.Code-Mania at OJASS gives you an opportunity to show case your analytical skills, brilliance and ingeniousness at deciphering problems and cracking them. Get ready for revelling in the battle of codes!!!!</strong></p>
	  	  </div>
			<div class="">
			  <h2><strong>Online
		      </h2>
			  <div class="">
				<img src="images/2.jpeg" alt="Big Image" width="171" height="124" class="image" />
				<p><strong>Code Mania is a fully automated online programming contest judge system.So come, code, challenge yourself... prove your intelligence and win recognition for yourself and your college.</strong></p>
				<p><br><br><br>
			<center><font style='font-size:13px; font-weight:bold; color:#6600ff'>Best Viewed in MOZILLA FIREFOX and GOOGLE CHROME</font></center>
				</p>
			  </div>
		  </div>
		</div>	
		<div>
			<h3>Login To The Arena </h3>
			<div>
				<form name="loginform" action="verify.php?t=<?php echo $t; ?>" method="POST">
					<table bgcolor="none">
						<tr>
							<td width="86"><strong>Team Name</strong></td>
						  <td width="229"><input name="tname" type="text" id="tname"></td>
						</tr>
						<tr>
							<td><strong>Password</strong></td>
							<td><input name="tpass" type="password" id="tpass"></td>
						</tr>
						<tr>
							<td colspan="2" align="center"><input name="submit"  type="submit" value="Login"></td>
						</tr>
						<tr>
							<td colspan="2"><a href="register.php" ><strong>Register</strong></a></td>
						</tr>
					</table>
				</form>
				<p>&nbsp;</p>
			</div>
			
			
		</div>
	</div>	
<div class="footer">
  <p>&nbsp;</p>
</div>
	
</body>
</html>
