#include    <stdio.h>
#include    <stdlib.h>


int main(){
    system("cls");
    int n = 5;
    int son[n], yig = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &son[i]);
        yig += son[i];
    }
    FILE *f2 = fopen("2masalanew.txt", "w");
        for(int j = 0; j < n; j++){
            fprintf(f2, "%d", son[j]);
            if(j != n - 1){
                fprintf(f2,"+");
            }else{
                fprintf(f2, "=%d", yig);
            }
        }
    fclose(f2);

    f2 = fopen("2masalanew.txt", "r");
    char son1;
    while(fscanf(f2, "%c", &son1) != EOF){
        printf("%c", son1);
    }

    return 0;
}