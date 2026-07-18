FUN_004e6280:
004E6280  55                        PUSH EBP
004E6281  8B EC                     MOV EBP,ESP
004E6283  51                        PUSH ECX
004E6284  53                        PUSH EBX
004E6285  56                        PUSH ESI
004E6286  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004E6289  57                        PUSH EDI
004E628A  85 F6                     TEST ESI,ESI
004E628C  8B D9                     MOV EBX,ECX
004E628E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004E6295  7C 43                     JL 0x004e62da
004E6297  83 FE 08                  CMP ESI,0x8
004E629A  7D 3E                     JGE 0x004e62da
004E629C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E629F  83 FF 01                  CMP EDI,0x1
004E62A2  7C 36                     JL 0x004e62da
004E62A4  81 FF 9B 00 00 00         CMP EDI,0x9b
004E62AA  7D 2E                     JGE 0x004e62da
004E62AC  57                        PUSH EDI
004E62AD  56                        PUSH ESI
004E62AE  E8 9C EF F1 FF            CALL 0x0040524f
004E62B3  85 C0                     TEST EAX,EAX
004E62B5  74 17                     JZ 0x004e62ce
004E62B7  57                        PUSH EDI
004E62B8  56                        PUSH ESI
004E62B9  8B CB                     MOV ECX,EBX
004E62BB  E8 DC DE F1 FF            CALL 0x0040419c
004E62C0  5F                        POP EDI
004E62C1  5E                        POP ESI
004E62C2  B8 01 00 00 00            MOV EAX,0x1
004E62C7  5B                        POP EBX
004E62C8  8B E5                     MOV ESP,EBP
004E62CA  5D                        POP EBP
004E62CB  C2 08 00                  RET 0x8
LAB_004e62ce:
004E62CE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E62D1  5F                        POP EDI
004E62D2  5E                        POP ESI
004E62D3  5B                        POP EBX
004E62D4  8B E5                     MOV ESP,EBP
004E62D6  5D                        POP EBP
004E62D7  C2 08 00                  RET 0x8
LAB_004e62da:
004E62DA  5F                        POP EDI
004E62DB  5E                        POP ESI
004E62DC  33 C0                     XOR EAX,EAX
004E62DE  5B                        POP EBX
004E62DF  8B E5                     MOV ESP,EBP
004E62E1  5D                        POP EBP
004E62E2  C2 08 00                  RET 0x8
