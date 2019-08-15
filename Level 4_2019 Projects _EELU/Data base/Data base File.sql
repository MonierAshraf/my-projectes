-- MySqlBackup.NET 2.0.4
-- Dump Time: 2019-04-29 22:11:56
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
-- Dumping procedures
-- 

DROP PROCEDURE IF EXISTS `delete`;
DELIMITER |
CREATE PROCEDURE `delete`(ID_in int)
BEGIN
delete from user_login where id = ID_in;
END |
DELIMITER ;

DROP PROCEDURE IF EXISTS `insert`;
DELIMITER |
CREATE PROCEDURE `insert`(ID_in int,name_in varchar(50),pass_in varchar(45))
BEGIN
insert into user_login (id,name,password) values(ID_in,name_in,pass_in);
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
select * from user_login;
END |
DELIMITER ;

DROP PROCEDURE IF EXISTS `select_id`;
DELIMITER |
CREATE PROCEDURE `select_id`(ID_in int)
BEGIN
select * from user_login where id= ID_in;
END |
DELIMITER ;

DROP PROCEDURE IF EXISTS `update`;
DELIMITER |
CREATE PROCEDURE `update`(ID_in int,name_in varchar(45),pass_in varchar(45))
BEGIN
update user_login set name = name_in , password = pass_in  where id = ID_in;
END |
DELIMITER ;


/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;


-- Dump completed on 2019-04-29 22:11:56
-- Total time: 0:0:0:0:126 (d:h:m:s:ms)
