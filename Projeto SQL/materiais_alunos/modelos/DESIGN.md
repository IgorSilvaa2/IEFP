# Projeto de base de dados

Nome:Igor Silva
Tema: Gaming
UC02830

## Propósito e âmbito

A minha base de dados Gaming serve para organizar torneios de videojogos, gerir equipas, jogadores e inscrições, e registar os resultados das partidas.
Permite também consultar as vitórias das equipas e a participação nos torneios. Não inclui pagamentos, prémios ou transmissões de jogos.

## Regras do negócio

Cada jogador deve pertencer a uma equipa.
Cada torneio deve estar associado a um tipo de jogo.
Uma equipa não pode inscrever-se duas vezes no mesmo torneio.
Cada partida deve ter duas equipas diferentes e pertencer a um torneio.
O vencedor de uma partida deve ser uma das duas equipas participantes, podendo ficar por definir.
A data de fim de um torneio deve ser posterior à data de início.

## Modelo e decisões

A base de dados é composta por seis tabelas:

tipo_jogo: guarda os nomes e géneros dos jogos.
equipe: guarda os nomes e as tags das equipas.
jogador: guarda os dados dos jogadores e a equipa a que pertencem.
torneio: guarda os nomes, datas, estados e tipos de jogo dos torneios.
inscricao: regista as equipas inscritas em cada torneio.
partida: guarda as equipas participantes, os resultados e os vencedores das partidas.

Foram utilizados os tipos de dados INTEGER para identificadores e pontuações e TEXT para nomes, datas e outras informações.
As restrições PRIMARY KEY, FOREIGN KEY, NOT NULL, UNIQUE e CHECK permitem identificar os registos, manter as relações entre as tabelas e validar os dados.
A tabela tipo_jogo permite classificar os torneios pelo jogo a que pertencem, evitando repetir os nomes dos jogos na tabela torneio.
As relações são principalmente de um para muitos, como uma equipa que possui vários jogadores ou um torneio que possui várias partidas.
A relação de muitos para muitos existe entre equipe e torneio, através da tabela inscricao, porque uma equipa pode participar em vários torneios e um torneio pode receber várias equipas.

## Diagrama entidade relação

[Modelo desenhado](Diagrama.pdf).

O diagrama apresenta as seis tabelas da base de dados, as suas chaves primárias e estrangeiras e as respetivas cardinalidades.
A tabela inscricao estabelece a relação muitos para muitos entre equipe e torneio.

## Operações e consultas

P1: Quantas equipas estão inscritas em cada torneio, por tipo de jogo?
A consulta utiliza as tabelas torneio, inscricao e tipo_jogo, ligadas por JOIN. Utiliza COUNT para contar as equipas inscritas e GROUP BY para separar os resultados por torneio e jogo. O resultado apresenta quatro equipas inscritas em cada torneio.

P2: Que equipas obtiveram mais vitórias nas partidas de cada torneio?
A consulta utiliza as tabelas partida, equipe e torneio. Conta as vitórias de cada equipa e apresenta um ranking por torneio, com as equipas que têm mais vitórias no topo.

A1: Quantos jogadores existem em cada equipa?
A consulta liga as tabelas jogador e equipe, utilizando COUNT e GROUP BY para apresentar a quantidade de jogadores por equipa. Os dados de teste apresentam 20 jogadores distribuídos por oito equipas.

A2: Quantas partidas foram disputadas em cada torneio, por tipo de jogo?
A consulta liga as tabelas partida, torneio e tipo_jogo. Conta as partidas que possuem um vencedor registado, utilizando WHERE partida.id_vencedor IS NOT NULL, e agrupa os resultados por torneio e jogo. Nos dados de teste, apresenta três partidas em cada um dos dois torneios com resultados registados.

Justificação dos JOINs

Os JOINs relacionam as tabelas através das chaves primárias e estrangeiras.

Na P1, torneio.id_torneio = inscricao.id_torneio identifica as inscrições de cada torneio e torneio.id_jogo = tipo_jogo.id_jogo identifica o respetivo jogo.

Na P2, partida.id_vencedor = equipe.id_equipe identifica a equipa vencedora e partida.id_torneio = torneio.id_torneio identifica o torneio da partida.

Na A1, jogador.id_equipe = equipe.id_equipe relaciona cada jogador com a sua equipa.

Na A2, as ligações entre partida, torneio e tipo_jogo permitem identificar o torneio e o tipo de jogo de cada partida.

As consultas P1, P2 e A2 utilizam três tabelas distintas. O COUNT conta os registos e o GROUP BY separa os resultados.

Na P2, optei por apresentar um ranking das equipas que conseguiram vitórias em cada torneio, ordenando os resultados da maior para a menor quantidade de vitórias. Assim, são apresentadas todas as equipas com vitórias registadas, não apenas as primeiras classificadas.

Outras operações

VIEW: detalhes_jogadores permite consultar os jogadores e os nomes das respetivas equipas.
INDEX: idX_partida_torneio foi criado sobre partida(id_torneio) para facilitar pesquisas de partidas por torneio, sem duplicar um índice já existente sobre essa coluna isolada.
ALTER TABLE: acrescentou a coluna estado à tabela torneio.
UPDATE: altera o estado do torneio Valorant Arena Open para Concluído.
DELETE: elimina a partida com identificador 7.

As operações UPDATE e DELETE utilizam WHERE para selecionar os registos pretendidos e incluem consultas SELECT de verificação antes e depois das alterações.

## Dados de teste e execução

A base de dados foi preenchida com 60 registos, distribuídos pelas seis tabelas:

tipo_jogo: 5 registos
equipe: 8 registos
jogador: 20 registos
torneio: 4 registos
inscricao: 16 registos
partida: 7 registos

Para reconstruir a base de dados, os ficheiros devem ser executados numa base vazia, pela seguinte ordem:
01_estrutura.sql – Cria as tabelas, relações, restrições, vista e índice.
02_dados.sql – Insere os dados de teste.
03_consultas.sql – Executa as quatro consultas e demonstra a vista.
04_manipulacao.sql – Executa o UPDATE e o DELETE.

A integridade referencial da base de dados foi verificada através dos comandos PRAGMA foreign_keys e PRAGMA foreign_key_check, obtendo o valor 1 no primeiro e nenhuma linha no segundo.

Após as manipulações, o torneio Valorant Arena Open passa para o estado Concluído e a partida com ID 7 é eliminada, ficando 59 registos na base de dados.

## Limitações

Que situações não são representadas ou exigiriam alterações ao modelo?
A base de dados não permite gerir prémios, pagamentos ou transmissões de partidas.
Também não calcula automaticamente as classificações dos torneios nem verifica se as equipas de uma partida estão inscritas no respetivo torneio.
Para adicionar essas funcionalidades, seria necessário criar novas tabelas, relações ou regras de validação.
