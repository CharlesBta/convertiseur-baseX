#include <stdio.h>

void convertirHexaRecurcive(int nombre) {
    if (nombre != 0) {
        convertirHexaRecurcive(nombre / 16);
        int temporaire = nombre % 16;
        if (temporaire < 10) {
            printf("%d", temporaire);
        } else {
            printf("%c", 'A' + temporaire - 10);
        }
    }
}
void convertirBase2Recusive(int nombre){
    if (nombre == 0) {
        return;
    }
    convertirBase2Recusive(nombre / 2);
    printf("%d", nombre % 2);
}

int main() {
    int moyenne = 0;
    int nombre_note = 0;
    int note;
    printf("Entrer une note (/20) taper: -1 pour arreter\n");
    scanf("%d",&note);
    if (note != -1){
        while (note != -1){
            moyenne+=note;
            nombre_note+=1;
            printf("Entrer une note (/20) taper: -1 pour arreter\n");
            scanf("%d",&note);
        }
    }
    moyenne /= nombre_note;
    printf("Moyenne (arrondi à l'inférieur) en base 10: %d, ",moyenne);
    printf("en base 2: ");
    convertirBase2Recusive(moyenne);
    printf("%c",32);
    printf("en base 16: ");
    convertirHexaRecurcive(moyenne);
    return 0;
}

