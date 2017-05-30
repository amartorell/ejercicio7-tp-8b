#include"adivinador.h"


int convertir_a_int(char caracter)
{
    return (caracter-'0');
 
}

int crear_numero(void)
{
    int num;
    srand(time(NULL));
    num=rand() % 10;     //indica que el numero podra ser de entre 0 y 9
    return num;
}
 

int comparar_numeros(int num_maquina, int num_elegido)
{
    int comparar;
    if(num_maquina != num_elegido)
    {
        comparar=DISTINTOS;
    }
    else
    {
        comparar=IGUALES;
    }
    return comparar;
}

 double cantar_tiempo(time_t comienzo )
 {
    time_t final_t;
    double diferencia_t;
    time(&final_t);
    diferencia_t=difftime(final_t,comienzo );
   return diferencia_t;      
 }