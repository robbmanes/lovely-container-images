FROM registry.redhat.io/ubi8-minimal:latest
COPY iopl_test /bin/iopl_test
RUN chown root:root /bin/iopl_test && \
    chmod 755 /bin/iopl_test
CMD ["/bin/iopl_test"]
