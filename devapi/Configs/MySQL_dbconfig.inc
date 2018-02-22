<?php
include Class_MySQLi;
$DBCon = new ClassMySQLi('127.0.0.1', 'root', 'mysql', 'alumni_db');
$DBCon->setPrefix('gb_');

/* change character set to utf8*/
