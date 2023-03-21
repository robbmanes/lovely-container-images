#include <stdio.h>
#include <unistd.h>

#define SLEEP_TIME 10

int main()
{
	char *str;
	str = "X";

	// Wait some time
	printf("Sleeping for %d seconds prior to segfaulting...\n", SLEEP_TIME);
	sleep(SLEEP_TIME);

	// Intentionally segfault by modifying R/O memory
	// Useful for testing core collection
	printf("Intentionally performing an illegal operation and segfaulting.\n");
	str = "X";
	*(str+1) = "x";
}
