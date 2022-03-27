//Program for Bubble sort technique Program No. 23
//Swapnil Baban Shelke
//Roll no. 48
//BCs-1 



// #include<stdio.h>
// int main() 
// {
//     int a[10], number,i,j,temp;
//     printf("\n Enter the total Number of Elements : ");
//     scanf("%d", &number);

//     printf("\n Enter the Array Elements : ");
//     for(i=0;i<=number;i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for(i=0;i<number-i;i++)
//     {
//         for(j=0;j<=number-i-1;j++)
//         {
//             if(a[j]>a[i+1])
//             {
//                 temp=a[j];
//                 a[j];
//                 a[j+1]=temp;        
//             }
//         }
//     }

//     printf("\n List sorted in Ascending Order : ");
//     for(i=0;i<number;i++)
//     {
//         printf("%d ", a[i]);
//         printf("\n");
//     }
//     getchar();
// }

/*
// Bubble sort in C

#include <stdio.h>

// perform the bubble sort
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size - 1; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {10, 4, 2, 1,6, 70, 45};
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);
  
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
}


*/


// Bubble sort in C

#include <stdio.h>

void bubbleSort(int array[], int size) {

  
  for (int step = 0; step < size - 1; ++step) {
      
    for (int i = 0; i < size - step - 1; ++i) {
      
      if (array[i] > array[i + 1]) {
        
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {10, 4, 2, 1,6, 70, 45};
  
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);
  
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
}




