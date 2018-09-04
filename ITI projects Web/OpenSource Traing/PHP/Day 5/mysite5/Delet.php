<?php
/**
 * Created by PhpStorm.
 * User: MonierAshraf
 * Date: 9/2/2018
 * Time: 2:21 PM
 */
?>


<?php


require 'connection.php';

try{


   $id=@($_GET['id']);
    $sql="DELETE FROM products where id=$id";//what your mean
    $sq2="DELETE FROM t2 where id=$id";
    $com->exec($sql);
    $com->exec($sq2);
    header('location:select.php');


}


catch (PDOxcception $e){echo$e->getMessage();}
?>
