#ifndef TDA_H_INCLUDED
#define TDA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define errorFechaInvalida 0
#define todook 1

typedef struct
{
    int dia ;
    int mes;
    int anio;
} Fecha; // definimos una estructura


int fechaSet (Fecha*fecha,int dia, int mes, int anio);
void fechaImprimir(const Fecha* fecha);
bool esfechaValida (int dia, int mes, int anio);
int cantidadDiasMes(int mes, int anio);
bool esBisiesto(int anio);
int cantDiasAnio(int anio);


#endif // TDA_H_INCLUDED
