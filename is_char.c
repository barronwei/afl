#include "stdlib.h"
#include "stdio.h"
#include "ctype.h"

#define QUIT(s) { perror(s); exit(-1); } 
#define sz 256

int main(int argc, char** argv) {
	if (argc >= 2) {
		FILE* f = fopen(argv[1], "r");
		if (!f) QUIT("invalid file");
		char s[sz];
		if (!fgets(s, sz, f)) QUIT("invalid file");
		
		if (isalpha(s[0])) printf("alpha: %s\n", s);
		else if (isdigit(s[0])) printf("digit: %s\n", s);
		else printf("other: %s\n", s);
	}

	return 0;
}
