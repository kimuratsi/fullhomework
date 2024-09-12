#include    <stdio.h>

int n = 0;
int TUBSON(int a, int son){
    if(son % a == 0){
        n ++;
    }
    if(a < son){
        return TUBSON(a + 1, son);
    }
    if(n == 2){
        printf("tub son");
    }else{
        printf("tub son emas");
    }
}

int main(){
    system("cls");
    int son;
    printf("sonni kiriting:  ");
    scanf("%d", &son);
    TUBSON(1, son);

    return 0;
}