#include    <stdio.h>
#include    <ctype.h>
#include    <string.h>

typedef struct{
    char ism[25];
    float stip;
    int kurs;
}TALABA;


int main(){
    system("cls");
    float sum = 0;
    TALABA talaba[5];
// 1 - oquvchi
    strcpy(talaba[0].ism, "Anvar");
    talaba[0].stip = 500550.13;
    talaba[0].kurs = 2;
// 2 - oquvchi
    strcpy(talaba[1].ism, "ali");
    talaba[1].stip = 525560.25;
    talaba[1].kurs = 1;
// 3 - oquvchi
    strcpy(talaba[2].ism, "Farruh");
    talaba[2].stip = 425255.85;
    talaba[2].kurs = 2;
// 4 - oquvchi
    strcpy(talaba[3].ism, "Rustam");
    talaba[3].stip = 366154.13;
    talaba[3].kurs = 3;
// 5 - oquvchi
    strcpy(talaba[4].ism, "Asad");
    talaba[4].stip = 800546.78;
    talaba[4].kurs = 4;

    for(int i = 0; i < 5; i++){
        if(strlen(talaba[i].ism) <= 5){
            printf("ism: %s\n", talaba[i].ism);
            printf("stipendiya:  %.2f\n", talaba[i].stip);
            printf("kurs:  %d\n", talaba[i].kurs);
            puts("\n");
        }
    }
    
    
    return 0;
}