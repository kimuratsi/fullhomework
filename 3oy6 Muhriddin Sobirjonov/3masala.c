#include    <stdio.h>
#include    <math.h>

float sum = 1;
int KOPAYTIRISH(int a, float n, int d){
    if(a <= d){
        sum *= n;
        return KOPAYTIRISH(a + 1, n, d);
    }
    printf("\nsonning darajaga kopaytirilgani ==>  %.5f", sum);
}

int main(){
    system("cls");
    int d;
    float n;
    printf("sonni kiriting:  ");
    scanf("%f", &n);
    printf("darajani kiriting:  ");
    scanf("%d", &d);

    if(d < 0){
        n = 1.0 / n;
        d = abs(d);
    }
    KOPAYTIRISH(1, n, d);

    return 0;
}