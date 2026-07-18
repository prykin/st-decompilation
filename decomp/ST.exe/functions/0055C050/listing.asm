FUN_0055c050:
0055C050  55                        PUSH EBP
0055C051  8B EC                     MOV EBP,ESP
0055C053  56                        PUSH ESI
0055C054  8B F1                     MOV ESI,ECX
0055C056  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
0055C059  85 C0                     TEST EAX,EAX
0055C05B  75 10                     JNZ 0x0055c06d
0055C05D  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0055C060  50                        PUSH EAX
0055C061  E8 3D 57 EA FF            CALL 0x004017a3
0055C066  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
0055C069  85 C0                     TEST EAX,EAX
0055C06B  74 3D                     JZ 0x0055c0aa
LAB_0055c06d:
0055C06D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055C070  6A 0E                     PUSH 0xe
0055C072  6A 1C                     PUSH 0x1c
0055C074  8B 48 25                  MOV ECX,dword ptr [EAX + 0x25]
0055C077  83 C0 10                  ADD EAX,0x10
0055C07A  51                        PUSH ECX
0055C07B  50                        PUSH EAX
0055C07C  8B CE                     MOV ECX,ESI
0055C07E  FF 15 40 C0 85 00         CALL dword ptr [0x0085c040]
0055C084  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
0055C08B  2B D0                     SUB EDX,EAX
0055C08D  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
0055C090  D1 E2                     SHL EDX,0x1
0055C092  52                        PUSH EDX
0055C093  6A 00                     PUSH 0x0
0055C095  6A 00                     PUSH 0x0
0055C097  50                        PUSH EAX
0055C098  6A 00                     PUSH 0x0
0055C09A  6A 00                     PUSH 0x0
0055C09C  6A 00                     PUSH 0x0
0055C09E  6A 00                     PUSH 0x0
0055C0A0  E8 4B 95 15 00            CALL 0x006b55f0
0055C0A5  5E                        POP ESI
0055C0A6  5D                        POP EBP
0055C0A7  C2 04 00                  RET 0x4
LAB_0055c0aa:
0055C0AA  33 C0                     XOR EAX,EAX
0055C0AC  5E                        POP ESI
0055C0AD  5D                        POP EBP
0055C0AE  C2 04 00                  RET 0x4
