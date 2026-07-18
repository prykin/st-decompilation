FUN_0053c620:
0053C620  55                        PUSH EBP
0053C621  8B EC                     MOV EBP,ESP
0053C623  83 EC 10                  SUB ESP,0x10
0053C626  53                        PUSH EBX
0053C627  8B D9                     MOV EBX,ECX
0053C629  33 C0                     XOR EAX,EAX
0053C62B  8A 83 78 02 00 00         MOV AL,byte ptr [EBX + 0x278]
0053C631  8B 8C 83 7A 02 00 00      MOV ECX,dword ptr [EBX + EAX*0x4 + 0x27a]
0053C638  85 C9                     TEST ECX,ECX
0053C63A  0F 84 62 01 00 00         JZ 0x0053c7a2
0053C640  56                        PUSH ESI
0053C641  57                        PUSH EDI
0053C642  8D 8B B6 01 00 00         LEA ECX,[EBX + 0x1b6]
0053C648  8D BB A1 01 00 00         LEA EDI,[EBX + 0x1a1]
0053C64E  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0053C655  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053C658  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0053C65B  C7 45 F0 05 00 00 00      MOV dword ptr [EBP + -0x10],0x5
LAB_0053c662:
0053C662  C7 43 28 21 00 00 00      MOV dword ptr [EBX + 0x28],0x21
0053C669  8B 17                     MOV EDX,dword ptr [EDI]
0053C66B  8D 73 18                  LEA ESI,[EBX + 0x18]
0053C66E  8B CB                     MOV ECX,EBX
0053C670  56                        PUSH ESI
0053C671  52                        PUSH EDX
0053C672  6A 02                     PUSH 0x2
0053C674  E8 07 9A 1A 00            CALL 0x006e6080
0053C679  33 C0                     XOR EAX,EAX
0053C67B  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
0053C67E  8A 83 78 02 00 00         MOV AL,byte ptr [EBX + 0x278]
0053C684  8B 94 83 7A 02 00 00      MOV EDX,dword ptr [EBX + EAX*0x4 + 0x27a]
0053C68B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0053C68E  03 83 99 01 00 00         ADD EAX,dword ptr [EBX + 0x199]
0053C694  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
0053C697  1B C0                     SBB EAX,EAX
0053C699  F7 D8                     NEG EAX
0053C69B  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
0053C69E  0F 85 AF 00 00 00         JNZ 0x0053c753
0053C6A4  85 C9                     TEST ECX,ECX
0053C6A6  0F 85 AF 00 00 00         JNZ 0x0053c75b
LAB_0053c6ac:
0053C6AC  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
0053C6B3  8B 17                     MOV EDX,dword ptr [EDI]
0053C6B5  56                        PUSH ESI
0053C6B6  52                        PUSH EDX
LAB_0053c6b7:
0053C6B7  6A 02                     PUSH 0x2
0053C6B9  8B CB                     MOV ECX,EBX
0053C6BB  E8 C0 99 1A 00            CALL 0x006e6080
0053C6C0  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
0053C6C3  85 C0                     TEST EAX,EAX
0053C6C5  0F 84 B2 00 00 00         JZ 0x0053c77d
0053C6CB  33 C0                     XOR EAX,EAX
0053C6CD  8A 83 78 02 00 00         MOV AL,byte ptr [EBX + 0x278]
0053C6D3  8B 84 83 7A 02 00 00      MOV EAX,dword ptr [EBX + EAX*0x4 + 0x27a]
0053C6DA  85 C0                     TEST EAX,EAX
0053C6DC  0F 84 9B 00 00 00         JZ 0x0053c77d
0053C6E2  8B 8B 99 01 00 00         MOV ECX,dword ptr [EBX + 0x199]
0053C6E8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0053C6EB  03 CA                     ADD ECX,EDX
0053C6ED  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0053C6F0  3B CA                     CMP ECX,EDX
0053C6F2  0F 83 85 00 00 00         JNC 0x0053c77d
0053C6F8  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0053C6FB  0F AF F1                  IMUL ESI,ECX
0053C6FE  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
0053C701  85 F6                     TEST ESI,ESI
0053C703  74 78                     JZ 0x0053c77d
0053C705  8A 56 08                  MOV DL,byte ptr [ESI + 0x8]
0053C708  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0053C70B  84 D2                     TEST DL,DL
0053C70D  0F 94 C0                  SETZ AL
0053C710  83 C0 03                  ADD EAX,0x3
0053C713  88 41 FF                  MOV byte ptr [ECX + -0x1],AL
0053C716  8A 16                     MOV DL,byte ptr [ESI]
0053C718  52                        PUSH EDX
0053C719  E8 6B 60 EC FF            CALL 0x00402789
0053C71E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0053C721  89 01                     MOV dword ptr [ECX],EAX
0053C723  8B 16                     MOV EDX,dword ptr [ESI]
0053C725  8A 06                     MOV AL,byte ptr [ESI]
0053C727  C1 EA 10                  SHR EDX,0x10
0053C72A  52                        PUSH EDX
0053C72B  50                        PUSH EAX
0053C72C  E8 F8 83 EC FF            CALL 0x00404b29
0053C731  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0053C734  83 C4 0C                  ADD ESP,0xc
0053C737  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0053C73A  8A 46 08                  MOV AL,byte ptr [ESI + 0x8]
0053C73D  84 C0                     TEST AL,AL
0053C73F  74 2A                     JZ 0x0053c76b
0053C741  83 C6 0A                  ADD ESI,0xa
0053C744  83 C2 08                  ADD EDX,0x8
0053C747  8B 0E                     MOV ECX,dword ptr [ESI]
0053C749  89 0A                     MOV dword ptr [EDX],ECX
0053C74B  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0053C74E  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0053C751  EB 2A                     JMP 0x0053c77d
LAB_0053c753:
0053C753  85 C9                     TEST ECX,ECX
0053C755  0F 85 51 FF FF FF         JNZ 0x0053c6ac
LAB_0053c75b:
0053C75B  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
0053C762  8B 0F                     MOV ECX,dword ptr [EDI]
0053C764  56                        PUSH ESI
0053C765  51                        PUSH ECX
0053C766  E9 4C FF FF FF            JMP 0x0053c6b7
LAB_0053c76b:
0053C76B  B9 07 00 00 00            MOV ECX,0x7
0053C770  83 C6 12                  ADD ESI,0x12
0053C773  8D 7A 08                  LEA EDI,[EDX + 0x8]
0053C776  F3 A5                     MOVSD.REP ES:EDI,ESI
0053C778  66 A5                     MOVSW ES:EDI,ESI
0053C77A  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_0053c77d:
0053C77D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0053C780  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0053C783  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0053C786  46                        INC ESI
0053C787  83 C7 04                  ADD EDI,0x4
0053C78A  83 C1 27                  ADD ECX,0x27
0053C78D  48                        DEC EAX
0053C78E  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0053C791  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0053C794  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053C797  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0053C79A  0F 85 C2 FE FF FF         JNZ 0x0053c662
0053C7A0  5F                        POP EDI
0053C7A1  5E                        POP ESI
LAB_0053c7a2:
0053C7A2  5B                        POP EBX
0053C7A3  8B E5                     MOV ESP,EBP
0053C7A5  5D                        POP EBP
0053C7A6  C3                        RET
