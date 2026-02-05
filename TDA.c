#include "TDA.h"



int fechaSet (Fecha*fecha,int dia, int mes, int anio)
{
    if (!esfechaValida(dia, mes, anio))  // funcion de validacion de feca
    {
        return errorFechaInvalida;
    }
    fecha->dia = dia;
    fecha->mes = mes;
    fecha->anio = anio;

    return todook;
}

void fechaImprimir(const Fecha* fecha)
{
    printf("%02d/%02d/%04d", fecha->dia, fecha->mes, fecha->anio);
}


bool esfechaValida (int dia, int mes, int anio)
{

    if (anio < 1601) return false;
    if (mes < 1 || mes > 12) return false;
    if (dia < 1 || dia > cantidadDiasMes (mes,anio)) return false;
    return true;
}


int cantidadDiasMes(int mes, int anio)
{
    int diasMes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && esBisiesto(anio)) return 29;

    return diasMes[mes];
}


int cantDiasAnio(int anio)
{
    return esBisiesto(anio) ? 366 : 365;
}

bool esBisiesto(int anio)
{
    return anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0);
}



