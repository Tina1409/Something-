#include<stdio.h>
void guessNumber(){
	int secretNumber;
	int guessNumber;
	secretNumber=rand()+5;
	int i;
	for(i=1;i<=3;i++){
		printf("Guess Number %d(You have three chances to guess): ",i);
		scanf("%d",&guessNumber);
		if(guessNumber==secretNumber){
			printf("You won");
			break;
		}
	}
	if(guessNumber!=secretNumber){
		printf("You lost");
	}
}

int main(){
	guessNumber();
	return 0;
}
