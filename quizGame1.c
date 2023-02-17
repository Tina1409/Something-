//QUIZ GAME
#include<stdio.h>

int correctReturn(){
	printf("Correct Answer\n");
	printf("You have scored %d point \n",5);
	return 5;
}

int wrongReturn(){
	printf("Wrong Answer \n");
	printf("Your have scored %d point\n",0);
	return 0;
}

int returnPoints(int ans,int correctAns){
	if(ans==correctAns){
		return correctReturn();
	}
	else
	{
		return wrongReturn();
	}
}

int input(){
	int ans;
	printf("Enter your Answer: ");
	scanf("%d",&ans);
	return ans;
}

//fun(string quetion,string option1,string2 option2)
//printf(question);
//printf("1",option1)
//printf("2",option2)

void gameStarted(){
	int total=0;
    	//fun(question,option1,option2);
		printf("1. Which one is the first search engine in internet? \n\n");
		printf("1. Google\n");
		printf("2. Archie\n");
		printf("3. Wais\n");
		printf("4. Altavista\n");
		
		total=returnPoints(input(),2);
		
		printf("2.Jimmy's father has three sons- Paul I and Paul II. Can you guess the name of the third son? \n\n");
		printf("1. Paul III \n");
		printf("2. Jerin \n");
		printf("3. Jimmy \n");
		printf("4. None \n"); //try writing the name of the player
		
		total=total+returnPoints(input(),3);
		
		printf("3.You're 4th place right now in a race. What place will you be in when you pass the person in 3rd place? \n\n");
		printf("1. 1st \n");
		printf("2. 2nd \n");
		printf("3. 3rd \n");
		printf("4. None \n"); 
		
		total=total+returnPoints(input(),3);
		
		printf("4.How many months have 28 days?\n\n");
		printf("1. 2 \n");
		printf("2. 1 \n");
		printf("3. All of them \n");
		printf("4. Depend's if there's a leap year or not \n");
		
		total=total+returnPoints(input(),3);
		
		printf("5.How many 0.5cm slices can you cut from a bread that is 25cm long? \n\n");
		printf("1. 50 \n");
		printf("2. 25 \n");
		printf("3. 39 \n");
		printf("4. None \n"); 
		
		total=total+returnPoints(input(),1);
		
		printf("Total score: %d\n",total);
		return 0;			
}

int main(){
	while(1){
    int i;
	printf("Welcome to the Game\n\n");
	
	printf(">Press 1 to start the game \n");
	printf(">Press 0 to quit the game \n");
	
	scanf("%d",&i);
	if(i==1){
		printf("The game has started\n\n");	
        gameStarted();
	}
	else if(i==0){
		printf("The game has ended\n\n");
		break;
	}
	else{
		printf("Invalid \n\n");
	}
	}
}
