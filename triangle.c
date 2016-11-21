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
float a,b,c,s,area;
printf("Enter The First Sides:\n");
scanf("%f",&a);
printf("Enter The Second sides:\n");
scanf("%f",&b);
printf("Enter The Third Sides:\n");
scanf("%f",&c);
s=(a+b+c)/2;
area =pow(s*(s-a)*(s-b)*(s-c),0.5);
printf("\n Semi-perimeter of triangle is:%f",s);
printf("\n Area of triangle is:%f",area);
getch();
return 0;



}
