


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"nonblock.h"
#include"const.h"
#include"output.h"
#include"input.h"
#include"adivinador.h"

void main ()
{

    int valido=VALIDO;
    char tecla; 
    int num_maquina;   //numero creado por la maquina
    int num_elegido;  //numero elegido por el usuario
    int comparador;
    int cronometro;
    time_t comienzo_t;
    double tiempo_pasado;
        
        
    imprimir_reglas();
    while(tecla != CONTINUAR) 
        {
            imprimir_error_de_arranque();
            tecla=get_input();
        }
        
        num_maquina=crear_numero();// genero el numero aleatorio entre 0 y9
        
        time(&comienzo_t);//inicio el cronometro 
        cronometro=A_TIEMPO;
        imprimir_comenzar_cronometro();
        
    while(valido && cronometro )
        {
            tecla=get_input();
            valido=validacion_input(tecla);
            while(!valido)
            {
                imprimir_tecla_equivocada();
                tecla=get_input();
                valido=validacion_input(tecla);
                tiempo_pasado=cantar_tiempo(comienzo_t);
                if (tiempo_pasado == MAX_TIEMPO)
                {
                    tiempo_expirado();
                    cronometro=EXPIRADO;
                }
                else
                {
                
                    imprimir_tiempo_restante(tiempo_pasado);
                                
                }
                
                
       
            }
            num_elegido=convertir_a_int(tecla);
            
            comparador=comparar_numeros(num_maquina, num_elegido);
            
            if( comparador == IGUALES)
            {
              ganador();
              valido=INVALIDO;
                  
            }
            else if (comparador == DISTINTOS)
            {
                tiempo_pasado=cantar_tiempo(comienzo_t);
                if (tiempo_pasado == MAX_TIEMPO)
                {
                    tiempo_expirado();
                    cronometro=EXPIRADO;
                }
                else
                {
                    imprimir_numero_equivocado();
                    imprimir_tiempo_restante(tiempo_pasado);
                                
                }
                
                        
            }
            
        }
}    

    
  
        
	
    





  







