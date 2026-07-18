FUN_00681e60:
00681E60  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681E66  8B C1                     MOV EAX,ECX
00681E68  C1 E0 04                  SHL EAX,0x4
00681E6B  03 C1                     ADD EAX,ECX
00681E6D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681E70  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681E73  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681E76  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681E79  C1 E0 02                  SHL EAX,0x2
00681E7C  83 B8 E8 1A 81 00 02      CMP dword ptr [EAX + 0x811ae8],0x2
00681E83  7C 44                     JL 0x00681ec9
00681E85  83 B8 7C 1C 81 00 04      CMP dword ptr [EAX + 0x811c7c],0x4
00681E8C  7C 3B                     JL 0x00681ec9
00681E8E  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
00681E94  85 C9                     TEST ECX,ECX
00681E96  7C 31                     JL 0x00681ec9
00681E98  81 F9 FF 00 00 00         CMP ECX,0xff
00681E9E  7F 29                     JG 0x00681ec9
00681EA0  8B 88 88 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c88]
00681EA6  85 C9                     TEST ECX,ECX
00681EA8  7C 1F                     JL 0x00681ec9
00681EAA  81 F9 FF 00 00 00         CMP ECX,0xff
00681EB0  7F 17                     JG 0x00681ec9
00681EB2  8B 80 8C 1C 81 00         MOV EAX,dword ptr [EAX + 0x811c8c]
00681EB8  85 C0                     TEST EAX,EAX
00681EBA  7C 0D                     JL 0x00681ec9
00681EBC  3D FF 00 00 00            CMP EAX,0xff
00681EC1  7F 06                     JG 0x00681ec9
00681EC3  B8 01 00 00 00            MOV EAX,0x1
00681EC8  C3                        RET
LAB_00681ec9:
00681EC9  33 C0                     XOR EAX,EAX
00681ECB  C3                        RET
