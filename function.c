/*
Student Name : Susan Marikhu
Subject:Programming Fundamental
Lab Sheet no.:20
Program:Wap to ask radius from user using function and calculate the area.
Date:18 jan,2017
*/

#include<stdio.h>
#include<conio.h>
#define PI 3.14

    void area(int r);
    int main()
    {
        int r;

   printf(" \n Enter the Radius:");
    scanf("%d",&r);
    area(r);
    return 0;
    }

    void area(int r){
    float a;
    a=PI*r*r;


    printf("\n The Area Of Circle is:%f",a);


    }
