#include    <stdio.h>
#include    <stdlib.h>


int main(){
    system("cls");
    int n;
    printf("son:  ");
    scanf("%d", &n);
    FILE *f4 = fopen("4masala.txt", "w");
    for(int i = 2; i <= n; i++){
        int b = 0;
        for(int j = 2; j <= i; j++){
            if(i % j == 0){
                b++;
            }
        }
        if(b == 1){
            fprintf(f4, "%d  ", i);
        }
    }
    fclose(f4);

    f4 = fopen("4masala.txt", "r");
    char s;
    while(fscanf(f4, "%c", &s) != EOF){
        printf("%c", s);
    }
    fclose(f4);

    return 0;
}