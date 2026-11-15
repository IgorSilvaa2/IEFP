-- UC02830 | Nome: Igor | Tema: Gaming
-- Consultas de negócio.
/*P1: Quantas equipas estão inscritas em cada torneio, por tipo de jogo?*/
SELECT
    COUNT(inscricao.id_equipe) AS "Equipas inscritas",
    torneio.nome AS "Nome do Torneio",
    tipo_jogo.nome AS "Tipo de Jogo"
FROM
    torneio
    JOIN tipo_jogo ON torneio.id_jogo = tipo_jogo.id_jogo
    JOIN inscricao ON torneio.id_torneio = inscricao.id_torneio
GROUP BY
    torneio.id_torneio,
    torneio.nome,
    tipo_jogo.nome
ORDER BY
    torneio.nome,
    tipo_jogo.nome;

/*P2: Que equipas obtiveram mais vitórias nas partidas de cada torneio?*/
SELECT
    equipe.nome AS "Nome da Equipa",
    COUNT(partida.id_vencedor) AS "Vitorias",
    torneio.nome AS "Nome do Torneio"
FROM
    partida
    JOIN equipe ON partida.id_vencedor = equipe.id_equipe
    JOIN torneio ON torneio.id_torneio = partida.id_torneio
GROUP BY
    equipe.id_equipe,
    torneio.id_torneio
ORDER BY
    torneio.nome,
    "Vitorias" DESC;

/*A1: Quantos jogadores existem em cada equipa?*/
SELECT
    COUNT(jogador.id_jogador) AS 'Total de Jogadores',
    equipe.nome
FROM
    equipe
    JOIN jogador ON jogador.id_equipe = equipe.id_equipe
GROUP BY
    equipe.nome
ORDER BY
    equipe.id_equipe;

/*A2: Quantas partidas foram disputadas em cada torneio, por tipo de jogo?*/
SELECT
    torneio.nome AS 'Nome do Torneio',
    COUNT(partida.id_partida) AS 'Partidas Disputadas',
    tipo_jogo.nome AS 'Nome do Jogo'
FROM
    torneio
    JOIN partida ON partida.id_torneio = torneio.id_torneio
    JOIN tipo_jogo ON tipo_jogo.id_jogo = torneio.id_jogo
WHERE
    partida.id_vencedor IS NOT NULL
GROUP BY
    torneio.id_torneio,
    torneio.nome,
    tipo_jogo.nome
ORDER BY
    torneio.id_torneio;

/* Demonstração da VIEW detalhes_jogadores */
SELECT
    *
FROM
    detalhes_jogadores;
