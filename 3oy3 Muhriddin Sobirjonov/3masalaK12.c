#include    <stdio.h>
#include    <stdlib.h>

int TOLDIRISH(int n, int serya[n][n]);
int TESKARIDIA(int n, int serya[n][n]);

int main(){
    system("cls");
    int n;
    printf("Bitta son kiriting:  ");
    scanf("%d", &n);
    int serya[n][n];
    TOLDIRISH(n, serya);
    TESKARIDIA(n, serya);  

    return 0;
}
int TOLDIRISH(int n, int serya[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &serya[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", serya[i][j]);
        }
        puts("\n");
    }
}
int TESKARIDIA(int n, int serya[n][n]){
    printf("\nteskari diagonal elementlari:  ");
    for(int l = 0; l < n; l++){
        for(int k = 0; k < n; k++){
            if( k == n - 1 -l){
            printf("%d  ", serya[l][n - 1 - l]);
            }
        }
    }
}