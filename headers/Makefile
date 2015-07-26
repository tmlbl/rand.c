default: build

build:
	- clang -o libtim.dylib -shared libtim.c 
	- clang -o theprogram -I`pwd` -L`pwd` -ltim program.c

