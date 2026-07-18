FUN_00681ca0:
00681CA0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681CA6  8B C1                     MOV EAX,ECX
00681CA8  C1 E0 04                  SHL EAX,0x4
00681CAB  03 C1                     ADD EAX,ECX
00681CAD  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681CB0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681CB3  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681CB6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681CB9  C1 E0 02                  SHL EAX,0x2
00681CBC  83 B8 7C 1C 81 00 01      CMP dword ptr [EAX + 0x811c7c],0x1
00681CC3  7D 0A                     JGE 0x00681ccf
00681CC5  C7 80 80 1C 81 00 00 00 00 00  MOV dword ptr [EAX + 0x811c80],0x0
LAB_00681ccf:
00681CCF  83 B8 7C 1C 81 00 02      CMP dword ptr [EAX + 0x811c7c],0x2
00681CD6  7D 0A                     JGE 0x00681ce2
00681CD8  C7 80 84 1C 81 00 FF FF FF 3F  MOV dword ptr [EAX + 0x811c84],0x3fffffff
LAB_00681ce2:
00681CE2  8B 80 80 1C 81 00         MOV EAX,dword ptr [EAX + 0x811c80]
00681CE8  85 C0                     TEST EAX,EAX
00681CEA  7C 0B                     JL 0x00681cf7
00681CEC  83 F8 02                  CMP EAX,0x2
00681CEF  7F 06                     JG 0x00681cf7
00681CF1  B8 01 00 00 00            MOV EAX,0x1
00681CF6  C3                        RET
LAB_00681cf7:
00681CF7  33 C0                     XOR EAX,EAX
00681CF9  C3                        RET
