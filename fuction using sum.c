/*
Student Name:Susan Marikhu
Subject :Programming Fundamental
Lab sheet No:20
Program:Wap to find sum using function.
Date:25 Jan,2017
*/
#include<stdio.h>
#include<conio.h>
void sum();
void main(){
    sum();
}

void sum(){
int a,b,add;
printf("Enter the number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);

add=a+b;
printf("The sum of two number:%d",add);
}

