FUN_004f91a0:
004F91A0  55                        PUSH EBP
004F91A1  8B EC                     MOV EBP,ESP
004F91A3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004F91A6  56                        PUSH ESI
004F91A7  80 FA 07                  CMP DL,0x7
004F91AA  77 74                     JA 0x004f9220
004F91AC  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004F91AF  85 F6                     TEST ESI,ESI
004F91B1  74 13                     JZ 0x004f91c6
004F91B3  8B C2                     MOV EAX,EDX
004F91B5  25 FF 00 00 00            AND EAX,0xff
004F91BA  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004F91BD  8A 84 C0 F7 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087f7]
004F91C4  88 06                     MOV byte ptr [ESI],AL
LAB_004f91c6:
004F91C6  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
004F91C9  85 F6                     TEST ESI,ESI
004F91CB  74 53                     JZ 0x004f9220
004F91CD  81 E2 FF 00 00 00         AND EDX,0xff
004F91D3  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
004F91D6  8A 94 C0 F7 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087f7]
004F91DD  84 D2                     TEST DL,DL
004F91DF  74 2E                     JZ 0x004f920f
004F91E1  8B 89 A0 09 00 00         MOV ECX,dword ptr [ECX + 0x9a0]
004F91E7  8B 94 C0 FC 87 80 00      MOV EDX,dword ptr [EAX + EAX*0x8 + 0x8087fc]
004F91EE  8B 84 C0 F8 87 80 00      MOV EAX,dword ptr [EAX + EAX*0x8 + 0x8087f8]
004F91F5  2B CA                     SUB ECX,EDX
004F91F7  3B C8                     CMP ECX,EAX
004F91F9  72 0B                     JC 0x004f9206
004F91FB  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
004F9201  5E                        POP ESI
004F9202  5D                        POP EBP
004F9203  C2 0C 00                  RET 0xc
LAB_004f9206:
004F9206  2B C1                     SUB EAX,ECX
004F9208  89 06                     MOV dword ptr [ESI],EAX
004F920A  5E                        POP ESI
004F920B  5D                        POP EBP
004F920C  C2 0C 00                  RET 0xc
LAB_004f920f:
004F920F  8B 94 C0 F8 87 80 00      MOV EDX,dword ptr [EAX + EAX*0x8 + 0x8087f8]
004F9216  8B 81 A0 09 00 00         MOV EAX,dword ptr [ECX + 0x9a0]
004F921C  03 D0                     ADD EDX,EAX
004F921E  89 16                     MOV dword ptr [ESI],EDX
LAB_004f9220:
004F9220  5E                        POP ESI
004F9221  5D                        POP EBP
004F9222  C2 0C 00                  RET 0xc
