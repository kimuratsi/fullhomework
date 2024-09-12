#include    <stdio.h>
#include    <stdlib.h>
#include    <ctype.h>
#include    <string.h>

int main(){
    system("cls");
    char matn[50];
    int n = 0;
    scanf("%[^\n]s", matn);
    for(int i = 0; matn[i] !='\0'; i++){
        n++;
    }
    char *matn1 = (char *) malloc(n * sizeof(char));
    strcpy(matn1, matn);
    for(int i = 0; matn1[i] != '\0'; i++){
        if(!isspace(matn1[i])){
            printf("%c", matn1[i]);
        }else{
            puts("");
        }
    }

    return 0;
}