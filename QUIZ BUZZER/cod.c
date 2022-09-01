#include <xc.h>
#define _XTAL_FREQ 20000000

void main()
{ int i=0;
TRISB=0;
PORTB=0;
TRISD=1;
PORTD=0;
while(i==0){
if (PORTD==0b00000001)
{
PORTB=0b00010001;
__delay_ms(30);
PORTD=0;
__delay_ms(10);
i=1;
}
if (PORTD==0b00000010)
{
PORTB=0b00100010;
__delay_ms(30);
PORTD=0;
__delay_ms(10);
i=1;
}
if (PORTD==0b00000100)
{
PORTB=0b01000100;
__delay_ms(30);
PORTD=0;
__delay_ms(10);
i=1;
}
if (PORTD==0b00001000)
{
PORTB=0b10001000;
__delay_ms(30);
PORTD=0;
__delay_ms(10);
i=1;
}
}
} 