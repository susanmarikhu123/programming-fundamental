/*
Student Name : Susan Marikhu 
Subject: Programming Fundamental
Roll No: 40
Lab Sheet No:14
Program:Write A Menu Program .
Date:28 December,2016
*/

#include<stdio.h>

 int main(){
 
 int z,n;
 char k;
 
 printf("** Welcome To The Program **");
 printf("\n 1. To Check No. Is Odd Or Even");
 printf("\n 2. To Check No. Is Prime Or Not");
 printf("\n 3. To Check Assign Character is Vowel Or Consonant ");
 printf("\n 4. To Check Assign Character Is Alpha" );
 printf("\n 5. To Check Assign No. Is Divisible by 5 and 11 Or Not");
 printf("\n 6.Exit ");
 
 
	 printf("\n Enter Any Number:\n");
	 scanf("%d",&n);
 
	printf("\n ** Choose anyOne Number from above  menu **\n");
	scanf("%d",&z);
	switch (z)
	
	{
	case 1:
		(n%2==0)?printf("%d is even number\n", n):printf("%d is an odd number\n", n);
	break;
	
case 2:
		
break;

	case 3:
		k=n;
	(k=='a'||k=='e'||k=='i'||k=='o'||k=='u' || k=='A'||k=='E'||k=='I'||k=='O'||k=='U')?printf("The Alphabet Is Vowel"):
	printf("The Alphabet Is Consonant");
	break;
	
	case 4:
	
	((n>=97&&n<=122)||(n>=65&&n<=97))?printf("The Character Is Aplhabet"):printf("The Character Is not Alphabet");
	 	
	break;
	
	case 5:
		(n%5==0&&n%11==0)?printf("The Number Is Divisible By 5 and 11"):printf("The Number isnot Divisible by 5 and 11");
    break;
		case 6:
		printf("\n	ExIT tHE pROGRAM	");
		break;
		
		default:
			printf("invalid input");

} 
printf("\n\t***Thank fOR VISITING***");
return 0;
	
 }
