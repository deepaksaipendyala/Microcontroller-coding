#include<xc.h>
int main(){
    TRISC=0x00;
    CCPR1L=0x7D;
    PR2=0xF9;
    T2CON=0x00;
    TMR2=0x00;
    CCP1CON=0x0c;
    T2CONbits.TMR2ON=1;
   while(1);
}