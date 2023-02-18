#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char ch[10];
    FILE *fptr;
    fptr = fopen("fgets_func.txt","r");
    if(fptr==NULL){
        printf("File doesn't exist!\n");
    }
    else{
        printf("File has opened successufully\n");
        while(!feof(fptr)){
            // fgets(variable,size,file_ptr)
            fgets(ch,10,fptr);
            printf("%s\n",ch);
        }
        fclose(fptr);
    }

    return 0;
}