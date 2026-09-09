#include<stdio.h>
int main(){
	int membership_type,time_slot;
	float base_rate, final_fee;
	printf("Enter your Membership Type: ");
	scanf("%d",&membership_type);
	printf("Enter Your Time slot: ");
	scanf("%d",&time_slot);
	switch (membership_type){
		case 1:
		base_rate=2000;
		break ;
		case 2:
            base_rate = 3500;
            break;
        case 3:
            base_rate = 2500;
            break;
        default:
            printf("Invalid membership type!\n");
            return 0;
	}
	switch (time_slot){
		case 1:
			final_fee =base_rate - (base_rate*0.15);
			break ;
			case 2:
				final_fee = base_rate;
				break ;
				default :
					printf("Invalid Choice!\n ");
					return 0;
	}
	printf("Your final monthly fee is: Rs. %.2f\n", final_fee);

    return 0;
}