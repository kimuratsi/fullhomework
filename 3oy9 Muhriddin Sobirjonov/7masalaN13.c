#include    <stdio.h>
#include    <stdlib.h>

int main(){
    system("cls");
    char matn[200];
    int qator = 0;

    FILE *f7 = fopen("f7text.txt", "w");
    fprintf(f7, "Har bir kitobni ovozlashtirish uchun professional aktyor va notiqlar jalb qilingan.\n Mehr berilgani sezilib turadi.\n Bunday bepul platformalar bolishi juda katta yutuq hisoblanadi.\n Bizning vazifa esa bunday ilovalardan foydalanish,\n ularni qollab-quvvatlash va ommalashishiga hissa qoshishdir.\n");
    fclose(f7);

    char w;
    f7 = fopen("f7text.txt", "r");
    while (fscanf(f7, "%c", &w) !=EOF){
        if(w == '\n'){
            qator++;
        }
    }
    printf("%d ta qator bor", ++qator);
    fclose(f7);
    


    return 0;
}