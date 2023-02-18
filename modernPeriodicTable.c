//MODERN PERIODIC TABLE
#include<stdio.h>

int main(){
	int n;
	int m;
	int a;
	int Exit;
	int Exi;
	while(1){
	
	printf("Welcome to Moderen Periodic Table \n\n");
	
	printf("> Enter 1 to know about an element\n\n");
	printf("> Enter 0 to close the Periodic table\n\n");
	
	printf("ENTER: ");
	scanf("%d",&n);
	printf("\n");
	
	if(n==1)
	{
		printf(">Press 2 to search the element by atomic number\n\n");
		printf("ENTER: ");
		scanf("%d",&m);
		printf("\n");
		
		if(m==2)
		{
			printf("Enter the atomic number of the element to be searched: ");
			scanf("%d",&a);
			if(a==1)
			{
				printf("Name : Hydrogen\n");
				printf("Symbol : H\n");
				printf("Atomic number: 1\n");
				printf("Electronic Configuration: 1s^1\n");
				printf("Discovered by: Henry Cavendish\n");
				printf("Charge: +1\n"); 
			}
		}
		else{
			printf("Invalid\n");
		}	
	}
	else if(n==0){
		printf("Do you want to exit? (Yes/No)\n");
		printf("> Press 8 for Yes\n");
		printf("> Press 9 for No\n");
		printf("ENTER: ");
		scanf("%d",&Exit);
		printf("\n");
		if(Exit==8){
			printf("Are you sure. You want to close the periodic table? (Yes/No)\n");
			printf("> Press 6 for Yes\n");
			printf("> Press 7 for No\n");
			printf("ENTER: ");
			scanf("%d",&Exi);
			printf("\n");
			if(Exi==6){
				printf("The periodic table has closed.");
				break;
				
			}
			else if(Exi==7){
				printf("Periodic table has not closed and you can continue to learn more about elements\n\n ");
				printf("Enter the atomic number of the element to be searched: \n\n");
				scanf("%d",&a);
				
				if(a==1)
				{
					printf("Name : Hydrogen\n");
					printf("Symbol : H\n");
					printf("Atomic number: 1\n");
					printf("Electronic Configuration: 1s^1\n");
					printf("Discovered by: Henry Cavendish\n");
					printf("Charge: +1\n"); 	
				}
			}
			else{
				printf("Invalid\n");
			}
		}
		else if(Exit==9){
		printf("Periodic table has not closed and you can continue to learn more elements\n\n");
		printf("Enter the atomic number of the element to be searched: \n\n");
		scanf("%d",&a);	
		
		if(a==1)
		{
			printf("Name : Hydrogen\n");
			printf("Symbol : H\n");
			printf("Atomic number: 1\n");
			printf("Electronic Configuration: 1s^1\n");
			printf("Discovered by: Henry Cavendish\n");
			printf("Charge: +1\n"); 	
		}
	}
		else{
		printf("Invalid\n");
	}
}
	else
	{
		printf("Invalid \n");
	}
}
}

