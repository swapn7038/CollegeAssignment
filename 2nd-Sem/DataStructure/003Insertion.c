// insert an element in linaer array at specific position ✔✔✔✔✔✔

#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5};
    int j,element,N,k,k2;
     
    N=5;
    printf("Array before insertion\n");
    for(j=0;j<N;j++){
        printf("arr[%d]=%d\n",j,arr[j]);
    } 

    // insert element process
    printf("Enter element and position\n");
    scanf("%d%d\n",&element,&k);

    for(j=4;j>=k;j--){
      arr[j+1]=arr[j];
    }
    arr[k]=element;


    printf("\n Array after insertion\n");
    for(j=0;j<=N;j++){
      printf("arr[%d]=%d\n",j,arr[j]);
    }

    printf("Array inserted succesfully!!!!!😁😁😁😁😁");
}