FUN_00680d40:
00680D40  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00680D46  56                        PUSH ESI
00680D47  8B C1                     MOV EAX,ECX
00680D49  C1 E0 04                  SHL EAX,0x4
00680D4C  03 C1                     ADD EAX,ECX
00680D4E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680D51  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00680D54  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00680D57  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
00680D5A  C1 E6 02                  SHL ESI,0x2
00680D5D  8B 86 E8 1A 81 00         MOV EAX,dword ptr [ESI + 0x811ae8]
00680D63  83 F8 01                  CMP EAX,0x1
00680D66  7C 5F                     JL 0x00680dc7
00680D68  83 BE 7C 1C 81 00 01      CMP dword ptr [ESI + 0x811c7c],0x1
00680D6F  7C 56                     JL 0x00680dc7
00680D71  83 F8 02                  CMP EAX,0x2
00680D74  7D 27                     JGE 0x00680d9d
00680D76  8B C1                     MOV EAX,ECX
00680D78  C1 E0 04                  SHL EAX,0x4
00680D7B  03 C1                     ADD EAX,ECX
00680D7D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680D80  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00680D83  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00680D86  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
00680D89  A1 34 D7 79 00            MOV EAX,[0x0079d734]
00680D8E  50                        PUSH EAX
00680D8F  C1 E6 02                  SHL ESI,0x2
00680D92  E8 9F 30 D8 FF            CALL 0x00403e36
00680D97  89 86 F0 1A 81 00         MOV dword ptr [ESI + 0x811af0],EAX
LAB_00680d9d:
00680D9D  83 BE 7C 1C 81 00 02      CMP dword ptr [ESI + 0x811c7c],0x2
00680DA4  7D 0A                     JGE 0x00680db0
00680DA6  C7 86 84 1C 81 00 FF FF FF FF  MOV dword ptr [ESI + 0x811c84],0xffffffff
LAB_00680db0:
00680DB0  8B B6 80 1C 81 00         MOV ESI,dword ptr [ESI + 0x811c80]
00680DB6  83 FE 01                  CMP ESI,0x1
00680DB9  7C 0C                     JL 0x00680dc7
00680DBB  83 FE 03                  CMP ESI,0x3
00680DBE  7F 07                     JG 0x00680dc7
00680DC0  B8 01 00 00 00            MOV EAX,0x1
00680DC5  5E                        POP ESI
00680DC6  C3                        RET
LAB_00680dc7:
00680DC7  33 C0                     XOR EAX,EAX
00680DC9  5E                        POP ESI
00680DCA  C3                        RET
