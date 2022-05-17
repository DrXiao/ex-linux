#include <stdio.h>
#include "foo.h"

int main(void) {

#if DEBUG
	fprintf(stderr, "DEBUG mode on...\n");
#endif

	printf("foo is %d\n", foo());

	return 0;
}
