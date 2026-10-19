#include "psk.h"

#define t1 char
#define pk1() x_a_tmrf_psk1()

#define a EOF
#define t2 bool
#define pk2(a, b) (a != b)

#define pk3(a) return a

#define psk x_a_tmrf_psk3

t2
psk() {
	t1 b = pk1();

	t2 c = pk2(b, a);

	pk3(c);
}

#undef t1
#undef pk1
#undef a
#undef t2
#undef pk2
#undef pk3
#undef psk
