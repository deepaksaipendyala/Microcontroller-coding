#include <xc.h>
int main()
{
    T1CONbits.TMR1CS=0;
    T1CONbits.T1CKPS=1;
    TRISD=0;
    while(1){
        TMR1H=0xFF;
        TMR1L=0xF0;
        T1CONbits.TMR1ON=1;
        PORTD=0xFF;
        while(!TMR1IF);
        TMR1IF=0;
        TMR1H=0xFF;
        TMR1L=0xF0;
        PORTD=0x00;
        while(!TMR1IF);
        TMR1IF=0;  
    }
    return 0;
}