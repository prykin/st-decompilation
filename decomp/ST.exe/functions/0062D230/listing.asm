FUN_0062d230:
0062D230  55                        PUSH EBP
0062D231  8B EC                     MOV EBP,ESP
0062D233  53                        PUSH EBX
0062D234  56                        PUSH ESI
0062D235  57                        PUSH EDI
0062D236  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0062D239  83 C8 FF                  OR EAX,0xffffffff
0062D23C  8B 17                     MOV EDX,dword ptr [EDI]
0062D23E  8B 54 91 30               MOV EDX,dword ptr [ECX + EDX*0x4 + 0x30]
0062D242  85 D2                     TEST EDX,EDX
0062D244  74 56                     JZ 0x0062d29c
0062D246  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
0062D249  33 F6                     XOR ESI,ESI
0062D24B  85 DB                     TEST EBX,EBX
0062D24D  7E 4D                     JLE 0x0062d29c
0062D24F  3B F3                     CMP ESI,EBX
LAB_0062d251:
0062D251  73 31                     JNC 0x0062d284
0062D253  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0062D256  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0062D259  0F AF CE                  IMUL ECX,ESI
0062D25C  03 C8                     ADD ECX,EAX
0062D25E  85 C9                     TEST ECX,ECX
0062D260  74 22                     JZ 0x0062d284
0062D262  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0062D265  3B 47 04                  CMP EAX,dword ptr [EDI + 0x4]
0062D268  75 1A                     JNZ 0x0062d284
0062D26A  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0062D26D  3B 47 08                  CMP EAX,dword ptr [EDI + 0x8]
0062D270  75 12                     JNZ 0x0062d284
0062D272  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0062D275  3B 47 0C                  CMP EAX,dword ptr [EDI + 0xc]
0062D278  75 0A                     JNZ 0x0062d284
0062D27A  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0062D27D  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0062D280  3B C8                     CMP ECX,EAX
0062D282  74 0F                     JZ 0x0062d293
LAB_0062d284:
0062D284  46                        INC ESI
0062D285  3B F3                     CMP ESI,EBX
0062D287  7C C8                     JL 0x0062d251
0062D289  5F                        POP EDI
0062D28A  5E                        POP ESI
0062D28B  83 C8 FF                  OR EAX,0xffffffff
0062D28E  5B                        POP EBX
0062D28F  5D                        POP EBP
0062D290  C2 04 00                  RET 0x4
LAB_0062d293:
0062D293  56                        PUSH ESI
0062D294  52                        PUSH EDX
0062D295  E8 D6 39 08 00            CALL 0x006b0c70
0062D29A  8B C6                     MOV EAX,ESI
LAB_0062d29c:
0062D29C  5F                        POP EDI
0062D29D  5E                        POP ESI
0062D29E  5B                        POP EBX
0062D29F  5D                        POP EBP
0062D2A0  C2 04 00                  RET 0x4
