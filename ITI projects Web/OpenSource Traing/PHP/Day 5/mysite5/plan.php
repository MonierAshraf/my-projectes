<?php
session_start();

if(isset($_SESSION['name'])) {
    echo "Welcome <strong>".$_SESSION['name']."</strong><br/>";
    header('location:index2.php');
} else {
    //header('location: index.php');
    echo "no session";
}

?>
<a href="logout.php">Logout</a>