FUN_006d6160:
006D6160  55                        PUSH EBP
006D6161  8B EC                     MOV EBP,ESP
006D6163  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D6166  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D6169  56                        PUSH ESI
006D616A  8B F1                     MOV ESI,ECX
006D616C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D616F  50                        PUSH EAX
006D6170  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D6173  51                        PUSH ECX
006D6174  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D6177  52                        PUSH EDX
006D6178  50                        PUSH EAX
006D6179  51                        PUSH ECX
006D617A  8B CE                     MOV ECX,ESI
006D617C  E8 02 29 07 00            CALL 0x00748a83
006D6181  C7 06 34 DD 79 00         MOV dword ptr [ESI],0x79dd34
006D6187  8B C6                     MOV EAX,ESI
006D6189  5E                        POP ESI
006D618A  5D                        POP EBP
006D618B  C2 14 00                  RET 0x14
