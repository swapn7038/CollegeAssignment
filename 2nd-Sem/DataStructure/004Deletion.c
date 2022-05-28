// Program to delete an array element ✔✔✔✔✔
#include<stdio.h>
void main(){
    int i,size,pos;
    int arr[10]={1,2,3,4,5,6,7,7,8,9};
    size=sizeof(arr)/sizeof(arr[10]);

    printf("The array element before deletion\n");
    for(i=0;i<size;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("Enter the position from where you wish to deleet the element:\n");
    scanf("%d\n",&pos);
    // main logic   
    for(i=pos-1;i<size;i++)
        arr[i]=arr[i+1];
        size=size-1;
        for(i=0;i<size;i++)
     
      printf("a[%d]=%d\n",i,arr[i]);
    
}