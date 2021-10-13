# vmovsd-checker
Small assembler application to try a `vmovsd` operation.

The `vmovsd` operation according to the Intel manual requires either `AVX` or `AVX512` support for your processor.

This utility is an assembled program that directly tries to run this operation; it either coredumps or prints a message suceeding.

To use it from the container image, run:
```bash
$ podman run -t quay.io/robbmanes/vmovsd-checker
```

A `Makefile` is provided for building the program:
```
$ make
```

Otherwise, you can build the program yourself with `as` and `ld`:

```bash
as vmovsd-checker.asm -o vmovsd-checker.o
ld vmovsd-checker.o -o vmovsd-checker
./vmovsd-checker
```
