/*
Student Name :Susan Marikhu
Subject: Programming Fundamental
Lab no. :06
Program :Write a program to enter p,t,r and calculate compound interest.
Date :November 25,2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (){
float p,t,r,dis,CI;
printf("Enter the principle:\n");
scanf("%f",&p);
printf("Enter the time:\n");
scanf("%f",&t);
printf("Enter the rate:\n");
scanf("%f",&r);


dis=1+r/100;
CI=(p*pow(dis,t)-1);
printf("The value of compound interest is:%f",CI);
getch();
return 0;

}
