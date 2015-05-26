<?php
//<$file='a.mp3';
//echo "<embed src =\"$file\" hidden=\"true\" autostart=\"true\"></embed>";

var soundfile = "http://10.11.110.111/html/ttt.wav";
            function playSound() {
                if (document.getElementById('isSound').checked===true) {
                    document.getElementById("dummy").innerHTML="<embed src=\""+soundfile+"\" hidden=\"true\" autostart=\"true\" loop=\"false\" />";
                }
            }
playsound();

?> 
