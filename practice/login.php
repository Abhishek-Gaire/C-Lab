<?php
    $host="localhost";
    $user="root";
    $password="";
    $databaseName="Login";

    $conn=new mysqli($host,$user,$password,$databaseName);
    if ($conn->connect_error)
    {
        die("connection failed!");
    }
    if (isset($_POST["login"])) {
        $email = $_POST["email"];
        $password = $_POST["password"];
        //password encrypted gareni hunxa nagarenee hunxa
        $passwordHash = password_hash($password, PASSWORD_DEFAULT);

        /* yo validate using php bhanyo bhane matra
        $errors = array();
        
        if (empty($fullName) OR empty($email) OR empty($password) OR empty($passwordRepeat)) {
         array_push($errors,"All fields are required");
        }
        if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
         array_push($errors, "Email is not valid");
        }
        if (strlen($password)<8) {
         array_push($errors,"Password must be at least 8 charactes long");
        }
        */
        /*
        yo chahidaina
        $sql = "SELECT * FROM users WHERE email = '$email'";
        $result = mysqli_query($conn, $sql);
        $rowCount = mysqli_num_rows($result);
        if ($rowCount>0) {
         array_push($errors,"Email already exists!");
        }
        if (count($errors)>0) {
         foreach ($errors as  $error) {
             echo "<div class='alert alert-danger'>$error</div>";
         }
        }
        */
         $sql = "INSERT INTO users ( email, password) VALUES (?, ? )";
         // users bhaneko table ho
         $stmt = mysqli_stmt_init($conn);
         $prepareStmt = mysqli_stmt_prepare($stmt,$sql);
         if ($prepareStmt) {
             mysqli_stmt_bind_param($stmt,"sss", $email, $passwordHash);
             mysqli_stmt_execute($stmt);
             echo "<div class='alert alert-success'>You are login successfully.</div>";
         }
         else{
             die("Something went wrong");
         }
        }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dynamic Login</title>
</head>
<body>
    <div >
        <form action="" method="POST">
            <div>
                Email:<input type="email" name="email">
            </div>
            <div>
                Password:<input type="password" name="password">
            </div>
            <div>
                <input type="submit" name="login">Log In
            </div>
        </form>
    </div>
</body>
</html>