/*
Student name:Susan Marikhu
subject:Programming Fundamental
Roll no. :16
Lab no. :03
Program :Write a program to print simple interest
Date:November 18,2016
*/

#include<stdio.h>
#include<conio.h>
int main (){
int p,t,r,interest;
printf("Enter the principle:\n");
scanf("%d",&p);
printf("Enter the time:\n");
scanf("%d",&t);
printf("Enter the rate:\n");
scanf("%d",&r);
interest=p*t*r/100;
printf("The result of interest is:%d",interest);
getch();
return 0;


}
