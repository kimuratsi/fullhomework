#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>


int main(){
    system("cls");
    int son[10];
    srand(time(0));
    for(int i = 0; i < 10; i++){
        son[i] = rand()%100 -50;
        printf("%d\t", son[i]);
    }
    int n = 0;
    int juft[n];
    int s;
    for(int i = 0; i < 10; i++){
        if(son[i] % 2 == 0){
            juft[n] = son[i];
            n++;
        }
    }
    for(int l = 0; l < n - 1; l++){
        for(int k = 0; k < n - l - 1; k++){
            if(juft[k] > juft[k + 1]){
                s = juft[k];
                juft[k] = juft[k + 1];
                juft[k + 1] = s;
            }
        }
    }
    FILE *fjuft = fopen("Juft.txt", "w");
    fprintf(fjuft,"Just sonlar:  ");
    for(int i = 0; i < n; i++){
        fprintf(fjuft, "%d\t", juft[i]);
    }
    fclose(fjuft);

    n = 0;
    int toq[n];
    for(int j = 0; j < 10; j++){
        if(son[j] % 2 != 0){
            toq[n] = son[j];
            n++;
        }
    }
    for(int l = 0; l < n - 1; l++){
        for(int k = 0; k < n - l -1; k++){
            if(toq[k] < toq[k + 1]){
                s = toq[k];
                toq[k] = toq[k + 1];
                toq[k + 1] = s;
            }
        }
    }
    FILE *ftoq = fopen("toq.txt", "w");
    fprintf(ftoq, "Toq sonlar:  ");
    for(int j = 0; j < n; j++){
        fprintf(ftoq, "%d\t", toq[j]);
    }
    fclose(ftoq);

    n = 0;
    int musbat[n];
    for(int k = 0; k < 10; k++){
        if(son[k] > 0){
            musbat[n] = son[k];
            n++;
        }
    }
    for(int l = 0; l < n - 1; l++){
        for(int k = 0; k < n - l - 1; k++){
            if(musbat[k] < musbat[k + 1]){
                s = musbat[k];
                musbat[k] = musbat[k + 1];
                musbat[k+ 1] = s;
            }
        }
    }
    FILE *fmusbat = fopen("musbat.txt", "w");
    fprintf(fmusbat,"Musbat sonlar:  ");
    for(int i = 0; i < n; i++){
        fprintf(fmusbat, "%d\t", musbat[i]);
    }
    fclose(fmusbat);

    n = 0;
    int manfiy[n];
    for(int i = 0; i < 10; i++){
        if(son[i] < 0){
            manfiy[n] = son[i];
            n++;
        }
    }
    for(int i = 0; i < n - 1; i++ ){
        for(int j = 0; j < n - i - 1; j++){
            if(manfiy[i] > manfiy[i + 1]){
                s  = manfiy[i];
                manfiy[i] = manfiy[i + 1];
                manfiy[i + 1] = s;
            }
        }
    }
    FILE *fmanfiy = fopen("manfiy.txt", "w");
    fprintf(fmanfiy, "Manfiy sonlar:  ");
    for(int i = 0; i < n; i ++){
        fprintf(fmanfiy, "%d\t", manfiy[i]);
    }
    fclose(fmanfiy);
    puts("\n\n");
    char h;
    fjuft = fopen("Juft.txt", "r");
    while(fscanf(fjuft, "%c", &h) != EOF){
        printf("%c", h );
    }
    fclose(fjuft);
    puts("");
    ftoq = fopen("toq.txt", "r");
    while(fscanf(ftoq, "%c", &h) != EOF){
        printf("%c", h );
    }
    fclose(ftoq);
    puts("");
    fmusbat = fopen("musbat.txt", "r");
    while(fscanf(fmusbat, "%c", &h) != EOF){
        printf("%c", h );
    } 
    fclose(fmusbat);
    puts("");
    fmanfiy = fopen("manfiy.txt", "r");
    while(fscanf(fmanfiy, "%c", &h) != EOF){
        printf("%c", h );
    }
    fclose(fmanfiy);

    return 0;
}