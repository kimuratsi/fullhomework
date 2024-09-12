#include    <stdio.h>
#include    <stdlib.h>

int main(){
    system("cls");
    int son1, son2, son3;
    printf("3 ta son kriting:  ");
    scanf("%d%d%d", &son1, &son2, &son3);
    printf("son1 ==> %d\n", son1);
    printf("son2 ==> %d\n", son2);
    printf("son3 ==> %d\n", son3);

    int *ptr1 = &son1;
    int *ptr2 = &son2;
    int *ptr3 = &son3;

    int ort = (*ptr1 + *ptr2 + *ptr3) / 3;
    printf("\n 3 ta sonning orta arifmetigi:  %d", ort); 

    return 0;
}