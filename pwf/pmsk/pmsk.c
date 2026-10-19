#include "pmsk.h"

#define pk1() x_a_tmrf_pf()

#define t int
#define pk2() x_c_psk()

#define pk3(a) int_perndr(a)

#define psk pmsk

void
psk() {
	pk1();

	t a = pk2();

	pk3(a);
}

#undef pk1
#undef t
#undef pk2
#undef pk3
#undef psk
