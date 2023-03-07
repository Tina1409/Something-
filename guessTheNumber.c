#include<stdio.h>
int main(){
	int secretNumber;
	int guessNumber;
	
	secretNumber=5;
	
	int i;
	int guessLimit;
	
	guessLimit=3;
	
	for(i=1;i<=guessLimit;i++){
		printf("Guess Number %d: ",i);
		scanf("%d",&guessNumber);
		
		if(guessNumber==secretNumber){
			printf("You won");
			break;
		}
	}
	if(guessNumber!=secretNumber){
		printf("You lost");
	}
	return 0;
}
