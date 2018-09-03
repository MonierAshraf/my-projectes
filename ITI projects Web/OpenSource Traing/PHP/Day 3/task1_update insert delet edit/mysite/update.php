

<?php

$dsn="mysql:host=localhost;dbname=d1";

$username="root";
$password="";
try{
    $com=new PDO($dsn,$username,$password);
$id=@($_POST['id']);
    $name = @($_POST["name"]);
    $email = @($_POST["email"]);
    $mobile = @($_POST["mobile"]);
    $subject = @($_POST["subject"]);
    $message = @($_POST["message"]);

    $q="Update products Set name ='$name',email='$email',mobile='$mobile',subject='$subject',message='$message' where  id=$id";
    $com->exec($q);
    header('location:select.php');
}
catch (PDOxcception $e){echo$e->getMessage();}
?>

