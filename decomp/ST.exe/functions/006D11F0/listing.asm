FUN_006d11f0:
006D11F0  55                        PUSH EBP
006D11F1  8B EC                     MOV EBP,ESP
006D11F3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D11F6  85 C0                     TEST EAX,EAX
006D11F8  7E 50                     JLE 0x006d124a
006D11FA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D11FD  85 C9                     TEST ECX,ECX
006D11FF  7E 49                     JLE 0x006d124a
006D1201  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D1204  8B C8                     MOV ECX,EAX
006D1206  F7 D9                     NEG ECX
006D1208  53                        PUSH EBX
006D1209  56                        PUSH ESI
006D120A  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006D120D  57                        PUSH EDI
006D120E  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
006D1211  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D1214  2B C8                     SUB ECX,EAX
006D1216  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006D1219  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D121C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D121F  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006D1222  8A 55 24                  MOV DL,byte ptr [EBP + 0x24]
LAB_006d1225:
006D1225  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
LAB_006d1228:
006D1228  33 C0                     XOR EAX,EAX
006D122A  8A 06                     MOV AL,byte ptr [ESI]
006D122C  46                        INC ESI
006D122D  3A C2                     CMP AL,DL
006D122F  74 05                     JZ 0x006d1236
006D1231  8B 04 83                  MOV EAX,dword ptr [EBX + EAX*0x4]
006D1234  89 07                     MOV dword ptr [EDI],EAX
LAB_006d1236:
006D1236  83 C7 04                  ADD EDI,0x4
006D1239  49                        DEC ECX
006D123A  7F EC                     JG 0x006d1228
006D123C  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006D123F  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006D1242  FF 4D 1C                  DEC dword ptr [EBP + 0x1c]
006D1245  7F DE                     JG 0x006d1225
006D1247  5F                        POP EDI
006D1248  5E                        POP ESI
006D1249  5B                        POP EBX
LAB_006d124a:
006D124A  5D                        POP EBP
006D124B  C2 20 00                  RET 0x20
