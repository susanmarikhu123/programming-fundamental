/*
Student Name : Susan Marikhu 
Subject :Program fundamental
Roll No:45
Program:Wap To find first and last digits of any number of 4 digits number.
Date:11th January,2017
*/
#include<stdio.h>

	int main(){	
		int n,count;
		
		printf(" \n Enter Any Number:");
		scanf("%d",&n);
	count=1;
	while(n>10)

	{
		n=n/10;
		count++;
		printf("Count The Number:%d",count);
	}
	
	
	return 0;
}
