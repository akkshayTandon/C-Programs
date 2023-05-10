#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define true 1
#define false 0
#define N 9

    int not_in_row, not_in_column, not_in_box;
    int r; int c; int k;
    int grid[9][9] = {
        {0,0,4,0,5,0,0,0,0},
        {9,0,0,7,3,4,6,0,0},
        {0,0,3,0,2,1,0,4,9},
        {0,3,5,0,9,0,4,8,9},
        {0,9,0,0,0,0,0,3,0},
        {0,7,6,0,1,0,9,2,0},
        {3,1,0,9,7,0,2,0,0},
        {0,0,9,1,8,2,0,0,3},
        {0,0,0,0,6,0,1,0,0}
    } ;

int print(int grid[N][N]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < N; i++)
        {
            printf("%d ",grid[i][j]);
        }
        printf("\n");
    }
}

int is_valid(int grid[N][N], int r,int c,int k){
    for (int i = 0; i < 9; i++)
        not_in_row = ( (k!=grid[r][i]) ? true : false );
    for (int i = 0; i < 9; i++)
        not_in_column = ( (k!=grid[i][c]) ? true : false );
    for (int i = (r/3)*3, j=(c/3)*3; i < (r/3)*3+3, j<(c/3)*3+3; i++,j++)
        not_in_box = ( (k!=grid[i][j]) ? true : false );
    return not_in_box,not_in_column,not_in_row;
}

int solve(int grid[N][N],int r,int c){
    if( r == 9 )
      return true;
    else if( c == 9 )
      return solve(grid,r+1,0);
    else if( grid[r][c] != 0 )
      return solve(grid,r,c+1);
    else
      for (int i = 0; i < 9; i++)
        if (is_valid(grid,r,c,k))
            grid[r][c] = k;
            if (solve(grid,r,c+1))
                return true;
            grid[r][c] = 0;
      return false;
}
      
int main(){
    system("cls");
    print(grid);
    solve(grid,0,0);
    print(grid);
    printf("End");
    return 0;
}