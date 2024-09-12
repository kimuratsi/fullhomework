#include    <stdio.h>
#include    <stdlib.h>

int main(){
    system("cls");
    int son1, son2;
    printf("ikkita son kiriting:  ");
    scanf("%d%d", &son1, &son2);
    printf("son1 ==>  %d \t son2 ==> %d\n\n", son1, son2);
    
    int *ptr1 = &son1;
    int *ptr2 = &son2;
    int yig = *ptr1 + *ptr2;
    *ptr1 = yig;
    *ptr2 = yig;

    printf("son1 ==> %d \t son2 ==> %d\n", *ptr1, *ptr2);
    printf("son1 ==> %d \t son2 ==> %d", son1, son2);

    return 0;
}