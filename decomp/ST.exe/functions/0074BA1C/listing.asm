FUN_0074ba1c:
0074BA1C  56                        PUSH ESI
0074BA1D  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074BA21  57                        PUSH EDI
0074BA22  8B F9                     MOV EDI,ECX
0074BA24  A5                        MOVSD ES:EDI,ESI
0074BA25  A5                        MOVSD ES:EDI,ESI
0074BA26  A5                        MOVSD ES:EDI,ESI
0074BA27  A5                        MOVSD ES:EDI,ESI
0074BA28  5F                        POP EDI
0074BA29  5E                        POP ESI
0074BA2A  C2 04 00                  RET 0x4
