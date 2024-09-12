#include    <stdio.h>
#include    <stdlib.h>


int main(){
    system("cls");
    char matn[100];
    printf("matn kiriting:  ");
    scanf("%[^\n]s", matn);
    FILE *f8 = fopen("8masala.txt", "w");
    fprintf(f8, "%s", matn);
    fclose(f8);
    puts("\n");
    char h[30];
    f8 = fopen("8masala.txt", "r");
    while (fscanf(f8, "%s", h) != EOF){
        if(h[0] == 'p' || h[0] == 'P'){
            printf("%s\t", h);
        }
    }
    fclose(f8);

    return 0;
}