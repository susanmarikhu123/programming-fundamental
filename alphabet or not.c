/*
Student name : Susan Marikhu 
Subject : Programming Fundamental
Lab Sheet No. : 16
Roll no.: 45
Program: Wap To Check whether a character is alphabet or not using ternary operator.
Date :January 09,2017
*/


#include<stdio.h>

int main(){
	int ASCII;
	char n;
	printf("Enter the character");
	scanf("%c",&n);
	
	ASCII = n;
	
	((ASCII>=65 && ASCII<=90) || (ASCII>=97 && ASCII<=122))?printf("The Character Is ALPHABET"):printf("The Character Is NOT ALPHABET");
	
	
return 0;
	
	
	}
