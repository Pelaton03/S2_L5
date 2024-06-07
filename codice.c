#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();

int main () 
{
    char scelta = '\0';
    menu ();
    scanf(" %c", &scelta);  // Read a character, including leading whitespace

    switch (scelta)
    {
        case 'A':
            moltiplica();
            break;
        case 'B':
            dividi();
            break;
        case 'C':
            ins_string();
            break;
        default:
            printf("Scelta non valida.\n");
            break;
    }

    return 0;
}

void menu ()
{
    printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
    printf("Come posso aiutarti?\n");
    printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
}

void moltiplica ()
{
    float a = 0, b = 0;
    printf("Inserisci i due numeri da moltiplicare: ");
    scanf("%f", &a);
    scanf("%f", &b);

    float prodotto = a * b;

    printf("Il prodotto tra %.2f e %.2f e': %.2f\n", a, b, prodotto);
}

void dividi ()
{
    int a = 0, b = 0;
    printf("Inserisci il numeratore: ");
    scanf("%d", &a);
    printf("Inserisci il denominatore: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Errore: divisione per zero!\n");
    } else {
        float divisione = (float)a / b;
        printf("La divisione tra %d e %d e': %.2f\n", a, b, divisione);
    }
}

void ins_string () 
{
    char stringa[10];
    printf("Inserisci la stringa: ");
    scanf("%9s", stringa);  // Ensure no buffer overflow
    printf("Hai inserito: %s\n", stringa);
}
