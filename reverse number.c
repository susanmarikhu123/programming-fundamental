/*
Student Name : Susan Marikhu 
Subject :Program fundamental
Lab Sheet No:18
Roll No:45
Program:Wap To
Date:11th January,2017
*/

#include<stdio.h>
	int main(){
		int n,rem,rev=0;
		printf("Enter Any Number:\n");
		scanf("%d",&n);
		
		while(n>0)
	  {
		 rem=n%10;
		 rev=rev*10+rem;
		 n=n/10;
		}  
	
		printf("The reverse number is:%d",rev);
	
		return 0;
	}
