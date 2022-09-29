#include <stdio.h>
#include <stdlib.h>
int main (){
    int rows, col;
    int row=0;
    puts ("Escreva o tamanho das duas matrizes matriz primeiro linha depois coluna");
    scanf("%d", &rows);
    scanf("%d", &col);
    if (rows==col){
    int **matriz1 = malloc(sizeof(int*) * rows);
    for (int i = 0; i < col; i++){
        matriz1[i] = malloc(sizeof(int) * col);
    }
    int **matriz2 = malloc(sizeof(int*) * rows);
    for (int i = 0; i < col; i++){
        matriz2[i] = malloc(sizeof(int) * col);

    }
    int **matrizresult = malloc(sizeof(int*) * rows);
    for (int i = 0; i < col; i++){
        matrizresult[i] = malloc(sizeof(int) * col);

    }
    puts("Escreva os valores da primeira matriz");
    for (size_t matriz1row = 0; matriz1row< rows; matriz1row++){
        for(size_t matriz1col=0; matriz1col< col; matriz1col++){
        printf("Escreva o valor da linha %d coluna %d\n", matriz1row+1, matriz1col+1);
        scanf("%d", &matriz1[matriz1row][matriz1col]);    
        }
    }
    puts("Escreva os valores da segunda matriz");
    for (size_t matriz2row = 0; matriz2row < rows; matriz2row++){
        for (size_t matriz2col = 0; matriz2col < col; matriz2col++){
         printf("Escreva o valor da linha %d coluna %d\n", matriz2row+1, matriz2col+1);
        scanf("%d", &matriz2[matriz2row][matriz2col]);  
        }
    }
    for (size_t matriz_result_row = 0; matriz_result_row<rows; matriz_result_row++){
        
        for (size_t matriz_result_col = 0; matriz_result_col<col; matriz_result_col++){
            for (size_t matriz1col = 0; matriz1col< col; matriz1col++){
                while(row< rows){
                    if(row==0){
                    matrizresult[matriz_result_row][matriz_result_col]=matriz1[matriz_result_row][matriz1col]*matriz2[row][matriz_result_col];
                    }
                    else{
                    matrizresult[matriz_result_row][matriz_result_col]+=matriz1[matriz_result_row][matriz1col]*matriz2[row][matriz_result_col];
                    }
                    row++;
                    if (row==rows){
                        row=0;
                    }
                    break;
                    }
                }
               
            }
        }
    
                     
    for (size_t matriz_result_row = 0; matriz_result_row<rows; matriz_result_row++){
        printf("\n");
        for (size_t matriz_result_col = 0; matriz_result_col<col; matriz_result_col++){
           
            printf("%d\t", matrizresult[matriz_result_row][matriz_result_col]);

        }
    }
    }
}