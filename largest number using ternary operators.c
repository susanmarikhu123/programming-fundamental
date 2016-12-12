/*
Student Name : Susan Marikhu
Subject : Programming Fundamental
Roll No. : 11
Program : Write a C program to find largest of two numbers using ternary operators.
Date : December 12,2016
*/

#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
printf("Enter The Number:\n");
scanf("%d",&a);
printf("Enter The Number:\n");
scanf("%d",&b);

(a>=b)?printf("%d is the largest number",a):printf("%d is the largest number",b);

getch();
return 0;
}
