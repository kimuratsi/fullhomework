#include    <stdio.h>

int     ABSONLAR(int a, int b){
    printf("%d\t", a);
    if(a < b){
        ABSONLAR(a + 1, b);
    }
    if(a > b){
        ABSONLAR(a - 1, b);
    }
}

int main(){
    system("cls");
    int a, b;
    printf("a va b sonlarni kiriting:  ");
    scanf("%d%d", &a, &b); 
    ABSONLAR(a, b);



    return 0;
}