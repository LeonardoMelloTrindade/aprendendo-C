#include <stdio.h>

int main() {

	char letras[26];
	int contador = 0;

	for(int index = 97; index <= 122; index++) {
		letras[contador] = index;
		contador++;
	}

	for(int index = 0; index < 26; index++) {
		printf("%d == %c\n", letras[index], letras[index]);
	}

	return 0;
}
