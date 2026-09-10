#include<stdio.h>
int main(){
	int policy_status,vehical_age;
	float claim_amount,approved_claim_amount;
	printf("Check policy status: ");
	scanf("%d",&policy_status);
	printf("Check vehical age: ");
	scanf("%d",&vehical_age);
	printf("Enter claim amount: ");
	scanf("%f",&claim_amount);
	if(policy_status==1 && vehical_age<10 && claim_amount<=500000){
		approved_claim_amount=claim_amount;
		printf("Approved claim amount:%.2f",approved_claim_amount);
	}
	else if(vehical_age>=10 && vehical_age<=15){
		approved_claim_amount=claim_amount*0.5;
		printf("Approved claim amount:%.2f",approved_claim_amount);
	}
	else
	printf("Rejected claim: ");
}
