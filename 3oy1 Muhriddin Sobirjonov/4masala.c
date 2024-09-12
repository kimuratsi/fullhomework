#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>

void    TOLDIRISH(int array[], int size){
    srand(time(0));
    for(int i = 0; i < size; i++){
        array[i] =rand()%20 -10;
        printf("%d\t", array[i]);
    }
}
int   KATTA(int *ptrar, int size, int index){
    int low = *ptrar;
    for(int i = 0; i < size; i++){
        if(low < *(ptrar + i)){
            low = *(ptrar + i);
            index = i;
        }
    }
    return index;
}

int main(){
    system("cls");
    int array[10];
    int size = sizeof(array) / sizeof(int);
    TOLDIRISH(array, size);
    puts("\n");

    int index = KATTA(array, size, index);
    printf("Eng katta son ==> %d\n", array[index]);
    printf("eng katta son indexidan 2 ta keyingi son:  ");
    if(index == 9 || index == 10 ){
        printf("\nbu orinda son mavjud emas");
    }else{
        printf(" %d", array[index + 2]);
    }



    return 0;
}