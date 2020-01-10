#include <stdio.h>
#include "GestionRutasMes.h"
#include "CalendarioMes.h"

void GestionRutasMes::ImprimirPueblo(Pueblos pueblo){
    switch(pueblo){
        case Alpedrete:
            printf("Alpedrete");
            break;
        case Escorial:
            printf("Escorial");
            break;
        case Galapagar:
            printf("Galapagar");
            break;
        case Hoyo:
            printf("Hoyo");
            break;
        case Majadahonda:
            printf("Majadahonda");
            break;
        case Moralzarzal:
            printf("Moralzarzal");
            break;
        case Navacerrada:
            printf("Navacerrada");
            break;
        case Rozas:
            printf("Rozas");
            break;
        case Torrelodones:
            printf("Torrelodones");
            break;
        case Villalba:
            printf("Villalba");
            break;
    };
}

int GestionRutasMes::IndiceRuta(char ruta){
    switch(ruta){
        case 'A':
            return 0;
            break;
        case 'B':
            return 1;
            break;
        case 'C':
            return 2;
            break;
        case 'D':
            return 3;
            break;
        case 'E':
            return 4;
            break;
        case 'F':
            return 5;
            break;
        case 'G':
            return 6;
            break;
        case 'H':
            return 7;
            break;
        case 'I':
            return 8;
            break;
        case 'J':
            return 9;
            break;
    };
}

void GestionRutasMes::init(){
    char tecla;

    numeroRutas = 0;
    tecla = ' ';

    /* Ayuda para correcion */
        /* Ruta J */
            rutas[MAX_Rutas-1].origenRuta = Pueblos(0); /* Alpedrete */
            rutas[MAX_Rutas-1].destinoRuta = Pueblos(2); /* Galapagar */
            /* Fechas y tramos */
            rutas[MAX_Rutas-1].numeroTramos = 2;
            rutas[MAX_Rutas-1].numeroFechas = 2;
            /* Tramos */
            rutas[MAX_Rutas-1].tramos[0].origen = Pueblos(0); /* Alpedrete */
            rutas[MAX_Rutas-1].tramos[0].destino = Pueblos(1); /* Escorial */
            rutas[MAX_Rutas-1].tramos[0].duracion = 20; /* Minutos */
            rutas[MAX_Rutas-1].tramos[0].precio = 5; /* Euros */

            rutas[MAX_Rutas-1].tramos[1].origen = Pueblos(1); /* Escorial */
            rutas[MAX_Rutas-1].tramos[1].destino = Pueblos(2); /* Galapagar */
            rutas[MAX_Rutas-1].tramos[1].duracion = 15; /* Minutos */
            rutas[MAX_Rutas-1].tramos[1].precio = 4; /* Euros */
            /* Fechas */
            rutas[MAX_Rutas-1].fechas[0].dia = 15;
            rutas[MAX_Rutas-1].fechas[0].mes = 2;
            rutas[MAX_Rutas-1].fechas[0].anno = 2020;
            rutas[MAX_Rutas-1].fechas[0].horaSalidaOrigen = 5;
            
            rutas[MAX_Rutas-1].fechas[1].dia = 25;
            rutas[MAX_Rutas-1].fechas[1].mes = 2;
            rutas[MAX_Rutas-1].fechas[1].anno = 2020;
            rutas[MAX_Rutas-1].fechas[1].horaSalidaOrigen = 5;

            /* Incrementar contador */
            numeroRutas = numeroRutas + 1;
        /* Ruta I */
            rutas[MAX_Rutas-2].origenRuta = Pueblos(0); /* Alpedrete */
            rutas[MAX_Rutas-2].destinoRuta = Pueblos(2); /* Galapagar */
            /* Fechas y tramos */
            rutas[MAX_Rutas-2].numeroTramos = 2;
            rutas[MAX_Rutas-2].numeroFechas = 2;
            /* Tramos */
            rutas[MAX_Rutas-2].tramos[0].origen = Pueblos(0); /* Alpedrete */
            rutas[MAX_Rutas-2].tramos[0].destino = Pueblos(9); /* Villalba */
            rutas[MAX_Rutas-2].tramos[0].duracion = 5; /* Minutos */
            rutas[MAX_Rutas-2].tramos[0].precio = 2; /* Euros */

            rutas[MAX_Rutas-2].tramos[1].origen = Pueblos(9); /* Villalba */
            rutas[MAX_Rutas-2].tramos[1].destino = Pueblos(2); /* Galapagar */
            rutas[MAX_Rutas-2].tramos[1].duracion = 10; /* Minutos */
            rutas[MAX_Rutas-2].tramos[1].precio = 3; /* Euros */
            /* Fechas */
            rutas[MAX_Rutas-2].fechas[0].dia = 5;
            rutas[MAX_Rutas-2].fechas[0].mes = 2;
            rutas[MAX_Rutas-2].fechas[0].anno = 2020;
            rutas[MAX_Rutas-2].fechas[0].horaSalidaOrigen = 5;
            
            rutas[MAX_Rutas-2].fechas[1].dia = 15;
            rutas[MAX_Rutas-2].fechas[1].mes = 2;
            rutas[MAX_Rutas-2].fechas[1].anno = 2020;
            rutas[MAX_Rutas-2].fechas[1].horaSalidaOrigen = 5;

            /* Incrementar contador */
            numeroRutas = numeroRutas + 1;
    /* Fin ayuda para correccion */
    
    /* Menu principal */
    do{
        printf("Gestion de Rutas\n\n");
        printf("    Editar Ruta                         (Pulsar E)\n");
        printf("    Programar calendario de ruta        (Pulsar P)\n");
        printf("    Listar datos de ruta y calendario   (Pulsar L)\n");
        printf("    Calendario mensual de trayecto      (Pulsar C)\n");
        printf("    Informacion de viaje                (Pulsar I)\n");
        printf("    Salir                               (Pulsar S)\n\n");
        printf("Teclear una opcion valida (E|P|L|C|I|S)? ");
    while(tecla != 'E' && tecla != 'P' && tecla != 'L' && tecla != 'C' && tecla != 'I' && tecla != 'S'){
        scanf(" %c", &tecla);
    };

    switch (tecla){
        case 'E':
            EditarRuta();
            tecla = ' ';
            break;
        case 'P':
            ProgramarCalendarioRuta();
            tecla = ' ';
            break;
        case 'L':
            ListarDiasRutaCalendario();
            tecla = ' ';
            break;
        case 'C':
            CalendarioMensualTrayecto();
            tecla = ' ';
            break;
        case 'I':
            InformacionViaje();
            tecla = ' ';
            break;
        case 'S':
            break;
    };

  } while (tecla != 'S');
    
}

