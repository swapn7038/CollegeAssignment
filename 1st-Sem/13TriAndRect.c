//Program to find area and perimeter of triangle and rectangle
//Swapnil Baban Shelker 
//BCS-1
//Roll NO-48
//Program number : 13

#include <stdio.h>
#include<math.h>
int main()
{
    float p,q,r,s,t,u,v,w,l,b;
printf("Enter sides of trinagle:");
scanf("%f%f%f", &p,&q,&r);

printf("Enterenter length and breadth");
scanf("%f%f",&l,&b);
 
  t=p+q+r;
  s=(p+q+r)/2;
  u=sqrt(s*(s-p)*s*(s-q)*s*(s-r));
  v=l+b;
printf("\nArea of triangle %f",u);
printf("\nArea of reactangle %f",v);
printf("\nPerimeter of triangle %f",t);
printf("\nPerimeter of Reactangle %f",w);

return 0;
}


// Enter sides of trinagle:5 5 5
// Enterenter length and breadth5 10 

// Area of triangle 81.189880      
// Area of reactangle 15.000000    
// Perimeter of triangle 15.000000 
// Perimeter of Reactangle 0.000000