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


   echo "<style type='text/css'>
     table {
    font-family: arial, sans-serif;
    border-collapse: collapse;
    width: 100%;
}

td, th {
    border: 1px solid #dddddd;
    text-align: left;
    padding: 8px;
}

tr:nth-child(even) {
    background-color: #dddddd;
}
   </style>";
    echo "<table   ><tr><th>ID </th><th>Name</th><th>Email</th><th>Monbile</th><th>Subject</th><th>Message</th><th>Mangement</th></tr>";

    while ($row=$result->fetch()){
        $id=$row ['id'];

        $name=$row ['name'];

        $email =$row ['email'];

         $mobile = $row ['mobile'];
        $subject =  $row ['subject'];
        $message= $row ['message'];

        echo "<tr><td >$id</td><td>$name</td><td>$email</td><td>$mobile</td><td>$subject</td><td>$message</td>
<td style='word-spacing: 15px'><a href='Delet.php?id=$row[id]'>Delet   </a> <a href='edit.php?id=$row[id]'> Edit </a></td></tr>";


    }

echo  "</table>";
}
catch (PDOxcception $e){echo$e->getMessage();}
?>

