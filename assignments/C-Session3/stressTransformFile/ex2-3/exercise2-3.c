#include <stdio.h>
#include <stdlib.h>
#include <math.h>    // need this for the constant pi = M_PI

#include "stresstransform.h"

//We get a degree then compute Mohr's circle, aim is to do it with linked lists

int main(int argc, char **argv) {

	// get dth from the first argument.  This is given in degrees!
	  
	// might be smart to set a default value, just in case the user
	// forgets when calling this  program;)
  double dth = 45;
  dth = atof(argv[1]);


	// set the initial stress state
	STRESS S0;

	S0.sigx = 12.0;
	S0.sigy = -5.5;
	S0.tau  =  3.5;
	S0.next =  0;

   

	//Goes in and creates a pointer for STRESS called results
	//that points to S0
	STRESS *results = &S0;

	
	// MISSING CODE
	for (double th = 0; th<180.; th+=dth){
	  //current is already a pointer
	  //allocate space for current store future info
	  STRESS *current = (STRESS *)malloc(sizeof(STRESS));
	    
	  //Transforms S0 to current
	  StressTransform(S0,current,th);

	  printf("sigx = %12.6f sigy' = %12.6f tau'  = %12.6f\n", current->sigx, current->sigy, current->tau);

		//move current to the next location. 
		//current is a pointer, set it to results
		current->next = results;

		//both are pointers, so we just set location of results to where current
		results = current;
	  
	  	//can also do where results is at the end and just do from one end, would have to decrement theta.
	}
        
	//still need to make to csv and output theta.
	//Also need to print first.
 
	
    
	/* while (current != NULL) { */
	/*   fprintf("sigx = %12.6f sigy' = %12.6f tau'  = %12.6f\n", current->sigx, current->sigy, current->tau); */
	/*   current = current->next; */
	/* } */
}

