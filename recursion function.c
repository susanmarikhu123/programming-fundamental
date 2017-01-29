/*
Student Name:Susan Marikhu
Subject :Programming Fundamental
Lab No. :22
PRogram :Wap to find factorial of given number using recursion function.
Date:29 january,2017
*/
#include<stdio.h>
  int fact(int n);
    int main(){
        int a,b;
          printf("Enter The Number:\n");
          scanf("%d",&a);
          b=fact(a);
          printf("The Factorial Of :%d %d",a,b);
          return 0;
      }
      int fact(int n)
      {
          if(n==1||n==0)
            return 1;
          else
            return n*fact(n-1);
      }



