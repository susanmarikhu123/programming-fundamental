/*
Student Name :Susan Marikhu
Subject :Programming fundamental
Lab Sheet No.:22
Roll No:45
Program:Wap to check whether to entered no. prime or not.
Date:23 january ,2017
*/

#include<stdio.h>
#include<conio.h>
int main(){
int n,i,count=0;
printf("Enter The Number");
scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    if(n%i==0)
        count++;
    }
if(count==2)
{
    printf("The No. is a prime number");

}
else {
    printf("The No. is not a prime number");
}

getch();
return 0;
}
