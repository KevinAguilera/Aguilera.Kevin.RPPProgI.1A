#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenarCaracteres(char cadena[]);

int main()
{
    char cadena[20] = "algoritmo";

    ordenarCaracteres(cadena);

    printf("%s\n", cadena);

    return 0;
}

void ordenarCaracteres(char cadena[])
{
    char auxiliar;

    for(int i = 0; i < strlen(cadena) - 1; i++)
    {

        for(int j = i + 1; j < strlen(cadena); j++)
        {
            if(cadena[i] > cadena[j]) //Ordenamiento ascendente
            {
                auxiliar = cadena[j];
                cadena[j] = cadena[i];
                cadena[i] = auxiliar;
            }
        }
    }
}
