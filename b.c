#include <stdio.h>
#include <stdlib.h>

int **B;

int main(void){
    int c, r, i, j;
    printf("r: \n");
    scanf("%d", &r);
    printf("c: \n");
    scanf("%d", &c);
    B = malloc(sizeof(int* ) * r);
    for (i = 0; i < r; i++){
        B[i] = malloc(sizeof(int) * c);
    }
    for(i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            int a;
            scanf("%d", &a);
            a++;
            B[i][j] = a;
        }
    }
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("%d", B[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++){
        free(B[i]);
    }
    free(B);
}