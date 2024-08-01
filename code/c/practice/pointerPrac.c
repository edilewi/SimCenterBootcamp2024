#include <stdio.h>

/*
  It seems that the function of pointers is that it allows for quick access
  to data without recopying it. It allows it to have it such that you physically
  manage the memory locations.
*/

int main(){
  int x=10, y;
  int *ptrX = 0;
  ptrX = &x;

  y=*ptrX + x;

  *ptrX = 50;

  printf("x is %d, and y is %d\n",x,y);
}
