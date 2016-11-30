/*
Student Name : Susan Marikhu
Subject :Programming Fundamental
Lab :08
Date :November 30,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b;

printf("Enter the first number :\n");

scanf("%d",&a);

printf("Enter the second number:\n");

scanf("%d",&b);

a+=b;
    printf("\n\t +=%d",a);

a-=b;
    printf("\n\t -=%d",a);

a*=b;
        printf("\n\t *=%d",a);

a/=b;
    printf("\n\t /=%d",a);

    getch();

    return 0;


}
