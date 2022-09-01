#include <xc.h>
// CONFIG
#pragma config FOSC = HS       
#pragma config WDTE = OFF        
#pragma config PWRTE = OFF     
#pragma config BOREN = OFF      
#pragma config LVP = ON         
#pragma config CPD = OFF        
#pragma config WRT = OFF        
#pragma config CP = OFF 
 
#define RS PORTDbits.RD0
#define RW PORTDbits.RD1
#define EN PORTDbits.RD2
void store(unsigned char data)
{
    PORTC=data;
    RS=1;
    RW=0;
    EN=1;
    EN=0;   
}
void instruct(unsigned char inst)
{
    PORTC=inst;
    RS=0;
    RW=0;
    EN=1;
    EN=0;
}
void string (unsigned char *str, unsigned char n)
{
    unsigned char i;
    
 
for (i=0;i<n;i++)
    {
        store(str[i]);
    }
}
void init()
{
    instruct(0x38);
    instruct(0x06);
    instruct(0x0C);
    instruct(0x01);
}
void main(void)
{  
    TRISC=0x00;
    TRISD=0x00;
    init();
    while(1)
    {
        instruct(0x80);
        string("Deepak Sai",10);
        instruct(0xC0);
        string("Pendyala",8);
    }
    return;
}