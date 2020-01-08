# Fundamentos Programación UNED

## Enunciado Cuarta Práctica Fundamentos de Programación

Realizar un programa en C+/- para gestionar las rutas mensuales de una compañía
de autobuses. Las distintas rutas se realizarán entre una lista de pueblos que, para
simplificar el programa, será un tipo enumerado con los nombres de cada pueblo
ordenados alfabéticamente. Por ejemplo:

*typedef enum Pueblos { Buitrago, Cabrera, Lozoya, Lozoyuela,
Pedraza, Rascafria, Riaza, Robregordo, Sepulveda, Torrelaguna,
Venturada }*

El tipo enumerado deberá tener al menos 10 pueblos y sus nombres deberán ser
elegidos por cada alumno para realizar su práctica. Cada ruta tendrá un pueblo
origen y un máximo de 5 paradas incluyendo el pueblo destino final. La información
de cada ruta será el pueblo origen y entre 1 y 5 tramos, según el número de paradas
intermedias.

La información de cada tramo será: el pueblo de parada, la duración del tramo y el
precio del tramo. Los tramos intermedios serán consecutivos y tendrán como origen
la anterior parada o el origen de la ruta. El pueblo del último tramo será el destino
final de la ruta.

Se podrán gestionar un máximo de 10 rutas (identificadas como rutaA, rutaB,…,
rutaJ). Cada ruta sólo se podrá programar una vez en el mismo día.

Las operaciones del programa serán las siguientes:
1. Editar ruta
2. Programar calendario de ruta
3. Listar datos de ruta y calendario
4. Calendario mensual de trayecto
5. Información de viaje

La práctica consiste en realizar el TAD “GestionRutasMes”, el programa principal y
las correspondientes funciones, procedimientos y TADs que el alumno crea
conveniente. En la realización de esta práctica se debe reutilizar en la medida de lo
posible el código fuente ya realizado para la tercera práctica, que se redefinirá como
un TAD “CalendarioMes”.
