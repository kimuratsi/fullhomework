#include    <stdio.h>

int sum = 1;
int  FOKTARIAL(int a, int son){
    sum *= a;
    if(a < son){
        return FOKTARIAL(a + 1, son);
    }
    printf("sonning foktariali ==> %d", sum);
}

int main(){
    system("cls");
    int son;
    printf("sonni kiriting:  ");
    scanf("%d", &son);
    FOKTARIAL(1, son);

    return 0;
}