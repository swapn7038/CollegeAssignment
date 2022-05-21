// Name : Swapnil Baban Shelke
// Class : BCS
// Roll Number : 48
// DITMS

// Program for reading/writing binary file

#include<stdio.h>
void main(){
    char ch; 
    FILE *fptr;
    printf("Enter data to store in file \n Press # to save and exit");
    fptr=fopen("swapy.bin", "wb");
while(ch!='#'){
  scanf("%c", &ch);
  if(ch!='#')
  fprintf(fptr, "%c",ch);
}

 fclose(fptr);
 printf("\n Your file data here \n");

 fptr=fopen("swapy.bin", "rb");
 while((ch=getc(fptr))!=EOF){
     printf("%c", ch); 
 }

 fclose(fptr);

}