#include <stdio.h>
#include <math.h>
#include "f.h"
#include "g.h"

float x;

int main () 
{  
  
  printf("Input number for X: ");
  scanf("%f",&x);
 
printf("f(x)= %f\ng(x)= %f\n",f(x), g(x)); 
return 0;
}
