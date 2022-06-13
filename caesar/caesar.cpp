#include <stdio.h>

int main(void) {

	char vstup[] = "peta je blbecek"; //caesarova šifra
	int posun = 3;

	printf("puvodni zprava: %s\n", vstup);

	for (int i = 0; vstup[i] != '\0'; i++) {
		if (vstup[i] >= 'a' && vstup[i] <= 'w' || vstup[i] >= 'A' && vstup[i] <= 'W') {
			vstup[i] += posun;
		}
		else if (vstup[i] >= 'x' && vstup[i] <= 'z' || vstup[i] >= 'z' && vstup[i] <= 'Z') {
			vstup[i] += posun - 26;
		}
	}
	printf("zakodovana zprava: %s\n", vstup);
}