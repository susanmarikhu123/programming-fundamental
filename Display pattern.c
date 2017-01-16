/*
Student name: Susan Marikhu
Subject:Programming Fundamental
RollNo:45
Program:Wap to display the pattern.
Date:18th January ,2017
*/

#include<stdio.h>

	int main(){
	int i,j,n;
	printf("\n Enter Any Number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			
		{
			printf("%d",j);
		}
		printf("\n");
		
	}
		return 0;
		}
