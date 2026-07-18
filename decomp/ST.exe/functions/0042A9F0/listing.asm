FUN_0042a9f0:
0042A9F0  55                        PUSH EBP
0042A9F1  8B EC                     MOV EBP,ESP
0042A9F3  53                        PUSH EBX
0042A9F4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0042A9F7  56                        PUSH ESI
0042A9F8  57                        PUSH EDI
0042A9F9  6A 00                     PUSH 0x0
0042A9FB  6A 00                     PUSH 0x0
0042A9FD  6A 00                     PUSH 0x0
0042A9FF  8B F1                     MOV ESI,ECX
0042AA01  53                        PUSH EBX
0042AA02  E8 E0 88 FD FF            CALL 0x004032e7
0042AA07  6A 00                     PUSH 0x0
0042AA09  6A 00                     PUSH 0x0
0042AA0B  6A 01                     PUSH 0x1
0042AA0D  53                        PUSH EBX
0042AA0E  8B CE                     MOV ECX,ESI
0042AA10  E8 D2 88 FD FF            CALL 0x004032e7
0042AA15  0F BE C3                  MOVSX EAX,BL
0042AA18  C7 45 08 05 00 00 00      MOV dword ptr [EBP + 0x8],0x5
0042AA1F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042AA22  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042AA25  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
0042AA28  C1 E7 04                  SHL EDI,0x4
0042AA2B  03 F8                     ADD EDI,EAX
0042AA2D  D1 E7                     SHL EDI,0x1
0042AA2F  8D B7 8D 4F 7F 00         LEA ESI,[EDI + 0x7f4f8d]
LAB_0042aa35:
0042AA35  8B 06                     MOV EAX,dword ptr [ESI]
0042AA37  33 DB                     XOR EBX,EBX
0042AA39  3B C3                     CMP EAX,EBX
0042AA3B  74 08                     JZ 0x0042aa45
0042AA3D  50                        PUSH EAX
0042AA3E  E8 CD 36 28 00            CALL 0x006ae110
0042AA43  89 1E                     MOV dword ptr [ESI],EBX
LAB_0042aa45:
0042AA45  89 5E F6                  MOV dword ptr [ESI + -0xa],EBX
0042AA48  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0042AA4B  3B C3                     CMP EAX,EBX
0042AA4D  74 09                     JZ 0x0042aa58
0042AA4F  50                        PUSH EAX
0042AA50  E8 BB 36 28 00            CALL 0x006ae110
0042AA55  89 5E 50                  MOV dword ptr [ESI + 0x50],EBX
LAB_0042aa58:
0042AA58  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042AA5B  89 5E 46                  MOV dword ptr [ESI + 0x46],EBX
0042AA5E  83 C6 10                  ADD ESI,0x10
0042AA61  48                        DEC EAX
0042AA62  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0042AA65  75 CE                     JNZ 0x0042aa35
0042AA67  8D B7 31 50 7F 00         LEA ESI,[EDI + 0x7f5031]
0042AA6D  BF 0A 00 00 00            MOV EDI,0xa
LAB_0042aa72:
0042AA72  8B 06                     MOV EAX,dword ptr [ESI]
0042AA74  3B C3                     CMP EAX,EBX
0042AA76  74 08                     JZ 0x0042aa80
0042AA78  50                        PUSH EAX
0042AA79  E8 92 36 28 00            CALL 0x006ae110
0042AA7E  89 1E                     MOV dword ptr [ESI],EBX
LAB_0042aa80:
0042AA80  89 5E F6                  MOV dword ptr [ESI + -0xa],EBX
0042AA83  83 C6 10                  ADD ESI,0x10
0042AA86  4F                        DEC EDI
0042AA87  75 E9                     JNZ 0x0042aa72
0042AA89  5F                        POP EDI
0042AA8A  5E                        POP ESI
0042AA8B  5B                        POP EBX
0042AA8C  5D                        POP EBP
0042AA8D  C2 04 00                  RET 0x4
