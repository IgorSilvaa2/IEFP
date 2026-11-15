-- UC02830 | Nome: Igor | Tema: Gaming
-- Povoamento da base de dados.
.mode box

INSERT INTO tipo_jogo (nome, genero) VALUES
('League of Legends', 'MOBA'),
('Counter-Strike 2', 'FPS'),
('Valorant', 'FPS'),
('Rocket League', 'Desporto'),
('Dota 2', 'MOBA');

INSERT INTO equipe (nome, tag) VALUES
('Dragões Gaming', 'DRG'),
('Fénix Esports', 'FNX'),
('Gladiadores VIP', 'GLD'),
('Titãs do Teclado', 'TIT'),
('Cobra Comando', 'COB'),
('Lobos de Alvalade', 'LOB'),
('Vanguardas', 'VNG'),
('Estrelas do Norte', 'EST');

INSERT INTO jogador (nome, data_nascimento, nickname, id_equipe) VALUES
('Afonso Silva', '2001-05-14', 'ShadowStrike', 1),
('Beatriz Costa', '2002-11-23', 'PixieQueen', 1),
('Carlos Santos', '1999-08-30', 'ThunderV', 2),
('Diogo Rocha', '2000-01-15', 'FrostByte', 2),
('Eduardo Nunes', '2003-03-22', 'AlphaWolf', 3),
('Filipa Mendes', '2001-07-09', 'NeonLight', 3),
('Gonçalo Alves', '1998-12-05', 'ViperPit', 4),
('Helena Ribeiro', '2004-02-18', 'MysticRose', 4),
('Igor Silva', '1996-05-20', 'Ziboox', 5),
('Daniela Oliveira', '1995-10-15', 'Behzinha', 5),
('Kevin Lima', '2001-04-03', 'SpeedRunner', 6),
('Lara Martins', '2003-10-11', 'Valkyrie', 6),
('Mariana Simões', '1999-02-28', 'StarGazer', 7),
('Nuno Carvalho', '2000-07-19', 'NightMare', 7),
('Pedro Fonseca', '2002-08-08', 'FireBall', 8),
('Rita Sousa', '2001-12-31', 'AquaMarine', 8),
('Tiago Ramos', '2003-05-20', 'GhostWalker', 1),
('Vasco Teixeira', '2000-03-14', 'SlayerX', 2),
('Xavier Dias', '2002-01-27', 'Matrix', 3),
('Yuri Gomes', '2004-11-02', 'Cyclone', 4);

INSERT INTO torneio (nome, data_inicio, data_fim, id_jogo, estado) VALUES
('Taça dos Campeões MOBA', '2026-11-01', '2026-11-05', 1, 'Concluído'),
('Mundial de Atiradores', '2026-11-10', '2026-11-15', 2, 'Concluído'),
('Valorant Arena Open', '2026-11-20', '2026-11-25', 3, 'Ativo'),
('Liga Universitária RL', '2026-12-01', '2026-12-05', 4, 'Planeado');

INSERT INTO inscricao (data_inscricao, id_equipe, id_torneio) VALUES
-- Torneio 1 (Começa a 01/11)
('2026-10-15', 1, 1),
('2026-10-15', 2, 1),
('2026-10-16', 3, 1),
('2026-10-17', 4, 1),
-- Torneio 2 (Começa a 10/11)
('2026-10-20', 5, 2),
('2026-10-21', 6, 2),
('2026-10-22', 7, 2),
('2026-10-22', 8, 2),
-- Torneio 3 (Começa a 20/11)
('2026-11-01', 1, 3),
('2026-11-02', 2, 3),
('2026-11-03', 3, 3),
('2026-11-04', 4, 3),
-- Torneio 4 (Começa a 01/12)
('2026-11-10', 5, 4),
('2026-11-11', 6, 4),
('2026-11-12', 7, 4),
('2026-11-15', 8, 4);

INSERT INTO partida (data_hora, placar_equipe_1, placar_equipe_2, id_equipe1, id_equipe2, id_torneio, id_vencedor) VALUES
-- Torneio 1: Taça dos Campeões MOBA (Acontece entre 2026-11-01 e 2026-11-05)
('2026-11-01 14:00', 8, 5, 1, 2, 1, 1), -- Equipe 1 vence (1ª vitória)
('2026-11-02 16:00', 3, 4, 3, 4, 1, 4), -- Equipe 4 vence
('2026-11-04 20:00', 10, 6, 1, 4, 1, 1), -- Equipe 1 vence a final! (2ª vitória - destaca-se no torneio)

-- Torneio 2: Mundial de Atiradores (Acontece entre 2026-11-10 e 2026-11-15)
('2026-11-11 15:00', 16, 14, 5, 6, 2, 5), -- Equipe 5 vence (1ª vitória)
('2026-11-12 17:00', 10, 16, 7, 8, 2, 8), -- Equipe 8 vence
('2026-11-14 21:00', 16, 12, 5, 8, 2, 5), -- Equipe 5 vence a final! (2ª vitória - destaca-se no torneio)
-- Torneio 3: Valorant Arena Open (Ativo)
('2026-11-20 18:00', NULL, NULL, 1, 3, 3, NULL);

SELECT 'Total tipo de jogos ' || COUNT(*) FROM tipo_jogo;
SELECT 'Total equipe ' || COUNT(*) FROM equipe;
SELECT 'Total jogadores ' || COUNT(*) FROM jogador;
SELECT 'Total torneios ' || COUNT(*) FROM torneio;
SELECT 'Total inscrições ' || COUNT(*) FROM inscricao;
SELECT 'Total partidas ' || COUNT(*) FROM partida;

SELECT 'Total Global de Registos: ' || (
    (SELECT COUNT(*) FROM tipo_jogo) +
    (SELECT COUNT(*) FROM equipe) +
    (SELECT COUNT(*) FROM jogador) +
    (SELECT COUNT(*) FROM torneio) +
    (SELECT COUNT(*) FROM inscricao) +
    (SELECT COUNT(*) FROM partida)
) AS total_geral;
