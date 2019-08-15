-- MySqlBackup.NET 2.0.4
-- Dump Time: 2019-05-02 01:53:53
-- --------------------------------------
-- Server version 8.0.12 MySQL Community Server - GPL


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


-- 
-- Definition of user_login
-- 

DROP TABLE IF EXISTS `user_login`;
CREATE TABLE IF NOT EXISTS `user_login` (
  `id` int(11) NOT NULL,
  `name` varchar(45) DEFAULT NULL,
  `password` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- 
-- Dumping data for table user_login
-- 

/*!40000 ALTER TABLE `user_login` DISABLE KEYS */;
INSERT INTO `user_login`(`id`,`name`,`password`) VALUES
(1,'raf','111'),
(2,'mon','122'),
(3,'Ali','333'),
(4,'Monier','555');
/*!40000 ALTER TABLE `user_login` ENABLE KEYS */;

-- 
-- Definition of users_data
-- 

DROP TABLE IF EXISTS `users_data`;
CREATE TABLE IF NOT EXISTS `users_data` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `fname` varchar(45) NOT NULL,
  `lname` varchar(45) NOT NULL,
  `date_in` date NOT NULL,
  `date_out` date NOT NULL,
  `waight` double NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `id_UNIQUE` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- 
-- Dumping data for table users_data
-- 

/*!40000 ALTER TABLE `users_data` DISABLE KEYS */;
INSERT INTO `users_data`(`id`,`fname`,`lname`,`date_in`,`date_out`,`waight`) VALUES
(1,'w','w','2010-10-10 00:00:00','2010-10-10 00:00:00',33),
(2,'wwe','ee','2202-12-11 00:00:00','2202-12-11 00:00:00',555),
(6,'as','asss','2208-12-11 00:00:00','2208-12-11 00:00:00',666),
(7,'2','2','2010-10-10 00:00:00','2010-10-10 00:00:00',55.9);
/*!40000 ALTER TABLE `users_data` ENABLE KEYS */;

-- 
-- Dumping procedures
-- 

DROP PROCEDURE IF EXISTS `delete`;
DELIMITER |
CREATE PROCEDURE `delete`(ID_in int)
BEGIN
delete from users_data where id = ID_in;
END |
DELIMITER ;

DROP PROCEDURE IF EXISTS `insert`;
DELIMITER |
CREATE PROCEDURE `insert`(ID_in int,fname_in varchar(50),lname_in varchar(50),date_in_in date,date_out_in date,waight_in DOUBLE)
BEGIN
insert into users_data (id,fname,lname,date_in,date_out,waight) values(ID_in,fname_in,lname_in,date_in_in,date_out_in,waight_in);
END |
DELIMITER ;

DROP PROCEDURE IF EXISTS `Login`;
DELIMITER |
CREATE PROCEDURE `Login`(name_in varchar(50),pass_in varchar(50))
BEGIN
SELECT name , password FROM user_login where name=name_in And password = pass_in;
END |
DELIMITER ;

DROP PROCEDURE IF EXISTS `select_all`;
DELIMITER |
CREATE PROCEDURE `select_all`()
BEGIN
select * from users_data;
END |
DELIMITER ;

DROP PROCEDURE IF EXISTS `select_id`;
DELIMITER |
CREATE PROCEDURE `select_id`(ID_in int)
BEGIN
select * from users_data where id= ID_in;
END |
DELIMITER ;

DROP PROCEDURE IF EXISTS `update`;
DELIMITER |
CREATE PROCEDURE `update`(ID_in int,fname_in varchar(50),lname_in varchar(50),date_in_in date,date_out_in date,waight_in DOUBLE)
BEGIN
update users_data set fname = fname_in , lname = lname_in ,date_in=date_in_in,date_out=date_out_in,waight=waight_in where id = ID_in;
END |
DELIMITER ;


/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;


-- Dump completed on 2019-05-02 01:53:53
-- Total time: 0:0:0:0:143 (d:h:m:s:ms)
