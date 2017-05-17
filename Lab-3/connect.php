<?

$inputuser = $_POST['user'];
$inputpass = $_POST['pass'];

if ($inputuser == "cristi" && $inputpass == "123") {

header('Location: home.php');

}
else {
header('Location: fail.php');
}



?>
