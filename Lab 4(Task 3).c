#include<stdio.h>
int main(){
	int account_type;
	float balance,interest;
	printf("Enter your Account Type: ");
	scanf("%d",&account_type);
	printf("Enter your Balance:");
	scanf("%f",&balance);
	
	switch(account_type){
		case 1:
			if(balance>=100000){
			interest=balance*0.04;
			}
			else{
				interest=balance*0.02;
			}
			break;
	case 2:
	{
		interest=0;
		break;
	}
	case 3:
		{
		  interest=0;
			break;
		}
		default:
			printf("You Enter Invalid Number ");
			}
printf("Annual Interest Earned: Rs. %.2f", interest);
}
