/*
Programa de leitura e gravação dos dados de meteorologia
(c)2020, Saulo Titonel
*/

/* Inclui o cabeçalho padrão de entrada/saída */
#include <stdio.h>
/* Inclui o cabeçalho para suporte de C e C++ para o chip Broadcom BCM 2835 usado no Raspberry Pi */
#include <bcm2835.h>
/* Inclui a biblioteca GPIO
http://www.abyz.me.uk/rpi/pigpio/cif.html */
//include <pigpio.h>

/* Inicializa o GPIO */
if (gpioInitialise() < 0)
{
   // pigpio init falhou
}
else
{
   // pigpio init ok

   gpioSetMode(4, PI_INPUT); // Define o GPIO como PIN de entrada

}
