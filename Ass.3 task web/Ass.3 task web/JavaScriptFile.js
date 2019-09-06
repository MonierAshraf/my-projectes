var eMail = document.getElementById("EMail");





function f1() {
    var fname = document.getElementById("fname").value;
    var lname = document.getElementById("lname").value;
    var password = document.getElementById("Pass-word").value;


    document.getElementById("p1").innerHTML = "Thanks "+fname+",";
    document.getElementById("p2").innerHTML ="User Name : "+fname+lname;
    document.getElementById("p3").innerHTML =" Password : "+password;
     window.open("newpage.html");
         }



