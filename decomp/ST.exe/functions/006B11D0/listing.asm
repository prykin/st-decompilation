FUN_006b11d0:
006B11D0  55                        PUSH EBP
006B11D1  8B EC                     MOV EBP,ESP
006B11D3  53                        PUSH EBX
006B11D4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B11D7  56                        PUSH ESI
LAB_006b11d8:
006B11D8  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
006B11DB  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B11DE  3B F0                     CMP ESI,EAX
006B11E0  73 05                     JNC 0x006b11e7
006B11E2  39 43 0C                  CMP dword ptr [EBX + 0xc],EAX
006B11E5  72 0E                     JC 0x006b11f5
LAB_006b11e7:
006B11E7  53                        PUSH EBX
006B11E8  E8 43 D0 FF FF            CALL 0x006ae230
006B11ED  8B F0                     MOV ESI,EAX
006B11EF  85 F6                     TEST ESI,ESI
006B11F1  75 69                     JNZ 0x006b125c
006B11F3  EB E3                     JMP 0x006b11d8
LAB_006b11f5:
006B11F5  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006B11F8  57                        PUSH EDI
006B11F9  3B F1                     CMP ESI,ECX
006B11FB  73 33                     JNC 0x006b1230
006B11FD  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006B1200  2B CE                     SUB ECX,ESI
006B1202  8B C2                     MOV EAX,EDX
006B1204  8B 7B 1C                  MOV EDI,dword ptr [EBX + 0x1c]
006B1207  0F AF C6                  IMUL EAX,ESI
006B120A  0F AF CA                  IMUL ECX,EDX
006B120D  03 C7                     ADD EAX,EDI
006B120F  51                        PUSH ECX
006B1210  03 D0                     ADD EDX,EAX
006B1212  50                        PUSH EAX
006B1213  52                        PUSH EDX
006B1214  E8 57 C8 07 00            CALL 0x0072da70
006B1219  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006B121C  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006B121F  83 C4 0C                  ADD ESP,0xc
006B1222  42                        INC EDX
006B1223  3B C6                     CMP EAX,ESI
006B1225  89 53 0C                  MOV dword ptr [EBX + 0xc],EDX
006B1228  76 0A                     JBE 0x006b1234
006B122A  40                        INC EAX
006B122B  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006B122E  EB 04                     JMP 0x006b1234
LAB_006b1230:
006B1230  46                        INC ESI
006B1231  89 73 0C                  MOV dword ptr [EBX + 0xc],ESI
LAB_006b1234:
006B1234  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006B1237  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
006B123A  8B F9                     MOV EDI,ECX
006B123C  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006B123F  0F AF 7D 0C               IMUL EDI,dword ptr [EBP + 0xc]
006B1243  03 F8                     ADD EDI,EAX
006B1245  8B C1                     MOV EAX,ECX
006B1247  C1 E9 02                  SHR ECX,0x2
006B124A  F3 A5                     MOVSD.REP ES:EDI,ESI
006B124C  8B C8                     MOV ECX,EAX
006B124E  83 E1 03                  AND ECX,0x3
006B1251  33 C0                     XOR EAX,EAX
006B1253  F3 A4                     MOVSB.REP ES:EDI,ESI
006B1255  5F                        POP EDI
006B1256  5E                        POP ESI
006B1257  5B                        POP EBX
006B1258  5D                        POP EBP
006B1259  C2 0C 00                  RET 0xc
LAB_006b125c:
006B125C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B1262  6A 0F                     PUSH 0xf
006B1264  68 A8 DA 7E 00            PUSH 0x7edaa8
006B1269  51                        PUSH ECX
006B126A  56                        PUSH ESI
006B126B  E8 D0 4B FF FF            CALL 0x006a5e40
006B1270  8B C6                     MOV EAX,ESI
006B1272  5E                        POP ESI
006B1273  5B                        POP EBX
006B1274  5D                        POP EBP
006B1275  C2 0C 00                  RET 0xc
