/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   adivinador.h
 * Author: ariel
 *
 * Created on May 29, 2017, 8:34 PM
 */

#ifndef ADIVINADOR_H
#define ADIVINADOR_H

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"const.h"

int crear_numero(void);
//crea un numero aleatorio entre 0 y MAX_NUM+1

int convertir_a_int(char caracter);
//funcion que recibe un char y lo transforma a un entero

int comparar_numeros(int num_maquina, int num_elegido);
//funcion que devuelve si el jugador adivino el numero o no

double cantar_tiempo(time_t comienzo );
//recibe el tiempo en el que se inicio el cronometro para el reloj y devuelve 
//los segundos que pasaron entre el comienzo del cronometro y la llamada a esta
//funcion.


#endif /* ADIVINADOR_H */

