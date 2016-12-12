/*
Student Name : Susan Marikhu
Subject : Programming Fundamental
Roll No. : 11
Program : Write a C program to find largest of three numbers using ternary operators.
Date : December 12,2016
*/
#include<stdio.h>
#include<conio.h>
int main (){
int a ,b ,c;
    printf("Enter the First number:\n");
        scanf("%d",&a);
    printf("Enter the second number :\n");
        scanf("%d",&b);
    printf("Enter the third number: \n");
        scanf("%d",&c);

(a>=b&&a>=c)?printf("%d is a largest number",a):(b>=c&&b>=a)?printf("%d is a largest number",b):printf("%d is a largest number",c);

getch();
return 0;

}
