/*
Student name : Susan Marikhu 
Subject : Programming Fundamental
Lab Sheet No. : 16
Roll no.: 45
Program: Wap To Check whether a character is alphabet or not using ternary operator.
Date :January 09,2017
*/

#include<stdio.h>
	int main(){
		int year;
			printf("Enter a year:");
			scanf("%d",&year);
			
		(year%4==0 && year%100!=0)?printf("The year is leap year"):
		(year%400==0)?printf("The year is leap year"):printf("The year is not leap year");
			
return 0;
			}
