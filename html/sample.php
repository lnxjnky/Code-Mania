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
document.title=document.title + " | Sample Program";
</script>
<div class="main_content">
	<?php if ($loggedin){
		include "leftwidget.php";
		echo "<div class=\"center\">";
		
			include "rankcard.php"; 
		}?></div>
<p style="color: black;font-size: 14px";>		
Submitting a Solution :

To submit a solution choose problem from list of problems and press button 'Submit' in the bottom of the problem page. You can submit multiple submissions to each problem. Score for the problem is indicated against the problem.
<br /><br />
A sample program of C++ is given as under.<br /></p>
		<h3>C++</h3>
		<hr />
		<span style="color: #339933;">#include &lt;iostream&gt;<br />
                #include &lt;stdio.h&gt;</span><br />
		<p style="color: black;">using namespace std;</br><br />
		int main(){<br />
		&nbsp;&nbsp;cout<<"Welcome to Code Mania";<br />
                &nbsp;&nbsp;return 0;<br />
		}

		<hr />
</p>

<p style="color: black;font-size: 14px";>
A sample program of JAVA is given as under.</p>
		<h3>JAVA</h3>
		<hr />
		<span style="color: #339933;">import java.io.*;<br />
                import java.util.*;</span><br />
		<p style="color: black; ">

class <label style='color:blue; '>TeamName</label><br/>

{<br/>

    public static void main(String args[])<br/>

    {<br/>

	    System.out.println("Hello World");<br/>

    }<br/>


}



		<hr /></p>
	
		<?php if($loggedin)
			echo "</div>";
		?>


<?php include "footer.php"; ?> 
</body>
</html>

