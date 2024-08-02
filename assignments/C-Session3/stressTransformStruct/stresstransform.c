#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "stresstransform.h"

// 
// check out the new function header:
// ... much more compact
// ... much easier to adapt to 3d states of stress (just change STRESS)
//



void StressTransform(STRESS s, STRESS *sp, double theta) {

	double pi = 4.0*atan(1.);
	double th = theta * pi/180.;

	double sn = sin(th);
	double cs = cos(th);

	// these next lines need to be adapted to work with the new header .
	
	sp->sx = s.sx*cs*cs + s.sy*sn*sn + 2.*s.txy*sn*cs;
	sp->sy = s.sx*sn*sn + s.sy*cs*cs - 2.*s.txy*sn*cs;
	sp->txy  = (s.sy - s.sx)*sn*cs + s.txy*(cs*cs - sn*sn);
}