void GestionRutasMes::EditarRuta(){
    char ruta;
    int posicionRuta;
    int posicionPuebloOrigen;
    int aux;
    Pueblos auxOrigen;
    Pueblos auxImpresion;

    ruta = ' ';

    printf("\nEditar ruta entre los pueblos:\n");
    printf("1: Alpedrete    2: Escorial     3: Galapagar\n");
    printf("4: Hoyo         5: Majadahonda  6: Moralzarzal\n");
    printf("7: Navacerrada  8: Rozas        9: Torrelodones\n");
    printf("10: Villalba\n\n");

    /* Pedir ruta para edicion */
        do {
            printf("Ruta a editar(entre A  y J)? ");
            scanf(" %c", &ruta);
        } while(ruta != 'A' && ruta != 'B' && ruta != 'C' && ruta != 'D' && ruta != 'E' && ruta != 'F' && ruta != 'G' && ruta != 'H' && ruta != 'I' && ruta != 'J');

    /* Indice de la ruta en el array */
        posicionRuta = IndiceRuta(ruta);

    /* Pedir pueblo de origen de la ruta */
        do{
            printf("Pueblo origen? ");
            scanf(" %d", &posicionPuebloOrigen);
        } while(posicionPuebloOrigen < 1 && posicionPuebloOrigen > 10);

    /* Posicion en el enum de Pueblos */
        posicionPuebloOrigen = posicionPuebloOrigen - 1;

    /* Asignar origen a la ruta */
        rutas[posicionRuta].origenRuta = Pueblos(posicionPuebloOrigen);

    /* Pedir numero tramos de la ruta */
        do{
            printf("Numero tramos? ");
            scanf(" %d", &rutas[posicionRuta].numeroTramos);
        } while(rutas[posicionRuta].numeroTramos < 1 && rutas[posicionRuta].numeroTramos >5);

    /* Pueblo, duracion y precio de los tramos */
        for(int i = 0; i < rutas[posicionRuta].numeroTramos; i++){
            if(i == 0){
                rutas[posicionRuta].tramos[i].origen = rutas[posicionRuta].origenRuta;
            } else {
                rutas[posicionRuta].tramos[i].origen = auxOrigen;
            }

            printf("\nPueblo Parada %d? ", i + 1);
            scanf(" %d", &aux);
            rutas[posicionRuta].tramos[i].destino = Pueblos(aux-1);
            auxOrigen = Pueblos(aux-1);

            printf("Duracion tramo %d en minutos? ", i + 1);
            scanf(" %d", &rutas[posicionRuta].tramos[i].duracion);

            printf("Precio tramo %d? ", i + 1);
            scanf(" %d", &rutas[posicionRuta].tramos[i].precio);

            if(i == rutas[posicionRuta].numeroTramos - 1){
                rutas[posicionRuta].destinoRuta = Pueblos(aux-1);
            }
        };

    /* Contador rutas creadas */
        numeroRutas = numeroRutas + 1;

    /* Impresion de ruta editada */
        printf("\n======== RUTA %c ========\n", ruta);
        /* origen */
        auxImpresion = rutas[posicionRuta].origenRuta;
        printf("Pueblo origen: ");
        ImprimirPueblo(auxImpresion);
        printf("\n");
        /* destino */
        auxImpresion = rutas[posicionRuta].destinoRuta;
        printf("Pueblo destino: ");
        ImprimirPueblo(auxImpresion);
        printf("\n");
        /* tramos */
        printf("Numero tramos %d\n", rutas[posicionRuta].numeroTramos);
        for(int i = 1; i <= rutas[posicionRuta].numeroTramos; i++){
            printf("\n==== Tramo %d ====\n", i);
            /* origen tramo */
            auxImpresion = rutas[posicionRuta].tramos[i-1].origen;
            printf("Pueblo origen: ");
            ImprimirPueblo(auxImpresion);
            printf("\n");
            /* destino tramo */
            auxImpresion = rutas[posicionRuta].tramos[i-1].destino;
            printf("Pueblo destino: ");
            ImprimirPueblo(auxImpresion);
            printf("\n");
            /* duracion tramo */
            printf("Duracion tramo %d en minutos: %d\n", i, rutas[posicionRuta].tramos[i-1].duracion);
            /* precio tramo */
            printf("Precio tramo %d en euros: %d\n\n", i, rutas[posicionRuta].tramos[i-1].precio);
        }

}

