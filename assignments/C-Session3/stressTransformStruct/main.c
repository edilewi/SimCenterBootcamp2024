#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "stresstransform.h"

int main(int argc, char **argv) {

	STRESS S0;
	STRESS Sp;

	S0.sx = 12.0;
	S0.sy = -5.5;
	S0.txy  =  3.5;

	StressTransform(S0, &Sp, 25.0);
	printf("sigx' = %12.6f\nsigy' = %12.6f\ntau'  = %12.6f\n\n", Sp.sx, Sp.sy, Sp.txy);
}


