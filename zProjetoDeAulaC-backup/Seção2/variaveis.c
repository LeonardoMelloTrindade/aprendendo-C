#include <stdio.h>

int main() {
    int age;
    printf("Qual a sua idade? o nome eu já sei.\n");
    // &d indica ao scanf que a variável que vai ser digitada é do tipo int
    // cada letra é um tipo de variável
    fflush(stdout);
    scanf("%d", &age);
    printf("A sua idade é %d.", age);
    return 0;
}
