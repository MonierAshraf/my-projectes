<?php echo "hello</br>"; ?>

<?php echo 123;



 ?>

<?php $name="monier" ; $age=90;
echo $name ."  " .$age ."</br>";



echo var_dump($name);

?>
<br><br><br>

<?php
$cars = array("Volvo", "BMW", "Toyota");


for($x = 0; $x < count($cars); $x++) {
    echo $cars[$x];
    echo "<br>";
}
?>







<?php

$dsn="mysql:host=localhost;dbname=d1";

$username="root";
$password="";
try{
$com=new PDO($dsn,$username,$password);

    $num1 = @($_GET["num1"]);
    $num2 = @($_GET["num2"]);
    echo " Hello " .$num1 .  $num2;

$q="INSERT INTO products (name)VALUES ('$num1,$num2')";
$com->exec($q);
}
catch (PDOxcception $e){echo$e->getMessage();}
?>


<html>
<head>
    <title>Task</title>
</head>
<body>
<form method='get' action='<?php $_PHP_SELF ?>'>
    <label>Name 1:</label>
    <input type='text' name='num1' />
    <br>
    <label>Name 2:</label>
    <input type='text' name='num2' />
    <br>
    <input type='submit' value='Send'>
</form>
</body>
</html>

