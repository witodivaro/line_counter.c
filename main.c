#include "main.h"

#define t int
#define a1 0
#define pik1() pmsk()

#define pik2(a) return a

#define pk main

t
pk() {
	t a2 = a1;

	pik1();

	pik2(a2);
};

#undef t
#undef a1
#undef pik1
#undef pik2
#undef pk
