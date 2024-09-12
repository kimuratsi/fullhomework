#include    <stdio.h>
#include    <stdlib.h>

int TOLDIRISH(int n, int m,  int array[n][m]);
int ALMASH(int n, int m, int array[n][m]);

int main(){
    system("cls");
    int n, m;
    printf("qator va ustun:  ");
    scanf("%d%d", &n, &m);
    int array[n][m];
    TOLDIRISH(n , m , array);
    ALMASH(n, m, array);

    return 0;
}
int TOLDIRISH(int n, int m,  int array[n][m]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++ ){
            printf("%d\t", array[i][j]);
        }
        puts("\n");
    }
}
int ALMASH(int n, int m, int array[n][m]){
    puts("\nustun bilan qatorning almashtirilgani: ");
    for(int l = 0; l < n; l++){
        for(int k = 0; k < m; k++ ){
            printf("%d\t", array[k][l]);
        }
        puts("\n");
    }
}