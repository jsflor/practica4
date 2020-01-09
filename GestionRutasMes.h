#pragma once

const int MAX_Rutas = 10;
const int MAX_Tramos = 5;
const int MAX_Fechas = 10;

typedef enum Pueblos {
    Alpedrete,  Escorial, Galapagar, Hoyo, Majadahonda,
    Moralzarzal, Navacerrada, Rozas, Torrelodones, Villalba
};

typedef struct TipoTramo{
    Pueblos origen;
    Pueblos destino;
    int duracion;
    int precio;
};

typedef struct TipoFecha{
    int dia;
    int mes;
    int anno;
    int horaSalidaOrigen;
};

typedef TipoTramo TipoTramos[MAX_Tramos];
typedef TipoFecha TipoFechas[MAX_Fechas];

typedef struct TipoRuta{
    Pueblos origenRuta;
    Pueblos destinoRuta;
    TipoTramos tramos;
    TipoFechas fechas;
    int numeroTramos;
    int numeroFechas;
};

typedef TipoRuta TipoRutas[MAX_Rutas];

typedef struct GestionRutasMes{
    TipoRutas rutas;                            /* rutas[0] = rutaA, rutas[1] = rutaB...*/
    int numeroRutas;

    void init();

    private:
        void EditarRuta();
        void ProgramarCalendarioRuta();
        void ListarDiasRutaCalendario();
        void CalendarioMensualTrayecto();
        void InformacionViaje();

        void ImprimirPueblo(Pueblos pueblo);
        int IndiceRuta(char ruta);
};