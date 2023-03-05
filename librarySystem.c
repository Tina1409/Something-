#include<stdio.h>
int main(){
	printf("----------Main Menu------------\n\n");
	
	printf("1. Add Books\n");
	printf("2. Display Book Information\n");
	printf("3. Search Books(Book Status)\n");
	printf("4. Exit\n\n");
	
	int a1;
	printf("Enter: ");
	scanf("%d",&a1);
	printf("\n\n");
	
	if(a1==1){
		printf("You can add book information\n\n");
		printf("Choose the category: \n\n");
		printf("1. Computer\n");
		printf("2. Electronics\n");
		printf("3. Mechanical\n\n");
	
		int a2;
		printf("Choose a category: ");
		scanf("%d",&a2);
		printf("\n\n");
		
		if(a2==1){
			printf("You have choose Computer category\n\n");
			printf("1. Introduction to C\n");
			printf("2. Introduction to Python\n");
			printf("3. Introduction to R Programming\n");
			
			int a3;
			printf("Choose a book: ");
			scanf("%d",&a3);
			printf("\n\n");	
			
			if(a3==1){
				printf("You have to choosed  Introduction to C book\n\n");
				
				char book_namea[50];
				char author_namea[50];
				int pagesa;
				int pricesa;
				
				printf("Book name: ");
				scanf("%s",&book_namea);
				printf("\n\n");
				
				printf("Author name: ");
				scanf("%s",&author_namea);
				printf("\n\n");
				
				printf("Pages: ");
				scanf("%d",&pagesa);
				printf("\n\n");
				
				printf("Price: ");
				scanf("%d",&pricesa);
				printf("\n\n");
			}
			else if(a3==2){
				printf("You have to choosed  Introduction to Python book\n\n");
				char book_nameb[50];
				char author_nameb[50];
				int pagesb;
				int pricesb;
				
				printf("Book name: ");
				scanf("%s",&book_nameb);
				printf("\n\n");
				
				printf("Author name: ");
				scanf("%s",&author_nameb);
				printf("\n\n");
				
				printf("Pages: ");
				scanf("%d",&pagesb);
				printf("\n\n");
				
				printf("Price: ");
				scanf("%d",&pricesb);
				printf("\n\n");
			}
			else if(a3==3){
				printf("You have to choosed  Introduction to R Programming book \n\n");
				char book_namec[50];
				char author_namec[50];
				int pagesc;
				int pricesc;
				
				printf("Book name: ");
				scanf("%s",&book_namec);
				printf("\n\n");
				
				printf("Author name: ");
				scanf("%s",&author_namec);
				printf("\n\n");
				
				printf("Pages: ");
				scanf("%d",&pagesc);
				printf("\n\n");
				
				printf("Price: ");
				scanf("%d",&pricesc);
				printf("\n\n");
			}
		}else if(a2==2){
			printf("You have choosed Electronics category\n\n");
			printf("1. Practical Electronics for Inventors\n");
			printf("2. The art of Electronics\n");
			printf("3. Fundamentals of digital circuits\n\n");
			
			int a4;
			printf("Choose a book: ");
			scanf("%d",a4);
			printf("\n\n");
			
			if(a4==1){
				printf("You have choosed Practical electronics for inventory book \n\n");
				char book_named[50];
				char author_named[50];
				int pagesd;
				int pricesd;
				
				printf("Book name: ");
				scanf("%s",&book_named);
				printf("\n\n");
				
				printf("Author name: ");
				scanf("%s",&author_named);
				printf("\n\n");
				
				printf("Pages: ");
				scanf("%d",&pagesd);
				printf("\n\n");
				
				printf("Price: ");
				scanf("%d",&pricesd);
				printf("\n\n");
			}
			else if(a4==2){
				printf("You have choosed the art of electronics book \n\n");
				char book_namee[50];
				char author_namee[50];
				int pagese;
				int pricese;
				
				printf("Book name: ");
				scanf("%s",&book_namee);
				printf("\n\n");
				
				printf("Author name: ");
				scanf("%s",&author_namee);
				printf("\n\n");
				
				printf("Pages: ");
				scanf("%d",&pagese);
				printf("\n\n");
				
				printf("Price: ");
				scanf("%d",&pricese);
				printf("\n\n");
			}
			else if(a4==3){
				printf("You have choosed fundamentals of digital circuits book \n\n");
				char book_namef[50];
				char author_namef[50];
				int pagesf;
				int pricesf;
				
				printf("Book name: ");
				scanf("%s",&book_namef);
				printf("\n\n");
				
				printf("Author name: ");
				scanf("%s",&author_namef);
				printf("\n\n");
				
				printf("Pages: ");
				scanf("%d",&pagesf);
				printf("\n\n");
				
				printf("Price: ");
				scanf("%d",&pricesf);
				printf("\n\n");
			}
		}
		else if(a2==3){
			printf("You have choosed Mechanical category\n\n");
			printf("1. Introduction to Autocad\n");
			printf("2. Fundamentals of Thermodynamics\n");
			printf("3. Mechanical Engineering: Conventional and objective Type\n\n");
			int a5;
			printf("Choose a book: ");
			printf("%d",&a5);
			printf("\n\n");
			if(a5==1){
				printf("You have choosed Introduction to Autocad book \n\n");
				char book_nameg[50];
				char author_nameg[50];
				int pagesg;
				int pricesg;
				
				printf("Book name: ");
				scanf("%s",&book_nameg);
				printf("\n\n");
				
				printf("Author name: ");
				scanf("%s",&author_nameg);
				printf("\n\n");
				
				printf("Pages: ");
				scanf("%d",&pagesg);
				printf("\n\n");
				
				printf("Price: ");
				scanf("%d",&pricesg);
				printf("\n\n");
			}
			else if(a5==2){
				printf("You have choosed Fundamentals of Thermodynamics book \n\n");
				char book_nameh[50];
				char author_nameh[50];
				int pagesh;
				int pricesh;
				
				printf("Book name: ");
				scanf("%s",&book_nameh);
				printf("\n\n");
				
				printf("Author name: ");
				scanf("%s",&author_nameh);
				printf("\n\n");
				
				printf("Pages: ");
				scanf("%d",&pagesh);
				printf("\n\n");
				
				printf("Price: ");
				scanf("%d",&pricesh);
				printf("\n\n");
			}
			else if(a5==3){
				printf("You have choosed Mechanical Engineering: Conventional and objective Type book \n\n");
				char book_namei[50];
				char author_namei[50];
				int pagesi;
				int pricesi;
				
				printf("Book name: ");
				scanf("%s",&book_namei);
				printf("\n\n");
				
				printf("Author name: ");
				scanf("%s",&author_namei);
				printf("\n\n");
				
				printf("Pages: ");
				scanf("%d",&pagesi);
				printf("\n\n");
				
				printf("Price: ");
				scanf("%d",&pricesi);
				printf("\n\n");
			}	
		}	
	}
	else if(a1==3){
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
		
		int a6;
		printf("Enter the book to search (USE THE CODE): ");
		scanf("%d",&a6);
		printf("\n\n");
		switch(a6){
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
    else if(a1==4){
    	printf("The library is closed\n\n");
    	printf("Have a nice day\n\n");
	}	
}
