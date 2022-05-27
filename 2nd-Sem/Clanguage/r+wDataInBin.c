#include<stdio.h>
int main(){
    struct student {
        int rollno; 
        char name[20];
        int s1,s2,s3,tot;
        float per;
    };

    struct student rec;
    char cho; 
    FILE *fptr;
    fptr=fopen("resultB.txt", "wb");
    if (!fptr){
        printf("Unable to open File!");
        return;
    } 
    
    do{
         printf("\n Roll No.        ");
         scanf("%d", &rec.rollno);
         
         printf("\n Name      ");
         scanf("%s", &rec.name);
         
         printf("\n Physics     ");
         scanf("%d", &rec.s1);
         printf("\n Chemisry     ");
         scanf("%d", &rec.s2);
         printf("\n Maths    ");
         scanf("%d", &rec.s3);
         
         rec.tot=rec.s1+rec.s2+rec.s3;
         rec.per=rec.tot/3.0;

        fwrite(&rec, sizeof(rec), 1, fptr);

        printf("\n Continue for next record y\n");
        // y

    }

    while(cho=='y'  || cho=='Y');
    fclose(fptr);
}