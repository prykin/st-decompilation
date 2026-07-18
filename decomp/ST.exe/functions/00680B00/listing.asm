FUN_00680b00:
00680B00  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00680B06  8B C1                     MOV EAX,ECX
00680B08  C1 E0 04                  SHL EAX,0x4
00680B0B  03 C1                     ADD EAX,ECX
00680B0D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680B10  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00680B13  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00680B16  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680B19  C1 E0 02                  SHL EAX,0x2
00680B1C  83 B8 7C 1C 81 00 01      CMP dword ptr [EAX + 0x811c7c],0x1
00680B23  75 0F                     JNZ 0x00680b34
00680B25  80 B8 C8 3B 81 00 02      CMP byte ptr [EAX + 0x813bc8],0x2
00680B2C  75 06                     JNZ 0x00680b34
00680B2E  B8 01 00 00 00            MOV EAX,0x1
00680B33  C3                        RET
LAB_00680b34:
00680B34  33 C0                     XOR EAX,EAX
00680B36  C3                        RET
