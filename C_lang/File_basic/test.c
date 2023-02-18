#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        fscanf(fptr,"%d",&a[i]);
    }
    fclose(fptr);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}