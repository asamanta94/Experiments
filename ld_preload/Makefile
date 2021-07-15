CC=gcc

# Compile the main file
main: main.c
	$(CC) -c main.c

# Compile the library
ld_preload_lib_mac: lib.c
	$(CC) -shared -fPIC -o lib.dylib lib.c

# Clean everything
clean:
	rm -rf a.out lib.dylib