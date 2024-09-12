#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>


int main(){
    system("cls");
    char matn[100];
    printf("matn:  ");
    scanf("%[^\n]s", matn);

    FILE *f10 = fopen("10masala.txt", "w");
    fprintf(f10, "%s", matn);
    fclose(f10);

    int h = 0;
    char word[30];
    f10 = fopen("10masala.txt", "r");
    while (fscanf(f10, "%s", word)){
        h = strlen(word);
        if(h <= 5){
            printf("%s\n", word);
        }        
    }
    fclose(f10);

    return 0;
}