void GestionRutasMes::ProgramarCalendarioRuta(){
    char ruta;
    char continuar;
    int posicionRuta;
    int dia;
    int mes;
    int anno;
    int horaSalida;
    int auxFechas;

    ruta = ' ';
    /*Pedir ruta*/
        do {
            printf("\nRuta a programar(entre A  y J)? ");
            scanf(" %c", &ruta);
        } while(ruta != 'A' && ruta != 'B' && ruta != 'C' && ruta != 'D' && ruta != 'E' && ruta != 'F' && ruta != 'G' && ruta != 'H' && ruta != 'I' && ruta != 'J');
    /*Indice ruta*/
        posicionRuta = IndiceRuta(ruta);

    auxFechas = 0;
    continuar = ' ';
    /* Dia, Mes, Anno y Hora salida */
        do{
            
            try{
                /*dia*/
                    do{
                        printf("Dia? ");
                        scanf(" %d", &dia);
                    } while (dia < 1 || dia > 31);

                /*mes*/
                    do{
                        printf("Mes? ");
                        scanf(" %d", &mes);
                    } while (mes < 1 || mes > 12);
        
                /*anno*/
                    do{
                        printf("Anno? ");
                        scanf(" %d", &anno);
                    } while (anno < 2020 || anno > 3000);

                /* solo se programa cada ruta una vez en el mismo dia */
                    if(rutas[posicionRuta].numeroFechas > 0){
                        for(int i = 0; i < rutas[posicionRuta].numeroFechas; i++){
                            if(rutas[posicionRuta].fechas[i].dia == dia && rutas[posicionRuta].fechas[i].mes == mes && rutas[posicionRuta].fechas[i].anno == anno){
                                printf("\nAtencion! Cada ruta solo se puede programar una vez en el mismo dia\n");
                                throw dia;
                            };
                        };
                    };

                /*hora salida*/
                    do{
                        printf("Hora salida de origen? ");
                        scanf(" %d", &horaSalida);
                    } while (horaSalida < 1 || horaSalida > 24);

                rutas[posicionRuta].fechas[auxFechas].dia = dia;
                rutas[posicionRuta].fechas[auxFechas].mes = mes;
                rutas[posicionRuta].fechas[auxFechas].anno = anno;
                rutas[posicionRuta].fechas[auxFechas].horaSalidaOrigen = horaSalida;
                rutas[posicionRuta].numeroFechas = auxFechas + 1;

            } catch(int dia){
                printf("La ruta %c ya esta programada para la fecha %d-%d-%d\n", ruta, dia, mes, anno);
            };

            printf("Continuar programando (S/N)? ");
            scanf(" %c", &continuar);
            auxFechas = auxFechas + 1;
        } while (continuar == 'S');



    /*comprobacion*/
        printf("\nRuta %c", ruta);
        for(int i = 0; i < rutas[posicionRuta].numeroFechas; i++){
            printf("\n== Fecha %d ==\n", i + 1);
            printf("   Dia: %d\n", rutas[posicionRuta].fechas[i].dia);
            printf("   Mes: %d\n", rutas[posicionRuta].fechas[i].mes);
            printf("   Anno: %d\n", rutas[posicionRuta].fechas[i].anno);
            printf("   Hora salida origen: %d\n", rutas[posicionRuta].fechas[i].horaSalidaOrigen);
        };

}

