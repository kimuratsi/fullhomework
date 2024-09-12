#include    <stdio.h>
#include    <stdlib.h>

int main(){
    system("cls");
    int n, n1;
    printf("qator va ustun kiriting:  ");
    scanf("%d%d", &n, &n1);
    int array[n][n1];
    printf("\nsonlar: ");
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
    for(int ustun = 0; ustun < n; ustun ++ ){
        int low = array[0][ustun];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n1; j++){
                if(j == ustun){
                    if(low < array[i][j]){
                        low = array[i][j];
                    }
                }
            }
        }
        printf("\n%d - index ustunidagi max son ==> %d", ustun, low);
    }

    return 0;
}