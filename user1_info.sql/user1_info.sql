-- phpMyAdmin SQL Dump
-- version 5.1.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 18, 2021 at 03:20 PM
-- Server version: 10.4.19-MariaDB
-- PHP Version: 8.0.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `user1_info`
--

-- --------------------------------------------------------

--
-- Table structure for table `food`
--

CREATE TABLE `food` (
  `Food` varchar(200) NOT NULL,
  `calg` varchar(200) NOT NULL,
  `prog` varchar(200) NOT NULL,
  `fatg` varchar(200) NOT NULL,
  `carb/g` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `food`
--

INSERT INTO `food` (`Food`, `calg`, `prog`, `fatg`, `carb/g`) VALUES
('Chicken Breast', '2', '0,2', '0,1', '0'),
('Beef Steak', '1', '0.2', '0', '0'),
('Eggs', '0.85', '0.1', '0.1', '0'),
('Bacon', '1,6', '0.2', '0.08', '0.09'),
('Potato', '0,8', '0,03', '0.08', '0,1'),
('Buttternut', '0,7', '0,1', '0', '1,6'),
('Broccoli', '0,34', '0', '0', '0,1'),
('Carrot', '0,4', '0,01', '0', '0,1'),
('Green Beans', '2', '0,1', '0', '0,4'),
('Baked Beans', '0,8', '0,05', '0', '0,13'),
('Black beans', '3', '0,2', '0', '0,6'),
('Mozzarella Cheese', '4', '0,3', '0,3', '0'),
('Cheddar Cheese', '4', '0,2', '0,3', '0'),
('Parmesean Cheese', '4', '0,4', '0,2', '0'),
('Chocolate', '4', '0,4', '0,05', '0,4'),
('Dark Chocolate', '5', '0,1', '0,3', '0,6'),
('Chocolate Cake', '4', '0', '0,2', '0,6'),
('Carrot Cake', '6', '0,1', '0,2', '1'),
('Vanilla Cake', '3,3', '0,05', '0,04', '0,66'),
('White Sugar', '0,2', '0', '0', '0,04'),
('Brown Sugar', '4', '0', '0', '1'),
('White Bread', '6', '0,04', '0', '0,22'),
('Brown Bread', '7', '0,04', '0', '0,28');

-- --------------------------------------------------------

--
-- Table structure for table `friday`
--

CREATE TABLE `friday` (
  `username` varchar(200) NOT NULL,
  `dailycal` varchar(200) NOT NULL,
  `concal` varchar(200) NOT NULL,
  `remcal` varchar(200) NOT NULL,
  `dpro` varchar(200) NOT NULL,
  `dfat` varchar(20) NOT NULL,
  `dcarb` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `friday`
--

INSERT INTO `friday` (`username`, `dailycal`, `concal`, `remcal`, `dpro`, `dfat`, `dcarb`) VALUES
('newvee', '1415', '0', '0', '0', '0', '0'),
('kimaya', '972', '0', '0', '0', '0', '0'),
('vilo', '3672', '0', '0', '0', '0', '0'),
('clint', '1320', '0', '0', '0', '0', '0'),
('amitg', '1584', '6', '1578', '0,08', '0', '0,44'),
('amitggd', '1584', '0', '0', '0', '0', '0'),
('shreyap', '1404', '0', '0', '0', '0', '0'),
('tideyw', '2052', '0', '0', '0', '0', '0'),
('maxine', '1069,2', '0', '0', '0', '0', '0'),
('andre', '1596', '0', '0', '0', '0', '0'),
('jai', '1390,8', '0', '0', '0', '0', '0'),
('cameronl', '1530', '0', '0', '0', '0', '0'),
('johnny', '1848', '0', '0', '0', '0', '0'),
('appendix', '1550,4', '0', '0', '0', '0', '0'),
('app', '1570,8', '0', '0', '0', '0', '0'),
('demo', '1374,84', '0', '0', '0', '0', '0'),
('demovid', '1333,8', '0', '0', '0', '0', '0'),
('demovideo', '1354,32', '0', '0', '0', '0', '0'),
('sym', '1320', '0', '0', '0', '0', '0'),
('symf', '1320', '0', '0', '0', '0', '0'),
('atlas', '1848', '0', '0', '0', '0', '0'),
('demov', '1848', '0', '0', '0', '0', '0');

-- --------------------------------------------------------

--
-- Table structure for table `macrotable`
--

CREATE TABLE `macrotable` (
  `username` varchar(200) NOT NULL,
  `fatmul` varchar(200) NOT NULL,
  `genmul` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `macrotable`
--

INSERT INTO `macrotable` (`username`, `fatmul`, `genmul`) VALUES
('london', '', ''),
('sid', '', ''),
('tomas', '', ''),
('dick', '', ''),
('kiaraa', '', ''),
('yoooooo', '', ''),
('dory', '', ''),
('CV', '', ''),
('DEEE', '', ''),
('morty', '', ''),
('bak', '', ''),
('joey', '', ''),
('adler', '', ''),
('buvk', '', ''),
('frost', '', ''),
('kapkan', '', ''),
('lesion', '', ''),
('capit', '', ''),
('weeeeeeee', '', ''),
('hond', '', ''),
('wes', '', ''),
('side', '', ''),
('polly', '', ''),
('wed', '', ''),
('wad', '', ''),
('fn', '', ''),
('maaa', '', ''),
('tapper', '', ''),
('beep', '', ''),
('veegee', '', ''),
('sics', '', ''),
('juki', '', ''),
('manoc', '', ''),
('billc', '', ''),
('child', '', ''),
('zeus', '', ''),
('pos', '', ''),
('pewds', '1', ''),
('marzia', '1', ''),
('marki', '1', ''),
('mercia', '1', ''),
('lay', '1', ''),
('laya', '1', ''),
('k7', '1', ''),
('kara', '1', ''),
('vioashan', '1', ''),
('evashan', '0', '1'),
('moon', '0.95', '1'),
('lishen', '0.95', '1'),
('mo1', '1', '1'),
('saurav', '', '0.9'),
('moth1', '1', '0.9'),
('mool', '0.85', '1'),
('shyam', '0.85', '1'),
('pillay', '1', '1'),
('govi', '0.95', '0.9'),
('tests', '0,85', '1'),
('testfi', '0,95', '0,9'),
('jerry', '', '0,9'),
('w', '1', '1'),
('tee', '0,85', '0,9'),
('bee', '', '0,9'),
('ree', '0,85', '0,9'),
('pop', '1', '0,9'),
('weedd', '1', '0,9'),
('deer', '1', '0,9'),
('q', '1', '1'),
('lol', '1', '0,9'),
('mnb', '1', '0,9'),
('newvee', '0,95', '0,9'),
('', '', ''),
('kimaya', '1', '0,9'),
('vilo', '1', '0,9'),
('clint', '1', '1'),
('amitg', '1', '1'),
('amitggd', '1', '1'),
('shreyap', '1', '0,9'),
('tideyw', '0,95', '1'),
('beth', '', '0,9'),
('maxx', '', '0,90'),
('maxine', '0,90', '0,9'),
('andre', '0,95', '1'),
('were', '', '1'),
('jai', '0,95', '1'),
('cameronl', '0,85', '1'),
('johnny', '1', '1'),
('appendix', '0,95', '1'),
('app', '0,85', '1'),
('demo', '0,95', '0,9'),
('demovid', '0,95', '0,9'),
('demovideo', '0,95', '0,9'),
('sym', '1', '1'),
('symf', '1', '1'),
('atlas', '1', '1'),
('demov', '1', '1');

-- --------------------------------------------------------

--
-- Table structure for table `monday`
--

CREATE TABLE `monday` (
  `username` varchar(200) NOT NULL,
  `dailycal` varchar(200) NOT NULL,
  `concal` varchar(200) NOT NULL,
  `remcal` varchar(200) NOT NULL,
  `dpro` varchar(200) NOT NULL,
  `dfat` varchar(200) NOT NULL,
  `dcarb` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `monday`
--

INSERT INTO `monday` (`username`, `dailycal`, `concal`, `remcal`, `dpro`, `dfat`, `dcarb`) VALUES
('pewds', '', '0', '0', '0', '0', '0'),
('marzia', '', '0', '0', '0', '0', '0'),
('marki', '', '0', '0', '0', '0', '0'),
('mercia', '', '0', '0', '0', '0', '0'),
('lay', '', '0', '0', '0', '0', '0'),
('laya', '', '0', '0', '0', '0', '0'),
('k7', '', '0', '0', '0', '0', '0'),
('kara', '', '0', '0', '0', '0', '0'),
('vioashan', '', '0', '0', '0', '0', '0'),
('evashan', '', '0', '0', '0', '0', '0'),
('mo1', '', '0', '0', '0', '0', '0'),
('pillay', '24', '0', '0', '0', '0', '0'),
('tests', '20,4', '0', '0', '0', '0', '0'),
('testfi', '1374,84', '0', '0', '0', '0', '0'),
('lol', '972', '0', '0', '0', '0', '0'),
('mnb', '259,2', '0', '0', '0', '0', '0'),
('newvee', '1415,88', '0', '0', '0', '0', '0'),
('kimaya', '972', '0', '0', '0', '0', '0'),
('vilo', '3672', '0', '0', '0', '0', '0'),
('clint', '1320', '0', '0', '0', '0', '0'),
('amitg', '1584', '310', '1274', '2,1', '6,3', '12,6'),
('amitggd', '1584', '180', '1404', '0', '0', '46'),
('shreyap', '1404', '1473,5', '-69,5', '2,8', '2,24', '36,96'),
('tideyw', '2052', '0', '0', '0', '0', '0'),
('maxine', '1069,2', '220', '849,2', '0', '0', '56'),
('andre', '1596', '40', '1556', '0', '0', '11'),
('jai', '1390,8', '3000', '-1609,2', '10,84', '0', '59,62'),
('cameronl', '1530', '80', '1450', '0', '0', '21'),
('johnny', '1848', '385', '1463', '2,24', '0', '15,68'),
('appendix', '1550,4', '120', '1430,4', '2,1', '4,2', '21'),
('app', '1570,8', '0', '0', '0', '0', '0'),
('demo', '1374,84', '0', '0', '0', '0', '0'),
('demovid', '1333,8', '300', '1033,8', '5,1', '10,2', '51'),
('demovideo', '1354,32', '300', '1054,32', '5,1', '10,2', '51'),
('sym', '1320', '200', '1120', '20,4', '2,55', '20,4'),
('symf', '1320', '200', '1120', '20,4', '2,55', '20,4'),
('atlas', '1848', '0', '0', '0', '0', '0'),
('demov', '1848', '80', '1768', '8,4', '1,05', '8,4');

-- --------------------------------------------------------

--
-- Table structure for table `thursday`
--

CREATE TABLE `thursday` (
  `username` varchar(200) NOT NULL,
  `dailycal` varchar(200) NOT NULL,
  `concal` varchar(200) NOT NULL,
  `remcal` varchar(200) NOT NULL,
  `dpro` varchar(200) NOT NULL,
  `dfat` varchar(200) NOT NULL,
  `dcarb` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `thursday`
--

INSERT INTO `thursday` (`username`, `dailycal`, `concal`, `remcal`, `dpro`, `dfat`, `dcarb`) VALUES
('newvee', '1415', '0', '0', '0', '0', 0),
('kimaya', '972', '0', '0', '0', '0', 0),
('vilo', '3672', '0', '0', '0', '0', 0),
('clint', '1320', '0', '0', '0', '0', 0),
('amitg', '1584', '72', '1512', '0,52', '0', 2),
('amitggd', '1584', '0', '0', '0', '0', 0),
('shreyap', '1404', '0', '0', '0', '0', 0),
('tideyw', '2052', '0', '0', '0', '0', 0),
('maxine', '1069,2', '20', '1049,2', '2,2', '1,1', 0),
('andre', '1596', '0', '0', '0', '0', 0),
('jai', '1390,8', '0', '0', '0', '0', 0),
('cameronl', '1530', '0', '0', '0', '0', 0),
('johnny', '1848', '0', '0', '0', '0', 0),
('appendix', '1550,4', '0', '0', '0', '0', 0),
('app', '1570,8', '0', '0', '0', '0', 0),
('demo', '1374,84', '0', '0', '0', '0', 0),
('demovid', '1333,8', '0', '0', '0', '0', 0),
('demovideo', '1354,32', '0', '0', '0', '0', 0),
('sym', '1320', '0', '0', '0', '0', 0),
('symf', '1320', '0', '0', '0', '0', 0),
('atlas', '1848', '0', '0', '0', '0', 0),
('demov', '1848', '0', '0', '0', '0', 0);

-- --------------------------------------------------------

--
-- Table structure for table `tuesday`
--

CREATE TABLE `tuesday` (
  `username` varchar(200) NOT NULL,
  `dailycal` varchar(200) NOT NULL,
  `concal` varchar(200) NOT NULL,
  `remcal` varchar(20) NOT NULL,
  `dpro` varchar(200) NOT NULL,
  `dfat` varchar(200) NOT NULL,
  `dcarb` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `tuesday`
--

INSERT INTO `tuesday` (`username`, `dailycal`, `concal`, `remcal`, `dpro`, `dfat`, `dcarb`) VALUES
('mnb', '259', '0', '0', '0', '0', '0'),
('newvee', '1415', '300', '1115', '5,1', '10,2', '51'),
('kimaya', '972', '0', '0', '0', '0', '0'),
('vilo', '3672', '0', '0', '0', '0', '0'),
('clint', '1320', '0', '0', '0', '0', '0'),
('amitg', '1584', '254', '1330', '5,2', '0,65', '5,2'),
('amitggd', '1584', '0', '0', '0', '0', '0'),
('shreyap', '1404', '23,1', '1380,9', '0,4', '0,32', '5,28'),
('tideyw', '2052', '0', '0', '0', '0', '0'),
('maxine', '1069,2', '0', '0', '0', '0', '0'),
('andre', '1596', '40', '1556', '0', '0', '11'),
('jai', '1390,8', '0', '0', '0', '0', '0'),
('cameronl', '1530', '0', '0', '0', '0', '0'),
('johnny', '1848', '0', '0', '0', '0', '0'),
('appendix', '1550,4', '165', '1385,4', '2,55', '2,04', '33,66'),
('app', '1570,8', '0', '0', '0', '0', '0'),
('demo', '1374,84', '0', '0', '0', '0', '0'),
('demovid', '1333,8', '0', '0', '0', '0', '0'),
('demovideo', '1354,32', '0', '0', '0', '0', '0'),
('sym', '1320', '0', '0', '0', '0', '0'),
('symf', '1320', '0', '0', '0', '0', '0'),
('atlas', '1848', '0', '0', '0', '0', '0'),
('demov', '1848', '0', '0', '0', '0', '0');

-- --------------------------------------------------------

--
-- Table structure for table `user1infotbl`
--

CREATE TABLE `user1infotbl` (
  `username` varchar(200) NOT NULL,
  `gender` varchar(200) NOT NULL,
  `height` double NOT NULL,
  `weight` double NOT NULL,
  `bodyfat` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `user1infotbl`
--

INSERT INTO `user1infotbl` (`username`, `gender`, `height`, `weight`, `bodyfat`) VALUES
('vee', '', 0, 0, '21-28'),
('jack', '', 0, 0, '15-20'),
('shreya', '', 0, 0, '10-14'),
('abdul', '', 0, 0, '10-14'),
('james', '', 0, 0, 'Over 28'),
('shoney', '', 0, 0, '15-20'),
('mike', '', 0, 0, '15-20'),
('veeeee', '', 0, 0, '15-20'),
('tony', '', 0, 0, '15-20'),
('tee', '', 0, 0, '10-14'),
('ye', '', 0, 0, '15-20'),
('dog', 'Male', 182, 55, '10-14'),
('veey', 'Male', 177, 77, '10-14'),
('q', 'Female', 25, 44, '10-14'),
('rick', 'Male', 180, 66, '15-20'),
('tsuki', 'Female', 185, 68, '15-20'),
('dot', 'Male', 55, 55, '10-14'),
('tom', 'Male', 456, 456, '15-20'),
('london', 'Female', 345, 3455, '15-20'),
('sid', 'Female', 156, 143, '15-20'),
('tomas', 'Male', 134, 134, '15-20'),
('dick', 'Male', 34, 34, '15-20'),
('kiaraa', 'Male', 12, 12, '10-14'),
('yoooooo', 'Male', 1, 1, '10-14'),
('dory', 'Male', 12, 12, '15-20'),
('CV', 'Female', 3, 3, '10-14'),
('DEEE', 'Female', 434, 4, '10-14'),
('morty', 'Male', 45, 45, '10-14'),
('bak', 'Male', 12, 12, '10-14'),
('joey', 'Male', 1, 1, '10-14'),
('adler', 'Male', 12, 12, '15-20'),
('buvk', 'Male', 12, 2, '15-20'),
('frost', 'Male', 12, 12, '15-20'),
('kapkan', 'Male', 123, 23, '10-14'),
('lesion', 'Male', 12, 12, '15-20'),
('capit', 'Male', 6, 6, '15-20'),
('weeeeeeee', 'Male', 4, 4, '10-14'),
('hond', 'Male', 1, 1, '10-14'),
('wes', 'Male', 12, 12, '10-14'),
('side', 'Female', 123, 123, '10-14'),
('polly', 'Female', 1, 1, '10-14'),
('wed', 'Male', 1, 1, '15-20'),
('wad', 'Female', 12, 12, '10-14'),
('fn', 'Female', 787, 12, '10-14'),
('maaa', 'Female', 12, 12, '10-14'),
('tapper', 'Female', 12, 12, '15-20'),
('beep', 'Female', 1, 1, '10-14'),
('veegee', 'Male', 12, 12, '15-20'),
('sics', 'Female', 12, 12, '15-20'),
('juki', 'Female', 123, 78, '10-14'),
('manoc', 'Male', 123, 123, '10-14'),
('billc', 'Male', 180, 85, '21-28'),
('child', 'Female', 187, 123, 'Over 28'),
('zeus', 'Male', 190, 67, 'Over 28'),
('pos', 'Male', 12, 12, 'Over 28'),
('pewds', 'Male', 123, 12, '10-14'),
('marzia', 'Male', 122, 12, '10-14'),
('marki', 'Male', 123, 12, '10-14'),
('mercia', 'Male', 12, 12, '10-14'),
('lay', 'Male', 1, 124, '10-14'),
('laya', 'Male', 99, 99, '10-14'),
('k7', 'Male', 12, 12, '10-14'),
('kara', 'Male', 12, 180, '10-14'),
('vioashan', 'Male', 180, 69, '10-14'),
('evashan', 'Male', 180, 98, '15-20'),
('moon', 'Male', 170, 55, '15-20'),
('lishen', 'Male', 134, 78, '15-20'),
('mo1', 'Male', 134, 33, '10-14'),
('saurav', 'Female', 177, 80, '21-28'),
('moth1', 'Female', 12, 12, '10-14'),
('mool', 'Male', 99, 99, 'Over 28'),
('shyam', 'Male', 123, 123, 'Over 28'),
('pillay', 'Male', 1, 1, '10-14'),
('govi', 'Female', 1, 1, '15-20'),
('tests', 'Male', 1, 1, 'Over 28'),
('testfi', 'Female', 180, 67, '15-20'),
('jerry', 'Female', 160, 78, '21-28'),
('w', 'Male', 12, 12, '10-14'),
('tee', 'Female', 1, 1, 'Over 28'),
('bee', 'Female', 12, 12, '21-28'),
('ree', 'Female', 12, 12, 'Over 28'),
('pop', 'Female', 1, 1, '10-14'),
('weedd', 'Female', 123, 123, '10-14'),
('deer', 'Female', 1, 1, '10-14'),
('q', 'Male', 1, 1, '10-14'),
('lol', 'Female', 23, 45, '10-14'),
('mnb', 'Female', 12, 12, '10-14'),
('newvee', 'Female', 180, 69, '15-20'),
('kimaya', 'Female', 170, 45, '10-14'),
('vilo', 'Female', 77, 170, '10-14'),
('clint', 'Male', 180, 55, '10-14'),
('amitg', 'Male', 180, 66, '10-14'),
('ccc', 'Female', 120, 55, '10-14'),
('amitggd', 'Male', 178, 66, '10-14'),
('shreyap', 'Female', 172, 65, '10-14'),
('tideyw', 'Male', 188, 90, '15-20'),
('beth', 'Female', 150, 66, '21-28'),
('maxx', 'Female', 160, 55, '21-28'),
('maxine', 'Female', 170, 55, '21-28'),
('andre', 'Male', 188, 70, '15-20'),
('were', 'Male', 212, 33, '55'),
('jai', 'Male', 175, 61, '15-20'),
('cameronl', 'Male', 165, 75, 'Over 28'),
('johnny', 'Male', 180, 77, '10-14'),
('appendix', 'Male', 180, 68, '15-20'),
('app', 'Male', 170, 77, 'Over 28'),
('demo', 'Female', 170, 67, '15-20'),
('demovid', 'Female', 170, 65, '15-20'),
('demovideo', 'Female', 170, 66, '15-20'),
('sym', 'Male', 180, 55, '10-14'),
('symf', 'Male', 180, 55, '10-14'),
('atlas', 'Male', 180, 77, '10-14'),
('demov', 'Male', 180, 77, '10-14');

-- --------------------------------------------------------

--
-- Table structure for table `wednesday`
--

CREATE TABLE `wednesday` (
  `username` varchar(200) NOT NULL,
  `dailycal` varchar(200) NOT NULL,
  `concal` varchar(200) NOT NULL,
  `remcal` varchar(200) NOT NULL,
  `dpro` varchar(200) NOT NULL,
  `dfat` varchar(200) NOT NULL,
  `dcarb` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `wednesday`
--

INSERT INTO `wednesday` (`username`, `dailycal`, `concal`, `remcal`, `dpro`, `dfat`, `dcarb`) VALUES
('newvee', '1415', '0', '0', '0', '0', '0'),
('kimaya', '972', '0', '0', '0', '0', '0'),
('vilo', '3672', '0', '0', '0', '0', '0'),
('clint', '1320', '0', '0', '0', '0', '0'),
('amitg', '1584', '168', '1416', '0,52', '0', '2,86'),
('amitggd', '1584', '0', '0', '0', '0', '0'),
('shreyap', '1404', '0', '0', '0', '0', '0'),
('tideyw', '2052', '0', '0', '0', '0', '0'),
('maxine', '1069,2', '0', '0', '0', '0', '0'),
('andre', '1596', '0', '0', '0', '0', '0'),
('jai', '1390,8', '0', '0', '0', '0', '0'),
('cameronl', '1530', '0', '0', '0', '0', '0'),
('johnny', '1848', '0', '0', '0', '0', '0'),
('appendix', '1550,4', '0', '0', '0', '0', '0'),
('app', '1570,8', '0', '0', '0', '0', '0'),
('demo', '1374,84', '0', '0', '0', '0', '0'),
('demovid', '1333,8', '0', '0', '0', '0', '0'),
('demovideo', '1354,32', '0', '0', '0', '0', '0'),
('sym', '1320', '0', '0', '0', '0', '0'),
('symf', '1320', '0', '0', '0', '0', '0'),
('atlas', '1848', '0', '0', '0', '0', '0'),
('demov', '1848', '0', '0', '0', '0', '0');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
