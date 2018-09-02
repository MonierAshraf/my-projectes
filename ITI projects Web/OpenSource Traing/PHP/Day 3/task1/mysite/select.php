//select

<?php
/**
 * Created by PhpStorm.
 * User: MonierAshraf
 * Date: 9/2/2018
 * Time: 10:56 AM
 */
?>

<?php

$dsn="mysql:host=localhost;dbname=d1";

$username="root";
$password="";
try{
    $com=new PDO($dsn,$username,$password);
    $sql="SELECT * from products";

    $result=$com->query($sql);

    

    while ($row=$result->fetch()){
        echo "ID = " .$row ['id']."</br>";
        echo "Name = " .$row ['name']."</br>";
        echo "Email = " . $row ['email']."</br>";
        echo "Mobile = " . $row ['mobile']."</br>";
        echo "Subject = " . $row ['subject']."</br>";
        echo "Message = " . $row ['message']."</br>";
        echo "</br>";
        echo "</br>";
        echo "</br>";


    }

}
catch (PDOxcception $e){echo$e->getMessage();}
?>
