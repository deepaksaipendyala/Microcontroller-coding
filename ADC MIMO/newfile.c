#include <xc.h>
void delay(int count)
{
    while(count--);
}

int main()
{
    TRISA=0xFF;
    TRISB=0x00;
    TRISC=0x00;
    TRISD=0x00;
    ADCON1 = 0x00;
    while(1)
    {
        ADCON0 = 0x81;
        ADCON0bits.GO = 1;
        while(!ADIF);
        ADIF = 0;
        PORTB = ADRESH;
        delay(5000);
        ADCON0 = 0x99;
        ADCON0bits.GO = 1;
        while(!ADIF);
        ADIF = 0;
        PORTC = ADRESH;
        delay(5000);
        ADCON0 = 0xA1;
        ADCON0bits.GO = 1;
        while(!ADIF);
        ADIF = 0;
        PORTD = ADRESH;
        delay(5000);
        
    }
}