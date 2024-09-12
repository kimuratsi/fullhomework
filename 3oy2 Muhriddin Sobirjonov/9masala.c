#include    <stdio.h>
#include    <stdlib.h>

int main(){
    system("cls");
    int n, n1;
    printf("qator va ustunni kiriting:  ");
    scanf("%d%d", &n, &n1);
    int array[n][n1];
    printf("\nArray: ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n1; j++){
            scanf("%d\t", &array[i][j]);
        }
    }
    puts("Array ichiga olingan sonlar:");
    for(int l = 0; l < n; l++){
        for(int k = 0; k < n1; k++){
            printf("%d\t", array[l][k]);
        }
        puts("");
    }
    puts("Array ichiga olingan sonlarning kvadrati");
    for(int a = 0; a < n; a++){
        for(int b = 0; b < n1; b++){
            array[a][b] *= array[a][b];
            printf("%d\t", array[a][b]);
        }
        puts("");
    }
    puts("\n juftlarning 0 ga tenglangani: ");
    for(int l = 0; l < n; l++){
        for(int k = 0; k < n1; k++){
            if(array[l][k] % 2 == 0){
                array[l][k] = 0;
            }
            printf("%d\t", array[l][k]);
        }
        puts("");
    }

    return 0;
}