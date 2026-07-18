FUN_006b6530:
006B6530  55                        PUSH EBP
006B6531  8B EC                     MOV EBP,ESP
006B6533  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B6536  53                        PUSH EBX
006B6537  56                        PUSH ESI
006B6538  57                        PUSH EDI
006B6539  8B 30                     MOV ESI,dword ptr [EAX]
006B653B  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
006B653E  A8 01                     TEST AL,0x1
006B6540  74 09                     JZ 0x006b654b
006B6542  5F                        POP EDI
006B6543  5E                        POP ESI
006B6544  33 C0                     XOR EAX,EAX
006B6546  5B                        POP EBX
006B6547  5D                        POP EBP
006B6548  C2 10 00                  RET 0x10
LAB_006b654b:
006B654B  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B654E  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
006B6551  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
006B6554  3B C8                     CMP ECX,EAX
006B6556  0F 84 82 00 00 00         JZ 0x006b65de
006B655C  8B 06                     MOV EAX,dword ptr [ESI]
006B655E  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006B6561  3B C8                     CMP ECX,EAX
006B6563  7C 28                     JL 0x006b658d
006B6565  8D 78 0A                  LEA EDI,[EAX + 0xa]
006B6568  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
006B656B  8D 04 95 08 00 00 00      LEA EAX,[EDX*0x4 + 0x8]
006B6572  50                        PUSH EAX
006B6573  56                        PUSH ESI
006B6574  E8 D7 95 00 00            CALL 0x006bfb50
006B6579  8B F0                     MOV ESI,EAX
006B657B  85 F6                     TEST ESI,ESI
006B657D  75 07                     JNZ 0x006b6586
006B657F  5F                        POP EDI
006B6580  5E                        POP ESI
006B6581  5B                        POP EBX
006B6582  5D                        POP EBP
006B6583  C2 10 00                  RET 0x10
LAB_006b6586:
006B6586  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B6589  89 31                     MOV dword ptr [ECX],ESI
006B658B  89 3E                     MOV dword ptr [ESI],EDI
LAB_006b658d:
006B658D  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B6590  8D 53 08                  LEA EDX,[EBX + 0x8]
006B6593  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006B6596  8D 4C 86 0C               LEA ECX,[ESI + EAX*0x4 + 0xc]
006B659A  8B 02                     MOV EAX,dword ptr [EDX]
006B659C  89 01                     MOV dword ptr [ECX],EAX
006B659E  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006B65A1  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
006B65A4  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006B65A7  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
006B65AA  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
006B65AD  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
006B65B0  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
006B65B3  50                        PUSH EAX
006B65B4  E8 B7 1B 01 00            CALL 0x006c8170
006B65B9  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006B65BC  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
006B65BF  89 44 8E 08               MOV dword ptr [ESI + ECX*0x4 + 0x8],EAX
006B65C3  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B65C6  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006B65C9  8B 4C 96 08               MOV ECX,dword ptr [ESI + EDX*0x4 + 0x8]
006B65CD  85 C9                     TEST ECX,ECX
006B65CF  75 09                     JNZ 0x006b65da
006B65D1  5F                        POP EDI
006B65D2  5E                        POP ESI
006B65D3  33 C0                     XOR EAX,EAX
006B65D5  5B                        POP EBX
006B65D6  5D                        POP EBP
006B65D7  C2 10 00                  RET 0x10
LAB_006b65da:
006B65DA  40                        INC EAX
006B65DB  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
LAB_006b65de:
006B65DE  5F                        POP EDI
006B65DF  5E                        POP ESI
006B65E0  B8 01 00 00 00            MOV EAX,0x1
006B65E5  5B                        POP EBX
006B65E6  5D                        POP EBP
006B65E7  C2 10 00                  RET 0x10
