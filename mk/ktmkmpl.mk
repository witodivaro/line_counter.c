A =$(wildcard *.c)
A+=$(wildcard pwf/*/*.c)
A+=$(wildcard pwf/*/*/*.c)
A+=$(wildcard pwf/*/*/*/*.c)
A+=$(wildcard pwf/*/*/*/*/*.c)
A+=$(wildcard pwf/*/*/*/*/*/*.c)
A+=$(wildcard pwf/*/*/*/*/*/*/*.c)
A+=$(wildcard pwf/*/*/*/*/*/*/*/*.c)
A+=$(wildcard pwf/*/*/*/*/*/*/*/*/*.c)
A+=$(wildcard pwf/*/*/*/*/*/*/*/*/*/*.c)

pk.mo: $(A)
	gcc \
		-O0 \
		-g \
		$^ \
		-o $@
