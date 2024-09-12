#include    <stdio.h>
#include    <stdlib.h>

int TOLDIRISH(int n, int array[n][n]);
int ASOSIYDIA(int n, int array[n][n]);

int main(){
    system("cls");
    int n; 
    printf("bitta son kiriting:  ");
    scanf("%d", &n);
    int array[n][n];
    TOLDIRISH(n, array);
    ASOSIYDIA(n, array);

    return 0;
}
int TOLDIRISH(int n, int array[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", array[i][j]);
        }
        puts("\n");
    }
}
int ASOSIYDIA(int n, int array[n][n]){
    printf("\n\nasosiy diagonal elenentlari: ");
    for(int l = 0; l < n; l++){
        for(int k = 0; k < n; k++){
            if(k == l){
                printf("%d  ", array[l][k]);
            }
        }
    }
}