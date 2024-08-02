
// program to read values from a file, each file a csv list of int and two double
// written: fmk

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  if (argc != 3) {
    fprintf(stdout, "ERROR correct usage appName inputFile outputBinaryFile\n");
    return -1;
  }

  //
  // read from ascii file
  //
  
  FILE *filePtr = fopen(argv[1],"r"); 

  int i = 0;
  float float1, float2;
  int maxVectorSize = 100;
  double *vector1 = (double *)malloc(maxVectorSize*sizeof(double));
  double *vector2 = (double *)malloc(maxVectorSize*sizeof(double));  
  int vectorSize = 0;
  
  while (fscanf(filePtr,"%d, %f, %f\n", &i, &float1, &float2) != EOF) {
    vector1[vectorSize] = float1;
    vector2[vectorSize] = float2;
    printf("%d, %f, %f\n",i, vector2[i], vector1[i]);
    vectorSize++;

    // when this happens we need to increase the vector size we have
    if (vectorSize == maxVectorSize) {
      // some code needed here I think .. programming exercise
      // malloc larger spaces
      double *vector1New = (double *)malloc((vectorSize+maxVectorSize)*sizeof(double));
      double *vector2New = (double *)malloc((vectorSize+maxVectorSize)*sizeof(double));

      //copy original
      for(int i = 0; i<vectorSize; i++){
	vector1New[i] = vector1[i];
	vector2New[i] = vector2[i];
      }

      //free original
      free(vector1);
      free(vector2);
      vector1 = vector1New;
      vector2 = vector2New;

      //if we free vector1New, we release vector that vector1
      //now points to which is a mistake

      //change max Vector size
      maxVectorSize += vectorSize;
    }
  }
  
  fclose(filePtr);

  //
  // write data to binary file
  //
  
  FILE *filePtrB = fopen(argv[2],"wb");
  
  // some missing code to write vector1, followed by vector 2

  fwrite(vector1,sizeof(double), vectorSize, filePtrB);
  fwrite(vector2,sizeof(double), vectorSize, filePtrB);
  
  fclose(filePtrB);  
}
