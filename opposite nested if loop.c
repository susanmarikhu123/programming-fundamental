/*
Student Name :Susan Marikhu
Subject :Programming Fundamental
Lab Sheet No.:20
Program:Wap to display pattern using nested if loop.
Date:20 january ,2017
*/
#include<stdio.h>

	int main(){
		int n,i,j;
		printf("Enter The Number:\n");
		scanf("%d",&n);
		 
		 for (i=n;i>=1;i--)
		 {
			 for(j=1;j<=i;j++)
			 {
				 printf(" * ");
			 }
			 printf("\n");
		 }
		
		return 0;
	}
		
