#include    <stdio.h>

int sum = 0;
int YIGINDI(int a, int n){
    printf("%d", a);
    sum += a;
    if(a < n){
        printf("+");
        return YIGINDI(a + 1, n);
    }
    printf("=%d", sum);
}

int main(){
    system("cls");
    int n;
    printf("sonni kriting:  ");
    scanf("%d", &n);
    YIGINDI(1, n);



    return 0;
}