#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>

void    TOLDIRISH(int array[], int size){
    srand(time(0));
    for(int i = 0; i < size; i++){
        array[i] =rand()%30 -10;
        printf("%d\t", array[i]);
    }
}
int SUMMA(int *arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += *(arr + i );
    }
    return sum;
}

int main(){
    system("cls");
    int array[10];
    int size = sizeof(array) / sizeof(int);
    TOLDIRISH(array, size);
    puts("\n");
    
    int summa = SUMMA(array, size);
    printf("array sonlarining summasi:  %d ", summa);

    return 0;
}