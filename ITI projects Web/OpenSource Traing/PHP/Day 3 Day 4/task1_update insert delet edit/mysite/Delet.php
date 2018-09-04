<?php
/**
 * Created by PhpStorm.
 * User: MonierAshraf
 * Date: 9/2/2018
 * Time: 2:21 PM
 */
?>


<?php


$dsn="mysql:host=localhost;dbname=d1";

$username="root";
$password="";
try{
    $com=new PDO($dsn,$username,$password);

   $id=@($_GET['id']);
    $sql="DELETE FROM products where id=$id";//what your mean
    $com->exec($sql);
    header('location:select.php');


}


catch (PDOxcception $e){echo$e->getMessage();}
?>
