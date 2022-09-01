#include<P16F877.inc>
    addend EQU 0x20
    augend EQU 0x21
    sum EQU 0x22
    org 0x00
    goto main
    main:
	MOVLW 0x02
	MOVWF addend
	MOVLW 0x03
	MOVWF augend
	ADDWF addend,0
	MOVWF sum
	END