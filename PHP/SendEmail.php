<?php
use PHPMailer\PHPMailer\PHPMailer;
require 'Authenticate.php';
require 'vendor/phpmailer/phpmailer/src/PHPMailer.php';

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