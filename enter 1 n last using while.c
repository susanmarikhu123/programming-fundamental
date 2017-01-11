/*
Student Name : Susan Marikhu 
Subject :Program fundamental
Roll No:45
Program:Wap To find first and last digits of any number of 4 digits number.
Date:11th January,2017
*/

#include<stdio.h>
int main(){
		int  n,last;
		printf(" \n Enter The Four Digits Number:");
		scanf("%d",&n);
		last = n%10;
		
		printf("\n The last digits number is:%d",last);
		
		while(n>=10)
		
		
		{
			n=n/10;
			n++;
		
	}
	
	
			printf("\n The first digits number is:%d",n);

	return 0;

	}
		
