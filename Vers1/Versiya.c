#include <stdio.h>
#include <math.h>
int main () 
{
  float x, f, g;
  printf("Input number for X: ");
  scanf("%f",&x);
  
  f=exp(-(fabs(x)))*sin(x);
  g=exp(-(fabs(x)))*cos(x);

  printf("f(x)= %f\ng(x)= %f\n",f, g); 
  return 0;
}
