/*
Student Name: Susan Marikhu
Subject:Programming Fundamental
Roll no.:16
Lab no.:07
Program:Wrute a c program to use relational operators.
Date : November 28,2016
*/

#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
    printf("Enter the first number:\n");
    scanf("%d",&a);

    printf("Enter the second number:\n");
    scanf("%d",&b);

    a==b;
    printf("\n\t in use of==%d",a==b);

    a>b;
    printf("\n\t in use of > %d",a>b);

    a<b;
    printf("\n\t in use of < %d",a<b);

    a!=b;
    printf("\n\t in use of != %d",a!=b);

    a>=b;
    printf("\n\t in use of >= %d",a>=b);

    a<=b;
    printf("\n\t in use of <=%d",a<=b);

    getch();

    return 0;



}
