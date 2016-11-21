/*
Student Name:Susan Marikhu
Subject: Programming Fundamental
Lab no. :04
Program:Write a C program to print area and perimeter of rectangle.
Date:November 21,2016
*/
#include<stdio.h>
#include<conio.h>
#include <math.h>
#define PI 3.14
int main(){
float r,area,volume;
printf("Enter The Radius:\n");
scanf("%f",&r);
area=4*PI*pow(r,2);
volume=4/3*PI*pow(r,3);
printf("\n Area of sphere is:%f",area);
printf("\n The volume of sphere is:%f",volume);
getch();
return 0;



}
