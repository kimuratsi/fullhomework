#include    <stdio.h>
#include    <stdlib.h>


int main(){
    system("cls");
    char matn[100];
    printf("matn kriting:  \n");
    scanf("%[^\n]s", matn);
    FILE *f5 = fopen("5masala.txt", "w");
    for(int i = 0; matn[i] != '\0'; i++){
        fprintf(f5, "%c", matn[i]);
    }
    fclose(f5);

    f5 = fopen("5masala.txt", "r");
    int soz = 1, gap = 0;
    char h; 
    while(fscanf(f5, "%c", &h) != EOF){
        if(h == ' '){
            soz++;
        }else if(h == '.'){
            gap++;
        }
    }
    fclose(f5);
    printf("Soz:  %d ta\n", soz);
    printf("gap:  %d ta\n", gap);

    return 0;
}