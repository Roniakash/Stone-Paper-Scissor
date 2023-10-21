#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int stonepaperscissor(char you,char computer){
	if(you==computer){
		return 0;
	}
	else if((you=='P' && computer=='R') || (you=='R' && computer=='S') || (you=='S' && computer=='P')){
		return 1;
	}
	else{
		return -1;
	}
}

int main()
{
	printf("************!STONE-PAPER-SCISSOR GAME!************\n");
	char you,computer;
	srand(time(0));
	int number=rand()%100+1;
	if(number<33){
		computer='P';
	}
	else if(number>33 && number<66){
		computer='R';
	}
	else{
		computer='S';
	}
	printf("*********!Enter 'P' for PAPER , 'R' for STONE , 'S' for SCISSOR!*********\n");
	scanf("%c",&you);
	int result=stonepaperscissor(you,computer);
	printf("******!YOU CHOOSE %c AND COMPUTER CHOOSE %c!******\n",you,computer);
	if(result==0){
		printf("***!GAME DRAW!***");
	}
	else if(result==1){
		printf("***!YOU WIN THE GAME!***");
	}
	else{
		printf("***!YOU LOST THE GAME!***");
	}
	return 0;
}
