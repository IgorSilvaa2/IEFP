# Projeto final UC02830

Lê o enunciado em `enunciado_projeto_revisto.pdf` (ou a versão Word). Escolhe um dos cinco temas e copia os ficheiros de `modelos` para a pasta do teu trabalho. Substitui as indicações pelo teu conteúdo; não entregues os modelos por preencher.

## Requisitos de referência

- Pelo menos seis tabelas finais, integradas no modelo.
- Tipos ou categorias referenciados por uma entidade principal e usados numa consulta.
- Uma relação muitos para muitos resolvida com uma tabela de associação.
- Pelo menos 50 registos no total, com todas as tabelas povoadas antes das manipulações.
- Quatro consultas de negócio: duas para as perguntas obrigatórias do tema (P1 e P2) e duas para perguntas distintas formuladas por ti (A1 e A2). Inclui um UPDATE, um DELETE, uma vista, um índice e um ALTER TABLE. Pelo menos uma das quatro consultas deve usar JOIN entre três ou mais tabelas distintas.
- Modelo desenhado em PNG ou PDF, integrado no DESIGN.md; apresentação e defesa de cinco minutos, com justificação das escolhas e respostas sobre o SQL.

## Executar em SQLite

Podes usar uma ferramenta gráfica compatível com SQLite ou a linha de comandos. Cria uma base nova e executa os quatro scripts por ordem. Guarda os ficheiros SQL em UTF-8.

Em cada ligação, executa `PRAGMA foreign_keys = ON;` antes de qualquer `BEGIN`. Confirma `PRAGMA foreign_keys;`: deve devolver `1`. `PRAGMA foreign_key_check;` não deve devolver linhas. Cabe-te preparar os scripts com as instruções necessárias à execução e à integridade.

Na ferramenta gráfica, abre cada script e executa o seu conteúdo completo, pela ordem 01, 02, 03 e 04. Confirma a ausência de erros. Nos scripts com várias consultas, verifica os respetivos resultados na ferramenta.

Se tiveres a consola `sqlite3`, abre-a na pasta do trabalho:

```text
sqlite3 projeto.db
.read 01_estrutura.sql
.read 02_dados.sql
.read 03_consultas.sql
.read 04_manipulacao.sql
.quit
```

Os comandos iniciados por ponto pertencem à consola sqlite3 e não devem ser colados num editor SQL gráfico. Não é necessário instalar Python para realizar o projeto.

## Repetir e entregar

Para repetir o teste completo, cria uma nova base vazia. Os scripts não têm de ser repetíveis numa base já preenchida. Verifica os mínimos depois do script 02, antes do UPDATE e do DELETE.

Entrega `UC02830_NomeApelido.zip` com os quatro scripts, `DESIGN.md` e o diagrama final em PNG ou PDF. Confirma as ligações relativas usadas na documentação. A base `.db` é opcional e não substitui os scripts. Há uma única entrega final e não é obrigatório usar PowerPoint.
