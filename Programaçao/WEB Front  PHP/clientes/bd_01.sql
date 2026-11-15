-- phpMyAdmin SQL Dump
-- version 5.2.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 09, 2026 at 07:34 PM
-- Server version: 10.11.16-MariaDB
-- PHP Version: 8.4.27

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `bd_01`
--

-- --------------------------------------------------------

--
-- Table structure for table `t_cliente`
--

CREATE TABLE `t_cliente` (
  `id` int(11) NOT NULL,
  `nome` varchar(100) NOT NULL,
  `morada` varchar(100) NOT NULL,
  `zona` varchar(100) NOT NULL,
  `nif` varchar(9) NOT NULL,
  `vol_fatur` float NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `t_cliente`
--

INSERT INTO `t_cliente` (`id`, `nome`, `morada`, `zona`, `nif`, `vol_fatur`) VALUES
(1, 'Rui Monteiro', 'Rua abc, 123', 'Porto', '220164099', 10000),
(2, 'Carlos Azevedo', 'Rua Xyz, 456', 'Maia', '225415584', 150000),
(3, 'Paulo Borges', 'Rua Def, 789', 'Maia', '254125415', 160000),
(4, 'Aurora Joaquina', 'R. da fontinha 23', 'Porto', '222222211', 50),
(5, 'Fernando Costa', 'Ruas das estrelas 123', 'Rio Tinto', '123123123', 25000);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `t_cliente`
--
ALTER TABLE `t_cliente`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `t_cliente`
--
ALTER TABLE `t_cliente`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
