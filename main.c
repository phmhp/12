#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	
	srand((unsigned)(time(NULL)));	
	
	
	//opening
	printf("                                                                                                     \n");
	printf("                                                                                                     \n");
	printf("                                                                                                     \n");
	printf("=====================================================================================================\n");
	printf("*****************************************************************************************************\n");
	printf("                                                                                                     \n");
	printf("                                                                                                     \n");
	printf("                                                                                                     \n");
	printf("                                             BINGO GAME                                              \n");
	printf("                                                                                                     \n");
	printf("                                                                                                     \n");
	printf("                                                                                                     \n");
	printf("*****************************************************************************************************\n");
	printf("=====================================================================================================\n");
	
	
	//game
	
	
	bingo_init();
	bingo_printBoard();
	bingo_inputNum(21);
	bingo_printBoard();
	//initialize bingo board
	/*
	
	while (game is not end) //�� ���� N_BINGO���� ���� 
	{
		//bingo board print 
		
		//printf no. of completed line
		
		//select a number
		
		//update the board status 
	
	}
	
	*/
	
	//ending
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("===============================================================+=====================================\n");
	printf("*****************************************************************************************************\n");
	printf("                                           CONGRATULATION!!!!                                        \n");
	printf("                                                                                                     \n");
	printf("                                                                                                     \n");
	printf("                                                                                                     \n");
	printf("                                               BINGO!!!!                                             \n");
	printf("                                                                                                     \n");
	printf("                                                                                                     \n");
	printf("                                                                                                     \n");
	printf("                                               YOU WIN!!!!                                           \n");
	printf("*****************************************************************************************************\n");
	printf("=====================================================================================================\n");
	
	
	return 0;
}