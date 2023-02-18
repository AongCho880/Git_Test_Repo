#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char name[30],grade[5];
    int id,n;

    FILE *fptr;
    fptr = fopen("student_list.txt","a");

    if(fptr==NULL){
        printf("File doesn't exist!\n");
    }
    else{
        printf("File opened\n\n");
        printf("Number of student: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            printf("\nStudent %d.\n",i);
            fflush(stdin);
            printf("Name: "); gets(name);
            printf("ID: "); scanf("%d",&id);
            printf("Grade: "); scanf("%s",&grade);

            fprintf(fptr,"%s\t\t%d\t%s\n",name,id,grade);
        }
        fclose(fptr);
    }

    return 0;
}