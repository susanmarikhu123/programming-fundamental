/*
Student Name : Susan Marikhu 
Subject :Program fundamental
Roll No:45
Program:Wap To find first and last digits of any number of 4 digits number.
Date:11th January,2017
*/

#include<stdio.h>

	int main(){
		int  a,b,c,d,z;
		printf(" \n Enter The Four Digits Number:");
		scanf("%d",&a);
		
		z=a/10;
		b=z/10;
		c=b/10;
		 printf(" \n The First digits of the number  is:%d",c);
		 d=a%10;
		 printf(" \n The last digits of the number is:%d",d);
				
return 0;                                
}
