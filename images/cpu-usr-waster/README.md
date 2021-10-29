# cpu-usr-waster
Spins uselessly, consuming CPU user cycles.

## Building
There is a provided `Makefile` to build the binary:
```
$ make
```

Then use your favorite container engine to perform the build:
```
$ podman build -t quay.io/robbmanes/cpu-usr-waster:latest .
```
