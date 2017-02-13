/*
Student Name:Susan Marikhu
Subject:Programming Fundamental
Lab no:26
Program:Wap to create a file and insert data to it.
Date: 13 feb  2017
*/
#include<stdio.h>
#include<conio.h>
 int main(){
 FILE *fp;
 fp=fopen("E:/sunway/test.txt","w");
 fprintf(fp,"This data is save to file\n");

 fputs ("This is another line to saved to file",fp);
 fclose(fp);
 return 0;
 }
