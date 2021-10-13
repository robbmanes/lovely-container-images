# iopl-test
Simple one-shot test to verify if the iopl system call executes or not in a container.

Use this to test iopl, which usually requires `CAP_SYS_RAWIO` to execute within a container.

## Building
There is a provided `Makefile` to build the binary:
```
$ make
```

Then use your favorite container engine to perform the build:
```
$ podman build -t quay.io/robbmanes/iopl-test:latest .
```

## Using this Test
On an OpenShift Cluster, create the job from the provided Job YAML:
```
$ oc create -f iopl_job.yaml
job.batch/iopl-test created
```

Observe that a Job has been added:
```
$ oc get jobs
NAME        COMPLETIONS   DURATION   AGE
iopl-test   1/1           5s         9s
```

Check for a pod created by the job (it probably has already finished):
```
$ oc get pods
NAME              READY   STATUS      RESTARTS   AGE
iopl-test-xjrd9   0/1     Completed   0          18s
```

Check the logs of the pod for the result (a successful test is below):
```
$ oc logs iopl-test-xjrd9
Success calling iopl(): code 0
```
