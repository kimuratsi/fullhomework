#include    <stdio.h>
#include    <stdlib.h>


int main(){
    system("cls");
    int n, yig = 0;
    printf("son kiriting:  ");
    scanf("%d", &n);
    FILE *f3 = fopen("3masala.txt", "w");
    if(n % 2 == 0){
        for(int i = n; i >= 1; i--){
            for(int j = 1; j <= i; j ++){
                fprintf(f3, "%d", i);
                yig += i;
                if(j == i){
                    fprintf(f3,"=%d\n", yig);
                    yig = 0;
                }else{
                    fprintf(f3, "+");
                }
            }
        }
    }else if(n % 2 != 0){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                fprintf(f3,"%d", i);
                yig += i;
                if(j == i){
                    fprintf(f3, "=%d\n", yig);
                    yig = 0;
                }else{
                    fprintf(f3,"+");
                }
            }
        }
    }
    fclose(f3);

    f3 = fopen("3masala.txt", "r");
    char s;
    while(fscanf(f3, "%c", &s) != EOF){
        printf("%c", s);
    }
    fclose(f3);

    return 0;
}