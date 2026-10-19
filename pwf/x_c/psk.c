#include "psk.h"

#define t1 x_b_t

#define pk1() x_b_psk()

#define a x_b_tmrf
#define t2 int
#define pk2(a) return (t2) a

#define psk x_c_psk

t2
psk() {
	pk1();

	pk2(a);
}

#undef t1
#undef pk1
#undef a
#undef t2
#undef pk2
#undef psk	
