#include<stdio.h>
void sum();
void main(){
printf("I am calling the function\n");
sum();
}

void sum()
{
int x,y,add;
printf("Enter the first nummber");
scanf("%d%d,&x");
printf("Enter the second nummber");
scanf("%d%d,&y");
add=x+y;
printf("Sum of two numbers is:%d,add");
}
