#include<stdio.h>
#include<string.h>

int input(){
	int x;
	printf("Enter: ");
	scanf("%d",&x);
	printf("\n");
	return x;
}

void addContact(int choice){
	int i,age,phoneNumber,dateOfBirth;
	char name[50],address[50];
	
	if(choice==1){
		int noOfContactsToBeAdded;
		printf("Enter the number of contacts to be added: ");
		scanf("%d",&noOfContactsToBeAdded);
			for(i=0;i<noOfContactsToBeAdded;i++){
				printf("-------------------\n");
				printf("Name: ");
				scanf("%s",&name[i]);
				printf("Age: ");
				scanf("%d",&age);
				printf("Phone Number: ");
				scanf("%d",&phoneNumber);
				printf("Date of Birth: ");
				scanf("%d",&dateOfBirth);
				printf("Address: ");
				scanf("%s",&address);
				printf("-------------------\n");
			}		

			while(1){
			printf("Press 2 to see the entered contact\n");
			printf("Press 3 to exit Phone Book\n");
			choice=input();
			if(choice==2){
					for(i=0;i<numOfContactsToBeViewed;i++){
						printf("-------------------\n");
						printf("Name: %s\n ",name[i]);
						printf("Age: %d\n",age);
						printf("Phone Number: %d\n",phoneNumber);
						printf("Date of Birth: %d\n",dateOfBirth);
						printf("Address: %d\n",address);
						printf("-------------------\n");
					}
			}
		
			else if(choice==3){
				while(1){
					printf("Are you sure you want to close the Phone Book\n");
					printf("> Press 1 for yes \n");
					printf("> Press 2 for no \n");
					
					choice=input();
			
					if(choice==1){
						printf("The phone book has closed\n");
						printf("Have a good day\n");
					}
					else if(choice==2){
						printf("The phone book has not closed\n");
						printf("You can continue\n");	
					}else{
						printf("Invalid\n");
					}
				}
			}else{
				printf("Invalid\n");
			}
		}
	}else{
		printf("Invalid\n");
	}
}

int main(){
	while(1){
		printf("Welcome to Phone Book\n\n");
		printf("Menu\n");
		printf("Press 1 to add the contact \n");
		addContact(input());	
	}
}
