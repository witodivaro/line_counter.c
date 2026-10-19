#include "psk.h"

#define t1 FILE*

#define t2 char
#define pk1(a) fgetc(a)
#define pk2(a, b) ungetc(a, b)

#define pk3(a) return a

#define psk x_a_tmrf_pisk1_sk

t2
psk(
	t1 a
) {
	t2 b = pk1(a);
	pk2(b, a);

	pk3(b);
}

#undef t1
#undef t2
#undef pk1
#undef pk2
#undef pk3
#undef psk
