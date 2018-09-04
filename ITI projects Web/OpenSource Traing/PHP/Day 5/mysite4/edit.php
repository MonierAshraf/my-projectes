<?php
/**
 * Created by PhpStorm.
 * User: MonierAshraf
 * Date: 9/2/2018
 * Time: 2:58 PM
 */
?>



<?php

require 'connection.php';
try{

$id=$_GET['id'];

    $sql="SELECT *  from products,t2 WHERE products.id=t2.id AND products.id=$id";

    $result=$com->query($sql);


    while ($row=$result->fetch()){

        echo"<form method ='post' action='update.php'>";
        echo"<input type ='text' name='id' value='$row[id]'> <br>";

        echo"<input type ='text' name='name' value='$row[name]'> <br>";
        echo"<input type ='text' name='password' value='$row[password]'> <br>";
        echo"<input type ='text' name='email' value='$row[email]'> <br>";
        echo"<input type ='text' name='mobile' value='$row[mobile]'> <br>";


        echo"<input type ='submit' value='send'> <br>";

        echo"</form>";



        echo "</br>";
        echo "</br>";


    }

}
catch (PDOxcception $e){echo$e->getMessage();}
?>

