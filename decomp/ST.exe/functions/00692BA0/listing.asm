FUN_00692ba0:
00692BA0  55                        PUSH EBP
00692BA1  8B EC                     MOV EBP,ESP
00692BA3  53                        PUSH EBX
00692BA4  57                        PUSH EDI
00692BA5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00692BA8  33 DB                     XOR EBX,EBX
00692BAA  66 39 5F 23               CMP word ptr [EDI + 0x23],BX
00692BAE  7E 33                     JLE 0x00692be3
00692BB0  56                        PUSH ESI
00692BB1  83 C7 2D                  ADD EDI,0x2d
LAB_00692bb4:
00692BB4  BE 30 59 7D 00            MOV ESI,0x7d5930
LAB_00692bb9:
00692BB9  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
00692BBC  8A 0E                     MOV CL,byte ptr [ESI]
00692BBE  8B 17                     MOV EDX,dword ptr [EDI]
00692BC0  50                        PUSH EAX
00692BC1  51                        PUSH ECX
00692BC2  52                        PUSH EDX
00692BC3  E8 98 62 03 00            CALL 0x006c8e60
00692BC8  83 C6 08                  ADD ESI,0x8
00692BCB  81 FE 58 59 7D 00         CMP ESI,0x7d5958
00692BD1  7C E6                     JL 0x00692bb9
00692BD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00692BD6  43                        INC EBX
00692BD7  83 C7 04                  ADD EDI,0x4
00692BDA  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
00692BDE  3B D9                     CMP EBX,ECX
00692BE0  7C D2                     JL 0x00692bb4
00692BE2  5E                        POP ESI
LAB_00692be3:
00692BE3  5F                        POP EDI
00692BE4  5B                        POP EBX
00692BE5  5D                        POP EBP
00692BE6  C2 04 00                  RET 0x4
