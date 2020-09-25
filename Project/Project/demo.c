#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "udf.h"
#define U 18
#define I 200
#define PI 3.1415928
#define R 0.003
#define n 0.8
#define v 0.003
#define L 0.005
#define u0 1.26e-6


DEFINE_PROFILE(heat_flux, thread, index)
{

	real xc[ND_ND];
	face_t f;
	real t;
	real heat, T0 = 300;
	real x, y, z;
	real r;
	real hc = 80, simagb = 5.67e-8, epsilon = 0.06;
	t = RP_Get_Real("flow-time");
	begin_f_loop(f, thread)
	{
		F_CENTROID(xc, f, thread);
		x = xc[0];
		y = xc[1];
		z = xc[2];
		r = sqrt((x - v*t)*(x - v*t) + y*y);
		if (r<sqrt(6)*R)
			heat = n*I*U / (2 * PI*R*R)*exp(-1 * r*r / (2 * R*R));
		else
			heat = 0;

		F_PROFILE(f, thread, index) = heat - hc*(T - T0) - sigmab*epsilon*(pow(F_T(f, t), 4) - pow(T0, 4)));

	}
	end_f_loop(f, thread)

}