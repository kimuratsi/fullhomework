#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>


int main(){
    system("cls");
    int n = 10;
    int i = 0, son, jar[i];
    srand(time(0));
    FILE    *f7 = fopen ("7masala.BIN", "wb");
    for(int k = 0; k < n; k++){
        son = rand()%50 +1;
        fwrite(&son, sizeof(int), 1, f7);
        printf("%d\t", son);
    }
    fclose(f7);

    f7 = fopen("7masala.BIN", "rb");
    int l;
    while (fread(&l, sizeof(int), 1, f7)){
        if(l % 2 == 0){
            jar[i] = l;
            i++;
        }
    }
    fclose(f7);
    puts("\n");
    for( int m = i - 1 ; m >= 0; m--){
        printf("%d\t", jar[m]);
    }



    return 0;
}