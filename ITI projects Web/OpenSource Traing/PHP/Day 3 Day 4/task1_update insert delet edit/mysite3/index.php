<?php
/**
 * Created by PhpStorm.
 * User: MonierAshraf
 * Date: 9/3/2018
 * Time: 3:04 PM
 */
?>
<?php
/*session_start();
if(!empty($_SESSION['username'])) {
    header('location:plan.php');
}*/
require 'connection.php';
if(isset($_POST['login'])) {
    $user = $_POST['username'];
    $pass = $_POST['password'];
    if(empty($user) || empty($pass)) {
        $message = 'All field are required';
    } else {
        $query = $conn->prepare("SELECT name, password FROM t2 WHERE name=? AND password=? ");
        $query->execute(array($user,$pass));
        $row = $query->fetch();
        if($query->rowCount() > 0) {
            /*$_SESSION['username'] = $user;
            header('location:plan.php');*/
            echo "Logged in";
        } else {
            $message = "Username/Password is wrong";
        }
    }
}
?>

<!DOCTYPE html>
<html>
<head>
</head>
<body>
<?php
if(isset($message)) {
    echo $message;
}
?>
<form action="<?php $_PHP_SELF?>" method="post">
    Username: <input type="text" name="username" placeholder="username">
    <br/><br/>
    Password: <input type="password" name="password" placeholder="password">

    <br/><br/>
    <input type="submit" name="login" value="Login">

</form>

</html>
