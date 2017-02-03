/*
Student NAme :Susan Marikhu
Subject:Programming Fundamental
LAb No.:23
Program:Wap to create a STRUCTURE assignment value to its and display the value.
Date:3 feb,2017
*/
#include<stdio.h>
struct student
{
    int student_id;
    int registration_id;
    float fee;

};
int main(){
struct student susan;
susan.student_id=101;
susan.registration_id=1005;
susan.fee=10000.50;
printf("susan id = %d\n",susan.student_id);
printf("susan registration id = %d\n",susan.registration_id);
printf("susan fee=%f\n",susan.fee);
return 0;
}
