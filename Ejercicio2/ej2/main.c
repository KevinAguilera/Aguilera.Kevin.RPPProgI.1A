#include <stdio.h>
#include <stdlib.h>

void quitarVocales(char palabra[]);

int main()
{
    char palabra[20] = "democracia";

    quitarVocales(palabra);

    printf("%s\n", palabra);

    return 0;
}


void quitarVocales(char palabra[])
{

    for(int i = 0; i < strlen(palabra); i++)
    {
        if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u')
        {
            palabra[i] = ' ';
        }
    }
}
