// Create a file in Write mood and write to the file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char name[30],university[100];
    FILE *fptr;
    fptr = fopen("createFile.txt","w");
    
    if(fptr==NULL){
        printf("File doesen't exist !\n");
    }
    else{
        printf("File is created or opend successfully\n");
        //Put char by char into file
        printf("Name: "); gets(name);
        for(int i=0;i<strlen(name);i++)
            fputc(name[i],fptr);

        // Put as a string
        printf("University: ");
        gets(university);
        fputs("\n",fptr);
        fputs(university,fptr);
        
        printf("File has written successfully\n");
        fclose(fptr);
    }

    return 0;
}