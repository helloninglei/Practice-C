#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	while (i < argc) {
		printf("arg %d:%s\n", i, argv[i]);
		i ++;
	}

	char *states[] = {
		"Canifoni", "Oregon",
		"Washington", "Texas"
	};
        
	i = 0;
	int num_states = 4;
	while (i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}

	return 0;
}
