#include<stdio.h>
int main(){
    struct student {
        int rollno; 
        char name[20];
        int s1,s2,s3,tot;
        float per;
    };

    struct student rec;
    // char cho; 
    FILE *fptr;
    fptr=fopen("resultB.txt", "rb");
    if (!fptr){
        printf("Unable to open File!");
        getch();
        return;
    } 

    do{
        fread(&rec, sizeof(rec), 1, fptr);
        if(feof(fptr))
        break;
        printf("\n Roll number   %d", rec.rollno); 
        printf("\n Name   %s", rec.name); 
        printf("\n Physics  %d", rec.s1); 
        printf("\n Chemistry   %d", rec.s2); 
        printf("\n Math   %d", rec.s3); 
        printf("\n Total marks  %d", rec.tot); 
        printf("\n Percentage  %lf", rec.per); 
        // getch();
    }  while(!feof(fptr)); 
        fclose(fptr);


}