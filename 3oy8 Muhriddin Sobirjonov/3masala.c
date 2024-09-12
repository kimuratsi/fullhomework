#include    <stdio.h>
#include    <stdlib.h>
#include    <malloc.h>

void TOLDIRISH(int *dm, int size){
    for(int i = 0; i < size; i++){
        scanf("%d", &dm[i]);
    }
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
    int *arr = (int *) malloc(n * sizeof(int));
    TOLDIRISH(arr, n);
    puts("");
    CHIQAR(arr, n);
    int k;
    printf("\nQancha son qistarilsin:  ");
    scanf("%d", &k);
    for(int i = k; i < n; i ++ ){
        printf("%d\t", arr[i]);
    }
    arr = (int *) realloc(arr,(n - k) * sizeof(int));

    return 0;
}