#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char ch;

    FILE *fptr;
    fptr = fopen("fgetc_func.txt","r");
    if(fptr==NULL){
        printf("File doesn't exist\n");
    }
    else{
        printf("File has opend successufully\n");
        while(!feof(fptr)){
            // Read Char by Char
            ch = fgetc(fptr); // Use of "fgetc()" function
            printf("%c",ch);
        }
        fclose(fptr);
    }
    return 0;
}