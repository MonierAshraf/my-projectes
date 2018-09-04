


//insert


<?php
require 'connection.php';


try{

    $name = @($_POST["name"]);
    $password = @($_POST["password"]);
    $email = @($_POST["email"]);
    $mobile = @($_POST["mobile"]);

   $q1="INSERT INTO products  (email,mobile) VALUES ('$email','$mobile')";

    $q="INSERT INTO t2  (name,password) VALUES ('$name','$password')";

    $com->exec($q);
    $com->exec($q1);
    header('location:index.php');
}
catch (PDOxcception $e){echo$e->getMessage();}
?>






