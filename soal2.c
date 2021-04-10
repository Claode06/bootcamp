#include<stdio.h>

int main(){
    int blok[]= {1,2,1,3,2};
    int a,b,panjang = sizeof(blok)/sizeof(blok[10]);
    int temp;
    int jml=0;
    printf("Masukkan Tanggal Lahir : ");scanf("%d",&a);
    printf("Masukkan Bulan Lahir : ");scanf("%d",&b);
    for(int i=0;i<panjang;i++){
        for(int j=1;j<panjang;j++){
            temp = blok[i] + blok[j];
            if(temp==a){
                jml+=1;
            }
        }
    }
    printf("Hasil nya adalalah : %d ",jml);
    return 0;
}
