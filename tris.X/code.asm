#include<P16F877.inc>
    org 0x00
    goto main
    
main:
    BANKSEL TRISA
    MOVLW 0x00
    MOVWF TRISA
    BANKSEL ADCON1
    MOVLW 0x06
    MOVWF ADCON1
    BANKSEL PORTA
    loop:
    MOVLW 0xFF
    MOVWF PORTA
    NOP 
    NOP
    MOVLW 0x00
    MOVWF PORTA
    ;NOP 
    ;NOP
    goto loop
    END


