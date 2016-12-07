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
int a,b,c;
printf("Enter The First Number:");
scanf("%d",&a);
printf("Enter The Second Number:");
scanf("%d",&b);
printf("Enter The Third Number:");
scanf("%d",&c);
if(a>=b&&a>=c)
{
    printf("\n\t Largest Number Is:%d",a);

}
else if (b>=c&&b>=a)
{
    printf("\n\t Largest Number Is:%d",b);
}
else{
        printf("\n\t Largest Number Is:%d",c);
    }
getch();
return 0;
}













