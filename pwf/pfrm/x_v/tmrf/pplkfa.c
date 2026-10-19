#include "tmrf.h"

#define t x_v_t
#define a1 &x_v
#define pik1(a) (* a)

#define pik2(a) return a

#define pk x_v_tmrf_pplkfa

t
pk() {
	t* a2 = a1;

	t b = pik1(a2);

	pik2(b);
}

#undef t
#undef a1
#undef pik1
#undef pik2
#undef pk
