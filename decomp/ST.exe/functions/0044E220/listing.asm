FUN_0044e220:
0044E220  55                        PUSH EBP
0044E221  8B EC                     MOV EBP,ESP
0044E223  6A 0A                     PUSH 0xa
0044E225  E8 46 CA 25 00            CALL 0x006aac70
0044E22A  33 C9                     XOR ECX,ECX
LAB_0044e22c:
0044E22C  88 0C 01                  MOV byte ptr [ECX + EAX*0x1],CL
0044E22F  41                        INC ECX
0044E230  83 F9 0A                  CMP ECX,0xa
0044E233  7C F7                     JL 0x0044e22c
0044E235  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0044E238  C7 01 0A 00 00 00         MOV dword ptr [ECX],0xa
0044E23E  5D                        POP EBP
0044E23F  C2 14 00                  RET 0x14
