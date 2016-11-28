/*
Student Name :susan  marikhu
subject : programming fundamental
Lab No.:06
Program:write a C program to check positive or negative.
Date :november 25,2016
*/

#include<stdio.h>
#include<conio.h>
int main (){
int n;
printf("Enter The Number:\n");
scanf("%d",&n);
if (n>0)
{
    printf("The number is positive ");
}
else if(n<0)
{
    printf ("The number is negative ");

    }
else{
    printf("THE NUMBER IS ZERO");
}

getch();
return 0;
}



