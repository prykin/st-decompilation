FUN_00680fa0:
00680FA0  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00680FA6  8B C1                     MOV EAX,ECX
00680FA8  C1 E0 04                  SHL EAX,0x4
00680FAB  03 C1                     ADD EAX,ECX
00680FAD  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680FB0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00680FB3  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00680FB6  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00680FB9  B8 01 00 00 00            MOV EAX,0x1
00680FBE  C1 E1 02                  SHL ECX,0x2
00680FC1  39 81 E8 1A 81 00         CMP dword ptr [ECX + 0x811ae8],EAX
00680FC7  74 03                     JZ 0x00680fcc
00680FC9  33 C0                     XOR EAX,EAX
00680FCB  C3                        RET
LAB_00680fcc:
00680FCC  39 81 7C 1C 81 00         CMP dword ptr [ECX + 0x811c7c],EAX
00680FD2  7D 06                     JGE 0x00680fda
00680FD4  89 81 80 1C 81 00         MOV dword ptr [ECX + 0x811c80],EAX
LAB_00680fda:
00680FDA  C3                        RET
