#include "tmrf.h"

#define t1 x_a_t
#define a x_a_tmrf

#define t2 FILE*
#define pk(a) fseek((t2) a, 1, SEEK_CUR)

#define psk x_a_tmrf_psk2

void
psk() {
	pk(a);
};

#undef t1
#undef a
#undef t2
#undef pk
#undef psk
