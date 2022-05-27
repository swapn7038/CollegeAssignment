// Failed, write this again

// Program to find the roots of the quadartic equation
// Find the roots o fthe quadratic equation 
// aX2+bx+c

// There will be two roots of this equation
// input a,b,c
// Output r1, r2
#include<stdio.h>
#include<math.h>
int mani(){
    float a,b,c,r1,r2,d;
    printf("Enter the valus of a b c ");
    scanf("%f  %f  %f", &a,&b,&c);
    d=b*d - 4*a*c;
    if(d>0){
        r1= -b+sqrt(d)/(2*a);  
        r2= -b+sqrt(d)/(2*a);  
        printf("The real roots = %f %f ",r1,r2);
    }
    else if(d==0){
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("Roots are equal = %f %f ", r1, r2);
    }
    else
        printf("Roots are imiginary \n");

    

return 0;

}





// https://www.tutorialspoint.com/how-to-write-a-c-program-to-find-the-roots-of-a-quadratic-equation