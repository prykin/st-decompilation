FUN_00748946:
00748946  56                        PUSH ESI
00748947  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074894B  57                        PUSH EDI
0074894C  8B 7E 5C                  MOV EDI,dword ptr [ESI + 0x5c]
0074894F  57                        PUSH EDI
00748950  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00748956  57                        PUSH EDI
00748957  C6 86 95 00 00 00 01      MOV byte ptr [ESI + 0x95],0x1
0074895E  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00748964  5F                        POP EDI
00748965  33 C0                     XOR EAX,EAX
00748967  5E                        POP ESI
00748968  C2 04 00                  RET 0x4
