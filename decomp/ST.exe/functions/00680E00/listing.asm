FUN_00680e00:
00680E00  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00680E06  8B C1                     MOV EAX,ECX
00680E08  C1 E0 04                  SHL EAX,0x4
00680E0B  03 C1                     ADD EAX,ECX
00680E0D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680E10  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00680E13  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00680E16  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680E19  C1 E0 02                  SHL EAX,0x2
00680E1C  83 B8 7C 1C 81 00 01      CMP dword ptr [EAX + 0x811c7c],0x1
00680E23  7C 15                     JL 0x00680e3a
00680E25  8B 80 80 1C 81 00         MOV EAX,dword ptr [EAX + 0x811c80]
00680E2B  85 C0                     TEST EAX,EAX
00680E2D  7C 0B                     JL 0x00680e3a
00680E2F  83 F8 02                  CMP EAX,0x2
00680E32  7F 06                     JG 0x00680e3a
00680E34  B8 01 00 00 00            MOV EAX,0x1
00680E39  C3                        RET
LAB_00680e3a:
00680E3A  33 C0                     XOR EAX,EAX
00680E3C  C3                        RET
