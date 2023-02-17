//QUIZ GAME
#include<stdio.h>
int main(){
	int i;
	int ans1,ans2,ans3,ans4,ans5;
	int point1,point2,point3,point4,point5;
	int point01,point02,point03,point04,point05;
	int total=0;
	
	while(1){
	printf("Welcome to the Game\n\n");
	
	printf(">Press 1 to start the game \n");
	printf(">Press 0 to quit the game \n");
	
	scanf("%d",&i);
	if(i==1){
		printf("The game has started\n\n");	
	}
	else if(i==0){
		printf("The game has ended\n\n");
		break;
	}
	else{
		printf("Invalid \n\n");
	}

	if(i==1){
		printf("1. Which one is the first search engine in internet? \n\n");
		printf("1. Google\n");
		printf("2. Archie\n");
		printf("3. Wais\n");
		printf("4. Altavista\n");
		
		printf("Enter your Answer: ");
		scanf("%d",&ans1);
		
		if(ans1==2)
		{
			printf("Correct Answer\n");
			point1=5;
			printf("You have scored %d point \n",point1);
		}
		else 
		{
			printf("Wrong Answer \n");
			point01=0;
			printf("Your have scored %d point\n",point01);
		}
		
		printf("2.Jimmy's father has three sons- Paul I and Paul II. Can you guess the name of the third son? \n\n");
		printf("1. Paul III \n");
		printf("2. Jerin \n");
		printf("3. Jimmy \n");
		printf("4. None \n"); //try writing the name of the player
		
		printf("Enter your answer: ");
		scanf("%d",&ans2);
		
		if(ans2==3)
		{
			printf("Correct Answer\n");
			point2=5;
			printf("You have scored %d point \n",point2);
		}
		else 
		{
			printf("Wrong Answer \n");
			point02=0;
			printf("Your have scored %d point\n",point02);
		}
		
		printf("3.You're 4th place right now in a race. What place will you be in when you pass the person in 3rd place? \n\n");
		printf("1. 1st \n");
		printf("2. 2nd \n");
		printf("3. 3rd \n");
		printf("4. None \n"); 
		
		printf("Enter your answer: ");
		scanf("%d",&ans3);
		
		if(ans3==3)
		{
			printf("Correct Answer\n");
			point3=5;
			printf("You have scored %d point \n",point3);
		}
		else 
		{
			printf("Wrong Answer \n");
			point03=0;
			printf("Your have scored %d point\n",point03);
		}
		
		printf("4.How many months have 28 days?\n\n");
		printf("1. 2 \n");
		printf("2. 1 \n");
		printf("3. All of them \n");
		printf("4. Depend's if there's a leap year or not \n");
		
		printf("Enter your answer: ");
		scanf("%d",&ans4);
		
		if(ans4==3)
		{
			printf("Correct Answer\n");
			point4=5;
			printf("You have scored %d point \n",point4);
		}
		else 
		{
			printf("Wrong Answer \n");
			point04=0;
			printf("Your have scored %d point\n",point04);
		}
		
		printf("5.How many 0.5cm slices can you cut from a bread that is 25cm long? \n\n");
		printf("1. 50 \n");
		printf("2. 25 \n");
		printf("3. 39 \n");
		printf("4. None \n"); 
		
		printf("Enter your answer: ");
		scanf("%d",&ans5);
		
		if(ans5==1)
		{
			printf("Correct Answer\n");
			point5=5;
			printf("You have scored %d point \n",point5);
		}
		else 
		{
			printf("Wrong Answer \n");
			point05=0;
			printf("Your have scored %d point\n",point05);
		}
		total=point1+point2+point3+point4+point5;
		printf("Total score: %d",total);
	return 0;			
		}
	}
}
