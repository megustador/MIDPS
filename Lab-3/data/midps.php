<?

$inputuser = $_POST['user'];
$inputpass = $_POST['pass'];

$connect = mysql_connect("localhost",$user,$password);
@mysql_select_db($MIDPS) or ("Database not found");

$query = "SELECT * FROM 'users' WHERE 'user' = $inputuser";
$query = "SELECT * FROM 'users' WHERE 'password' = '$inputpass'";

echo $query;
echo $querypass;

mysql_close();


?>
