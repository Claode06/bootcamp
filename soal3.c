#include <stdio.h>

void cetak(char jumlah[]){
    int i,j;
    for(i=0;i<strlen(jumlah);i++){
        for(j=0;j<strlen(jumlah);j++){
            if(i==j){
                printf("%c",jumlah[i]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){
    char jmlh[100];
    cetak("StevenClaodeAprilasta");
    return 0;
}

