//MODERN PERIODIC TABLE
#include<stdio.h>
#include<stdbool.h>
int input(){
	int m;
	printf("ENTER: ");
	scanf("%d",&m);
	printf("\n");
	return m;
}

void element(int atomicNumber){
	if(atomicNumber==1){
		printf("Name : Hydrogen\n");
		printf("Symbol : H\n");
		printf("Atomic number: 1\n");
		printf("Electronic Configuration: 1s^1\n");
		printf("Discovered by: Henry Cavendish\n");
		printf("Charge: +1\n"); 
	}
}

void gameStarted(){
		int choice;
		printf(">Press 2 to search the element by atomic number\n\n");
		choice=input();
		
		if(choice==2){
			element(input());
		}
		else{
			printf("Invalid\n");
		}
}

bool gameOver(){
	while(1){
		int choice;
		printf("Do you want to exit? (Yes/No)\n");
		printf("> Press 8 for Yes\n");
		printf("> Press 9 for No\n");
		choice=input();
		if(choice==8){
			while(1){	
				printf("Are you sure. You want to close the periodic table? (Yes/No)\n");
				printf("> Press 6 for Yes\n");
				printf("> Press 7 for No\n");
				choice=input();
					
				if(choice==6){
					printf("The periodic table has closed.\n");	
					return true;
				}
				else if(choice==7){
					printf("Periodic table has not closed and you can continue to learn more about elements\n\n ");
					return false;
				}
				else{
					printf("Invalid\n");
				}
			}
		}
		else if(choice==9){
			printf("Periodic table has not closed and you can continue to learn more elements\n\n");	
			return false;
		}else{
	    	printf("invalid\n");
		}
	}
}

int main(){
	while(1){
		int choice;
		printf("Welcome to Modern Periodic Table \n\n");
		printf("> Enter 1 to know about an element\n\n");
		printf("> Enter 0 to close the Periodic table\n\n");
	    choice=input();
		
		if(choice==1){
			gameStarted();	
		}
		else if(choice==0){
			if(gameOver()){
				break;
			}else{
				continue;
			}
		}
		else{
			printf("Invalid\n");
		}
	}
}
