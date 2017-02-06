/*
Student NAme:susan marikhu
subject:Programming Fundamental
LAb NO.25
PRogram:Wap to structure.
Date :06 Feb,2017
*/
	
#include<stdio.h>
struct student {
int id;
int registration_number	;
float fee;
};
int main(){
struct student susan;
susan.id=100;
susan.registration_number=10050;
susan.fee=555.50;
printf("susan id =%d \n susan registration no. =%d \n susan fee =%f", susan.id,susan.registration_number, susan.fee );
		return 0;
		}
