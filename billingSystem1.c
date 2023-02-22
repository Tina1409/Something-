#include<stdio.h>

struct CustomerDetail{
	char customerName[50];
	long long int phoneNumber;
	long long int customerId;
};

struct CustomerDetail customerInput(){
	struct CustomerDetail customer;
	printf("Customer Name: ");
	scanf("%s",&customer.customerName);
	printf("\nCustomer Number: ");
	scanf("%d",&customer.phoneNumber);
	printf("\nCustomer ID: ");
	scanf("%d",&customer.customerId);
	return customer;
}

int quantityInput(char product[50]){
	int quantity;
	printf("Please enter the quantity of the product: %d\n",quantity);
	scanf("%d",&quantity);
	printf("\n");
	return quantity;
}

int bodyWork(){
	int body_soap=10;
	int hair_cream=20;
	int hair_spray=100;
	int body_spray=50;
	int TotalPrice=0;
}

void billing(){

}

int main(){
	printf("\t\t\t\t\t-----WELCOME TO SUPER MARKET-----\n");
	printf("\t\t\t\t\t-----CUSTOMER DETAIL-----\n");
	struct CustomerDetail customer=customerInput();
	billing();
}
