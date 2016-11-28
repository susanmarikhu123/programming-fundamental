/*
Student Name: Susan Marikhu
Subject:Programming Fundamental
Roll no.:16
Lab no.:07
Program:Wrute a c program to enter any number and calculate its  square roots.
Date : November 28,2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float a,sqrt;
printf("Enter The Number:\n");
scanf("%f",&a);
sqrt=pow(a,0.5);
printf("THe SQUARE ROOTS IS:%f",sqrt);
getch();
return 0;

}
