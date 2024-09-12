#include    <stdio.h>
#include    <stdlib.h>

int main(){
    system("cls");
    int serya[3][4];
    printf("Array:  ");
    for(int n = 0; n < 3; n++){
        for(int m = 0; m < 4; m++){
            scanf("%d", &serya[n][m]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d\t", serya[i][j]);
        }
        puts("");
    }
    printf("\nqator indexi toq orindagi sonalar:  ");
    for(int l = 0; l < 3; l++){
        for(int k = 0; k < 4; k++){
            if(l % 2 != 0){
                printf("%d\t", serya[l][k]);
            }
        }
    }

    return 0;
}