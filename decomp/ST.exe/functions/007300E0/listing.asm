FUN_007300e0:
007300E0  55                        PUSH EBP
007300E1  8B EC                     MOV EBP,ESP
007300E3  83 EC 2C                  SUB ESP,0x2c
007300E6  53                        PUSH EBX
007300E7  56                        PUSH ESI
007300E8  57                        PUSH EDI
007300E9  8D 45 E0                  LEA EAX,[EBP + -0x20]
007300EC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_007300ef:
007300EF  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
007300F3  75 1E                     JNZ 0x00730113
007300F5  68 74 FE 79 00            PUSH 0x79fe74
007300FA  6A 00                     PUSH 0x0
007300FC  6A 5A                     PUSH 0x5a
007300FE  68 18 FF 79 00            PUSH 0x79ff18
00730103  6A 02                     PUSH 0x2
00730105  E8 96 0E 00 00            CALL 0x00730fa0
0073010A  83 C4 14                  ADD ESP,0x14
0073010D  83 F8 01                  CMP EAX,0x1
00730110  75 01                     JNZ 0x00730113
00730112  CC                        INT3
LAB_00730113:
00730113  33 C9                     XOR ECX,ECX
00730115  85 C9                     TEST ECX,ECX
00730117  75 D6                     JNZ 0x007300ef
LAB_00730119:
00730119  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073011D  75 1E                     JNZ 0x0073013d
0073011F  68 90 FE 79 00            PUSH 0x79fe90
00730124  6A 00                     PUSH 0x0
00730126  6A 5B                     PUSH 0x5b
00730128  68 18 FF 79 00            PUSH 0x79ff18
0073012D  6A 02                     PUSH 0x2
0073012F  E8 6C 0E 00 00            CALL 0x00730fa0
00730134  83 C4 14                  ADD ESP,0x14
00730137  83 F8 01                  CMP EAX,0x1
0073013A  75 01                     JNZ 0x0073013d
0073013C  CC                        INT3
LAB_0073013d:
0073013D  33 D2                     XOR EDX,EDX
0073013F  85 D2                     TEST EDX,EDX
00730141  75 D6                     JNZ 0x00730119
00730143  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00730146  C7 40 0C 42 00 00 00      MOV dword ptr [EAX + 0xc],0x42
0073014D  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00730150  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00730153  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
00730156  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00730159  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073015C  89 08                     MOV dword ptr [EAX],ECX
0073015E  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00730161  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00730164  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
00730167  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0073016A  51                        PUSH ECX
0073016B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0073016E  52                        PUSH EDX
0073016F  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00730172  50                        PUSH EAX
00730173  E8 78 B5 00 00            CALL 0x0073b6f0
00730178  83 C4 0C                  ADD ESP,0xc
0073017B  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0073017E  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00730181  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00730184  83 EA 01                  SUB EDX,0x1
00730187  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0073018A  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0073018D  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00730190  83 79 04 00               CMP dword ptr [ECX + 0x4],0x0
00730194  7C 22                     JL 0x007301b8
00730196  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00730199  8B 02                     MOV EAX,dword ptr [EDX]
0073019B  C6 00 00                  MOV byte ptr [EAX],0x0
0073019E  33 C9                     XOR ECX,ECX
007301A0  81 E1 FF 00 00 00         AND ECX,0xff
007301A6  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
007301A9  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
007301AC  8B 02                     MOV EAX,dword ptr [EDX]
007301AE  83 C0 01                  ADD EAX,0x1
007301B1  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
007301B4  89 01                     MOV dword ptr [ECX],EAX
007301B6  EB 11                     JMP 0x007301c9
LAB_007301b8:
007301B8  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
007301BB  52                        PUSH EDX
007301BC  6A 00                     PUSH 0x0
007301BE  E8 AD B2 00 00            CALL 0x0073b470
007301C3  83 C4 08                  ADD ESP,0x8
007301C6  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_007301c9:
007301C9  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
007301CC  5F                        POP EDI
007301CD  5E                        POP ESI
007301CE  5B                        POP EBX
007301CF  8B E5                     MOV ESP,EBP
007301D1  5D                        POP EBP
007301D2  C3                        RET
