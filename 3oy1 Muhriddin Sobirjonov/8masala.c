#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>
#include    <math.h>

void    TOLDIRISH(int array[], int size){
    srand(time(0));
    for(int i = 0; i < size; i++){
        array[i] =rand()%60 +2;
        printf("%d\t", array[i]);
    }
}
void    TUB(int *arr, int size, int array[]){
    for(int i = 0; i < size; i++){
        int yig = 0;
        for(int k = 1; k < sqrt(array[i]); k++ ){
            if(*(arr + i ) % k == 0){
                yig ++;
            }
        }
        if(yig == 1){
            printf(" %d\t", *(arr + i) );
        }
    }
}

int main(){
    system("cls");
    int array[10];
    int size = sizeof(array) / sizeof(int);
    TOLDIRISH(array, size);
    puts("\n");
    printf("Tub sonlar:  ");
    TUB(array, size, array);

    return 0;
}