<html>
<body>
<br>
<center>
<h3><b>
Area and Circumference of the Circle</h3>
</center>
<hr>
<% String r=request.getParameter("rad");
int i=Integer.parseInt(r);
out.println("The Radius Of the Circle =" +i);
double a=i*i*3.14; %>
<br>
<br>
<% out.println("The Area Of the Circle =" +a);
double c=2*3.14*i; %>
<br>
<br>
<% out.println("The Circunference Of the Circle =" +c);
%>
<br>
<br>
<hr>
</body>
</html>
