#include    <stdio.h>
#include    <stdlib.h>
#include    <malloc.h>

void TOLDIRISH(int *dm, int size){
    for(int i = 0; i < size; i++){
        scanf("%d", &dm[i]);
    }
}

int MIN(int *dm, int size){
    int min = dm[0];
    int index = 0;
    for(int i = 1; i < size; i++){
        if(min > dm[i]){
            min = dm[i];
            index = i;
        }
    }
    return index;
}

void CHIQAR(int *dm, int size){
    for(int i = 0; i < size; i++){
        printf("%d\t", dm[i]);
    }
}

int main(){
    system("cls");
    int n;
    printf("array uzunligi:  ");
    scanf("%d", &n);
    int *dm = (int *) malloc(n * sizeof(int));
    TOLDIRISH(dm, n);
    printf("Array kiritilgan sonlari: ");
    CHIQAR(dm, n);
    int min = MIN(dm ,n);
    printf("\nminimum son:  %d\n", dm[min]);
    for(int i = min; i < n - 1; i++){
        dm[i] = dm[i + 1];
   }
    printf("\nkeyingi array: ");
    dm = (int * ) realloc(dm,(n - 1) * sizeof(int));
    CHIQAR(dm, n - 1);

    return 0;
}