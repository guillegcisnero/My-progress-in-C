#include <stdio.h>
// Reto 7 (El Lector Automático):
// Imagina tener un Array con 10 números.
// Escribir 10 printf manuales sería aburrido.
// Sabiendo que los índices de un Array de tamaño 10 van del 0 al 9... ¿Cómo usarías un bucle for (que actúe como contador automático) para imprimir todos los elementos de un Array usando solo un par de líneas de código?


int main() {
    int calificaciones[10] = { 85, 92, 78, 100, 88, 90, 95, 80, 70, 60 };
    for (int i=0; i <10; i++) {
        printf("La nota del estudiante %d es: %d\n", i+1, calificaciones[i]);
    } 
    return 0;
}
