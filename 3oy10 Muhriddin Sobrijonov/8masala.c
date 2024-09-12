#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>


int main(){
    system("cls");
    int n = 10;
    int son, i = 0, toq[i];
    srand(time(0));
    FILE *f8 = fopen("8masala.BIN", "wb");
    for(int k = 0; k < n; k++){
        son = rand()%50 +1;
        fwrite(&son, sizeof(int), 1, f8);
    }
    fclose(f8);

    f8 = fopen("8masala.BIN", "rb");
    while(fread(&son, sizeof(int), 1, f8)){
        if(son % 2 != 0){
            toq[i] = son;
            i++;
        }
    }
    fclose;

    for(int k = 0; k < i - 1; k++){
        for(int l = 0; l < i - k - 1; l++){
            if(toq[l] < toq[l + 1]){
                son = toq[l];
                toq[l] = toq[l + 1];
                toq[l + 1] = son; 
            }
        }
    }
    for(int k = 0; k < i; k++){
        printf("%d\t", toq[k]);
    }

    return 0;
}