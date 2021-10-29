#include <stdio.h>

/* cpu-usr-waster
 *
 * intentionally made to waste user CPU cycles, useful for some testing.
 */

void main(int argc, char **argv) {
	unsigned long l, t;

	l = 0;

	while(1) {
		l++;
		// do one more value store to force a register operation
		// to waste even more cycles
		t = l;
	}
}
