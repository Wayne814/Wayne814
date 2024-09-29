/*
Program to calculate the compound interest
author:
reg no:
date:
*/
//processor scanf(),printf()
#include <stdio.h>
#include <math.h>
int main(){
	float principle,time,rate,N;
	//prompt user to enter the principle
	printf("enter the principle:");
	scanf("%f",&principle);
	//promptthe user to enter the time
	printf("enter the time:");
	scanf("%f",&time);
	//prompt user to enter the rate
	printf("enter the rate:");
	scanf("%f",&rate);
	//prompt the user to enter N
	printf("enter the value of N:");
	scanf("%f",&N);
	//calculate the compound interest
	float compound_interest=principle*pow((1+(rate/(100*N))),N*time)-principle;
	printf("compound_interest is:%f,N",compound_interest);
	return 0;
}
	


