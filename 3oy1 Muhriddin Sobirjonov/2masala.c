#include    <stdio.h>
#include    <stdlib.h>

void    YIGINDI(int *son1, int *son2){
    int yig = *son1 + *son2;
    printf("ikki sonning yiginidisi ==>  %d", yig);
}

int main(){
    system("cls");
    int son1, son2;
    printf("Ikkita son kiriting:  ");
    scanf("%d%d", &son1, &son2);
    printf("son1  ==>  %d \t son2 ==> %d\n\n", son1, son2);
    YIGINDI(&son1, &son2);

    return 0;
}