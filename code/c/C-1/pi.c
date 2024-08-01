#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(int argc, char **argv) {
  float pi = 0; double time = 0;


  
  if (argc != 2) {
    printf("Usage: appName numSteps\n");
    exit(-1);
  }

  int numSteps = atoi(argv[1]);
  
  float low;
  float high;

  float *pntL = 0;
  pntL = &low;
  float *pntH = 0;
  pntH = &high;

  float hght;
  float *pntHt = 0;
  pntHt = &hght;

  float dX = 1.0/numSteps;


  for(int j = 0; j<numSteps; j++){
    *pntL = j * dX;
    *pntH = (j+1) * dX;

    *pntHt = ((4/(1+pow(low,2)))+(4/(1+pow(high,2))))/2;
    pi += hght*dX;
  }
  
  
  
  printf("PI = %16.14f, diff(%16.14f)\n",pi, fabs(pi-M_PI));
  return 0;
}
