#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quitarVocales(char cadena[]);

int main()
{
    char cadena[20] = "democracia";

    quitarVocales(cadena);

    printf("%s\n", cadena);

    return 0;
}


void quitarVocales(char cadena[])
{

    for(int i = 0; i < strlen(cadena); i++)
    {
        if(cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u')
        {
            cadena[i] = ' ';
        }
    }
}
