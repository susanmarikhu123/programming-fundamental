/*
Student name:Susan Marikhu
subject:Programming Fundamental
Roll no.:16
Lab no. :03
Program :Write a program to print simple interest
Date:November 18,2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main (){
float r,area,circumstances;
printf("Enter The Radius:\n");
scanf("%f",&r);
area=PI*pow(r,2);
circumstances=2*PI*r;
printf("\nThe area of radius is:%f",area);
printf("\nThe circumstances of radius is:%f",circumstances);
getch();
return 0;

}
