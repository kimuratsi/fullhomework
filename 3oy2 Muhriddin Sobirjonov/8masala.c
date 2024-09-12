#include    <stdio.h>
#include    <stdlib.h>

int main(){
    system("cls");
    int n, n1;
    printf("qator va ustunni kiriting: ");
    scanf("%d%d", &n, &n1);
    int array[n][n1];
       for(int i = 0; i < n; i++){
        for(int j = 0; j < n1; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for(int l = 0; l < n; l++){
        for(int k = 0; k < n1; k++){
            printf("%d\t", array[l][k]);
        }
        puts("");
    }
    puts("\n");
    for(int g = 0; g < n; g++){
        for(int h = 0; h < n1; h++){
            array[g][h] *= array[g][h];
            printf("%d\t", array[g][h]);
        }
        puts("");
    }

    return 0;
}