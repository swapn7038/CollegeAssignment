// Program to add, sub, div and multiply two numbers

#include<stdio.h>
int main(){
    int a, b, c, s, m;
    float d;

    printf("Enter the values of a and b : \n");
    scanf("%d%d", &a,&b);

    printf("Addition\n");
    c=a+b;
    printf("%d\n", c);
 
    printf("Substraction\n");
    s=a-b;
    printf("%d\n",s);

    printf("Multiplication\n");
    m=a*b;
    printf("%d\n", m);

    printf("Division");
    d=a/b;
    printf("%lf\n", d);
}