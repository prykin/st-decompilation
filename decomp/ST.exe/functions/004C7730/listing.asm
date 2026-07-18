FUN_004c7730:
004C7730  55                        PUSH EBP
004C7731  8B EC                     MOV EBP,ESP
004C7733  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004C7736  56                        PUSH ESI
004C7737  8B 04 95 4C 4D 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x794d4c]
004C773E  4A                        DEC EDX
004C773F  83 FA 07                  CMP EDX,0x7
004C7742  0F 87 B1 00 00 00         JA 0x004c77f9
switchD_004c7748::switchD:
004C7748  FF 24 95 00 78 4C 00      JMP dword ptr [EDX*0x4 + 0x4c7800]
switchD_004c7748::caseD_1:
004C774F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004C7752  5E                        POP ESI
004C7753  8B 04 85 9C 04 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e049c]
004C775A  5D                        POP EBP
004C775B  C2 08 00                  RET 0x8
switchD_004c7748::caseD_2:
004C775E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004C7761  8B 49 24                  MOV ECX,dword ptr [ECX + 0x24]
004C7764  56                        PUSH ESI
004C7765  51                        PUSH ECX
004C7766  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C776C  E8 FA A0 F3 FF            CALL 0x0040186b
004C7771  8B 0D 1E C5 80 00         MOV ECX,dword ptr [0x0080c51e]
004C7777  8D 14 B0                  LEA EDX,[EAX + ESI*0x4]
004C777A  85 C9                     TEST ECX,ECX
004C777C  8B 04 95 78 54 7E 00      MOV EAX,dword ptr [EDX*0x4 + 0x7e5478]
004C7783  74 74                     JZ 0x004c77f9
004C7785  33 F6                     XOR ESI,ESI
004C7787  B9 78 54 7E 00            MOV ECX,0x7e5478
LAB_004c778c:
004C778C  8B 11                     MOV EDX,dword ptr [ECX]
004C778E  3B D6                     CMP EDX,ESI
004C7790  76 02                     JBE 0x004c7794
004C7792  8B F2                     MOV ESI,EDX
LAB_004c7794:
004C7794  83 C1 10                  ADD ECX,0x10
004C7797  81 F9 28 5E 7E 00         CMP ECX,0x7e5e28
004C779D  7C ED                     JL 0x004c778c
004C779F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C77A2  33 D2                     XOR EDX,EDX
004C77A4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004C77A7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004C77AA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004C77AD  C1 E0 02                  SHL EAX,0x2
004C77B0  F7 F6                     DIV ESI
004C77B2  3D DC 05 00 00            CMP EAX,0x5dc
004C77B7  76 40                     JBE 0x004c77f9
004C77B9  B8 DC 05 00 00            MOV EAX,0x5dc
004C77BE  5E                        POP ESI
004C77BF  5D                        POP EBP
004C77C0  C2 08 00                  RET 0x8
switchD_004c7748::caseD_6:
004C77C3  A1 84 61 7E 00            MOV EAX,[0x007e6184]
004C77C8  5E                        POP ESI
004C77C9  5D                        POP EBP
004C77CA  C2 08 00                  RET 0x8
switchD_004c7748::caseD_4:
004C77CD  A1 20 61 7E 00            MOV EAX,[0x007e6120]
004C77D2  5E                        POP ESI
004C77D3  5D                        POP EBP
004C77D4  C2 08 00                  RET 0x8
switchD_004c7748::caseD_5:
004C77D7  8B 81 35 02 00 00         MOV EAX,dword ptr [ECX + 0x235]
004C77DD  8B 91 39 02 00 00         MOV EDX,dword ptr [ECX + 0x239]
004C77E3  5E                        POP ESI
004C77E4  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C77E7  03 C2                     ADD EAX,EDX
004C77E9  8B 04 85 A8 2D 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e2da8]
004C77F0  5D                        POP EBP
004C77F1  C2 08 00                  RET 0x8
switchD_004c7748::caseD_8:
004C77F4  A1 3C 63 7E 00            MOV EAX,[0x007e633c]
switchD_004c7748::caseD_3:
004C77F9  5E                        POP ESI
004C77FA  5D                        POP EBP
004C77FB  C2 08 00                  RET 0x8
