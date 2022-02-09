<?php
use PHPMailer\PHPMailer\PHPMailer;
require 'Authenticate.php';
require 'vendor/phpmailer/phpmailer/src/PHPMailer.php';
require 'vendor/phpmailer/phpmailer/src/SMTP.php';

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
$mail->Subject = "OTP based authentication";

$otp = rand(100000, 999999);
$content = "The OTP for completion of this process is $otp.";

$mail->msgHTML($content);

if(!$mail->send()) {
    echo "The was an error while sending email.";
    var_dump($mail);
} else {
    echo "OTP sent successfuly!";
}
echo("\n");