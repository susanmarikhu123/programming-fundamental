/*
Student Name:Susan Marikhu
Subject:Programming Fundamental
Lab no:26
Program:Wap to create a file and insert data to it.
Date: 13 feb  2017
*/
#include<stdio.h>
int main(){
FILE *fp;

    int r=1;
    char data[255]="This data on the FILE:";
    fp=fopen("E:/sunway/test.txt","r");
do{
    printf("%s",data);
    printf("\n");
    r=fscanf(fp,"%s",data);
}
    while(r==1);
    fclose(fp);
    return 0;
}

