// Name : Swapnil Baban Shelke
// Class : BCS
// Roll Number : 48
// DITMS

// Program to modify a record from binary file

#include<stdio.h>
int main(){
    struct student {
        int rollno;
        char name[20];
        int s1,s2,s3,tot;
        float per;
    };

    struct student rec; 
    int newrollno, found=0;
    char cho;
    FILE *fptr;
    fptr=fopen("resultB.txt","rb+");
    if(!fptr){
        printf("Unable to open file\n\n");
        return; 
    }

    printf("Enter the roll number\n");
    scanf("%d", &newrollno);
       
    while(!feof(fptr)){
        fread(&rec, sizeof(rec), 1, fptr);
        if(feof(fptr)){
            fread(&rec, sizeof(rec), 1, fptr);
            if(feof(fptr))
            break;

            if(newrollno == rec.rollno){
               printf("\nRoll number                %d");
               printf("\nName                       %s");
               printf("\nPhysics                    %d");
               printf("\nChemistry                  %d");
               printf("\nMaths                      %d");

               printf("Enter new file \n");
               printf("Enter roll no, \nName, \n Physics, \n Chemistry, \n Maths, "); 
               scanf("%d %s %d %d %d ", &rec.rollno, &rec.name, &rec.s1, &rec.s2, &rec.s3); 

               rec.tot=rec.s1+rec.s2+rec.s3; 
               rec.per=rec.tot/3.0; 

               fseek(fptr, sizeof(rec), SEEK_CUR);
               fwrite(&rec, sizeof(rec), 1, fptr);
               found=1;
               break;
            }
        }

        if(found==0)
        printf("\n Record not found"); 
        fclose(fptr); 
    }
    return;    
}