#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>


int main(){
    system("cls");
    char matn[100];
    printf("matn:  ");
    scanf("%[^\n]s", matn );
    FILE *f9 = fopen("9masala.txt", "w");
    fprintf(f9, "%s", matn);
    fclose(f9);

    char h[30], uzun[30] = "";
    int index = 0;
    f9 = fopen("9masala.txt", "r");
    while (fscanf(f9, "%s", h) != EOF){
        int katta = strlen(h);
        if(index < katta){
            index = katta;
            strcpy(uzun, h);            
        }
    }
    printf("faylda eng uzun soz: %s", uzun);
    fclose(f9);

    return 0;
}