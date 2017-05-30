#include"output.h"

void imprimir_reglas(void)
{
    printf("Bienvenido a Adivine el numero \n");
    printf("Reglas:\n");
    printf("El participante debera vestirse de genio y adivinar un numero\n");
    printf("del 0 al 9  en 60 segundo que ha pensado esta maquina. \n");
    printf("Para esto esl participante debera ingresar por teclado \n");
    printf("el numero que cree que es el correcto \n");
    printf("Presione la tecla c para comenzar\n");
}

void imprimir_tecla_equivocada(void)
{
    printf("\nLa tecla presionada no es valida \n");
    printf("Por favor presione una tecla correspondiente a un numero \n");
    
}

void imprimir_error_de_arranque(void)
{
    printf("\ntecla equivocada por favor presione la tecla c\n");
}

void ganador(void)
{
    printf("\nfelicidades a advinidado el numero \n");
    printf("¡¡¡¡¡¡¡¡¡¡¡HA GANADO!!!!!!!!!!!!!!!!!\n");
    
}

void tiempo_expirado(void)
{
    printf("\nse a acabado el tiempo \n");
    printf("\nFIN DEL JUEGO");
}


void imprimir_tiempo_restante(double tiempo)
{
    printf("\nle quedan %f segundos\n", (MAX_TIEMPO-tiempo) );
}

void imprimir_numero_equivocado(void)
{
    printf("\nnumero equivocado vuelva a elegir\n");
}
void imprimir_comenzar_cronometro(void)
{
    printf("\nsu tiempo empieza ya!! \n");
    printf("elija un numero del 0 al 9");
}