#include<stdio.h>

int main()
{
	float principal,rate,time,simpleinterest;
	
	printf("principal amount:");
	scanf("%f",&principal);
	
	printf("rate of interest:");
	scanf("%f",&rate);
	
	printf("enter time:");
	scanf("%f",&time);
	
	simpleinterest=(principal*rate*time)/100;
	
	printf("simple interest=%.2f",simpleinterest);
	
	return 0;
    }