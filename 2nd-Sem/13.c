// Name : Swapnil Baban Shelke
// Class : BCS
// Roll Number : 48
// DITMS

// Program to demonstrate the storage class 
#include<stdio.h>
int x, n; 
void autoStorageClass(){
    printf("Demonstration auto class :\n\n"); 

    auto int a = 32; 
    printf("values of the variabel 'a' ""declared as auto :%d \n", a); 
               printf("\n-----------------------------------------------------------------------\n");

}
void registerClass(){
    printf("\n Demonstration register class\n\n"); 
    register char b = 'G'; 
    
    printf("Value of the variable 'b' "
    "declared as register : %d\n ", b); 
               printf("\n-----------------------------------------------------------------------\n");
}

void externStorageClass(){
    printf("Demonstration extern class\n\n");

    extern int x; 
    printf("Value of the variabel 'x'""declare as extern: %d\n\n", x);
    x=2; 
    printf("Modified value of the variable 'x'"
    "declared as extern : %d\n\n", n);  
               printf("\n-----------------------------------------------------------------------\n");
}

void staticStorageClass(){
    int i=0; 

    printf("Demonstration static classes\n\n");
    printf("Declaring 'y' as static inside the loop.\n"
     "But this declaration will occur only once as 'y' is static. "
      "If not, then every time the value of 'y' "
      "will be the declared value 5 "
      "as in the case o fvariabel 'p' \n\n");

      printf("\nLoop started:\n");

      for(i=0;i<5;i++){
          static int y = 5; 
          int p = 10; 
          y++; 
          p++;

          printf("\n \n The value of 'y'", 
          "declaration as static , in %d"
          "iteration is %d\n", i, y);

          printf("The value of non-static variable 'p', "
               "in %d iteration is %d\n",
               i, p);

               printf("\n-----------------------------------------------------------------------\n");

        }
}

int main(){
    printf("A program to demonstrate "
     "storage classes in C \n\n"
    );

    autoStorageClass(); 
    registerClass();
    externStorageClass();
    staticStorageClass();
    printf("\n Storage Classes demonstrated"); 

    return 0; 

}