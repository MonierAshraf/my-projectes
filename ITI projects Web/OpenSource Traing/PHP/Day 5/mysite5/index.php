<?php
session_start();
if(!empty($_SESSION['name'])) {
    header('location:plan.php');
}
require 'connection.php';
if(isset($_POST['login'])) {
    $user = $_POST['name'];
    $pass = $_POST['password'];
    if(empty($user) || empty($pass)) {
        $message = 'All field are required';
    } else {
        $query = $conn->prepare("SELECT name, password FROM t2 WHERE name=? AND password=? ");
        $query->execute(array($user,$pass));
        $row = $query->fetch();
        if($query->rowCount() > 0) {
            $_SESSION['name'] = $user;
            header('location:plan.php');
            //echo "Logged in";
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
    Username: <input type="text" name="name" placeholder="username">
    <br/><br/>
    Password: <input type="password" name="password" placeholder="password">

    <br/><br/>
    <input type="submit" name="login" value="Login">

</form>

</html>