# lovely-container-images
A collection of applications I've containerized or written to be executed in a container, usually for testing purposes (or my own use).

## Container Images

### Gameservers
This is a collection of container images used to host dedicated game servers.
- Coming soon!

### Utilities
This is a collection of container images used to test functionality or perform a specific utilitarian purpose.
- [cpu-usr-waster](images/utilities/cpu-usr-waster) - spins uselessly, consuming CPU user cycles.
- [iopl-test](images/utilities/iopl-test) - runs `iopl` within a container, useful for verifying container permissions.
- [segfaulter](images/utilities/segfaulter) - intentionally causes a segfault, useful for testing coredump collection.
- [vmovsd-checker](images/utilities/vmovsd-checker) - runs the `vmovsd` x86_64 operation within a container, useful for testing CPU compatibility.
