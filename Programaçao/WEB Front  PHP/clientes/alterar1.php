<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Alterar de Clientes - RM </title>
</head>

<body>
    <h1>Alterar de Clientes - RM </h1>
    <hr><br>

    <form action="Alterar2.php" method="post">
        <p> Qual o cliente a Alterar: <select name="cp_id" ;>
                <?php
                // liga-se ao servidor com user e pass
                $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_01");
                // tratar o erro de ligação à base de dados
                if (!$ligacao) {
                    die("Erro na ligação à base de dados: " . mysqli_connect_error($ligacao));
                }

                // crio a instrução SQL para selecionar todos os clientes da tabela t_clientes
                $sql = "SELECT * FROM t_cliente ORDER BY nome";
                // executo a instrução SQL no meu servidor e verifico se ocorreu algum erro
                $resultado = mysqli_query($ligacao, $sql) or die("Erro na consulta SQL: " . mysqli_error($ligacao));

                // crio um siclo para percorrer todos os registos retornados pela consulta SQL
                while ($linha = mysqli_fetch_assoc($resultado)) {
                    echo "<option value='" . $linha['id'] . "'>" . $linha['nome'];
                    echo "</option>";
                }

                mysqli_close($ligacao);
                ?>
            </select></p>
        <p>
            <input name="submit" type="submit" value="Alterar" />
        </p>
        <input type="button" value="voltar ao menu" onclick="window.history.go (-1);">
    </form>
</body>

</html>