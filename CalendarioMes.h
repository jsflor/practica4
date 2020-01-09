#pragma once
#include "GestionRutasMes.h"

const int MAX_DiasMes = 31;

typedef int DiasRuta[MAX_DiasMes];

typedef struct CalendarioMes{
    DiasRuta diasRuta;

    void ImprimirCalendario(int Mes, int Anno, DiasRuta diasRuta);

    void ImprimirMes(int mes);
};