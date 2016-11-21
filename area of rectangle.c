/*
Student Name:Susan Marikhu
Subject: Programming Fundamental
Lab no. :04
Program:Write a C program to print area and perimeter of rectangle.
Date:November 21,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
float l,b,area,perimeter;
printf("Enter The Length Of Rectangle:\n");
scanf("%f",&l);
printf("Enter The Breath Of Rectangle:\n");
scanf("%f",&b);
area=l*b;
perimeter=2*(l+b);
printf("\n Area of Rectangle is:%f",area);
printf("\nThe perimeter of rectangle is:%f",perimeter);
getch();
return 0;



}
