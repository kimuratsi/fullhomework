#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>


int main(){
    system("cls");
    int son, n = 10, yig = 0;
    srand(time(0));
    FILE *f9 = fopen ("9masala.BIN", "wb");
    for (int i = 0; i < n; i++){
        son = rand()%20 +1;
        printf("%d\t", son);
        fwrite(&son, sizeof(int), 1, f9);
    }
    fclose(f9);
    puts("\n");
    f9 = fopen("9masala.BIN", "rb");
    for (int i = 0; i < n; i++){
        fread(&son, sizeof(int), 1, f9);
        yig += son;
    }
    fclose(f9);
    printf("fayl ichidagi nomalum sonlar yigindisi:  %d", yig);

    return  0;
}