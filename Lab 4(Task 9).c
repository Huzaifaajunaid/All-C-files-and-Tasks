#include<stdio.h>
int main(){
	int hours,membership_status;
	float bill_amount,discount,final_bill;
	printf("Enter Your Bill amount ");
	scanf("%f",&bill_amount);
	printf("Enter Hours of Visit ");
	scanf("%d",&hours);
	printf("Enter Membership Status ");
	scanf("%d",&membership_status);
	discount=0;
	if(hours<0 || hours >23){
		printf("invalid hour ");
		return 0;
	}
	if(hours>=15 && hours<=17){
	discount =20;
	}
	if(membership_status==1){
	discount=discount+10;
	}
	if(discount>25){
	discount=25;
	}
	final_bill = bill_amount - (bill_amount*discount/100);
	
	printf("Final Bill = %.2f",final_bill);
	return 0;
}