#include<stdio.h>
int rules();
int round1();

int main(){
	rules();
	printf("\n\n");
	round1();
	return 0;
}

int round1(){
	char name[50];
	printf("Enter your name: ");
	scanf("%s",&name);
	
	printf("\n\n");
	
	int deposit;
	printf("Enter the amount of money to deposit for the game: ");
	scanf("%d",&deposit);
	
	printf("\n\n");
	printf("your current balance is %d",deposit);
	printf("\n\n");
	
	int bet1;
	printf("%d,Enter the amount to bet: $",name);
	scanf("%d",&bet1);
	
	printf("\n\n");
	if(bet1>deposit){
		printf("Money exceeds,\n");
		printf("Enter again: $");
		scanf("%d",&bet1);
	}
	
	printf("\n\n");
	
	int computer1;
	computer1=rand() % 10;
	
	int guess1;
	printf("guess a number from 1 to 10: ");
	scanf("%d",&guess1);
	
	printf("\n\n");
	
	if(guess1>10){
		printf("Number exceeds,\n");
		printf("Enter again: ");
		scanf("%d",&guess1);
	}
	
	printf("\n\n");
	if(guess1==computer1){
		printf("You have won $%d",bet1);
		printf("\n\n");
		
		int bet2;
		bet2=bet1*10;
		
		int new_won;
		if(bet1==deposit){
			new_won = bet2+0;
		}
		else{
			new_won=bet2+deposit;
		}
		
		printf("You have won $%d as total",new_won);
	}
	else if(guess1!=computer1){
		printf("You have loss $%d",bet1);
		printf("\n\n");
		
		printf("The correct number is: %d",computer1);
		printf("\n\n");
		
		int new_los;
		new_los=deposit - bet1;
		printf("Now you have $%d as a balance",new_los);
		
		printf("\n\n");
		
		if(new_los==0){
			printf("sir, you have $0 as a balance \n");
			printf("You have no more money to play\n");
			printf("Have a nice day");
		}
		else{
			int decision;
			printf(">Press 1 for yes\n");
			printf(">Press 2 for 2\n\n");
			
			printf("Do you want to continue(Y/N): ");
			scanf("%d",&decision);
			printf("\n\n");
			
			if(decision==1){
				rules();
				printf("\n\n");
				printf("Now you have $%d as a balance",new_los);
				printf("\n\n");
				
				int bet3;
				printf("%s, Enter the money to bet: $",name);
				scanf("%d",&bet3);
				printf("\n\n");
				
				if(bet3>new_los){
					printf("Money exceed,\n");
					printf("Enter again: $");
					scanf("%d",&bet3);
				}
				
				int guess2;
				printf("Enter a number from 1 to 10: ");
				scanf("%d",&guess2);
				printf("\n\n");
				
				int computer2;
				computer2=9;
				
				if(guess2>10){
					printf("number exceeds,\n");
					printf("Enter again: $");
					scanf("%d",&guess2);
					printf("\n\n");
				}
				
				if(guess2==computer2){
					printf("You have won $%d",bet3);
					printf("\n\n");
					
					int b;
					b=bet3*10;
					
					int b1;
					if(bet3==new_los){
						b1=b+0;
					}
					else{
						b1=b+new_los;
					}
					
					printf("You have won $%d as a total",b1);
				}
				else if(guess2!=computer2){
					printf("You have lose $%d ",bet3);
					printf("\n\n");
					
					int b2;
					b2= new_los - bet3;
					
					printf("You have $%d as a total",b2);
					printf("\n\n");
					
					if(b2==0){
						printf("Sir,you have $0 as a balance\n");
						printf("You have no more money to play\n");
						printf("Have a nice day");
					}
				}
			}else if(decision==2){
			printf("Have a nice day sir");
		}
		}
		
	}
}

int rules(){
	printf("---------------------------------------------\n");
	printf("RULES\n");
	
	printf("---------------------------------------------\n");
	printf("1. Choose any number between 1 to 10\n");
	printf("2. If you win you will get 10 times of money you bet\n");
	printf("3. If you bet on wrong number you will lose your betting amount\n");
	printf("---------------------------------------------\n");
}

