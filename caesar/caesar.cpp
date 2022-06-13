#include <stdio.h>
#include <string.h>

char odhackuj(char znak) {

	char mhacky[] = "áčďéěňóřšťůúýíž";
	char mnohac[] = "acdeenorstuuyiz";
	char vhacky[] = "ÁČĎÉĚŇÓŘŠŤŮÚÝÍŽ";
	char vnohac[] = "ACDEENORSRUUYIZ";
	for (int i = 0; i<strlen(mhacky); i++) {
		if (znak == mhacky[i]) znak = mnohac[i];
		if (znak == vhacky[i])  znak = vnohac[i];
	}
	return znak;
}
int main(void) {
	
	char vstup[] = "uwtrs úwťřš"; //caesarova šifra 
	int posun = 3;

	printf("puvodni zprava: %s\n", vstup);

	for (int i = 0; vstup[i] != '\0'; i++) {
		vstup[i] = odhackuj(vstup[i]);
		if (vstup[i] >= 'a' && vstup[i] <= 'w' || vstup[i] >= 'A' && vstup[i] <= 'W') {
			vstup[i] += posun;
		}
		else if (vstup[i] >= 'x' && vstup[i] <= 'z' || vstup[i] >= 'z' && vstup[i] <= 'Z') {
			vstup[i] += posun - 26;
		}
	}
	printf("zakodovana zprava: %s\n", vstup);
}