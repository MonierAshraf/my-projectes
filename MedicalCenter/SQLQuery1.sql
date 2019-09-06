use project_DataBase;

create table patient ( Id int primary key ,Ssn int  ,Adress varchar(50),State_Origin varchar(8) ,Religion varchar(15),Gender varchar (10) ,Name varchar (90)
,Data_birth Date,Phone char(11),E_Id int ,D_Id Int);

create table Employee (Id int  primary key  , Ssn int ,Adress varchar (50), State_Origin varchar(8) ,Religion varchar(15)
,Gender varchar (10) ,Name varchar(90),Data_birth Date,Job_Title varchar(20),User_Name varchar(15),Password varchar(30),Phone char(11) )  ;

create table Report (Id int  primary key , Ssn int ,Name varchar(90),Data_birth Date,Note varchar(900),Medicine varchar(200)
,Dose varchar (80) ,Past_Complant varchar (400),Current_Complant varchar (400),Follow_Data varchar (400),E_Id int )  ;


create table Department (Id int primary key ,Name Varchar(90), E_id int);

create table Diseases (Id int Primary key ,Name_Part varchar(90),Discreption varchar(500));

create table New_Diseases (D_id int ,P_id int );

ALTER TABLE New_Diseases
ADD FOREIGN KEY (p_id)
REFERENCES patient(id)

ALTER TABLE New_Diseases
ADD FOREIGN KEY (D_id)
REFERENCES Diseases(id)

ALTER TABLE Department
ADD FOREIGN KEY (E_id)
REFERENCES Employee(Id)

ALTER TABLE Report
ADD FOREIGN KEY (E_Id)
REFERENCES Employee(Id)

ALTER TABLE patient
ADD FOREIGN KEY (E_Id)
REFERENCES Employee(Id)

ALTER TABLE patient
ADD FOREIGN KEY (D_Id)
REFERENCES Department(Id)


--Employee
insert into Employee values(1,2000,'Assiut','married','moslom','male','Ali','2-13-2000','Doctor','Ali22','Ali22','123456781');
insert into Employee values(2,2001,'cario','Single','moslom','male','Mohamed','2-13-2001','Nurse','Mohamed22','Mohamed22','123456781');
insert into Employee values(3,2002,'Sohag','married','moslom','male','zaky','2-13-2002','Data_Entry','zaky22','zaky22','123456781');
insert into Employee values(4,2003,'Alex','Single','moslom','male','omar','2-13-2003','Patient','omar22','omar22','123456781');
insert into Employee values(5,2005,'Aswan','married','moslom','male','hassan','2-13-2004','Normal_Employee','hassan22','hassan22','123456781');
 --Department
 insert into  Department values (1 ,'doctor', 1);
 insert into  Department values (2 ,'Nurse', 2);
 insert into  Department values (3 ,'Data_Entry', 3);
 insert into  Department values (4 ,'Patient', 4);
 insert into  Department values (5 ,'Normal_Employee', 5);
 --Patient 
 insert into  patient values ( 1 ,2000  ,'Assiut','Married' ,'moslom','male' ,'Hady','1-2-1993' ,'12345678901',1 ,4);
 insert into  patient values ( 2 ,2001  ,'cario','Single' ,'moslom','male' ,'Hamdy','1-2-1994' ,'12345678901',1,4);
 insert into  patient values ( 3 ,2002  ,'Sohag','Married' ,'moslom','male' ,'Monier','1-2-1995' ,'12345678901',1 ,4);
 insert into  patient values ( 4 ,2003  ,'Alex','Single' ,'moslom','male' ,'Mostafa','1-2-1996' ,'12345678901',1 ,4);
 insert into  patient values ( 5 ,2004  ,'Aswan','Married' ,'moslom','male' ,'Ahmed','1-2-1997' ,'12345678901',1 ,4);
--Report

insert into Report values (1 , 2000  ,'Hady','1-2-1990','sssx','sswqqqqqqq','qqwww' ,'tttt','yyyyyyy','uuuuuu',1  )  ;
insert into Report values (2 , 2000  ,'Hamdy','1-2-1991','sssx','sswqqqqqqq','qqwww' ,'tttt','yyyyyyy','uuuuuu',1  )  ;
insert into Report values (3 , 2000  ,'Monier','1-2-1992','sssx','sswqqqqqqq','qqwww' ,'tttt','yyyyyyy','uuuuuu',1 )  ;
insert into Report values (4 , 2000  ,'Mostafa','1-2-1993','sssx','sswqqqqqqq','qqwww' ,'tttt','yyyyyyy','uuuuuu',1  )  ;
insert into Report values (5 , 2000  ,'Ahmed','1-2-1993','sssx','sswqqqqqqq','qqwww' ,'tttt','yyyyyyy','uuuuuu',1 )  ;
 --Diseases
 insert into Diseases values (1,'children Department','abc');
insert into Diseases values (2,'Opthoped Department','dec');
insert into Diseases values (3,'InternalMedicine Department','dec');
insert into Diseases values (4,'Opthalmolgy Department','dec');

--New_Diseases
insert into New_Diseases values (1,1);
insert into New_Diseases values (2,2);
insert into New_Diseases values (3,3);
insert into New_Diseases values (4,4);
insert into New_Diseases values (4,5);

select p.Name
 from Diseases as d,patient as p
  where d.Name_Part='Opthalmolgy Department';

select *  from employee;
select *  from employee where  State_Origin ='married';
select *  from employee where  Job_Title ='Doctor';
select name As 'tt' from Report where name='hady' ;
select * from Report;
select name from Report where id=3;