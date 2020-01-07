#include <stdio.h>
#include "CalendarioMes.h"
#include "GestionRutasMes.h"

void CalendarioMes::ImprimirMes(int mes){
  switch(mes){
    case 1:
        printf("Enero");
        break;
    case 2:
        printf("Febero");
        break;
    case 3:
        printf("Marzo");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Mayo");
        break;
    case 6:
        printf("Junio");
        break;
    case 7:
        printf("Julio");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Septiembre");
        break;
    case 10:
        printf("Octubre");
        break;
    case 11:
        printf("Noviembre");
        break;
    case 12:
        printf("Diciembre");
        break;
  };
}

// void CalendarioMes::LeerFecha(){
//   printf("Mes (1..12)?");
//   scanf("%d",&mes);
//   printf("Ano (1601..3000)?");
//   scanf("%d",&anno);
// }

// void CalendarioMes::CalcularBisiestos(){
//   int aux;
//   aux = 0;
//   for (int i=1601;i<anno;i++){
//     if ((i%4==0)&&(i%100!=0)){
//       aux ++;
//     }else{
//       if (i%400==0){
//         aux++;
//       }
//     }
//   }
//   if ((anno%4==0)&&(anno%100!=0)){
//     if(mes>2){
//       aux++;
//     }
//   }else{
//     if ((anno%400==0)&&(mes>2)){
//       aux++;
//     }
//   }
//   bisiestos = aux;
// }

// void CalendarioMes::CalcularAnnos(){
//   annos = anno-1601;
// }

// void CalendarioMes::CalcularDias(){
//     switch(mes){
//     case 1:
//     case 10:
//       dias = 0;
//       return;
//       break;
//     case 2:
//     case 3:
//     case 11:
//       dias = 3;
//       return;
//       break;
//     case 4:
//     case 7:
//       dias = 6;
//       return;
//       break;
//     case 5:
//       dias = 1;
//       return;
//       break;
//     case 6:
//       dias = 4;
//       return;
//       break;
//     case 8:
//       dias = 2;
//       return;
//       break;
//     default:
//       dias = 5;
//       return;
//   }
// }

//  void CalendarioMes::IncrementoDias(){
//    incrementoDias = bisiestos+annos+dias;
//  }

// void CalendarioMes::DiaDeLaSemana(){
//     DiaSemana = TipoDia(incrementoDias%7);
// }

void CalendarioMes::ImprimirCalendario(int Mes, int Anno, DiasRuta diasRuta){
  int a,y,m,dia,numdias;
  int contador; /* indica el dia */

  if(Mes >= 1 && Mes <=12 && Anno >= 2020 && Anno<=3000){
    a = (14-Mes)/12;
    y = Anno - a;
    m = Mes + 12 * a -2;
    dia = (1 + y + y/4 - y/100 + y/400 + (31*m)/12) % 7;

    numdias=28;
    if(Mes==1 || Mes==3 || Mes==5 || Mes==7 || Mes==8 || Mes==10 || Mes==12){
        numdias = numdias + 3;
    } else if(Mes==2){
        if((Anno%4==0)&&(Anno%100!=0 || Anno%400==0)){
          numdias = numdias+1;
        };
    } else {
      numdias = numdias+2;
    };

    /* Imprimir mes */
      printf("\n");
      ImprimirMes(Mes);
      printf("     ");

    /* Imprimir cabecera del calendario */
      printf("%17d\n",Anno);
      printf("===========================\n");
      printf("LU  MA  MI  JU  VI | SA  DO\n");
      printf("===========================\n");

      /* Imprimir dias */
      contador = dia;

    /* Imprimir espacios y puntos del principio */
      if(dia==0){
        printf(" .   .   .   .   . |  .");
      }else{
        for(int i=1;i<dia ;i++){
          if(i == 1){
            printf(" .");
          }else if(i == 6){
            printf(" |  .");
          }else{
            printf("   .");
          }
        };
      };

    /* Imprimir numeros del calendario */
      for(int i=1;i<=numdias;i++){
        if(contador==6){
    
          if(i == diasRuta[i-1]){
            printf(" |%3d",i);
            contador=0;
            } else {
            printf(" | --");
            contador=0;
          };
          
        } else if (contador==1){
          
          if(i == diasRuta[i-1]){
            printf("%2d",i);
            contador++;
          } else {
            printf("--");
            contador++;
          };
          
        } else if(contador==0){
          
          if(i == diasRuta[i-1]){
            printf("%4d\n",i);
            contador++;
          } else {
            printf("  --\n");
            contador++;
          };
          
        } else {
          
          if(i == diasRuta[i-1]){
            printf("%4d",i);
            contador++;
          } else {
            printf("  --");
            contador++;
          };
          
        };
      };

      /* Imprimir puntos del final del calendario */
        if(contador!=1){
          if(contador!=0){
            for(int i=contador;i<8;i++){
              if(i == 6){
                  printf(" |  .");
                }else{
                  printf("   .");
                }
            };
          } else {
            printf("   .");
          };
        };

      printf("\n\n");
  };
}