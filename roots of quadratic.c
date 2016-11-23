/*
Student Name :susan  marikhu
subject : programming fundamental
Lab No.:05
Program:write a C program to find roots of quadratic equation & value are assigned from users.
date :november 23,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (){
float x1=0,x2=0,a,b,c,dis=0;
printf("enter the value of a:\n");
scanf("%f",&a);
printf("enter the value of b:\n");
scanf("%f",&b);
printf("enter the value of c:\n");
scanf("%f",&c);
dis=(b*b)-(4*a*c);
x1=(-b+pow(dis,0.5))/(2*a);
x2=(-b-pow(dis,0.5))/(2*a);
printf("\n The roots of first quadratic equation is:%f",x1);
printf("\n The roots of second quadratic equation is:%f",x2);
getch();
return 0;
}
