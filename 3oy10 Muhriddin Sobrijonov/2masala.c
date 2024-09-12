#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>


int main(){
    system("cls");
    int n = 20;
    int son[n];
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        son[i] = rand()%50 +1;
//        printf("%d\t", son[i]);
    }
    FILE *f2 = fopen("2masala.BIN", "wb");
    for(int i = 0; i < n; i++){
        fwrite(&son[i], sizeof(int), 1, f2);
    }
    fclose(f2);
    int  i = 0, m;
    f2 = fopen("2masala.BIN", "rb");
    while (fread(&m, sizeof(int), 1, f2)){
        if(i < m){
            i = m;
        }
    }
    fclose(f2);
    printf("\nEng katta son: %d", i);

    return 0;
}