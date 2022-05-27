// Name : Swapnil Baban Shelke
// Class : BCS
// Roll Number : 48
// DITMS

// Program for passing strucute pointer to funcion
#include<stdio.h> 
#include<string.h>

struct student {
    int id; 
    char name[20]; 
    float percentage; 
}; 

void func(struct student *record); 

int main(){
    struct student record; 

    record.id=1;
    strcpy(record.name, "Raju");
    record.percentage = 86.5; 

    func(&record);
    return 0;
}

void func(struct student *record){
    printf(" Id is : %d \n ", record->id); 
    printf("Name is: %s \n ", record->name); 
    printf(" Percentage is : %f", record->percentage); 
}


// Output 
//  Id is : 1 
//  Name is: Raju 
//   Percentage is : 86.500000