<!DOCTYPE HTML PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml"><head>

<meta http-equiv="content-type" content="text/html; charset=UTF-8">
<link rel="stylesheet" href="css/style.css" type="text/css">
<title>The Code Crackerss - User Registration</title>
<link rel="shortcut icon" href="logo.jpg">

<script type="text/javascript" src="js/java.js"> </script>
<script type="text/javascript">
	document.title= "Code Crackers | User Registration";
</script>
</head>

<body background="images/background.png" onload="getImg()">
<div class="content"><img src="images/code_mania_24.png" alt="header" width="1083" height="125" />
  <div class="bar">
		<ul>
			<li><a href="index.php?t=1255265506" title="Home">Compete</a></li>
			<li><a href="faq.php?t=1255265506" title="FAQ">FAQs</a></li>
			<li><a href="contact.php?t=1255265506" title="Contact us">Contact Us </a></li>
			<li><a href="sample.php?t=1255265506" title="Sample">Sample</a></li>
			<li class="active"><a href="#">Registration</a></li>
		</ul>
  </div>
	<div class="registration">
		<div class="registration-top">
			<p>New User Registration</p>
		</div>
			
		<form action="reg_user.php" method="POST" enctype="application/x-www-form-urlencoded" name="regform" onsubmit="return validate('user1','mail_1','user2','mail_2','team','tpass','trepass','mbl','rno','dept','yr','imgNo')">
		  <table width="800" bgcolor="" align="center">
            <tbody>
              <tr>
                <td colspan="2"><br/>
                </td>
              </tr>
              <tr>
                <td width="30%">Team Name :</td>
                <td width="50%"><input maxlength="16" name="tname" id="team" type="text" />
                  &nbsp;* </td>
                <td width="20%"><input name="button" onclick="checkTeamName()" value="Check Availability" type="button" />
                </td>
              </tr>
              <tr>
                <td colspan="2"></td>
              </tr>
              <tr>
                <td width="30%">Team Password : </td>
                <td width="50%"><input maxlength="16" name="tpass1" id="tpass" type="password" />
                  &nbsp;* </td>
              </tr>
              <tr>
                <td>&nbsp;</td>
                <td>(Do not use passwords that you use for orkut etc..)</td>
              </tr>
              <tr>
                <td width="30%">Re-type Password :</td>
                <td width="50%"><input maxlength="16" name="tpass2" id="trepass" type="password" />
                  &nbsp;* </td>
              </tr>
              <tr>
                <td colspan="2"></td>
                <td width="50%">&nbsp;</td>
              </tr>
              <tr>
                <td width="30%">Team Leader :</td>
                <td width="50%"><input maxlength="16" name="leader" id="user1" type="text" />
                  &nbsp;* </td>
                </td>
              </tr>
              <tr>
                <td colspan="2"></td>
                <td width="50%">&nbsp;</td>
              </tr>
              <tr>
                <td width="30%">First User Email ID :</td>
                <td width="50%"><input name="email_1" id="mail_1" type="text" />
                  &nbsp;* </td>
              </tr>
              <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
              </tr>
              <tr>
                <td width="30%">Second User Name :</td>
                <td width="50%"><input maxlength="20" name="user" id="user2" type="text" />
                  &nbsp; </td>
              </tr>
              <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
              </tr>
	      <tr>
                <td width="30%">Second User Email ID :</td>
                <td width="50%"><input name="email_2" id="mail_2" type="text" />
                  &nbsp; </td>
              </tr>
              <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
              </tr>
	      <tr>
                <td width="30%"><b>Team Leader Details </b></td>
              </tr>
              <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
              </tr>
              <tr>
                <td width="30%">Sex :</td>
                <td width="50%"><input checked="checked" name="sex" value="M" selected="selected" type="radio" />
                  Male&nbsp;&nbsp;
                  <input name="sex" value="F" type="radio" />
                  Female </td>
              </tr>
              <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
              </tr>
              <tr>
                <td width="30%">Roll No :</td>
                <td width="50%"><input maxlength="10" name="roll" id="rno" type="text" />
                  &nbsp;* </td>
              </tr>
              <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
              </tr>
              <tr>
                <td width="30%">Department :*</td>
                <td width="50%"><select name="dep" id="dept">
                    <option selected="selected" value="">-Select-</option>
                    <option value="CSE">CSE</option>
                    <option value="CE">CE</option>
                    <option value="EE">EE</option>
                    <option value="ECE">ECE</option>
                    <option value="ME">ME</option>
                    <option value="MME">MME</option>
                    <option value="MME">PROD</option>
                    <option value="MCA">MCA</option>
                  </select>
                &nbsp;*</td>
              </tr>
              <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
              </tr>
              <tr>
                <td width="30%">Year :</td>
                <td width="70%"><select name="year" id="yr">
                    <option selected="selected" value="">-Select-</option>
                    <option value="First">Fisrt</option>
                    <option value="Second">Second</option>
                    <option value="Third">Third</option>
                    <option value="Fourth">Fourth</option>
                  </select>
                &nbsp;*</td>
              </tr>
              <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
              </tr>
              <tr>
                <td>Mobile No : </td>
                <td><input maxlength="20" name="mobile" id="mbl" type="text" />&nbsp;*</td>
              </tr>
              <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
              </tr>
              <tr>
                <td>Enter text shown:</td>
                <td align="left"><img src="patterns/D6V5Y.gif" id="secImg" height="60" width="120"/>
                    <div style="position:absolute; margin-top:13px;display:inline;padding-left:10px;">
                      <input size="8px" maxlength="20" name="imgno" id="imgNo" type="text"/>
                      &nbsp;* </div></td>
              </tr>
              <tr>
                <td></td>
                <td>(Letters are not case sensitive)</td>
              </tr>
              <tr>
                <td></td>
                <td>By clicking on 'Register' below, you are agreeing to the Terms of Service of the Program as well as the Privacy Policy. </td>
              </tr>
              <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
              </tr>
              <tr>
                <td width="50%" align="right"><input name="reg_page" value="true" type="hidden" />
                    <input name="Reset" value="Reset" type="reset" />
                </td>
                <td align="left"><input name="submit" value="Register" type="submit" />
                </td>
              </tr>
              <tr>
                <td>&nbsp;</td>
                <td>&nbsp;</td>
              </tr>
            </tbody>

          </table>
		</form>
	</div>
	<br>
</div>
<div class="footer">
  <p><br>
  </p>
</div>

</body>
</html>
