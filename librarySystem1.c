#include<stdio.h>

int userChoice(){
	int choice;
	printf("Enter: ");
	scanf("%d",&choice);
	printf("\n\n");
	return choice;
}

void bookInformation(){
	char book_name[50];
	char author_name[50];
	int pages;
	int price;
				
	printf("Book name: ");
	scanf("%s",&book_name);
	printf("\n\n");
				
	printf("Author name: ");
	scanf("%s",&author_name);
	printf("\n\n");
				
	printf("Pages: ");
	scanf("%d",&pages);
	printf("\n\n");
				
	printf("Price: ");
	scanf("%d",&price);
	printf("\n\n");	
}

void menu(){
	printf("----------Main Menu------------\n\n");
	printf("1. Add Books\n");
	printf("2. Display Book Information\n");
	printf("3. Search Books(Book Status)\n");
	printf("4. Exit\n\n");
}

void addBookInformation(){
	while(1){
	
	int choice;
	printf("You can add book information\n\n");
		printf("Choose the category: \n\n");
		printf("1. Computer\n");
		printf("2. Electronics\n");
		printf("3. Mechanical\n\n");
		choice=userChoice();
		if(choice==1){
			printf("You have choose Computer category\n\n");
			printf("1. Introduction to C\n");
			printf("2. Introduction to Python\n");
			printf("3. Introduction to R Programming\n");
			choice=userChoice();
			if(choice==1){
				printf("You have to choosed  Introduction to C book\n\n");
				bookInformation();
			}
			else if(choice==2){
				printf("You have to choosed  Introduction to Python book\n\n");
				bookInformation();
			}
			else if(choice==3){
				printf("You have to choosed Introduction to R Programming\n\n");
				bookInformation();
			}
			else{
				printf("Invalid option\n");
				continue;
			}
		}
		else if(choice==2){
			printf("You have choosed Electronics category\n\n");
			printf("1. Practical Electronics for Inventors\n");
			printf("2. The art of Electronics\n");
			printf("3. Fundamentals of digital circuits\n\n");
			choice=userChoice();
			if(choice==1){
				printf("You have to choosed Practical Electronics for Inventors  book\n\n");
				bookInformation();
			}
			else if(choice==2){
				printf("You have to choosed The art of Electronics book\n\n");
				bookInformation();
			}
			else if(choice==3){
				printf("You have to choosed Fundamentals of digital circuits\n\n");
				bookInformation();
			}
			else{
				printf("Invalid option\n");
				continue;
			}
		}
		else if(choice==3){
			printf("You have choosed Mechanical category\n\n");
			printf("1. Introduction to Autocad\n");
			printf("2. Fundamentals of Thermodynamics\n");
			printf("3. Mechanical Engineering: Conventional and objective Type\n\n");
			choice=userChoice();
			if(choice==1){
				printf("You have to choosed Introduction to Autocad book\n\n");
				bookInformation();
			}
			else if(choice==2){
				printf("You have to choosed Fundamentals of Thermodynamics\n\n");
				bookInformation();
			}
			else if(choice==3){
				printf("You have to choosed Mechanical Engineering: Conventional and objective Type\n\n");
				bookInformation();
			}
			else{
				printf("Invalid option\n");
				continue;
			}
		}
		else
		{
			printf("Invalid option\n");
			continue;
		}
	}
}
void displayBookInformation(){
	int choice;
	printf("You can search the book(Book status)\n\n");
	printf("Press the code:123 for Introduction to C\n");
	printf("Press the code:456 for Introduction to Python\n");
	printf("Press the code:789 for Introduction to R Programming\n");
	printf("Press the code:523 for Practical Electronics for Inventors\n");
	printf("Press the code:759 for the art of electronics\n");
	printf("Press the code:157 for Fundamentals of digital circuits\n");
	printf("Press the code:359 for Introduction to Autocad\n");
	printf("Press the code:153 for Fundamentals of Thermodynamics\n");
	printf("Press the code:104 for Mechanical Engineering: Conventional and objective Type\n");
	choice=userChoice();
	switch(choice){
			case 123:
			printf("Book Name: Introduction to C\n\n");
			printf("Book status: 2 copies left");
			
			case 456:
			printf("Book Name: Introduction to Python\n\n");
			printf("Book status: 12 copies left");
			
			case 789:
			printf("Book Name: Introduction to R Programming\n\n");
			printf("Book status: 10 copies left");
			
			case 523:
			printf("Book Name: Practical electronics for inventors\n\n");
			printf("Book status: 4 copies left");
			
			case 759:
			printf("Book Name: the art of electronics\n\n");
			printf("Book status: 5 copies left");
			
			case 157:
			printf("Book Name: fundamentals of digital circuits\n\n");
			printf("Book status: 9 copies left");
			
			case 359:
			printf("Book Name: Introduction to Autocad\n\n");
			printf("Book status: 34 copies left");
			
			case 153:
			printf("Book Name: fundamentals of thermodynamics\n\n");
			printf("Book status: 67 copies left");
			
			case 104:
			printf("Book Name: mechanical engineering: Conventional and objective type\n\n");
			printf("Book status: 3 copies left");	
		}
}

int main(){
	while(1){
		int choice;
		menu();
		choice=userChoice();
		if(choice==1){
			addBookInformation();
		}
		else if(choice==3){
			displayBookInformation();
		}
		else if(choice==4){
			printf("Library is closed");
			break;
		}
		else{
			printf("Invalid Choice\n");
		}
	}
}
