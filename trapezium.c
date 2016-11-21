/*
Student Name:Susan Marikhu
Subject: Programming Fundamental
Lab no. :04
Program:Write a C program to print area of triangle .
Date:November 21,2016
*/

#include<stdio.h>
#include<conio.h>
int main(){
float a,b,h,area;
printf("Enter The First Side Of Trapezium:\n");
scanf("%f",&a);
printf("Enter The Second side Of Trapezium:\n");
scanf("%f",&b);
printf("Enter The Height Of Trapezium:\n");
scanf("%f",&h);
area=((a+b)*h)/2;
printf("\n Area of trapezium is:%f",area);
getch();
return 0;



}
