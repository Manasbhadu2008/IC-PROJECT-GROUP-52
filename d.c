#include<stdio.h>
int main(){
    FILE *fin,*fout;
    fin = fopen("encrypted.bin","rb");
    fout = fopen("decryted.jpg","wb");

    int ch;
    char key = 'k';
    char dec;
    while((ch =fgetc(fin)) != EOF){
        dec = ch^key;
        fwrite(&dec,1,1,fout);
    }
    fclose(fin);
    fclose(fout);
    printf("Decrypted -> decrypted.jpg\n");

    return 0;
}