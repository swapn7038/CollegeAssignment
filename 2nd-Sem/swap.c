// Namw : Swapnil Shelke 
// Class : BCS-1
// Roll No : 48 

#include<stdio.h> 
void swap (int x, int y); 
void main() 
{
    int a, b; 
    printf("Enter two numbers"); 
    scanf("%d %d", &a, &b); 
    swap(a, b); 
    printf("\n After swapping"); 
    printf("\n a = %d", a); 
    printf("\n b = %d", b); 
}

void swap(int x, int y) {
    int temp; 
    temp = x; 
    x = y; 
    y = temp; 

    printf("\n Inside swap"); 
    printf("\n a = %d", x); 
    printf("\n b = %d", y); 

}