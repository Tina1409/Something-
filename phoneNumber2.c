#include<stdio.h>
#include<string.h>

int input(){
	int x;
	printf("Enter: ");
	scanf("%d",&x);
	printf("\n");
	return x;
}

struct ContactInformation{
	int age;
	int dateOfBirth; 
	long long int phoneNumber;
	char name[50];
	char address[100];
};

void addContact(int choice){
	if(choice==1){
		int i,noOfContactsToBeAdded;
		printf("Enter the number of contacts to be added: ");
		scanf("%d",&noOfContactsToBeAdded);
		struct ContactInformation user[noOfContactsToBeAdded];
		for(i=0;i<noOfContactsToBeAdded;i++){
			printf("Name: ");
			scanf("%s",&user[i].name);
			printf("Age: ");
			scanf("%d",&user[i].age);
			printf("Date Of Birth: ");
			scanf("%d",&user[i].dateOfBirth);
			printf("Phone Number: ");
			scanf("%d",&user[i].phoneNumber);
			printf("Address: ");
			scanf("%s",&user[i].address);	
		}
		
		for(i=0;i<noOfContactsToBeAdded;i++){
			printf("Name:%s ",user[i].name);
			printf("Age:%d ",user[i].age);
			printf("Date of Birth:%d ",user[i].dateOfBirth);
			printf("Phone Number:%d ",user[i].phoneNumber);
			printf("Address:%s ",user[i].address);
		}
	}
}
int main(){
	printf("Welcome to Phone Book\n");
	printf("MENU\n");
	printf("> Press 1 to add a contact\n");
	addContact(input());
}
