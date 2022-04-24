#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	FILE *fp;
	char str[1024];
	
	for (int i = 1; i < argc; i++) {
		fp = fopen(argv[i], "r");
		if (fp == NULL) {
			printf("wcat: cannot open file\n");
			exit(1);
		}
		while (fgets(str, sizeof(str), fp) != NULL) {
			printf("%s", str);
		}
		if (fclose(fp) != 0) {
			exit(1);
		}
	}
	return 0;
}
