/*
program to calculate simple interest
author:Griffins Pius
reg no:CT/100/G/22430/24
date:27/9/24
*/
#include<stdio.h>
#include<math.h>
int main(){
	float principle,rate,time,interest;
	//prompt the user to enter principle
	printf("enter the principle:");
	scanf("%f",&principle);
	//prompt the user to enter rate
	printf("enter the rate:");
	scanf("%f",&rate);
	//prompt the user to enter time
	printf("enter the time:");
	scanf("%f",&time);
	//calculate the interest
	interest=principle*rate/100*time;
	printf("the interest is: %f",interest);
	
	return 0;
}





