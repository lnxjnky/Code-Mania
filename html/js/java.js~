function createRequestObject()
{ var xmlhttp = false;
        try
        {xmlhttp = new ActiveXObject("Msxml2.XMLHTTP");
        }
        catch (e)
         {try
                {
                        xmlhttp = new ActiveXObject("Microsoft.XMLHTTP");
                  }
                catch (E)
                {
                        xmlhttp = false;
                }
         }
        if (!xmlhttp && typeof XMLHttpRequest!='undefined')
        {
                xmlhttp = new XMLHttpRequest();
        }
        return xmlhttp;
}

function getImg()
{
	var r=Math.random();
	img=document.getElementById('secImg');
	if (r>0.75) 
	{
		img.name="patterns/D6V5Y.gif";
	}
	else if (r>0.5)
	{
		img.name="patterns/K7H5P.gif";
	}
	else if (r>.25)
	{
		img.name="patterns/Q5R3W.gif";
	}
	else
	{
		img.name="patterns/Z3X5E.gif";
	}
	img.src=img.name;
}

function checkTeamName()
{
	var req = createRequestObject();
	req.open("GET",'team_check.php?tname=' + document.getElementById('team').value + '&tpass=' + document.getElementById('tpass').value, true);
	req.onreadystatechange = function()
	{
		if(req.readyState == 4)
		{
			var response = req.responseText;
			alert(response);
		}
	}
	req.send(null);
}

//////////////////////////////////////////no more ajax//////////////////////////////////////////




function validate(id1,id2,id3,id4,id5,id6,id7,id8,id9,id10,id11,id12)
{
	if(document.getElementById(id1).value == "" || document.getElementById(id2).value == "" || document.getElementById(id5).value == "" || document.getElementById(id6).value == "" || document.getElementById(id7).value == "" || document.getElementById(id8).value == "" || document.getElementById(id9).value == "" || document.getElementById(id10).value == "" || document.getElementById(id11).value == "" || document.getElementById(id12).value == "")
	{
		alert("Please fill in all the required fields");
		return false;
	}
	else
	{	
		return (passwdmatch() && verifyEmail(document.getElementById('mail_1').value) && checkImg());
	}
}

function passwdmatch()
{
	if(!(document.getElementById('tpass').value == document.getElementById('trepass').value))	
	{
		alert("Your Team Passwords do not match");
		document.getElementById('tpass').focus();
		return false;
	}
	return true;
}

function verifyEmail(f11)
	{
		var x,i;
		x=f11;
		if(x.length==0)
		{
			alert('Email Not valid');
			return false;
		}
		else if(x.indexOf('@')==-1 || x.indexOf('.')==0 || x.indexOf('@')==0)
		{
			alert('Email Not valid');
			return false;
		}
		else if((x.lastIndexOf('@')==(x.length-1))||(x.lastIndexOf('.')==(x.length-1)))
		{
			alert('Email Not valid');
			return false;
		}
		else if(x.indexOf('@')!=x.lastIndexOf('@'))
		{
			alert('Email Not valid');
			return false;
		}
		else if((x.indexOf('.')+1)==(x.indexOf('@'))||((x.indexOf('@')+1)==x.indexOf('.')))
		{
			alert('Email Not valid');
			return false;
		}
		else 
		{
			for(i=0;i<x.length;i++)
			{
				if((x[i]>='A' && x[i]<='Z')||(x[i]>='a' && x[i]<='z')||(x[i]=='_')||(x[i]=='.')||(x[i]=='@')||(x[i]>='0' && x[i]<='9'))
				{
		
				}
                                else{
			alert('Email Not valid');
			return false;}
			}
		}
return true;

	}

function checkImg()
{	
	imgname=document.getElementById('secImg').name.toUpperCase();
	imgtxt="patterns/" + document.getElementById('imgNo').value + ".gif";
	imgtxt=imgtxt.toUpperCase();
	if (imgname == imgtxt)
	{
		return true;
	}
	else
	{
		alert("Letters do not match the image!");
		document.getElementById('imgNo').focus();
		return false;
	}
}
