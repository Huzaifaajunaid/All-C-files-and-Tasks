#include<stdio.h>
int main()
{
	int age,monthlyincome,repayment;
	printf("Enter your age\nYour Monthly Income\nYour repayment \n");
	scanf("%d %d %d", &age, &monthlyincome, &repayment);
	
	if(age<=21 || age>=60){
		printf("Rejected due to age",age);
	}
	else if(monthlyincome<=30000){
		printf("Rejected due to monthly income",monthlyincome);
	}
	else if(repayment>(monthlyincome*0.40)){
		printf("Rejected due to high debt ratio",repayment);
	}
	else {
		printf("Approved");
	}
	return 0;
}
