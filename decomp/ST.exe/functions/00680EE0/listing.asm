FUN_00680ee0:
00680EE0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00680EE6  8B C1                     MOV EAX,ECX
00680EE8  C1 E0 04                  SHL EAX,0x4
00680EEB  03 C1                     ADD EAX,ECX
00680EED  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680EF0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00680EF3  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00680EF6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680EF9  C1 E0 02                  SHL EAX,0x2
00680EFC  83 B8 E8 1A 81 00 01      CMP dword ptr [EAX + 0x811ae8],0x1
00680F03  75 59                     JNZ 0x00680f5e
00680F05  8B 88 7C 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c7c]
00680F0B  83 F9 01                  CMP ECX,0x1
00680F0E  7C 4E                     JL 0x00680f5e
00680F10  83 F9 02                  CMP ECX,0x2
00680F13  7D 0A                     JGE 0x00680f1f
00680F15  C7 80 84 1C 81 00 0A 00 00 00  MOV dword ptr [EAX + 0x811c84],0xa
LAB_00680f1f:
00680F1F  8B 88 80 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c80]
00680F25  83 F9 01                  CMP ECX,0x1
00680F28  7C 34                     JL 0x00680f5e
00680F2A  83 F9 03                  CMP ECX,0x3
00680F2D  7F 2F                     JG 0x00680f5e
00680F2F  8B 88 84 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c84]
00680F35  85 C9                     TEST ECX,ECX
00680F37  7D 0A                     JGE 0x00680f43
00680F39  C7 80 84 1C 81 00 00 00 00 00  MOV dword ptr [EAX + 0x811c84],0x0
LAB_00680f43:
00680F43  8B 90 84 1C 81 00         MOV EDX,dword ptr [EAX + 0x811c84]
00680F49  B9 14 00 00 00            MOV ECX,0x14
00680F4E  3B D1                     CMP EDX,ECX
00680F50  7C 06                     JL 0x00680f58
00680F52  89 88 84 1C 81 00         MOV dword ptr [EAX + 0x811c84],ECX
LAB_00680f58:
00680F58  B8 01 00 00 00            MOV EAX,0x1
00680F5D  C3                        RET
LAB_00680f5e:
00680F5E  33 C0                     XOR EAX,EAX
00680F60  C3                        RET
