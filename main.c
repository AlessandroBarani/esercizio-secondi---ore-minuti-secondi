
#include <stdio.h>
int main() {
    int secondi, ore, minuti, restosecondi;

    printf("Numero di secondi: ");
    scanf("%d", &secondi);

    ore= secondi / 3600;
    minuti= (secondi %3600) / 60;
    restosecondi= secondi %60;

    printf("%d secondi inseriti sono equivalenti a: %d ore, %d minuti, %d secondi\n", secondi, ore, minuti, restosecondi);

    return 0;
}