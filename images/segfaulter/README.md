# segfaulter
Container image that intentionally segfaults after waiting 10 seconds.

## Usage
- In your container engine of choice, run a new container with this image:
```
$ podman run -t quay.io/robbmanes/segfaulter:v1
Sleeping for 10 seconds prior to segfaulting...
Intentionally performing an illegal operation and segfaulting.
```

- If using in Kubernetes, the following `pod` object can be used instead:
```
$ kubectl create -f segfaulter-pod.yaml
```

## Building
- Run the `make` command on your system to compile the program (and ignore the warning, we intentionally did this):
```
$ make
gcc -o segfaulter segfaulter.c
segfaulter.c: In function ‘main’:
segfaulter.c:19:11: warning: assignment to ‘char’ from ‘char *’ makes integer from pointer without a cast [-Wint-conversion]
  *(str+1) = "x";
           ^
``` 

- Build the container image with `podman` or `docker` (using your own tag after the `-t` flag):
```
$ podman build -t quay.io/robbmanes/segfaulter:v1 .
```

- Push the image to where it needs to go:
```
$ podman push quay.io/robbmanes/segfaulter:v1
```