void GestionRutasMes::ListarDiasRutaCalendario(){
    CalendarioMes calendario;
    char ruta;
    int posicionRuta;
    int mes;
    int anno;
    int auxImpresion;

    printf("Listar datos de ruta y calendario\n");

    ruta = ' ';
    /*Pedir ruta*/
        do {
            printf("Ruta a listar(entre A  y J)? ");
            scanf(" %c", &ruta);
        } while(ruta != 'A' && ruta != 'B' && ruta != 'C' && ruta != 'D' && ruta != 'E' && ruta != 'F' && ruta != 'G' && ruta != 'H' && ruta != 'I' && ruta != 'J');
    /*Indice ruta*/
        posicionRuta = IndiceRuta(ruta);

    /* Pedir mes */
        do{
            printf("Mes? ");
            scanf(" %d", &mes);
        } while (mes < 1 || mes > 12);
    /* Pedir anno */
        do{
            printf("Anno? ");
            scanf(" %d", &anno);
        } while (anno < 2020 || anno > 3000);

    /* Imprimir itinerario */
        if(rutas[posicionRuta].numeroTramos > 0){
            printf("La ruta %c realiza el itinerario:\n\n", ruta);
            for(int i = 0; i < rutas[posicionRuta].numeroTramos; i++){
                if(i == 0){
                    ImprimirPueblo(rutas[posicionRuta].origenRuta);
                    printf("\n");
                };
                ImprimirPueblo(rutas[posicionRuta].tramos[i].destino);
                printf("\n");
            };
        } else {
            printf("No hay itinerarios programados para la ruta elegida\n");
        };

    /* Imprimir fechas */
        if(rutas[posicionRuta].numeroFechas > 0){
            try{
                printf("\nEn las siguientes fechas y horas de ");
                calendario.ImprimirMes(mes);
                printf(" - %d\n", anno);
                auxImpresion = 0;
                for(int i = 0; i < rutas[posicionRuta].numeroFechas; i++){
                    if(rutas[posicionRuta].fechas[i].anno == anno && rutas[posicionRuta].fechas[i].mes == mes){
                        printf("%d ", rutas[posicionRuta].fechas[i].dia);
                        calendario.ImprimirMes(mes);
                        printf(". Salida de origen: %d h\n", rutas[posicionRuta].fechas[i].horaSalidaOrigen);
                        /* contador de impresion de fechas en el mes y anno seleccionado */
                        auxImpresion = auxImpresion + 1;
                    };
                };
                if(auxImpresion == 0){
                    throw auxImpresion;
                };
            }
            catch(int e){
                printf("No hay fechas programadas que coincidan con las elegidas\n");
            };
        } else {
            printf("No hay fechas programados para la ruta seleccionada\n");
        };

}

