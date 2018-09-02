





<?php /*

$dsn="mysql:host=localhost;dbname=d1";

$username="root";
$password="";
try{
    $com=new PDO($dsn,$username,$password);

    $name = @($_POST["name"]);
    $email = @($_POST["email"]);
    $message = @($_POST["message"]);
    $q="INSERT INTO products (name,email,message) VALUES ('$name','$email','s$message')";
    $com->exec($q);
}
catch (PDOxcception $e){echo$e->getMessage();} */
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
    echo $row ['name']."</br>"; echo $row ['id']."</br>";
}

}
catch (PDOxcception $e){echo$e->getMessage();}
?>

