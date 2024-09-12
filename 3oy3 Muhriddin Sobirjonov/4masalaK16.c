#include    <stdio.h>
#include    <stdlib.h>

int TOLIRDISH(int n, int massiv[n][n]);
int ALMASH(int n, int massiv[n][n]);

int main(){
    system("cls");
    int n;
    printf("Bitta son kiriting:  ");
    scanf("%d", &n);
    int massiv[n][n];
    TOLIRDISH(n, massiv);
    ALMASH(n, massiv);

    return 0;
}
int TOLIRDISH(int n, int massiv[n][n]){
    printf("\narray sonlarini kiriting: ");
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            scanf("%d", &massiv[i][j]);
        }
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            printf("%d\t", massiv[i][j]);
        }
        puts("\n");
    }
}
int ALMASH(int n, int massiv[n][n]){
    puts("0- ustun sonlari bilan 0 - qator sonlarining almashgani: ");
    for(int l = 0; l < n; l++){
        for(int k = 0; k < n; k++){
            int m = massiv[0][n - 1 - l];
            massiv[0][n - 1 - l] = massiv[n - 1 - l][0];
            massiv[n - 1 -l][0] = m; 
        }
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            printf("%d\t", massiv[i][j]);
        }
        puts("\n");
    }
}