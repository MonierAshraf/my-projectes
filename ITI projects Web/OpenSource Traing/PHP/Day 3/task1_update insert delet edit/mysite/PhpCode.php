


//insert


<?php

$dsn="mysql:host=localhost;dbname=d1";

$username="root";
$password="";
try{
    $com=new PDO($dsn,$username,$password);

    $name = @($_POST["name"]);
    $email = @($_POST["email"]);
    $mobile = @($_POST["mobile"]);
    $subject = @($_POST["subject"]);
    $message = @($_POST["message"]);

    $q="INSERT INTO products (name,email,mobile,subject,message) VALUES ('$name','$email','$mobile','$subject','s$message')";
    $com->exec($q);
    header('location:index.php');
}
catch (PDOxcception $e){echo$e->getMessage();}
?>






