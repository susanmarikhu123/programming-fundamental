/*
Student Name :Susan Marikhu
Subject: Programming fundametal
Lab Sheet no. : 09
Program :Write A C Program To Demonstration The Working Of Increment & Decrement Operators.
Date :december 2,2016
*/

#include<stdio.h>
#include<conio.h>
int main(){
int a,post,pre;
printf("Enter The Number:\n");
scanf("%d",&a);

    printf("\n the post increment is:%d",a++);
    printf("\n the pre increment is:%d",++a);

    printf("\n the post decrement is:%d",a--);
    printf("\n the pre decrement is:%d",--a);

getch();

return 0;
}