void GestionRutasMes::CalendarioMensualTrayecto(){
    CalendarioMes calendario;
    int origen;
    int destino;
    int mes;
    int anno;
    int auxDia;
    int auxOrigenDestino;
    int auxMesAnno;

    printf("\nCalendario mensual de trayecto entre los pueblos:\n");
    printf("1: Alpedrete    2: Escorial     3: Galapagar\n");
    printf("4: Hoyo         5: Majadahonda  6: Moralzarzal\n");
    printf("7: Navacerrada  8: Rozas        9: Torrelodones\n");
    printf("10: Villalba\n\n");

    /* Pedir origen */
        do{
            printf("Origen del trayecto? ");
            scanf(" %d", &origen);
        } while (origen < 1 || origen > 10);
    /* Pedir destino */
        do{
            printf("Destino del trayecto? ");
            scanf(" %d", &destino);
        } while (destino < 1 || destino > 10);
    /* Pedir mes */
        do{
            printf("Mes del trayecto? ");
            scanf(" %d", &mes);
        } while (mes < 1 || mes > 12);
    /* Pedir anno */
        do{
            printf("Anno? ");
            scanf(" %d", &anno);
        } while (anno < 2020 || anno > 3000);

    /* Inicializar vector diasRuta */
        for(int i = 0; i < MAX_DiasMes; i++){
            calendario.diasRuta[i] = 0;
        };
    /* Impresion calendario ruta */
        if(numeroRutas > 0){
            try{
                auxOrigenDestino = 0;
                auxMesAnno = 0;
                for(int i = 0; i < MAX_Rutas; i++){
                    if((rutas[i].origenRuta == Pueblos(origen-1)) && (rutas[i].destinoRuta == Pueblos(destino-1))){
                        if(rutas[i].numeroFechas > 0){
                            for(int j = 0; j < rutas[i].numeroFechas; j++){
                                if((rutas[i].fechas[j].mes == mes) && (rutas[i].fechas[j].anno == anno)){
                                    auxDia = rutas[i].fechas[j].dia;
                                    calendario.diasRuta[auxDia-1] = auxDia;
                                    auxMesAnno = auxMesAnno + 1;
                                };
                            };
                        };
                        auxOrigenDestino = auxOrigenDestino + 1;
                    };
                };

                if(auxOrigenDestino == 0){
                    throw 1; /* Tipo Excepcion 1: No hay rutas que tengan el destino y origen seleccionado */
                } else if(auxMesAnno == 0){
                    throw 2; /* Tipo Excepcion 2: Si hay rutas con el destino-origen seleccionado, pero no hay fechas programadas que coincidan */
                };

                // calendario.mes = mes;
                // calendario.anno = anno;
                calendario.ImprimirCalendario(mes, anno, calendario.diasRuta);
            } catch (int e){
                if(e == 1){
                    printf("\nNo hay rutas con el origen destino seleccionado\n");
                } else if (e == 2){
                    printf("\nNo hay fechas programadas que coincidan con las seleccionadas\n");
                };
            };
        } else {
            printf("No hay ninguna ruta");
        };
}

