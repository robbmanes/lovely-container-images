# Steam Container Images
Container images for running steam, mostly for running game servers.

## Building the Steam Base Image
You must first build the base container image that has the `steamCMD` binary in it.

To do this, run the following container image build:

```
$ podman build -t localhost/steam-base:latest -f Containerfile.steam-base
```

Once that has completed, you can run any of the following container image builds and run your own servers according to the sections below.

## Game Servers
This section outlines individual game server images you can run once you have correctly configured the `steam-base` image.

### Don't Starve Together
To run the latest "Don't Starve Together" instance, build the container image which requires the `steam-base` image to be present on the system:

```
$ podman build -t localhost/dst:latest -f Containerfile.dst
```

To run the server, launch the container like so:
```
$ podman run -d --name dontstarvetogether -p 10999:10999 localhost/dst:latest
```
