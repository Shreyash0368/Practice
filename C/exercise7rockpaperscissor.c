#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
//Create Rock, Paper & Scissors Game
// Player 1: rock
// Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

int main()
{
    char name[65];
    int choice,player,computer,random;
    player = 0;
    computer = 0;
    printf("enter your name\n");
    scanf("%s", &name);
    for (int i = 0; i < 3; i++)
    {
        printf("choose one of the following\n0.rock\n1.paper\n2.scissors\n");
        scanf("%d", &choice);
        random = generateRandomNumber(3);
        // printf("the number generated is %d\n",generateRandomNumber(3));
        if (choice == 0 && random == 0)
        {
            printf("the computer chose %d\n",random);
            printf("its a tie\n");
        }
        else if (choice == 0 && random == 1)
        {
            printf("the computer chose %d\n",random);
            printf("the computer gains one point\n\n");
            computer++;            
        }
        else if (choice == 0 && random == 2)
        {
            printf("the computer chose %d\n",random);
            printf("%s gain one point\n\n",name);
            player++;
        }
        else if (choice == 1 && random == 0)
        {
            printf("the computer chose %d\n",random);
            printf("%s gain one point\n\n",name);
            player++;
        }
        else if (choice == 1 && random == 1)
        {
            printf("the computer chose %d\n",random);
            printf("its a tie\n\n");
        }
        else if (choice == 1 && random == 2)
        {
            printf("the computer chose %d\n",random);
            printf("computer gains one point\n\n");
            computer++;
        }
        else if (choice == 2 && random == 0)
        {
            printf("the computer chose %d\n",random);
            printf("computer gains one point\n\n");
            computer++;
        }
        else if (choice == 2 && random == 1)
        {
            printf("the computer chose %d\n",random);
            printf("%s gain one point\n\n",name);
            player++;
        }
        else if (choice == 2 && random == 2)
        {
            printf("the computer chose %d\n",random);
            printf("its a tie\n\n");
        }      
        
        else
        {
            printf("ERROR\n");
        }
    }
    if (player > computer)
    {
        printf("\nyour points are %d and computer points are %d you win\n\n",player,computer);
    }
    else if (player < computer)
    {
        printf("\nyour points are %d and computer points are %d you loose\n\n",player,computer);
    }
    else if (player == computer)
        {
            printf("\nits a tie\n\n");
        }
    else
    {
        printf("\nERROR\n\n");
    }    
    return 0;
}
