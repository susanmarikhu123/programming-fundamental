/*
Student Name: Susan Marikhu
Subject:Programming Fundamental
Roll no.:16
Lab no.:07
Program:Wrute a c program to enter any number and calculate its square
Date : November 28,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int a,square;
printf("Enter The Number:\n");
scanf("%d",&a);
square=pow(a,2);
printf("The square of number is:%2d",square);
getch();
return 0;

}
