-- UC02830 | Nome: | Tema:
-- Manipulação dos dados.
/*Verifica antes>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
SELECT
    nome AS 'Nome do Torneio',
    estado
FROM
    torneio
WHERE
    id_torneio = 3;

/*Atualiza a Coluna>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
UPDATE torneio
SET
    estado = 'Concluído'
WHERE
    id_torneio = 3;

/*Verifica Depois>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
SELECT
    nome AS 'Nome do Torneio',
    estado
FROM
    torneio
WHERE
    id_torneio = 3;

/*Verifica antes >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
SELECT
    *
FROM
    partida
WHERE
    id_partida = 7;

/*Deleta >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
DELETE FROM partida
WHERE
    ID_PARTIDA = 7;

/*Verifica Depois >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
SELECT
    *
FROM
    partida
WHERE
    id_partida = 7;
