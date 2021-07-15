#include <stdio.h>


int main(int argc, char *argv[]) {

	int i = 0;

	if (argc == 1) {
		printf("You only have one argument: %s\n", argv[0]);
	} else if(argc > 1 && argc < 4) {
		printf("Here's your agmument:\n");
		for (i = 0; i < argc; i++) {
			printf("arg %d: %s\n", i, argv[i]);
		}
	} else {
		printf("You have too many arguments. You suck.\n");
	}

	return 0;
}

