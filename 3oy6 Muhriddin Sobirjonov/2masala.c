#include    <stdio.h>

int TOQRAQAM(int a, int n){
    if(a % 2 != 0 && a != n){
        printf("%d\t", a);
    }
    if(a < n){
        TOQRAQAM(a + 1, n);
    }
}

int main(){
    system("cls");
    int n;
    scanf("%d", &n);
    TOQRAQAM(1, n);

    return 0;
}