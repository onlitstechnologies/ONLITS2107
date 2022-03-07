<?php

use PHPMailer\PHPMailer\PHPMailer;

function send_mail()
{
    require 'Authenticate.php';     //Not required
    require 'vendor/phpmailer/phpmailer/src/PHPMailer.php';
    require 'vendor/phpmailer/phpmailer/src/SMTP.php';
    require 'vendor/phpmailer/phpmailer/src/Exception.php';

    $mail = new PHPMailer();    //Instantiating PHPMailer Class
    $mail->isSMTP();
    $mail->Mailer = "smtp";
    $mail->SMTPDebug = 1;
    $mail->SMTPAuth = TRUE;
    $mail->SMTPSecure = "tls";
    $mail->Port = 587;
    $mail->Host = "smtp.gmail.com";
    $mail->Username = $username;
    $mail->Password = $password;
    $mail->addAddress("manishmishra.shg@gmail.com");
    $mail->setFrom("$username", "Test PHP Mailer");
    $mail->Subject = "OTP";
    $mail->isHTML(true);

    $otp = rand(100000, 999999);
    $mail->addEmbeddedImage('logo.png', 'logo', 'logo');
    $content = '<img src="cid:logo"><h1>The OTP for completion of this process is $otp.</h1>';
    // $content = "Name: $name, Email: $email, Message: $message";

    // $mail->msgHTML($content);
    $mail->Body = $content;

    if (!$mail->send()) {
        echo "The was an error while sending email.";
        var_dump($mail);
    } else {
        echo "OTP sent successfuly!";
    }
    echo ("\n");
}

// $name = $_POST['name'];
// $email = $_POST['email'];
// $message = $_POST['message'];

// send_mail($name, $email, $message);
send_mail();
