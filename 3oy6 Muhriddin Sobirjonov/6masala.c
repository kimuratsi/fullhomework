#include    <stdio.h>
int sum = 0;
int RAQANSUM(int n){
    sum += (n % 10);
    if(n != 0){
        return RAQANSUM(n / 10);
    }
    printf("sonning raqamlar yigindisi ==> %d", sum);
}

int main(){
    system("cls");
    int n;
    printf("son kiriting:  ");
    scanf("%d", &n);
    RAQANSUM(n);


    return 0;
}