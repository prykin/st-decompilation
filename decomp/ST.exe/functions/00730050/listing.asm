FUN_00730050:
00730050  55                        PUSH EBP
00730051  8B EC                     MOV EBP,ESP
00730053  83 EC 08                  SUB ESP,0x8
00730056  53                        PUSH EBX
00730057  56                        PUSH ESI
00730058  57                        PUSH EDI
00730059  8D 45 10                  LEA EAX,[EBP + 0x10]
0073005C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073005f:
0073005F  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00730063  75 1E                     JNZ 0x00730083
00730065  68 5C FE 79 00            PUSH 0x79fe5c
0073006A  6A 00                     PUSH 0x0
0073006C  6A 36                     PUSH 0x36
0073006E  68 0C FF 79 00            PUSH 0x79ff0c
00730073  6A 02                     PUSH 0x2
00730075  E8 26 0F 00 00            CALL 0x00730fa0
0073007A  83 C4 14                  ADD ESP,0x14
0073007D  83 F8 01                  CMP EAX,0x1
00730080  75 01                     JNZ 0x00730083
00730082  CC                        INT3
LAB_00730083:
00730083  33 C9                     XOR ECX,ECX
00730085  85 C9                     TEST ECX,ECX
00730087  75 D6                     JNZ 0x0073005f
LAB_00730089:
00730089  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0073008D  75 1E                     JNZ 0x007300ad
0073008F  68 90 FE 79 00            PUSH 0x79fe90
00730094  6A 00                     PUSH 0x0
00730096  6A 37                     PUSH 0x37
00730098  68 0C FF 79 00            PUSH 0x79ff0c
0073009D  6A 02                     PUSH 0x2
0073009F  E8 FC 0E 00 00            CALL 0x00730fa0
007300A4  83 C4 14                  ADD ESP,0x14
007300A7  83 F8 01                  CMP EAX,0x1
007300AA  75 01                     JNZ 0x007300ad
007300AC  CC                        INT3
LAB_007300ad:
007300AD  33 D2                     XOR EDX,EDX
007300AF  85 D2                     TEST EDX,EDX
007300B1  75 D6                     JNZ 0x00730089
007300B3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007300B6  50                        PUSH EAX
007300B7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007300BA  51                        PUSH ECX
007300BB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007300BE  52                        PUSH EDX
007300BF  E8 1C 76 00 00            CALL 0x007376e0
007300C4  83 C4 0C                  ADD ESP,0xc
007300C7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007300CA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007300CD  5F                        POP EDI
007300CE  5E                        POP ESI
007300CF  5B                        POP EBX
007300D0  8B E5                     MOV ESP,EBP
007300D2  5D                        POP EBP
007300D3  C3                        RET
