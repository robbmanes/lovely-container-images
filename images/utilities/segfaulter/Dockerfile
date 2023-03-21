FROM registry.redhat.io/ubi8:latest
COPY segfaulter /usr/bin/segfaulter
RUN chmod +x /usr/bin/segfaulter && \
    useradd user
USER 1000
CMD ["/usr/bin/segfaulter"]
