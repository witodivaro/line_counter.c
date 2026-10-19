#include "perndr.h"

#define t int
#define pik(a) printf("%d", a)

#define pk int_perndr

void
pk(
	t a
) {
	pik(a);
};

#undef t
#undef pik
#undef pk
