#include <stdio.h>

int main () { 
    // 1. Inicializamos el saldo inicial y la variable para guardar el retiro
    int saldo = 1000;
    int extraccion = 0;
    // 2. El bucle mantendrá el cajero activo mientras haya dinero
    while (saldo > 0) 
    {        
        printf ("Cuanto dinero desea retirar?: ");
        scanf ("%d", &extraccion);       
        // 3. Barrera de seguridad: bloquea números negativos
        if (extraccion <= 0) 
        {
            printf ("Monto invalido\n");
        }
        // 4. Evaluamos si el cajero puede entregar el dinero solicitado
        else if ( extraccion <= saldo) 
        {            
            // Operación exitosa: descontamos el dinero del saldo
            saldo -= extraccion;
            printf ("Su saldo actual es: %d\n", saldo);                        
        }  
        else 
        {
            // Operación rechazada: evitamos el sobregiro
            printf ("Fondos insuficientes\n");
        }        
    }
    // 5. Mensajes de despedida que solo aparecen cuando el saldo llega a 0
    printf ("Te has quedado sin fondos\n");
    printf ("Gracias por usar cajeros Gombank");
    return 0; 
}