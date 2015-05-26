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
document.title=document.title + " | FAQs";
</script>


<div class="main_content">
	<?php if ($loggedin){
		include "leftwidget.php";
		echo "<div class=\"center\">";
		
			include "rankcard.php"; 
		}?>		
			<div class="faq">
				<div class="faq-head"><h3>Judging</h3></div>
				
				<p>After you have submitted the source code for judging,  
				your submission will be run with one or several sets of input data and the 
				results will be reviewed. 
				The judges will respond to your submission with one of the following messages.  
				<br/>
				</p>
				<br/>
				<p>* <strong>CORRECT ANSWER :</strong> Congratulations, you have just solved the problem.</p>
				<p>* <strong>COMPILE  ERROR :</strong> The judges was unable to compile your program. Check whether <br/>
				&nbsp; &nbsp;1. You  submitted the correct source code.<br>
				&nbsp; &nbsp;2. You  tested the compilation before submitting the file.</p>
				&nbsp; &nbsp;<b>Do not include conio.h and do not use functions like getch() e.t.c </b>which are platform dependent. Remember your code should be ANSI C complaint.
				<p>* <strong>WRONG  ANSWER :</strong>Your  program did not produce the expected results.<br/>
				The  output of your program may be incorrectly formatted. Check that the significant  digits, delimiters, whitespace, spelling, etc., in your program's output conform to that given in the problem description.<b>Please do not print anything extra like "enter the value of n" e.t.c.</b> Only print what is given in problem.</p>
				
				<p><strong>&quot;Time Limit Exceeded&quot; </strong>means your program exceeded the 4 second time limit. Optimize your approach of the problem.</p>
				<p><strong>&quot;Abnormal Termination&quot;</strong> means your program did compile properly but it did not execute properly (segmentation fault etc) . </p>
				<p><strong>Each incorrect submission will attract a 10min penalty </strong></p>
<p><strong>Please Dont Use any kind of System call ( fork(),kill(),freopen(),fopen()..etc) </strong></p>

				<div class="faq-head"><h3>Ranking</h3></div>
				<p>Ranking will be based on total points of the team.<br /> In case of the tie<b> Total penalty(= 10 * no. of incorrect submission) + Latest Successful Submission Time</b> will be taken to break the tie.<br /> On further tie the run time of the problem will be taken to break the tie. </p>
				
				<div class="faq-head"><h3>FAQS</h3></div>
				<p>Make sure you are using a compiler that complies with the standards. Turbo C++ is not such a compiler, and often code which compiles in Turbo C++ will not compile on server.

Make sure you are using standard headers. Do not use conio.h in C; this is not part of the C standard library. Do not use iostream.h this is a deprecated header file and again is not a standard library. (You should just be using iostream instead).</p></ br>

				<p><b>Q :</b> I am  convinced that my code is correct but the judge is still not accepting it.<br/></p>
				<b>A :</b> You may post your query in the chat box with your CID(displyed in Judge status) of problem and team name. Moderators will look into your query and respond to the same.</p>
				<p><b>Q : </b>I am a newbie to programming. How to get started?<br/>
				<b>A :</b> You can get started at few of these sites</br>
				   &nbsp;&nbsp;&nbsp;&nbsp;<a href="http://www.codechef.com">Codechef</a></br>
				   &nbsp;&nbsp;&nbsp;&nbsp;<a href="http://www.spoj.pl">SPOJ</a></br>
				</p>

				<div class="faq-head"><h3>Palagrism</h3></div>
				</br><p>Any sort of palagrism found in the solutions of any 2 teams will be debarred without notice. Also no discussion on the approach of the problem or the test cases will be discussed in the chat room. Kindly refrain from these activities for the smooth conduct of the contest.</ p></br>
			</div>
		<?php if($loggedin)
			echo "</div>";
		?>
</div>

<?php include "footer.php"; ?> 
</body>
</html>

