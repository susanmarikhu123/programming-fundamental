/*
Student Name :Susan Marikhu
Subject :Programming Fundamental
Lab Sheet No.:20
Program:Wap to print fibnacci series upto 'n' terms.
Date:20 january ,2017
*/
#include<stdio.h>
	
	int main()
	{
		int  a=1,b=1,c,i,n;
		printf("Enter the number:\n");
		scanf("%d",&n);
		
		printf("%d\t %d\t",a,b);
		for(i=1;i<=n;i++)
		{
			c=a+b;
			printf("%d\t",c);
			a=b;
			b=c;
		}
		return 0;
		
	}	
