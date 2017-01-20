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
		 
		 for (i=1;i<=n;i++)
		 {
			 for(j=1;j<=n;j++)
			{
				if(i>j)
				{
				printf(" ");
			}
			else
			
			
			 {
				 printf(" * ");
			 }
			
			}
			 printf("\n");
		 }
		
		return 0;
	}
		
