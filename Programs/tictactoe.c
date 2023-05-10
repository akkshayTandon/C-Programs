#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void menu();

    /* structure for palyer who wins */
struct Winner
{
    int player;
    // char name[21];
} w ;

    /* structure if the game draws */
struct Draw
{
    char draw[5];
} d ;

// void getData(){
//     char n[21];
//     gets(n);
//     FILE *fp = fopen("D:\Coding_Playground\C\WinnerDetails.bin","wb");
//     if( fp == NULL){
//         printf("Error! opening file.");
//         exit(0);
//     }
//     w.name = n;
//     fwrite(&w,sizeof(struct Winner),1,fp);
// }

// void showData(){
//     FILE *fp = fopen("D:\Coding_Playground\C\WwinnerDetails.bin","rb");
//     if( fp == NULL){
//         printf("Error! opening file.");
//         exit(0);
//     }
//     fread(&w,sizeof(struct Winner),1,fp);

// }

    /* Write TicTacToe */
void tictactoe(){

    printf("    ==== ==== ====    ====   //\\\\     ====    ====  ====  ====\n");
    printf("     ||   ||  |        ||   ||   ||   |        ||   |  |  |\n");
    printf("     ||   ||  |   ---  ||   ||===||   |   ---  ||   |  |  |===\n");
    printf("     ||   ||  |        ||   ||   ||   |        ||   |  |  |\n");
    printf("     ||  ==== ====     ||   ||   ||   ====     ||   ====  |====\n");
    printf("=====================================================================\n");

}

    /* Draw the Game Board */
void board(char square1[]){
    system("cls");

    printf("    |    |    \n");
    printf("   %c|  %c|  %c\n",square1[1],square1[2],square1[3]);
    printf("--------------\n");
    printf("    |    |    \n");
    printf("   %c|  %c|  %c\n",square1[4],square1[5],square1[6]);
    printf("--------------\n");
    printf("    |    |    \n");
    printf("   %c|  %c|  %c\n",square1[7],square1[8],square1[9]);

}

    /* To check if box have same mark and return appropriate result */
int checkwin(char square[]){
    
    if( square[1]==square[2] && square[2]==square[3])
       return 1;
    else if( square[4]==square[5] && square[5]==square[6])
       return 1;
    else if( square[7]==square[8] && square[8]==square[9])
       return 1;
    else if( square[1]==square[4] && square[4]==square[7])
       return 1;
    else if( square[2]==square[5] && square[5]==square[8])
       return 1;
    else if( square[3]==square[6] && square[6]==square[9])
       return 1;
    else if( square[1]==square[5] && square[5]==square[9])
       return 1;
    else if( square[3]==square[5] && square[5]==square[7])
       return 1;
    else if ( square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' &&
              square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9')
       return -1;
    else
       return 0;
}

    /* Game Logic - it starts here */
void game(){
    system("cls");

    char sq[10] = {'0','1','2','3','4','5','6','7','8','9'};

    int player = 1, choice, ch; char mark;
    printf("\n\tASSUMPTION : Game starts with player 1(X).\n\n\tPRESS ENTER!!"); getch();

    do
    {
        player = ( (player%2) == 1 ) ? 1 : 2 ;
        mark = ( player==1 ) ? 'X' : 'O' ;

        board(sq);
        printf("\n\n Player %d(%c) enter box number : ",player,mark); 
        scanf("%d",&choice);

        if( (player==1) && ( choice==1 || choice==2 || choice==3 || choice==4 || choice==5 ||
                             choice==6 || choice==7 || choice==8 || choice==9 ) )
                     sq[choice] = mark;
        if( (player==2) && ( choice==1 || choice==2 || choice==3 || choice==4 || choice==5 ||
                             choice==6 || choice==7 || choice==8 || choice==9 ) )
                     sq[choice] = mark;

        board(sq);

        ch = checkwin(sq);
        player = player + 1 ;

        if( ch == -1 )
          break;

    } while (ch == 0);
    
    if ( ch == 1 )
    {
        printf("\n\n\tPRESS ENTER."); getch(); system("cls");
        printf("\n   CONGRATULATIONS.\n\n   Player %d wins.\n\n",(player-1));
        
        // getData();
        w.player = (player - 1);

        printf("\n\n   PRESS ENTER. ");
        if (getch()==13)
        {
            menu();
        } 
    }

    if ( ch == -1 )
    {
        printf("\n\n\tPRESS ENTER."); getch(); system("cls");
        printf("\n   GAME DRAW. \n\n");
        
        strcpy(d.draw,"DRAW");

        printf("\n\n   PRESS ENTER !! ");
        if (getch()==13)
        {
            menu();
        } 
    }
    
}

    /* Display Menu */
void menu(){
    system("cls");
    char ch;

    do{
         tictactoe();

        printf("\n1. Play");
        // printf("\n2. Show");
        printf("\n3. Exit");
        printf("\n\n\tEnter your choice : "); ch = getch();

        switch (ch)
        {
        case '1':
            game();
            break;
        // case '2':
        //     showData();
        //     break;
        case '3':
            exit(0);
            break;
        default: printf("\n\nINVALID CHOICE!!");
        }
    }while(ch!='3');
}

int main(){
    system("cls");
    // setcursortype(0);
    menu();
    getch();
    return 0;
}