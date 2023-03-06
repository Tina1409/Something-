#include<stdio.h>
int main(){
	char card;
	int n; //user choice
	int p; //PIN
	int a; //AMOUNT TO BE WITHDRAWN
	int b; //account limit
	int diff; //DIFFERENCE OF ACCOUNT AFTER WITHDRAWAL

	
	printf("Welcome to the ATM \n\n");
	printf("Please Insert your card (Type a char)\n\n");
	scanf("%c",&card);
	
	if(card=='k'){
		printf("Hello Ken Keneki\n\n");
		
		printf(">Press 1 for withdrawal of money from your account\n\n");
		printf(">Press 2 to check the balance\n\n");
		
		b=50000;
		scanf("%d",&n);
		
		if(n==1)
		{
			printf("Please enter your 4-digit pin: \n");
			scanf("%d",&p);
			
			if(p==1234){
				printf("Enter the amount to be withdrawn: \n");
				scanf("%d",&a);
				
				if(a>b){
					printf("Insufficient");
				}
				else{
					printf("Collect the money\n\n");
					diff=b-a;
					printf("Now your bank balance is %d",diff);
				}
			}
			else{
				printf("Incorrect pin\n\n");
				printf("Please try again\n\n");
				scanf("%d",&p);
				if(p==1234){
					printf("Enter the amount to be withdrawal: \n");
					scanf("%d",&a);
					
					if(a>b){
						printf("insufficient");
					}
					else{
						printf("Collect the money\n\n");
						diff=b-a;
						printf("Now your bank balance is %d",diff);
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
			scanf("%d",&p);
			if(p!=1234){
				printf("Please try again\n\n");
				scanf("%d",&p);
				if(p!=1234){
					printf("Your request has been blocked\n");
					printf("So please try again");
				}
				else{
					printf("Your bank balance is %d",b);
					
				}
			}
			
		}
		else if(card=='s'){
			printf("Hello Sasuke uchiha\n\n");
			
			printf(">Press 1 for withdrawal of money from your account");
			printf(">Press 2 to check the balance\n\n");
			
			b=100000;
			scanf("%d",&n);
			if(n==1){
				printf("Please enter your 4-digit pin:\n");
				scanf("%d",&p);
				if(p==5678){
					printf("Enter the amount to be withdrawal: \n");
					scanf("%d",&a);
					
					if(a>b){
						printf("Insufficient");
					}
					else{
						printf("Collect the money\n\n");
						diff=b-a;
						printf("Now,your bank balance is %d",diff);
					}
				}
				else{
					printf("Incorrect pin\n\n");
					printf("Please try again");
					scanf("%d",&p);
					if(p==5678){
						printf("Enter the amount to be withdrawal: \n");
						scanf("%d",&a);
						if(a>b){
							printf("insufficient");
						}
						else{
							printf("Collect the money\n\n");
							diff=b-a;
							printf("Now,your bank balance is %d",diff);
						}
					}
					else{
						printf("Your request has been blocked\n");
						printf("So please try again");	
					}
				}
			}
			else if(n==2){
				printf("Please enter your 4-digit pin :\n");
				scanf("%d",&p);
				
				if(p!=5678){
					printf("Please try again\n\n");
					
					scanf("%d",&p);
					if(p!=5678){
						printf("Your request has been blocked\n");
						printf("so,please try again");
					}
					else{
						printf("Your bank balance is %d",b);
					}
				}else{
					printf("Your bank balance is %d",b);
				}
			}
		}
	}else if(card=='i'){
		printf("Hello Itachi Uchiha\n\n");
		
		printf(">Press 1 for withdrawal of money from your account\n\n");
		printf(">Press 2 to check the balance\n\n");
		
		b=60000;
		scanf("%d",&n);
		if(n==1){
			printf("Please enter your 4-digit with: \n ");
			scanf("%d",&p);
			
			if(p==9123){
				printf("Enter the amount to be withdrawn: \n");
				scanf("%d",&a);
				if(a>b){
					printf("Insufficient");
				}
				else{
					printf("Collect your money\n\n");
					diff=b-a;
					printf("Now,your bank balance is %d",diff);
				}
			}else{
				printf("Incorrect pin\n\n");
				printf("Please try again\n");
				scanf("%d",&p);
				if(p==9123){
					printf("Enter the amount to be withdrawn: \n");
					scanf("%d",&a);
					if(a>b){
						printf("Insufficient");
					}
					else{
						printf("Collect the money\n\n");
						diff=b-a;
						printf("Now,your bank balance is %d",diff);
						
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
			scanf("%d",&p);
			if(p!=9123){
				printf("Please try again\n\n");
				scanf("%d",&p);
				if(p!=9123){
					printf("Your request has been blocked\n");
					printf("so,Please try again");
					
				}
				else{
					printf("Your bank balance is %d",b);
				}
				
			}
		}
		else if(card=='l'){
			printf("Hello Light Yagami\n\n");
		
			printf(">Press 1 for withdrawal of money from your account\n\n");
			printf(">Press 2 to check the balance\n\n");
		
			b=40000;
			scanf("%d",&n);
			if(n==1){
				printf("Please enter your 4-digit pin: \n");
				scanf("%d",&p);
				
				if(p==8123){
					printf("Enter the amount to be withdrawn: \n");
					scanf("%d",&a);
					
					if(a>b){
						printf("Insufficient");
					}
					else{
						printf("Collect the money\n\n");
						diff=b-a;
						printf("Now,your bank balance is %d",diff);
					}
				}
				else{
					printf("Incorrect pin\n\n");
					printf("Please try again\n\n");
					
					scanf("%d",&p);
					if(p==8123){
					printf("Enter the amount to be withdrawn: \n");
					scanf("%d",&a);
					
					if(a>b){
						printf("Insufficient");
					}
					else{
						printf("Collect the money\n\n");
						diff=b-a;
						printf("Now,your bank balance is %d",diff);
					}	
					}
					else{
						printf("Your request has been blockes\n");
						printf("So,please try again");
					}
					
			}
		}
				else if(n==2){
					printf("Please enter your 4-digit pin: \n");
					scanf("%d",&p);
					if(p!=8123){
						printf("Please try again\n\n");
						scanf("%d",&p);
						if(p!=8123){
							printf("Your request has been blocked");
							printf("So,please try again");
						}
						else{
							printf("Your bank balance is %d",b);
						}
						
					}
					else{
						printf("Your bank balance is %d",b);
					}
				}
				
			}
		}
	}


