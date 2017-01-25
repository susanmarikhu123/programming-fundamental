/*
Student Name:Susan Marikhu
Subject :Programming Fundamental
Lab sheet No:20
Program:Wap to find sum using function.
Date:25 Jan,2017
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void radius(int r);
void main(){
    int r;
    printf("\n Enter the radius:");
    scanf("%d",&r);
    radius(r);

}

void radius(int r){
float area;
area=PI*r*r;
printf("%f",area);


}
