#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;

} ePais;

void actualizarMuertos(ePais* pais, int muertosDia);

int main()
{
    ePais pais;
    int muertosDia = 5000;
    pais.muertos = 80000;

    actualizarMuertos(&pais, muertosDia);

    printf("Muertes actuales: %d\n", pais.muertos);

    return 0;
}

void actualizarMuertos(ePais* pais, int muertosDia)
{
    pais->muertos = muertosDia + pais->muertos;
}
