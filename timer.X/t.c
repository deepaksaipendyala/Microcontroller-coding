#include<xc.h>
int main(){
   TRISC=0x00;
   CCPR1L=0x7F;
   PR2=0xFF;
   T2CON=0x00;
   TMR2=0x00;
   CCP1CON=0x0C;
   T2CONbits.TMR2ON=1;
   while(1);
    
   
}
