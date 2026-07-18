FUN_00562cd0:
00562CD0  55                        PUSH EBP
00562CD1  8B EC                     MOV EBP,ESP
00562CD3  51                        PUSH ECX
00562CD4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00562CD7  53                        PUSH EBX
00562CD8  56                        PUSH ESI
00562CD9  57                        PUSH EDI
00562CDA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00562CDD  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00562CE0  C1 E0 03                  SHL EAX,0x3
00562CE3  99                        CDQ
00562CE4  83 E2 0F                  AND EDX,0xf
00562CE7  03 C2                     ADD EAX,EDX
00562CE9  8B F0                     MOV ESI,EAX
00562CEB  C1 FE 04                  SAR ESI,0x4
00562CEE  56                        PUSH ESI
00562CEF  E8 DC 89 17 00            CALL 0x006db6d0
00562CF4  56                        PUSH ESI
00562CF5  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00562CF8  E8 43 89 17 00            CALL 0x006db640
00562CFD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00562D00  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00562D03  8B F8                     MOV EDI,EAX
00562D05  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00562D08  F7 DF                     NEG EDI
00562D0A  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00562D0D  33 DB                     XOR EBX,EBX
00562D0F  C1 E1 10                  SHL ECX,0x10
00562D12  03 C1                     ADD EAX,ECX
00562D14  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
00562D17  C1 E2 10                  SHL EDX,0x10
00562D1A  03 CA                     ADD ECX,EDX
00562D1C  8B 15 68 33 80 00         MOV EDX,dword ptr [0x00803368]
00562D22  3B D3                     CMP EDX,EBX
00562D24  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00562D27  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00562D2A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00562D2D  7E 79                     JLE 0x00562da8
LAB_00562d2f:
00562D2F  C1 F8 10                  SAR EAX,0x10
00562D32  C1 F9 10                  SAR ECX,0x10
00562D35  85 C0                     TEST EAX,EAX
00562D37  7C 45                     JL 0x00562d7e
00562D39  8B 15 A4 33 80 00         MOV EDX,dword ptr [0x008033a4]
00562D3F  3B C2                     CMP EAX,EDX
00562D41  7D 3B                     JGE 0x00562d7e
00562D43  85 C9                     TEST ECX,ECX
00562D45  7C 37                     JL 0x00562d7e
00562D47  3B 0D A8 33 80 00         CMP ECX,dword ptr [0x008033a8]
00562D4D  7D 2F                     JGE 0x00562d7e
00562D4F  0F AF D1                  IMUL EDX,ECX
00562D52  8B 35 B4 33 80 00         MOV ESI,dword ptr [0x008033b4]
00562D58  03 D0                     ADD EDX,EAX
00562D5A  0F BF 34 56               MOVSX ESI,word ptr [ESI + EDX*0x2]
00562D5E  85 F6                     TEST ESI,ESI
00562D60  7E 1C                     JLE 0x00562d7e
00562D62  51                        PUSH ECX
00562D63  8B 0D 04 33 80 00         MOV ECX,dword ptr [0x00803304]
00562D69  50                        PUSH EAX
00562D6A  A1 08 33 80 00            MOV EAX,[0x00803308]
00562D6F  50                        PUSH EAX
00562D70  51                        PUSH ECX
00562D71  E8 33 16 EA FF            CALL 0x004043a9
00562D76  2B F0                     SUB ESI,EAX
00562D78  8D 5C 33 FF               LEA EBX,[EBX + ESI*0x1 + -0x1]
00562D7C  EB 06                     JMP 0x00562d84
LAB_00562d7e:
00562D7E  03 1D 44 33 80 00         ADD EBX,dword ptr [0x00803344]
LAB_00562d84:
00562D84  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00562D87  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00562D8A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00562D8D  8B 15 68 33 80 00         MOV EDX,dword ptr [0x00803368]
00562D93  03 C1                     ADD EAX,ECX
00562D95  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00562D98  03 CF                     ADD ECX,EDI
00562D9A  46                        INC ESI
00562D9B  3B F2                     CMP ESI,EDX
00562D9D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00562DA0  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00562DA3  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00562DA6  7C 87                     JL 0x00562d2f
LAB_00562da8:
00562DA8  8D 04 1A                  LEA EAX,[EDX + EBX*0x1]
00562DAB  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
00562DAE  99                        CDQ
00562DAF  F7 F9                     IDIV ECX
00562DB1  5F                        POP EDI
00562DB2  5E                        POP ESI
00562DB3  5B                        POP EBX
00562DB4  8B C8                     MOV ECX,EAX
00562DB6  85 C9                     TEST ECX,ECX
00562DB8  7D 02                     JGE 0x00562dbc
00562DBA  33 C9                     XOR ECX,ECX
LAB_00562dbc:
00562DBC  A1 44 33 80 00            MOV EAX,[0x00803344]
00562DC1  3B C8                     CMP ECX,EAX
00562DC3  7E 02                     JLE 0x00562dc7
00562DC5  8B C8                     MOV ECX,EAX
LAB_00562dc7:
00562DC7  2B C1                     SUB EAX,ECX
00562DC9  8B E5                     MOV ESP,EBP
00562DCB  5D                        POP EBP
00562DCC  C2 0C 00                  RET 0xc
