#include<stdio.h>

void display(){
	printf("Welcome to the ATM \n\n");
	printf("Please Insert your card (Type a char)\n\n");
	scanf("%c",&card);
}

void cardDetailsOfOwner(){
	int accountLimit,pin,balanceAfterWithdrawal,amountToBeWithdrawn,userChoice;
	if(card=='k'){
		accountLimit=50000;
		pin=1234;
	}
	if(card=='s'){
		accountLimit=1000000;
		pin=6789;
	}
	if(card=='k'){
		
		printf(">Press 1 for withdrawal of money from your account\n\n");
		printf(">Press 2 to check the balance\n\n");
		scanf("%d",&userChoice);
		
		if(userChoice==1)
		{
			printf("Please enter your 4-digit pin: \n");
			scanf("%d",&pin);
			
			if(pin==1234){
				printf("Enter the amount to be withdrawn: \n");
				scanf("%d",&amountToBeWithdrawn);
				
				if(amountToBeWithdrawn>accountLimit){
					printf("Insufficient");
				}
				else{
					printf("Collect the money\n\n");
					balance=accountLimit-amountToBeWithdrawn;
					printf("Now your bank balance is %d",balance);
				}
			}
			else{
				printf("Incorrect pin\n\n");
				printf("Please try again\n\n");
				scanf("%d",&pin);
				if(pin==1234){
					printf("Enter the amount to be withdrawal: \n");
					scanf("%d",&amountToBeWithdrawn);
					
					if(amountToBeWithdrawn>accountLimit){
						printf("insufficient");
					}
					else{
						printf("Collect the money\n\n");
						balance=accountLimit-amountToBeWithdrawn;
						printf("Now your bank balance is %d",balance);
					}
				}
				else{
					printf("Your request has been blocked\n");
					printf("So please try again");
				}
			}
		}
		else if(n==2){
			printf("Please enter your 4-digit pin: \n");
			scanf("%d",&pin);
			if(pin!=1234){
				printf("Please try again\n\n");
				scanf("%d",&pin);
				if(pin!=1234){
					printf("Your request has been blocked\n");
					printf("So please try again");
				}
				else{
					printf("Your bank balance is %d",amountLimit);
					
				}
			}
			
		}
}
int main(){
	if(card=='k'){
		printf("Hello Ken Keneki\n\n");
	}
}
