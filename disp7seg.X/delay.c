/*
 * File:   delay.c
 * Author: 20185074
 *
 * Created on 24 de Fevereiro de 2021, 16:35
 */


#include <xc.h>
#include "config.h"

void delay( unsigned int t )
{
    while( t )
    {
        __delay_ms(1);
        --t;
    }
}
