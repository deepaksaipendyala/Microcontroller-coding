#include<P16F877.inc>
    reg1 EQU 0x20
    reg2 EQU 0x21
    diff EQU 0x22
    org 0x00
    goto main
    main:
	MOVLW 0x09
	MOVWF reg1
	MOVLW 0x03
	MOVWF reg2
	SUBWF reg1,0
	MOVWF diff
	END