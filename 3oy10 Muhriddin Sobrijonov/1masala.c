#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>


int main(){
    system("cls");
    int n = 10;
    int arr[n];
    srand(time(0));
    for(int i = 0; i < n; i++){
        arr[i] = rand()%100 -50;
//        printf("%d\t", arr[i]);
    }
    FILE *f1 = fopen("1masalaMusbat.BIN", "wb");
    for(int j = 0; j < n; j++){
        if(arr[j] > 0){
            fwrite(&arr[j], sizeof(int), 1, f1);
//            printf("%d\t", arr[j]);
        }
    }
    fclose(f1);
    FILE *f = fopen("1masalaManfiy.BIN", "wb");
    for(int k = 0; k < n; k++){
        if(arr[k] < 0){
            fwrite(&arr[k], sizeof(int), 1, f);
//            printf("%d\t", arr[k]);
        }
    }
    int m;
    f1 = fopen("1masalaMusbat.BIN", "rb");
    printf("Musbat fayldagi sonlar:  ");
    while (fread(&m, sizeof(int), 1, f1)){
        printf("%d\t", m);
    }
    fclose(f1);
    puts("");
    int i;
    f = fopen("1masalaManfiy.BIN", "rb");
    printf("Manfiy fayldagi sonlar:  ");
    while (fread(&i, sizeof(int), 1, f)){
        printf("%d\t", i);
    }
    fclose(f);

    return 0;
}