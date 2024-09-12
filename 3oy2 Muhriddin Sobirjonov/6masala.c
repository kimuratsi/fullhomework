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
    for(int l = 0; l < n; l++){
        for(int k = 0; k < n1; k++){
            printf("%d\t", array[l][k]);
        }
        puts("");
    }
    int qator = 0;
        for(int i = 0; i < n; i++){
            int yig = 0;
            for(int j = 0; j < n1; j++){
                yig += array[i][j];
            }
            printf("\n%d-index qatordagi sonlar yiginisi == > %d", qator, yig);
            qator++;
        }

    return 0;
}