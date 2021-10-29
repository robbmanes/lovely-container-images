FROM registry.redhat.io/ubi8-minimal:latest
COPY cpu-usr-waster /bin/cpu-usr-waster
RUN chown root:root /bin/cpu-usr-waster && \
    chmod 755 /bin/cpu-usr-waster
CMD ["/bin/cpu-usr-waster"]
