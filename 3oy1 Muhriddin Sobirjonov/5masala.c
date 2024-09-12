#include    <stdio.h>
#include    <stdlib.h>

void    ALMASH(int *son1, int *son2){
    int a = *son1;
    *son1 = *son2;
    *son2 = a;
}

int main(){
    system("cls");
    int son1, son2;
    printf("ikkita son kiriting:  ");
    scanf("%d%d", &son1, &son2);
    printf("son1 ==> %d\t son2 ==> %d\n", son1, son2);

    ALMASH(&son1, &son2);
    puts("\n");
    printf("son1 ==> %d\t son2 ==> %d\n", son1, son2);

    return 0;
}