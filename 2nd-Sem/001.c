// Name : Swapnil Baban Shelke
// Class : BCS
// Roll Number : 48
// DITMS

// Swapping of numbers by using call by reference
#include<stdio.h> 
void swap(int *, int *); // prototype if function
int main(){
    int a =10, b = 20;
    printf(" \n Before swapping the values in a mai a = %d, b = %d\n ",a,b); 
    // printing the value of a and b in the main
    swap(&a,&b);
    printf(" \n After swapping the values in a main  a = %d, b = %d\n ",a,b); 

}

void swap(int *a, int *b){
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 

    printf("\n After swapping values in a function a = %d, b = %d \n", *a, *b);
    // Formal parameters, a = 20, b = 10;
}