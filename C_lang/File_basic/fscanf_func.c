// Use of "fscaf()" function
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char nm_1[10],nm_2[10];
    int id;
    FILE *fptr;
    fptr = fopen("fscanf.txt","r");
    if(fptr==NULL){
        printf("File doesn't exist.\n");
    }
    else{
        printf("File has opened\n");
        //fscanf(file_ptr,formatspacifier,variable)
        //fscanf() can read only a word without any space
        fscanf(fptr,"%s %s %d",&nm_1,&nm_2,&id);
        printf("First_name: %s\nLast_name:%s\nID: %d\n",nm_1,nm_2,id);
        fclose(fptr);
    }
    return 0;
}