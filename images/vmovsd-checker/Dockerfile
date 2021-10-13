FROM registry.redhat.io/ubi8-minimal
COPY vmovsd-checker.asm /root/
WORKDIR /root/
RUN microdnf install binutils -y && \
    as vmovsd-checker.asm -o vmovsd-checker.o && \
    ld vmovsd-checker.o -o vmovsd-checker && \
    rm vmovsd-checker.o vmovsd-checker.asm && \
    chmod +x vmovsd-checker
ENTRYPOINT ["/root/vmovsd-checker"]