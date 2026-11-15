-- UC02830 | Nome: Igor | Tema: Gaming
-- Definição da estrutura da base de dados.
PRAGMA foreign_keys = ON;

DROP VIEW IF EXISTS detalhes_jogadores;

DROP TABLE IF EXISTS partida;

DROP TABLE IF EXISTS inscricao;

DROP TABLE IF EXISTS torneio;

DROP TABLE IF EXISTS jogador;

DROP TABLE IF EXISTS equipe;

DROP TABLE IF EXISTS tipo_jogo;

CREATE TABLE
    tipo_jogo (
        id_jogo INTEGER PRIMARY KEY AUTOINCREMENT,
        nome TEXT NOT NULL,
        genero TEXT
    );

CREATE TABLE
    equipe (
        id_equipe INTEGER PRIMARY KEY AUTOINCREMENT,
        nome TEXT NOT NULL UNIQUE,
        tag TEXT NOT NULL UNIQUE
    );

CREATE TABLE
    jogador (
        id_jogador INTEGER PRIMARY KEY AUTOINCREMENT,
        nome TEXT NOT NULL,
        data_nascimento TEXT NOT NULL,
        nickname TEXT NOT NULL UNIQUE,
        id_equipe INTEGER NOT NULL,
        FOREIGN KEY (id_equipe) REFERENCES equipe (id_equipe)
    );

CREATE TABLE
    torneio (
        id_torneio INTEGER PRIMARY KEY AUTOINCREMENT,
        nome TEXT NOT NULL,
        data_inicio TEXT NOT NULL,
        data_fim TEXT NOT NULL,
        id_jogo INTEGER NOT NULL,
        FOREIGN KEY (id_jogo) REFERENCES tipo_jogo (id_jogo),
        CONSTRAINT valida_datas CHECK (data_fim > data_inicio)
    );

CREATE TABLE
    inscricao (
        id_inscricao INTEGER PRIMARY KEY AUTOINCREMENT,
        data_inscricao TEXT NOT NULL,
        id_equipe INTEGER NOT NULL,
        id_torneio INTEGER NOT NULL,
        CONSTRAINT valida_equipe_duplicada UNIQUE (id_equipe, id_torneio),
        FOREIGN KEY (id_equipe) REFERENCES equipe (id_equipe),
        FOREIGN KEY (id_torneio) REFERENCES torneio (id_torneio)
    );

CREATE TABLE
    partida (
        id_partida INTEGER PRIMARY KEY AUTOINCREMENT,
        data_hora TEXT NOT NULL,
        placar_equipe_1 INTEGER,
        placar_equipe_2 INTEGER,
        id_equipe1 INTEGER NOT NULL,
        id_equipe2 INTEGER NOT NULL,
        id_torneio INTEGER NOT NULL,
        id_vencedor INTEGER,
        CONSTRAINT valida_equipe CHECK (id_equipe1 != id_equipe2),
        CONSTRAINT valida_vencedor CHECK (id_vencedor IS NULL OR id_vencedor IN (id_equipe1, id_equipe2)),
        FOREIGN KEY (id_equipe1) REFERENCES equipe (id_equipe),
        FOREIGN KEY (id_equipe2) REFERENCES equipe (id_equipe),
        FOREIGN KEY (id_torneio) REFERENCES torneio (id_torneio),
        FOREIGN KEY (id_vencedor) REFERENCES equipe (id_equipe)
    );

ALTER TABLE torneio
ADD COLUMN estado TEXT;

CREATE VIEW
    detalhes_jogadores AS
SELECT
    jogador.id_jogador,
    jogador.nickname,
    equipe.nome AS nome_equipe
FROM
    jogador
    LEFT JOIN equipe ON jogador.id_equipe = equipe.id_equipe;

CREATE INDEX idX_partida_torneio ON partida (id_torneio);
