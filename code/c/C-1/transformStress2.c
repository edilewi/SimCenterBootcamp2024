// program to transform stress:
//
// sigmaX' = sigmaX * cos^2(theta) + sigmaY * sin^2(theta) + 2 * tauXY Sin(theta)Cos(theta)
// sigmaY' = sigmaX * sin^2(theta) + sigmaY * cos^2(theta) - 2 * tauXY Sin(theta)Cos(theta)
// tauXY' = (sigmaY-sigmaX) * sin(theta)cos(theta) + tauXY(cos^2(theta) - sin^2(theta))
//
// write a program to take:
// 1: 4 inputs: sigmaX, sigmaY, tauXY, theta and output transformed stresses: sigmaX', sigmaY', tauXY'
// 2: 3  inputs: sigmaX, sigmaY, tauXY and output transformed stresses: sigmaX', sigmaY', tauXY' for every 10 degrees
//
// NOTE: perform the transformation inside a function that cannot be named main
//
// Extend to possibly include all outputs for a Mohr circle, were the theta now provided is a deltaTheta

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void transformStress(float *stressIN, float theta, float *stressTransformed);

int main(int argc, char **argv) {


  float sigmaX = atof(argv[1]);
  float sigmaY = atof(argv[2]);
  float tauXY = atof(argv[3]);
  float theta = atof(argv[4]);

  float new[3];

  float  original[3] = {sigmaX, sigmaY, tauXY};

  transformStress(original,theta,new);

    
  printf("%.4f, %.4f, %.4f\n", new[0], new[1], new[2]);
  return 0;
}

void transformStress(float *stressOrig, float th, float *stressTransf){

    float rad = th * M_PI/180;
  
    float *x = 0;
    x = &stressOrig[0];
    float *y = 0;
    y = &stressOrig[1];
    float *tau = 0;
    tau = &stressOrig[2];
    

    stressTransf[0] = (*x * pow(cos(rad),2)) + (*y * pow(sin(rad),2)) + (2 * *tau * sin(rad) * cos(rad));
									  stressTransf[1] = (*x * pow(sin(rad),2)) + (*y * pow(cos(rad),2)) - (2 * *tau * sin(rad) * cos(rad));
									  stressTransf[2] = ((*y - *x) * sin(rad) * cos(rad)) + (*tau * (pow(cos(rad),2) - pow(sin(rad),2)));


	
									
									  

}
