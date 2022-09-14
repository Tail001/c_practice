#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int row, col;
    while(scanf("%d %d", &row, &col) == 2){
        int matrix[100][100];
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                scanf("%d", &matrix[i][j]);
            }
        }
        for(int i = 0; i < col; i++){
            for(int j = 0;j < row; j++){
                if(j == row - 1) printf("%d",matrix[j][i]);
                else printf("%d ",matrix[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}