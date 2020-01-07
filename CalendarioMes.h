#pragma once
#include "GestionRutasMes.h"

const int MAX_DiasMes = 31;

// typedef enum TipoDia{
//   Lunes,Martes,Miercoles,Jueves,Viernes,Sabado,Domingo
// };

// typedef enum TipoMes{
//   Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre
// };

typedef int DiasRuta[MAX_DiasMes];

typedef struct CalendarioMes{
    //int mes, anno, bisiestos, incrementoDias, annos, dias;
    // TipoDia DiaSemana;
    // TipoMes MesAnno;
    DiasRuta diasRuta;

    // void LeerFecha();
    // void CalcularBisiestos();
    // void CalcularAnnos();
    // void CalcularDias();
    // void IncrementoDias();
    // void DiaDeLaSemana();
    void ImprimirCalendario(int Mes, int Anno, DiasRuta diasRuta);

    void ImprimirMes(int mes);
};