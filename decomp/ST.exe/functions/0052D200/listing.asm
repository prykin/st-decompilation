FUN_0052d200:
0052D200  55                        PUSH EBP
0052D201  8B EC                     MOV EBP,ESP
0052D203  83 EC 48                  SUB ESP,0x48
0052D206  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052D20B  56                        PUSH ESI
0052D20C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0052D20F  57                        PUSH EDI
0052D210  8D 55 BC                  LEA EDX,[EBP + -0x44]
0052D213  8D 4D B8                  LEA ECX,[EBP + -0x48]
0052D216  6A 00                     PUSH 0x0
0052D218  52                        PUSH EDX
0052D219  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0052D21C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052D222  E8 C9 05 20 00            CALL 0x0072d7f0
0052D227  8B F0                     MOV ESI,EAX
0052D229  83 C4 08                  ADD ESP,0x8
0052D22C  85 F6                     TEST ESI,ESI
0052D22E  75 66                     JNZ 0x0052d296
0052D230  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0052D233  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0052D236  81 E6 FF 00 00 00         AND ESI,0xff
0052D23C  6A 13                     PUSH 0x13
0052D23E  8B 87 90 00 00 00         MOV EAX,dword ptr [EDI + 0x90]
0052D244  8D 14 F6                  LEA EDX,[ESI + ESI*0x8]
0052D247  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0052D24A  51                        PUSH ECX
0052D24B  8D 0C 56                  LEA ECX,[ESI + EDX*0x2]
0052D24E  51                        PUSH ECX
0052D24F  8B 8F 94 00 00 00         MOV ECX,dword ptr [EDI + 0x94]
0052D255  6A 00                     PUSH 0x0
0052D257  6A 00                     PUSH 0x0
0052D259  50                        PUSH EAX
0052D25A  E8 31 38 1E 00            CALL 0x00710a90
0052D25F  8B 87 98 00 00 00         MOV EAX,dword ptr [EDI + 0x98]
0052D265  3B 70 08                  CMP ESI,dword ptr [EAX + 0x8]
0052D268  7D 08                     JGE 0x0052d272
0052D26A  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0052D26D  8B 34 B2                  MOV ESI,dword ptr [EDX + ESI*0x4]
0052D270  EB 02                     JMP 0x0052d274
LAB_0052d272:
0052D272  33 F6                     XOR ESI,ESI
LAB_0052d274:
0052D274  8B 8F 94 00 00 00         MOV ECX,dword ptr [EDI + 0x94]
0052D27A  6A 00                     PUSH 0x0
0052D27C  6A 00                     PUSH 0x0
0052D27E  6A 00                     PUSH 0x0
0052D280  56                        PUSH ESI
0052D281  E8 3A 47 1E 00            CALL 0x007119c0
0052D286  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0052D289  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052D28E  5F                        POP EDI
0052D28F  5E                        POP ESI
0052D290  8B E5                     MOV ESP,EBP
0052D292  5D                        POP EBP
0052D293  C2 04 00                  RET 0x4
LAB_0052d296:
0052D296  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0052D299  68 BC 6F 7C 00            PUSH 0x7c6fbc
0052D29E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052D2A3  56                        PUSH ESI
0052D2A4  6A 00                     PUSH 0x0
0052D2A6  6A 2D                     PUSH 0x2d
0052D2A8  68 84 6F 7C 00            PUSH 0x7c6f84
0052D2AD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052D2B3  E8 18 02 18 00            CALL 0x006ad4d0
0052D2B8  83 C4 18                  ADD ESP,0x18
0052D2BB  85 C0                     TEST EAX,EAX
0052D2BD  74 01                     JZ 0x0052d2c0
0052D2BF  CC                        INT3
LAB_0052d2c0:
0052D2C0  6A 2D                     PUSH 0x2d
0052D2C2  68 84 6F 7C 00            PUSH 0x7c6f84
0052D2C7  6A 00                     PUSH 0x0
0052D2C9  56                        PUSH ESI
0052D2CA  E8 71 8B 17 00            CALL 0x006a5e40
0052D2CF  5F                        POP EDI
0052D2D0  5E                        POP ESI
0052D2D1  8B E5                     MOV ESP,EBP
0052D2D3  5D                        POP EBP
0052D2D4  C2 04 00                  RET 0x4
