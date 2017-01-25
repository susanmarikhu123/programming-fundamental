/*
Student Name:Susan Marikhu
Subject :Programming Fundamental
Lab sheet No:20
Program:Wap to find sum using function.
Date:25 Jan,2017
*/
#include<stdio.h>
#include<conio.h>
int minimum();
int main(){
   int result;
   result=minimum();
   printf("THe minimum no. is %d",result);
return 0;

}

int minimum(){
     int a,b;
    printf("\n Enter the first number");
    scanf("%d",&a);

    printf("\n Enter the second number");
     scanf("%d",&b);

if(a<b)
    return a;
else
    return b;

}
