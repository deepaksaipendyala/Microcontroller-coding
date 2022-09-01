#include<P16F877.inc>
    divisor EQU 0x20
    dividend EQU 0x21
    quotient EQU 0x22
    remainder EQU 0x23
    org 0x00
    goto main
    main:
    MOVLW 0x09
    MOVWF dividend
    MOVLW 0x02
    MOVWF divisor
    CLRF quotient
   
   loop:
    SUBWF dividend,1;
    INCF quotient,0
    BTFSC STATUS,C
    goto loop
    DECF quotient,0
    ADDWF dividend,0
    MOVWF remainder
    goto $
    END


