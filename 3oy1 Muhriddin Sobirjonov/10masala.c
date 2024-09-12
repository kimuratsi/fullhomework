#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>

void    TOLDIRISH(int array[], int size){
    srand(time(0));
    for(int i = 0; i < size; i++){
        array[i] =rand()%100 +1;
        printf("%d\t", array[i]);
    }
}
void    JUFTSONLAR(int *arr, int size){
    int yig = 0;
    int son = 0;
    for(int i = 0; i < size; i++){
        if(*(arr + i) % 2 == 0){
            yig += *(arr + i);
            son ++;
        }
    }
    int orta = yig / son;
    printf("\nArray ichidagi juft sonlar orta arifmetigi:   %d", orta);
}
int main(){
    system("cls");
    int array[10];
    int size = sizeof(array) / sizeof(int);
    TOLDIRISH(array, size);
    puts("\n");
    JUFTSONLAR(array, size);
    return 0;
}