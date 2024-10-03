/*
A library program
name:Griffins Pius
reg no:CT100/G/22430/24
*/
#include <stdio.h>
int main(){
	int book_ID,due_date,return_date,days_overdue,charges;
	printf("enter the book_ID:");
	scanf("%d",&book_ID);
	
	printf("enter the due_date:");
	scanf("%d",&due_date);
	
	printf("enter the return_date:");
	scanf("%d",&return_date);
	
	//calculating the days over due
	days_overdue=return_date-due_date;
	
	printf("days overdue is %d\n",days_overdue);
	
	if(days_overdue<=7){
		charges=days_overdue*20;
		printf("the amount charged is %d",charges);
	}
	else
	{
		charges=days_overdue*50;
		
		if(days_overdue=8<15)
		{
			printf("the amount charged is %d",charges);
		}
		else
		{
			charges=days_overdue*100;
			printf("the charge overdue is %d",charges);
		}
	}
	
	
	return 0;
}
