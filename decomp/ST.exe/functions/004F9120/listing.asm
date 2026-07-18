FUN_004f9120:
004F9120  55                        PUSH EBP
004F9121  8B EC                     MOV EBP,ESP
004F9123  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004F9126  56                        PUSH ESI
004F9127  80 FA 07                  CMP DL,0x7
004F912A  8B F1                     MOV ESI,ECX
004F912C  77 44                     JA 0x004f9172
004F912E  8A 4D 0C                  MOV CL,byte ptr [EBP + 0xc]
004F9131  8B C2                     MOV EAX,EDX
004F9133  25 FF 00 00 00            AND EAX,0xff
004F9138  57                        PUSH EDI
004F9139  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004F913C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004F913F  88 8C C0 F7 87 80 00      MOV byte ptr [EAX + EAX*0x8 + 0x8087f7],CL
004F9146  89 BC C0 F8 87 80 00      MOV dword ptr [EAX + EAX*0x8 + 0x8087f8],EDI
004F914D  8B B6 A0 09 00 00         MOV ESI,dword ptr [ESI + 0x9a0]
004F9153  5F                        POP EDI
004F9154  89 B4 C0 FC 87 80 00      MOV dword ptr [EAX + EAX*0x8 + 0x8087fc],ESI
004F915B  A0 4D 87 80 00            MOV AL,[0x0080874d]
004F9160  3A D0                     CMP DL,AL
004F9162  75 0E                     JNZ 0x004f9172
004F9164  84 C9                     TEST CL,CL
004F9166  75 0A                     JNZ 0x004f9172
004F9168  C7 05 D3 C4 80 00 04 00 00 00  MOV dword ptr [0x0080c4d3],0x4
LAB_004f9172:
004F9172  5E                        POP ESI
004F9173  5D                        POP EBP
004F9174  C2 0C 00                  RET 0xc
