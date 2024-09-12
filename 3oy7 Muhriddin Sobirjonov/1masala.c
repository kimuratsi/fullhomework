#include    <stdio.h>
#include    <ctype.h>
#include    <string.h>

typedef struct{
    char ismi[20];
    int yoshi;
    float stip;
    int baho[5];
}t;

int main(){
    system("cls");
    int n = 5;
    int ortacha[5], yig = 0;
    t  talaba[5];
// 1-oquvchi
    strcpy(talaba[0].ismi, "Jonibek");
    talaba[0].yoshi = 20;
    talaba[0].stip = 420150.50;
    int baholar1[5] = {4, 5, 3, 5, 5};
    for(int i = 0; i < 5; i++){
        talaba[0].baho[i] = baholar1[i];
    }
// 2 - oquvchi
    strcpy(talaba[1].ismi, "Kamol");
    talaba[1].yoshi = 19;
    talaba[1].stip = 365150.55;
    int baholar2[5] = {3, 5, 3, 5, 4};
    for(int i = 0; i < 5; i++){
        talaba[1].baho[i] = baholar2[i];
    }
// 3 - oquvchi
    strcpy(talaba[2].ismi, "Dilshod");
    talaba[2].yoshi = 19;
    talaba[2].stip = 400150.55;
    int baholar3[5] = {5, 4, 3, 4, 4};
    for(int i = 0; i < 5; i++){
        talaba[2].baho[i] = baholar3[i];
    }
// 4 - oquvchi
    strcpy(talaba[3].ismi, "Sulaymon");
    talaba[3].yoshi = 21;
    talaba[3].stip = 500295.43;
    int baholar4[5] = {3, 5, 3, 5, 4};
    for(int i = 0; i < 5; i++){
        talaba[3].baho[i] = baholar4[i];
    }
// 5 - oquvchi
    strcpy(talaba[4].ismi, "Ali");
    talaba[4].yoshi = 18;
    talaba[4].stip = 365150.55;
    int baholar5[5] = {5, 4, 3, 3, 4};
    for(int i = 0; i < 5; i++){
        talaba[1].baho[i] = baholar5[i];
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            yig += talaba[i].baho[j];
        }
        if(yig / 5 == 4){
            printf("talaba ismi: %s\n", talaba[i].ismi);
            printf("talaba yoshi: %d\n", talaba[i].yoshi);
            printf("talaba stipendiyasi: %.2f\n", talaba[i].stip);
            printf("Baholari: %d, %d, %d, %d, %d\n", talaba[i].baho[0], talaba[i].baho[1], talaba[i].baho[2], talaba[i]. baho[3], talaba[i].baho[4]);
            puts("\n");
        }
        yig = 0;
    }

    return 0;
}