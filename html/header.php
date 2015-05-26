<?php

/************Check if a user is logged in*************/
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
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<meta http-equiv="content-type" content="text/html;charset=iso-8859-1" />
	<link rel="stylesheet" href="css/style.css" type="text/css" />
	<title>The Code Mania</title>
	<link rel="shortcut icon" href="images/favicon.jpg">
</head>

<body background="images/background.png" onload='javascript:loadContent();'>
<div class="content">
<img src="images/code_mania_24.png" alt="header" width="1046" height="121" />
<!-------- Display the following information if User in logged in ------------>
<?php if($loggedin): ?>
<div class="bar">
			<ul>
				<li><a href="home.php?t=<?php echo $t; ?>" title="Home">Home</a></li>
				<li><a href="score.php?t=<?php echo $t; ?>" title="Score Card">Score Card </a></li>
				<li><a href="status.php?t=<?php echo $t; ?>" title="Judge Status">Judge Status</a></li>
				<li><a href="teams.php?t=<?php echo $t; ?>" title="Coders">Coders</a></li>
				<li><a href="faq.php?t=<?php echo $t; ?>" title="FAQ">Rules</a></li>
				<li><a href="profile.php?t=<?php echo $t; ?>" title="Profile">Profile</a></li>
				<li><a href="contact.php?t=<?php echo $t; ?>" title="Contact us">Contact Us </a></li>
				<li><a href="chat.php?t=<?php echo $t; ?>" title="Chat Room">Chat Room </a></li>
				<li><a href="sample.php?t=<?php echo $t; ?>" title="Sample">Sample Program</a></li>
				<li><a href="logout.php?t=<?php echo $t; ?>" title="Log Out ">Log Out</a></li>
			</ul>

</div>
<center><iframe src='msg.html' allowtransparency="true" frameborder='0' height=40 width=800px style='margin-left:20px; overflow:hidden;'></iframe></center>

	<?php else: ?>
	<div class="bar">
			<ul>
				<li><a href="index.php">Compete</a></li>
				<li><a href="faq.php?t=<?php echo $t; ?>" title="FAQ">FAQs</a></li>
				<li><a href="contact.php?t=<?php echo $t; ?>" title="Contact us">Contact Us </a></li>
				<li><a href="sample.php?t=<?php echo $t; ?>" title="Sample">Sample Program</a></li>
				<li><a href="register.php?t=<?php echo $t; ?>" title="Register Here">Registration</a></li>
			</ul>
</div>

	<?php endif; ?>
