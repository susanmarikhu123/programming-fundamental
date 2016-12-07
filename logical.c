/*
Student Name : Susan Marikhu
Subject : Programming Fundamental
Lab Sheet no.:10
Program : Write a C program to use logical operators.
Date : December 07,2016
*/

#include<stdio.h>
#include<conio.h>
 int main(){
 int a;
 printf(" Enter The Number:");
 scanf("%d",&a);
if(a>=80&& a<=100)
    printf("\n\t Congratulation, You Have Passed In Distinction.",a);
else if(a>=60 && a<80)
    printf("\n\t Congratulation, You Have Passed In First Division.",a);
if(a>=45 && a<60)
    printf("\n\t Congratulation,You Have Passed In Second Division.",a);
else  if(a<=45)
    printf("\n\t Work Hard, You Have Passed In Third Division.",a);
getch();
return 0;
}
