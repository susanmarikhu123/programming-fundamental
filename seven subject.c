/*
Student Name: Susan Marikhu
Subject:Programming Fundamental
Roll no.:16
Lab no.:07
Program:Wrute a c program to enter marks of seven subjects , calculate the total,average,percentage.
Date : November 28,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
float a,b,c,d,e,f,g,total,average,percentage;
    printf("Enter the marks of Programming Fundamental:\n");
    scanf("%f",&a);
    printf("Enter the marks of Organization Management:\n");
    scanf("%f",&b);
    printf("Enter the marks of Algebra:\n");
    scanf("%f",&c);
    printf("Enter the marks of Software Engineering:\n");
    scanf("%f",&d);
    printf("Enter the marks of Discrete Structure:\n");
    scanf("%f",&e);
    printf("Enter the marks of Interactive Skills:\n");
    scanf("%f",&f);
    printf("Enter the marks of Computer Architecture:\n");
    scanf("%f",&g);
    total=a+b+c+d+e+f+g;
    average=total/7;
    percentage=(total/7);
    printf("\n\t The Result Of total Marks is:%f",total);
    printf("\n\t The average marks is:%f",average);
    printf("\n\t The percentage marks is:%f",percentage);
    getch();
    return 0;
}
