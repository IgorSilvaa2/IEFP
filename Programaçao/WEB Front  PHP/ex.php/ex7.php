<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    $contador = 1;
    while ($contador <= 5) {
        echo $contador . "<br>";
        $contador++;
    }
    echo "<br>";

    for ($i = 1; $i <= 5; $i++) {
        echo $i . "<br>";
    }

    echo "<br>";
    $contador = 1;

    do {
        echo $contador . "<br>";
        $contador++;
    } while ($contador <= 5);
    ?>
</body>

</html>