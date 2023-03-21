#include <stdio.h>
#include <sys/io.h>
#include <errno.h>

#define LEVEL 3

int main(int argc, char **argv)
{
        int rc;
        rc = iopl(LEVEL);
        switch(rc) {
                case -EINVAL:
                        printf("Incorrect level (greater than 3)\n");
                        break;
                case -ENOSYS:
                        printf("iopl() call is not implemented.\n");
                        break;
                case -EPERM:
                        printf("Insufficient privileges to call iopl().\n");
                        break;
                default:
                        printf("Success calling iopl(): code %d\n", rc);
        }
        return rc;
}