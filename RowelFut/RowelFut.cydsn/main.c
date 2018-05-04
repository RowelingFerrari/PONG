
#include "project.h"
#include "stdio.h"
#include <stdlib.h>
#include <math.h>
// VARIABLES DE TECLADO
uint16 P_teclado;
uint16 P_teclado1;
uint16 P_teclado2;
uint16 a;
uint16 e;
/* Variables del control de direccion
viendo los cables soldados al motor, la tierra es cable blanco con naranja
fasea cable cafe con blanco
faseb cable azul con blanco
fasec cable naranja con blanco
*/
uint32 contador=0; // este tio mide la velocidad contando numero de ciclos dentro de un while 
int32 velocidad=0; // convierte del contador a velocidad            
//funciones de direccion
uint16 M1;
uint16 M2;
uint16 Periodo;
uint16 tiempoReposoMotores;
uint16 p;
_Bool iniciarPWM;// 0->no || 1->si
uint8 testigoPWM;// 0->no || 1->si
_Bool sentidoGiro;
_Bool jugador;
int faseMotor1;
int faseMotor2;

  /*INTERRUPCION PARA LOS CONTROLES*/
CY_ISR(detectarfase1){
    iniciarPWM=1;
    testigoPWM = 0 ;
    jugador = 0;
    int fase=detectorFaseM1_Read();
    //fase=fase && 0b001;
    contador=0;
    velocidad=0;
    if (fase==0b001 || fase==0b110)
    {
        while(fase==0b001 || fase==0b110){
            fase=detectorFaseM1_Read();
            contador++;
        }
        if(fase==0b101 || fase==0b010)
        {
            if(sentidodegiroM1_Read() == 0b10){
                sentidodegiroM1_Write(0b10);
                CyPins_SetPin(M1_1);
            }
        }
        else{
            if(fase==0b011 || fase==0b100 )
            {
                if(sentidodegiroM1_Read() == 0b01){
                    sentidodegiroM1_Write(0b01);
                    CyPins_ClearPin(M1_1);
                }
            }    
        }
        velocidad=(-17*contador+1070000)/10000;
    }
    PWM1_Wakeup();
    PWM1_WritePeriod(p);
    PWM1_WriteCompare(p/2);
    LED_Write(1);
    CyDelay(20);
    sentidodegiroM1_Write(0b00);
detectorFaseM1_ClearInterrupt();
}
CY_ISR(detectarfase2){
    iniciarPWM=1;
    testigoPWM = 0 ;
    jugador = 1;
    int fase=detectorFaseM2_Read();
    //fase=fase && 0b001;
    contador=0;
    velocidad=0;
    if (fase==0b001 || fase==0b110)
    {
        while(fase==0b001 || fase==0b110){
            fase=detectorFaseM2_Read();
            contador++;
        }
        if(fase==0b101 || fase==0b010)
        {
            if(sentidodegiroM2_Read() == 0b10){
                sentidodegiroM2_Write(0b10);
                CyPins_SetPin(M2_1);
            }
        }
        else{
            if(fase==0b011 || fase==0b100 )
            {
                if(sentidodegiroM2_Read() == 0b01){
                    sentidodegiroM2_Write(0b01);
                    CyPins_ClearPin(M2_1);
                }
            }    
        }
        velocidad=(-17*contador+1070000)/10000;
    }
    PWM2_Wakeup();
    PWM2_WritePeriod(p);
    PWM2_WriteCompare(p/2);
    LED_Write(1);
    CyDelay(20);
detectorFaseM2_ClearInterrupt();
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    faseM1_StartEx(detectarfase1);
    faseM2_StartEx(detectarfase2);
    PWM1_Start();
    PWM2_Start();

    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    Periodo = (2*16000/tiempoReposoMotores);
    Motor1_Write(0);
    Motor2_Write(0);
    a = Periodo;
    p = 10000;
    iniciarPWM = 0;;// 0->no || 1->si
    sentidoGiro = 0;
    jugador = 0;
    faseMotor1 = 0;
    faseMotor2 = 0;
    testigoPWM = 25;
    PWM1_Sleep();
    PWM2_Sleep();
    for(;;)
    {
        if(iniciarPWM == 1){
            
            if(testigoPWM == 25){
                PWM1_Sleep();
                PWM2_Sleep();
                iniciarPWM=0;
            }  
            testigoPWM ++;
            CyDelay(10);
        }
        
        
        
    }
}

/* [] END OF FILE */