void GestionRutasMes::InformacionViaje(){
    CalendarioMes calendario;
    int origen;
    int destino;
    int mes;
    int anno;
    int dia;
    int precioTotal;
    int tiempoTotal;
    int auxOrigenDestino;
    int auxDiaMesAnno;

    printf("\nInformacion de viaje entre los pueblos::\n");
    printf("1: Alpedrete    2: Escorial     3: Galapagar\n");
    printf("4: Hoyo         5: Majadahonda  6: Moralzarzal\n");
    printf("7: Navacerrada  8: Rozas        9: Torrelodones\n");
    printf("10: Villalba\n\n");

    /* Pedir origen */
        do{
            printf("Origen del trayecto? ");
            scanf(" %d", &origen);
        } while (origen < 1 || origen > 10);
    /* Pedir destino */
        do{
            printf("Destino del trayecto? ");
            scanf(" %d", &destino);
        } while (destino < 1 || destino > 10);
    /* Pedir dia */
        do{
            printf("Dia del viaje? ");
            scanf(" %d", &dia);
        } while (dia < 1 || dia > 31);
    /* Pedir mes */
        do{
            printf("Mes del viaje? ");
            scanf(" %d", &mes);
        } while (mes < 1 || mes > 12);
    /* Pedir anno */
        do{
            printf("Anno del viaje? ");
            scanf(" %d", &anno);
        } while (anno < 2020 || anno > 3000);
    /* Imprimir informacion de viaje */
        printf("\n===Informacion de viaje:===\n");
        if(numeroRutas > 0){
            try{
                auxOrigenDestino = 0;
                auxDiaMesAnno = 0;
                for(int i = 0; i < MAX_Rutas; i++){
                    precioTotal = 0;
                    tiempoTotal = 0;
                    if((rutas[i].origenRuta == Pueblos(origen-1)) && (rutas[i].destinoRuta == Pueblos(destino-1))){
                        if(rutas[i].numeroFechas > 0){
                            for(int j = 0; j < rutas[i].numeroFechas; j++){
                                if((rutas[i].fechas[j].mes == mes) && (rutas[i].fechas[j].anno == anno) && (rutas[i].fechas[j].dia == dia)){
                                
                                    printf("\nFecha %d ", dia);
                                    calendario.ImprimirMes(mes);
                                    printf(" %d\n", anno);
                                    printf("Origen: ");
                                    ImprimirPueblo(rutas[i].origenRuta);
                                    printf("\n");
                                    printf("Salida: %d:00h\n", rutas[i].fechas[j].horaSalidaOrigen);
                                    printf("Destino: ");
                                    ImprimirPueblo(rutas[i].destinoRuta);
                                    printf("\n");
                                    printf("Llegada: ");
                                    for(int k = 0; k < rutas[i].numeroTramos; k++){
                                        tiempoTotal = tiempoTotal + rutas[i].tramos[k].duracion;
                                    };
                                    if(tiempoTotal < 60){
                                        printf("%d:%dh\n", rutas[i].fechas[j].horaSalidaOrigen, tiempoTotal);
                                    } else {
                                        if(tiempoTotal == 60){
                                            printf("%d:00h\n", rutas[i].fechas[j].horaSalidaOrigen + 1);
                                        } else {
                                            printf("%d:%dh\n", rutas[i].fechas[j].horaSalidaOrigen + int(tiempoTotal/60), tiempoTotal % 60);
                                        };
                                    };
                                    for(int k = 0; k < rutas[i].numeroTramos; k++){
                                        precioTotal = precioTotal + rutas[i].tramos[k].precio;
                                    };
                                    printf("Precio: %d euros\n", precioTotal);
                                    auxDiaMesAnno = auxDiaMesAnno + 1;
                                };
                            };
                        };
                        auxOrigenDestino = auxOrigenDestino + 1;
                    };
                };
                if(auxOrigenDestino == 0){
                    throw 1;
                } else if(auxDiaMesAnno == 0){
                    throw 2;
                };
            } catch (int e) {
                if(e == 1){
                    printf("\nNo hay rutas con el origen y destino seleccionados\n");
                } else if(e == 2){
                    printf("\nNo hay fechas programadas que coincidan con las seleccionadas\n");
                };
            };
        } else {
            printf("No hay ninguna ruta");
        };
}