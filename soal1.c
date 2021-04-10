#include <stdio.h>

int main()
{
    char kata[100];
    printf("Masukkan Kata : "); scanf("%s",kata);
    char hasil[100];
    int i;
    int j=0;
    int jml=0;
    for(i=0;i<strlen(kata);i++){
        if(kata[i]>=65 && kata[i]<=90){
            if(i>0 && i<strlen(kata)){
                hasil[j]=',';
                j++;
                hasil[j]=kata[i]+32;
                j++;
            }
            else if(i==0){
                hasil[j]=kata[i]+32;
                j++;
            }
            jml++;
        }
        else if(kata[i]>=97&&kata[i]<=122)
        {
            hasil[j]=kata[i];
            j++;
        }
    }
    printf("Terdiri dari %d Kata, Yaitu : (%s)",jml,hasil);
    return 0;
}
