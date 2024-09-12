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
void    YAXLITLASH(int *arr, int size){
    for(int i = 0; i < size; i++){
        if(*(arr + i) % 21 == 0 && *(arr + i) % 5 !=0 ){
            printf("%d\t", *(arr + i));
        }
    }
}

int main(){
    system("cls");
    int array[10];
    int size = sizeof(array) / sizeof(int);
    TOLDIRISH(array, size);
    printf("\n\n7 ga va 3ga bolinadigan hamda 5 ga bolinmaydigan sonlar:  ");
    YAXLITLASH(array, size);

    return 0;
}