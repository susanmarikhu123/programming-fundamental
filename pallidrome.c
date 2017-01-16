
/*
Student name: Susan Marikhu
Subject:Programming Fundamental
RollNo:45
Program:Wap to display the pattern.
Date:18th January ,2017
*/

#include<stdio.h>
 int main () {
  int i,n,rem=0,reverse=0;
   
   printf("enter the number:");
    scanf("%d",&n);
     
     i=n;
     
      while (n>0)
       {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10; 
        } 
        if(i==reverse) 
        
          { 
			  printf("palidome");
           } 
           else
                       { 
            printf("not palidrome ");
             }
             
              return 0; 
              
              } 
