#include    <stdio.h>
#include    <stdlib.h>

int main(){
    system("cls");
    int n, n1;
    printf("qator va ustun kiriting:  ");
    scanf("%d%d", &n, &n1);
    int array[n][n1];
    printf("\narray: ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n1; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for(int a = 0; a < n; a++){
        for(int b = 0; b < n1; b++){
            printf("%d\t", array[a][b]);
        }
        puts("");
    }
    int yig, ust = 0;
    for(ust; ust < n1; ust ++ ){
        yig = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n1; j++){
                if(j == ust){
                    yig += array[i][j];
                }
            }
        }
        printf("\n%d-index ustundagi sonlar yiginisi == > %d", ust, yig);
    }



    return 0;
}