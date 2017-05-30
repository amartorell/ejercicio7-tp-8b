
#ifndef OUTPUT_H
#define OUTPUT_H

#include<stdio.h>
#include"const.h"


void imprimir_reglas(void);
//imprime como jugar y las reglas del juego


void imprimir_tecla_equivocada(void);
//avisa al usuario que la tecla que oprimio no es un numero


void imprimir_error_de_arranque(void);
//imprime un error al no apretar enter para arrancar el juego

void ganador(void);
//mensaje final una vez adivinado el numero


void tiempo_expirado(void);
//imprime un mensaje que se termino el juego debido a que se acabo el tiempo



void imprimir_tiempo_restante(double);
//imprime el timepo que queda para poder adivinar el numero


void imprimir_numero_equivocado(void);
//imprime un mensaje si se ha seleccionado el numero incorrecto

void imprimir_comenzar_cronometro(void);
//imprime la orden al jugador de empezar a adivinar el numero

#endif /* OUTPUT_H */

