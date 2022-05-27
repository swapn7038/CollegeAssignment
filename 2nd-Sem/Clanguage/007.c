
// Name : Swapnil Baban Shelke
// Class : BCS
// Roll Number : 48
// DITMS

// Program to copy one file into another file

#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch, source_file[20], target_file[20];
    FILE *source, *target; 

    printf("Enter name of file to copy \n");
    gets(source_file);

    source = fopen(source_file, "r"); 

    if(source == NULL){
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter name of target file\n");
    gets(target_file);

    target = fopen(target_file, "w");

    if(target  == NULL){
       fclose(source);
       printf("Press any key to exit...\n");
       exit(EXIT_FAILURE);
    }

    while((ch = fgetc(source))!= EOF)
     fputs(ch, target);

     printf("File copied successfully. \n");

     fclose(source);
     fclose(target);

     return 0; 
}


// Enter name of file to copy 
// file1.txt
// Enter name of target file
// file2.c
// File copied successfully.





























// https://www.sanfoundry.com/c-program-copy-file/