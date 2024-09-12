#include    <stdio.h>
#include    <stdlib.h>

int main(){
    system("cls");
    int marr[4][4];
    printf("Array:  ");
    for(int i = 0; i < 4; i++ ){
        for(int j = 0; j < 4; j++){
            scanf("%d", &marr[i][j]);
        }
    }
    for(int i = 0; i < 4; i++ ){
        for(int j = 0; j < 4; j++){
            printf("%d\t", marr[i][j]);
        }
        puts("");
    }
    int yig = 0;
    for(int n = 0; n < 4; n++ ){
        for(int m = 0; m < 4; m++){
            yig += marr[n][m];
        }
    }
    printf("yigindi ==> %d", yig);


    return 0;
}