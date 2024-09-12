#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>

int TOLDIRISH(int n, int m, int array[n][m]){
    srand(time(0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            array[i][j]  = rand()%50 +1;
            printf("%d\t", array[i][j]);
        }
        puts("");
    }
}
int main(){
    system("cls");
    int n, m;
    printf("Qator va Ustun:   ");
    scanf("%d%d", &n, &m);
    int array[n][m];
    TOLDIRISH(n, m, array);

    printf("\n arrayning ustun indexi juft holatdagi sonlar:  ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if( j % 2 == 0){
                if(j % 2 == 0 && j != 0){
                printf("%d\t", array[i][j]);
                }
            }
        }
    }

    return 0;
}