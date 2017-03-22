<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>Untitled Document</title>
</head>

<body>
<?php 
print 'hello';

$host = '62.215.196.35';
$ports = array(21, 25, 80, 81, 110, 443, 3306, 1433);

foreach ($ports as $port)
{
    //$connection = fsockopen($host, $port);
    $connection = fsockopen($host, 1433);

    if (is_resource($connection))
    {
        echo '<h2>' . $host . ':' . $port . ' ' . '(' . getservbyport($port, 'tcp') . ') is open.</h2>' . "\n";
        //echo "yes";

        fclose($connection);
    }

    else
    {
        //echo '<h2>' . $host . ':' . $port . ' is not responding.</h2>' . "\n";
        echo "no";
    }
}
?>
</body>
</html>