#include<P16F877.inc>
    multiplier EQU 0x20
    multiplicand EQU 0x21
    product EQU 0x22
    org 0x00
    goto main
    main:
    MOVLW 0x10
    MOVWF multiplier
    MOVLW 0x04
    MOVWF multiplicand
   
   loop:
    ADDWF product,1
    decfsz multiplier,1
    goto loop
    goto $
    END
