#include "tmrf.h"

#define t1 char*
#define a1 "x_w/x_x"
#define t2 x_v_t
#define b1 &x_v

#define pik1(a) fopen(a, "r")

#define pik2(a, b) (* a) = b

#define pk x_v_tmrf_pf

void
pk() {
	t1 a2 = a1;
	t2* b2 = b1;

	t2 c = pik1(a2);

	pik2(b2, c);
};

#undef t1
#undef a1
#undef t2
#undef b1
#undef pik1
#undef pik2
#undef pk
