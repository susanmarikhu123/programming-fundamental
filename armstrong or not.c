/*
Student Name :Susan Marikhu
Subject :Programming fundamental
Lab Sheet No.:22
Roll No:45
Program:Wap to print armstrong number between 1 to 1000.
Date:23 january ,2017
*/

#include<stdio.h>
#include<conio.h>
int main(){
int i,rem,armstrong=0,n;
printf("Enter The Number");
scanf("%d",&n);
i=n;
while(n>0)
{
    rem = n%10;
    armstrong =rem *rem*rem+armstrong;
    n/=10;
}
if(i==armstrong)
{
    printf("The number is armstrong");
}
else
{
    printf("The Number Is not armstrong");

}

getch();
return 0;
}
