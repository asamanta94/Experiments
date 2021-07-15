# Instructions

To make the Library:
```
make ld_preload_lib_mac
```

To make the main file:
```
make main
```

To run without the library:
```
./a.out
```

To run with library (On OSX):
```
DYLD_INSERT_LIBRARIES=lib.dylib DYLD_FORCE_FLAT_NAMESPACE=1 ./a.out
```

To remove binary:
```
make clean
```

# What is LD_PRELOAD?

LD_PRELOAD tells the dynamic linker to link symbols provided by a specified shared library before linking to other libraries. In this case, instead of linking the read symbol to the standard C library, it links to the custom generated `lib.dylib` on OSX.