FUN_00680c70:
00680C70  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00680C76  8B C1                     MOV EAX,ECX
00680C78  C1 E0 04                  SHL EAX,0x4
00680C7B  03 C1                     ADD EAX,ECX
00680C7D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680C80  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00680C83  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00680C86  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00680C89  B8 01 00 00 00            MOV EAX,0x1
00680C8E  C1 E1 02                  SHL ECX,0x2
00680C91  39 81 E8 1A 81 00         CMP dword ptr [ECX + 0x811ae8],EAX
00680C97  74 03                     JZ 0x00680c9c
00680C99  33 C0                     XOR EAX,EAX
00680C9B  C3                        RET
LAB_00680c9c:
00680C9C  83 B9 7C 1C 81 00 03      CMP dword ptr [ECX + 0x811c7c],0x3
00680CA3  7D 06                     JGE 0x00680cab
00680CA5  89 81 88 1C 81 00         MOV dword ptr [ECX + 0x811c88],EAX
LAB_00680cab:
00680CAB  56                        PUSH ESI
00680CAC  8B B1 7C 1C 81 00         MOV ESI,dword ptr [ECX + 0x811c7c]
00680CB2  33 D2                     XOR EDX,EDX
00680CB4  83 FE 02                  CMP ESI,0x2
00680CB7  7D 06                     JGE 0x00680cbf
00680CB9  89 91 84 1C 81 00         MOV dword ptr [ECX + 0x811c84],EDX
LAB_00680cbf:
00680CBF  8B B1 7C 1C 81 00         MOV ESI,dword ptr [ECX + 0x811c7c]
00680CC5  3B F0                     CMP ESI,EAX
00680CC7  5E                        POP ESI
00680CC8  7D 06                     JGE 0x00680cd0
00680CCA  89 91 80 1C 81 00         MOV dword ptr [ECX + 0x811c80],EDX
LAB_00680cd0:
00680CD0  C3                        RET
