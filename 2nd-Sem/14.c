// Name : Swapnil Baban Shelke
// Class : BCS
// Roll Number : 48
// DITMS

// Program to sort names
// Following is the C program to sort names in alphabeticl order
#include<stdio.h>
#include<string.h>
main(){
    int i,j,n;
    char str[100][100],s[100];
    printf("Enter number of names you want:"); 
    scanf("%d",&n);
    printf("Enter names in any of the order: \n");
    for(i=0;i<n;i++){
       scanf("%s",str[i]);
    }

    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
          if(strcmp(str[i],str[j])>0){
              strcpy(s,str[i]);
              strcpy(str[i],str[j]);
              strcpy(str[j],s);
          }
      }
    }
    printf("\n\n The sorted order of names are :\n");
    for(i=0;i<n;i++){
      printf("%s\n",str[i]);
    }
}

// Output 
// Enter number of names you want:5
//  The sorted order of names are :
// aashay
// aniket
// karan
// raza
// swapnil