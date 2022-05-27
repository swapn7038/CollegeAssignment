// Pforgram to find prime number or not


#include <stdio.h>

int main() {

  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}

// Raference 
// https://www.simplilearn.com/tutorials/c-tutorial/c-program-for-prime-numbers










// #include<stdio.h>
// int main(){
//     int n,i,flag=0;
//     printf("Enter a positive integer: ");
//     scanf("%d",&n);

    
//     if(n == 0 || n == 1){
//          flag=1;

//          for(i=2;i<=n/2;i++){              
//              if(n%i == 0){
//                 flag=1;
//                 break;
//              }
//          }

       
//         if(flag==0){
//            printf("%d is a prime number",n);
//         }
//         else  
//            printf("%d is not a prime number");
//     return 0;
//     }
// }








// #include<stdio.h>
// int main(){
//     int num, flag=0;
//     int i;
//     // clrscr();
//     printf("Enter a num: ");
//     scanf("%d",&num);
//     for(i=2;i<=num;i++){
//          if(num%i==0){
//             flag=1;
//             break;
//          }
//     }

//     if(flag==0){
//         printf("Given number is prime number");
//     }
//     else{
//         printf("THis is not a prime nuber");
//     }
//     return 0;
// }