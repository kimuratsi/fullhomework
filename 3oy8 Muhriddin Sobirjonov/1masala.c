#include    <stdio.h>
#include    <stdlib.h>
#include    <malloc.h>

void TOLDIRISH(int *dm, int size){
    for(int i = 0; i < size; i++){
        scanf("%d", &dm[i]);
    }
}

int KATTA(int *dm, int size){
    int katt = dm[0];
    int index = 0;
    for(int i = 1; i < size; i++){
        if(katt < dm[i]){
            katt = dm[i];
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
    printf("array hajmini kiriting:  ");
    scanf("%d", &n);
    int *dm = (int *) malloc(n * sizeof(int));
    TOLDIRISH(dm, n);
    printf("\nkritilgan sonlar:  ");
    CHIQAR(dm, n);
    int index = KATTA(dm, n);
    printf("\nEng katta son: %d\n");
    for(int i = index; i < n - 1; i++){
        dm[i] = dm[i+1];
    }   
    dm = (int *) realloc(dm,(n - 1) * sizeof(int));
    printf("\n\nmax son olib tashlangandan song:  ");
    CHIQAR(dm, n - 1);

    return 0;
}