#include    <stdio.h>
#include    <stdlib.h>
#include    <ctype.h>
#include    <string.h>

struct AEROPORT{
    char turi[30];
    int kuni; // uchish sanasi sifatida
    int oy; 
    int yil;
    char ushahar[30];
    char qshahar[30];
    int soat;
    int min;
};

int main(){
    system("cls");

struct  AEROPORT uchish[10] = {
    /*1*/   {"Airbus A741", 10, 5, 2024, "Urganch", "Toshkent", 2, 30},
    /*2*/   {"Airbus A101", 12, 6, 2024, "Urganch", "Samarqand", 14, 0},
    /*3*/   {"Boeing 12 ", 30, 1, 2024, "Urganch", "Astana", 5, 0},
    /*4*/   {"Airbus A78", 25, 10, 2024, "Urganch", "Istanbul", 6, 40},
    /*5*/   {"Airbus A320", 15, 7, 2024, "Urganch", "Moskva", 10, 15},
    /*6*/   {"Boeing 777", 25, 8, 2024, "Toshkent", "Anqara", 12, 35},
    /*7*/   {"Airbus A717", 10, 7, 2024, "Anqara", "Toshkent", 2, 25},
    /*8*/   {"Airbus A123", 20, 5, 2024, "Istanbul", "Urganch", 10, 25},
    /*9*/   {"Boeing 101", 16, 6, 2024, "Samarqand", "Astana", 3, 35},
    /*10*/  {"Airbus A100", 18, 2, 2024, "Nukus", "Toshkent", 3, 55}
    };

    for(int i = 0; i < 10; i++){
        if(uchish[i].soat == 2 || uchish[i].soat == 3 && uchish[i].min <= 0){
            if(strcmp(uchish[i].qshahar, "Toshkent") == 0){
                printf("Samolyot turi: %s\n", uchish[i].turi);
                printf("uchish sanasi: %d.%.02d.%d\n", uchish[i].kuni, uchish[i].oy, uchish[i].yil);
                printf("Uchish shahri: %s\n", uchish[i].ushahar);
                printf("qo`nish shahri: %s\n", uchish[i].qshahar);
                printf("uchish soati:  %d:%.02d", uchish[i].soat, uchish[i].min);
                puts("\n");
            }
        }
    }

    return 0;
}