FUN_0062d550:
0062D550  55                        PUSH EBP
0062D551  8B EC                     MOV EBP,ESP
0062D553  83 EC 0C                  SUB ESP,0xc
0062D556  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062D559  33 D2                     XOR EDX,EDX
0062D55B  53                        PUSH EBX
0062D55C  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0062D55F  33 C0                     XOR EAX,EAX
0062D561  56                        PUSH ESI
0062D562  57                        PUSH EDI
0062D563  89 01                     MOV dword ptr [ECX],EAX
0062D565  C7 45 0C 08 00 00 00      MOV dword ptr [EBP + 0xc],0x8
LAB_0062d56c:
0062D56C  8B 33                     MOV ESI,dword ptr [EBX]
0062D56E  85 F6                     TEST ESI,ESI
0062D570  74 0C                     JZ 0x0062d57e
0062D572  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0062D575  0F AF 7E 08               IMUL EDI,dword ptr [ESI + 0x8]
0062D579  40                        INC EAX
0062D57A  8D 54 3A 1C               LEA EDX,[EDX + EDI*0x1 + 0x1c]
LAB_0062d57e:
0062D57E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0062D581  83 C3 04                  ADD EBX,0x4
0062D584  4E                        DEC ESI
0062D585  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
0062D588  75 E2                     JNZ 0x0062d56c
0062D58A  85 D2                     TEST EDX,EDX
0062D58C  0F 84 8F 00 00 00         JZ 0x0062d621
0062D592  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
0062D595  8B 11                     MOV EDX,dword ptr [ECX]
0062D597  03 D0                     ADD EDX,EAX
0062D599  89 11                     MOV dword ptr [ECX],EDX
0062D59B  8B CA                     MOV ECX,EDX
0062D59D  51                        PUSH ECX
0062D59E  E8 CD D6 07 00            CALL 0x006aac70
0062D5A3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062D5A6  8B F0                     MOV ESI,EAX
0062D5A8  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0062D5AB  8B DE                     MOV EBX,ESI
0062D5AD  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0062D5B0  C7 45 F8 08 00 00 00      MOV dword ptr [EBP + -0x8],0x8
LAB_0062d5b7:
0062D5B7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062D5BA  8B 02                     MOV EAX,dword ptr [EDX]
0062D5BC  85 C0                     TEST EAX,EAX
0062D5BE  74 44                     JZ 0x0062d604
0062D5C0  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0062D5C3  51                        PUSH ECX
0062D5C4  50                        PUSH EAX
0062D5C5  E8 56 2A 08 00            CALL 0x006b0020
0062D5CA  85 C0                     TEST EAX,EAX
0062D5CC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0062D5CF  74 33                     JZ 0x0062d604
0062D5D1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062D5D4  85 C0                     TEST EAX,EAX
0062D5D6  74 2C                     JZ 0x0062d604
0062D5D8  89 03                     MOV dword ptr [EBX],EAX
0062D5DA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062D5DD  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0062D5E0  83 C3 04                  ADD EBX,0x4
0062D5E3  8B D1                     MOV EDX,ECX
0062D5E5  8B FB                     MOV EDI,EBX
0062D5E7  C1 E9 02                  SHR ECX,0x2
0062D5EA  F3 A5                     MOVSD.REP ES:EDI,ESI
0062D5EC  8B CA                     MOV ECX,EDX
0062D5EE  8D 45 FC                  LEA EAX,[EBP + -0x4]
0062D5F1  83 E1 03                  AND ECX,0x3
0062D5F4  50                        PUSH EAX
0062D5F5  F3 A4                     MOVSB.REP ES:EDI,ESI
0062D5F7  E8 64 DA 07 00            CALL 0x006ab060
0062D5FC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062D5FF  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0062D602  03 D8                     ADD EBX,EAX
LAB_0062d604:
0062D604  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062D607  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062D60A  83 C1 04                  ADD ECX,0x4
0062D60D  48                        DEC EAX
0062D60E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0062D611  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0062D614  75 A1                     JNZ 0x0062d5b7
0062D616  8B C6                     MOV EAX,ESI
0062D618  5F                        POP EDI
0062D619  5E                        POP ESI
0062D61A  5B                        POP EBX
0062D61B  8B E5                     MOV ESP,EBP
0062D61D  5D                        POP EBP
0062D61E  C2 08 00                  RET 0x8
LAB_0062d621:
0062D621  5F                        POP EDI
0062D622  5E                        POP ESI
0062D623  33 C0                     XOR EAX,EAX
0062D625  5B                        POP EBX
0062D626  8B E5                     MOV ESP,EBP
0062D628  5D                        POP EBP
0062D629  C2 08 00                  RET 0x8
