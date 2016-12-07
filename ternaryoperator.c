/*
Student Number : Susan Marikhu
Subject : Programming Fundamental
Lab Sheet No.  :10
Program : Wap to find largest number using ternary operator.
Date: December  07,2016
*/
#include<stdio.h>
#include<conio.h>
 int main(){
    int n;
    printf("Enter The Number:");
    scanf("%d",&n);

    (n%2==0)?printf("%d Is Even",n):printf("%d Is Odd",n);

        getch();
        return 0;
 }
