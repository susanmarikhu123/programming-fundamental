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
float p,t,r,interest;
printf("Enter the principle:\n");
scanf("%f",&p);
printf("Enter the time:\n");
scanf("%f",&t);
printf("Enter the rate:\n");
scanf("%f",&r);
interest=p*t*r/100;
printf("The result of interest is:%f",interest);
getch();
return 0;


}
