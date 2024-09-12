#include    <stdio.h>
#include    <stdlib.h>

void    ALMASH(int *a, int *b, int *c){
    int son = *c;
    *c = *b;
    *b = *a;
    *a = son;
}

int main(){
    system("cls");
    int a, b, c;
    printf("3 ta son kiriting:  ");
    scanf("%d%d%d", &a, &b, &c);

    printf("son1(A) ==>  %d\n", a);
    printf("son1(B) ==>  %d\n", b);
    printf("son1(C) ==>  %d\n", c);
    puts("\n\n");
    
    ALMASH(&a, &b, &c);
    printf("son1(A) ==>  %d\n", a);
    printf("son1(B) ==>  %d\n", b);
    printf("son1(C) ==>  %d\n", c);   


    return 0;
}