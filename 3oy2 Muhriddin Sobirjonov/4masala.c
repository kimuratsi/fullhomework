#include    <stdio.h>
#include    <stdlib.h>

int main(){
    system("cls");
    int array[3][4];
    printf("12 ta son kiriting:  ");
    for(int n = 0; n < 3; n++){
        for(int m = 0; m < 4; m++){
            scanf("%d", &array[n][m]);
        }
    }
    for(int n = 0; n < 3; n++){
        for(int m = 0; m < 4; m++){
            printf("%d\t", array[n][m]);
        }
        puts("");
    }
    printf("\n 0 - qatordagi sonlar: ");
    for(int n = 0; n < 3; n++){
        for(int m = 0; m < 4; m++){
            if(n == 0){
                printf("%d\t", array[n][m]);
            }
        }
    }

    return 0;
}