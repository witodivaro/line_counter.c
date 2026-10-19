#include "pak.h"

#define t FILE*
#define a1 stdin
#define pik(a) fgetc(a)

#define pk phkf_pak

void
pk() {
	t a2 = a1;
	pik(a2);
};

#undef t
#undef a1
#undef pik
#undef pk
