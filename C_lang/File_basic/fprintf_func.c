// Write in file using "fprintf()" function
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char name[30];
    int id;

    FILE *fptr;
    fptr = fopen("fprintf_func.txt","w");

    if(fptr==NULL){
        printf("File doesn't exist!\n");
    }
    else{
        printf("Name: "); gets(name);
        printf("Id: "); scanf("%d",&id);
        fprintf(fptr,"Name: %s \nId: %d\n",name,id);
        printf("File has written successfully\n");
        fclose(fptr);
    }

    return 0;
}