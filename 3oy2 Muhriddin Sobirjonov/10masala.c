#include    <stdio.h>
#include    <stdlib.h>

int main(){
    system("cls");
    int n, n1;
    printf("Qator va ustun kiriting:  ");
    scanf("%d%d", &n, &n1);
    int array[n][n1];
    printf("\narray sonlarini kiriting:  ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n1; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n1; j++){
            printf("%d\t", array[i][j]);
        }
        puts("");
    }
    int manfiy[n];
    int musbat[n];
    int index = 0, index1 = 0;
    for(int l = 0; l < n; l++){
        for(int k = 0; k < n1; k++){
            if(array[l][k] > 0){
                musbat[index] = array[l][k];
                index++;
            }else if(array[l][k] < 0 ){
                manfiy[index1] = array[l][k];
                index1++;
            }
        }
    }
    puts("\nManfiy sonlar yigilgan array: ");
    for(int i = 0; i < index1; i++){
        printf("%d\t", manfiy[i]);
    }
    puts("\nMusbat sonlar yigilgan array: ");
    for(int j = 0; j < index; j++){
        printf("%d\t", musbat[j]);
    }

    return 0;
}