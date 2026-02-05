#include "TDA.h"

int main()
{
    printf("Hello world!\n");
    printf ("Hola rami\n");
    printf ("Hola ramon\n");
    printf ("Hola \n");

    Fecha f1;
    int resultado; // Intentamos setear una fecha válida
    resultado = fechaSet(&f1, 30, 2, 2026); // 5 de febrero de 2026  //// Intentamos setear una fecha inválida resultado = fechaSet(&f1, 31, 2, 2026);
    if (resultado == todook)
    {
        printf("Fecha cargada correctamente: ");
        fechaImprimir(&f1);
        printf("\n");
    }
    else
    {
        printf("Error: la fecha es inválida\n");
    }
    return 0;


}
