#include <xc.h> 

 

void delay(int Count) 

{ 

    while(Count--); 

} 

int main() { 

    char seg_code[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f}; 

    TRISD = 0x00; 
    

    while (1)  

    { 

        for (int i = 0; i <= 9; i++)  

        { 

            PORTD = seg_code[i];  

            delay(10000); 

        } 

    } 

} 