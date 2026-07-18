FUN_004fad20:
004FAD20  56                        PUSH ESI
004FAD21  8B F1                     MOV ESI,ECX
004FAD23  B9 06 00 00 00            MOV ECX,0x6
004FAD28  B2 FF                     MOV DL,0xff
004FAD2A  8D 86 A8 0B 00 00         LEA EAX,[ESI + 0xba8]
LAB_004fad30:
004FAD30  88 50 5C                  MOV byte ptr [EAX + 0x5c],DL
004FAD33  88 10                     MOV byte ptr [EAX],DL
004FAD35  40                        INC EAX
004FAD36  49                        DEC ECX
004FAD37  75 F7                     JNZ 0x004fad30
004FAD39  6A 02                     PUSH 0x2
004FAD3B  8B CE                     MOV ECX,ESI
004FAD3D  E8 C1 AF F0 FF            CALL 0x00405d03
004FAD42  6A 04                     PUSH 0x4
004FAD44  8B CE                     MOV ECX,ESI
004FAD46  E8 B8 AF F0 FF            CALL 0x00405d03
004FAD4B  5E                        POP ESI
004FAD4C  C3                        RET
