/*
Student Name:Susan Marikhu
Subject:Programming Fundamental
Lab no:26
Program:Wap to read data from a file.
Date: 13 feb  2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
FILE *fp;
char data[255];
fp=fopen("E:/sunway/test.txt","r");
fscanf(fp,"%s",data);
printf("%s",data);
printf("\n");
fclose(fp);
return 0;
}
