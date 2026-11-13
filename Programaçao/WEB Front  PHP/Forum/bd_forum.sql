-- phpMyAdmin SQL Dump
-- version 5.2.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 13/11/2026 às 18:39
-- Versão do servidor: 10.11.16-MariaDB
-- Versão do PHP: 8.5.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `bd_forum`
--

-- --------------------------------------------------------

--
-- Estrutura para tabela `t_post`
--

CREATE TABLE `t_post` (
  `id` int(11) NOT NULL,
  `tema` varchar(20) NOT NULL,
  `titulo` varchar(50) NOT NULL,
  `texto` varchar(300) NOT NULL,
  `foto` varchar(300) DEFAULT '/pics/vazio.jpg',
  `id_user` int(11) NOT NULL,
  `apagado` int(11) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `t_resp`
--

CREATE TABLE `t_resp` (
  `id` int(11) NOT NULL,
  `id_post` int(11) NOT NULL,
  `id_user` int(11) NOT NULL,
  `texto` varchar(300) NOT NULL,
  `foto` varchar(300) DEFAULT '/pics/vazio.jpg',
  `apagado` int(11) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `t_user`
--

CREATE TABLE `t_user` (
  `id` int(11) NOT NULL,
  `nick` varchar(20) NOT NULL,
  `nome` varchar(100) NOT NULL,
  `email` varchar(50) NOT NULL,
  `data_nasc` varchar(10) NOT NULL,
  `pass` varchar(20) NOT NULL,
  `foto` varchar(300) NOT NULL,
  `apagado` int(11) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Despejando dados para a tabela `t_user`
--

INSERT INTO `t_user` (`id`, `nick`, `nome`, `email`, `data_nasc`, `pass`, `foto`, `apagado`) VALUES
(1, 'ziboox', 'Igor', 'boxigor@gmail.com', '1996-05-20', '123', 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS0mcJHjfjfH9jiTS5lM5A87kozvxrchzQSOlNsK0ruOSjyl8lVF-51LSE&s=10', 0);

--
-- Índices para tabelas despejadas
--

--
-- Índices de tabela `t_post`
--
ALTER TABLE `t_post`
  ADD PRIMARY KEY (`id`);

--
-- Índices de tabela `t_resp`
--
ALTER TABLE `t_resp`
  ADD PRIMARY KEY (`id`);

--
-- Índices de tabela `t_user`
--
ALTER TABLE `t_user`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `nick_unico` (`nick`);

--
-- AUTO_INCREMENT para tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `t_post`
--
ALTER TABLE `t_post`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `t_resp`
--
ALTER TABLE `t_resp`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `t_user`
--
ALTER TABLE `t_user`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
