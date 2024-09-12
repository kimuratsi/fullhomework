#include    <stdio.h>

int JUFTRAQAM(int a, int n){
    if(a < n){
        JUFTRAQAM(a + 1, n);
    }
    if(a % 2 == 0 && a != n ){
        printf("%d\t", a);
    }
}

int main(){
    system("cls");
    int n;
    scanf("%d", &n);
    JUFTRAQAM(1, n);


    return 0;
}