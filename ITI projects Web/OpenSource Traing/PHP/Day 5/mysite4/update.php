

<?php

require 'connection.php';
try{

$id=@($_POST['id']);
    $name = @($_POST["name"]);
    $password = @($_POST["password"]);
    $email = @($_POST["email"]);
    $mobile = @($_POST["mobile"]);

    $q="Update products Set email='$email',mobile='$mobile' where  id=$id";

    $q2="Update t2 Set name ='$name',password='$password' where  id=$id";

    $com->exec($q);
    $com->exec($q2);
    header('location:select.php');
}
catch (PDOxcception $e){echo$e->getMessage();}
?>

