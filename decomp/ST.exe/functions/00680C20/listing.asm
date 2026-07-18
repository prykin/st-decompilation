FUN_00680c20:
00680C20  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00680C26  8B C1                     MOV EAX,ECX
00680C28  C1 E0 04                  SHL EAX,0x4
00680C2B  03 C1                     ADD EAX,ECX
00680C2D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680C30  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00680C33  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00680C36  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00680C39  B8 01 00 00 00            MOV EAX,0x1
00680C3E  C1 E1 02                  SHL ECX,0x2
00680C41  39 81 E8 1A 81 00         CMP dword ptr [ECX + 0x811ae8],EAX
00680C47  74 03                     JZ 0x00680c4c
00680C49  33 C0                     XOR EAX,EAX
00680C4B  C3                        RET
LAB_00680c4c:
00680C4C  39 81 7C 1C 81 00         CMP dword ptr [ECX + 0x811c7c],EAX
00680C52  7D 0A                     JGE 0x00680c5e
00680C54  C7 81 80 1C 81 00 00 00 00 00  MOV dword ptr [ECX + 0x811c80],0x0
LAB_00680c5e:
00680C5E  C3                        RET
