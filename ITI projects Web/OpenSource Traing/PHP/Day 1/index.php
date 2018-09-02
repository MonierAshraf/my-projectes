<!--<html>
    <head>
        <title>Task</title>
    </head>
    <body>
        <form method='get' action='<?php $_PHP_SELF ?>'>
            <label>Name:</label>
            <input type='text' name='name' />
            <br>
            <label>Age:</label>
            <input type='text' name='age' />
            <br>
            <label>E-mail:</label>
            <input type='email' name='email' />
            <br>
            <label>Your Message:</label>
            <textarea></textarea>
            <br>
            <input type='submit' value='Send'>
        </form>
    </body>
</html>-->
<?php 
/*$name=@($_GET["name"]);
$age=@($_GET["age"]);
if ($name || $age) {
    echo "Welcome " . $_GET["name"];
    echo ". Your age is  " . $_GET["age"];
}*/
/*$names = array("John","Andrew","George");
foreach ($names as $result) {
    echo $result . "<br>";
} */
/*$x=5;
$y=3;
$z=6;
if ($x < $y) {
    echo "x lower than y";
} elseif ($x < $z) {
    echo "x lower than z";
} else {
    echo "no compare";
}*/
/*$a=3;
for ($i = 0;$a > $i;$i++) {
    echo $i . "<br>";
}*/
$num1 = @($_GET["num1"]);
$num2 = @($_GET["num2"]);
if ($num1 > $num2) {
    echo $num1 . " is higher than " . $num2;
} elseif ($num1 < $num2) {
    echo $num1 . " is lower than " . $num2;
} else {
    echo $num1 . " is equal " . $num2;
}
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