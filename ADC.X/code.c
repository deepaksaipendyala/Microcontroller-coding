#include<xc.h>
int main(){
    TRISA = 0XFF;
    TRISB = 0X00;
    ADCON0=0XA1;
    ADCON1=0X00;
    while(1)
    {
     ADCON0bits.GO=1;
     while(!ADIF);
     ADIF=0;
     PORTB=ADRESH;
    }
}
