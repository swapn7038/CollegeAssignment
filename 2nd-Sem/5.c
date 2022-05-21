// Name : Swapnil Baban Shelke
// Class : BCS
// Roll Number : 48
// DITMS

// Program for writing and reading text file

#include<stdio.h>
void main(){
    char ch; 
    FILE *fptr;
    printf("Enter data to store in file \n Press # to save and exit");
    fptr=fopen("swapnil.txt", "w");
while(ch!='#'){
  scanf("%c", &ch);
  if(ch!='#')
  fprintf(fptr, "%c",ch);
}

 fclose(fptr);
 printf("\n Your file data here \n");

 fptr=fopen("swapnil.txt", "r");
 while((ch=getc(fptr))!=EOF){
     printf("%c", ch); 
 }

 fclose(fptr);

}




// fopen() used for creating a new file or to open existing file
// syntax 
// int fclose(FILE *fp); 

// fclose() used for closed an open file 
// syntax
// int fclose(FILE *fp);


