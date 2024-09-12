#include    <stdio.h>
#include    <ctype.h>
#include    <string.h>


int main(){
    system("cls");
    char matn[50];
    scanf("%[^\n]s", matn);
    FILE *f1 = fopen("1masala.txt", "w");
    for(int i = 0; matn[i] !='\0'; i++){
        fprintf(f1, "%c", matn[i]);
        if(isspace(matn[i])){
            fprintf(f1, "\n");
        }
    }
    fclose(f1);

    f1 = fopen("1masala.txt", "r");
    char w;
    while(fscanf(f1,"%c", &w) != EOF){
        printf("%c", w);
    }

    return  0;
}