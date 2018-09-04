<?php
/**
 * Created by PhpStorm.
 * User: MonierAshraf
 * Date: 9/2/2018
 * Time: 2:58 PM
 */
?>



<?php

$dsn="mysql:host=localhost;dbname=d1";

$username="root";
$password="";
try{
    $com=new PDO($dsn,$username,$password);


$id=$_GET['id'];

    $sql="SELECT * from products where id=$id";
    $result=$com->query($sql);


    while ($row=$result->fetch()){
        echo"<form method ='post' action='update.php'>";
        echo"<form method ='post' action='update.php'>";
        echo"<input type ='text' name='id' value='$row[id]'> <br>";

        echo"<input type ='text' name='name' value='$row[name]'> <br>";

        echo"<input type ='text' name='email' value='$row[email]'> <br>";
        echo"<input type ='text' name='mobile' value='$row[mobile]'> <br>";
        echo"<input type ='text' name='subject' value='$row[subject]'> <br>";
        echo"<textarea  name='message'  > $row[message]</textarea> <br>"; //not change

        echo"<input type ='submit' value='send'> <br>";




        echo"</form>";



        echo "</br>";
        echo "</br>";


    }

}
catch (PDOxcception $e){echo$e->getMessage();}
?>

