create database yjydb;

USE yjydb;
CREATE TABLE user{
    username char(50) NULL,
    passwd char(50) NULL
}ENGINE=InnoDB;

INSERT INTO user(username,passwd) VALUES('name','passwd');