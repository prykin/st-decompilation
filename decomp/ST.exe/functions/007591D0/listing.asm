FUN_007591d0:
007591D0  55                        PUSH EBP
007591D1  8B EC                     MOV EBP,ESP
007591D3  53                        PUSH EBX
007591D4  56                        PUSH ESI
007591D5  57                        PUSH EDI
007591D6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007591D9  57                        PUSH EDI
007591DA  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
007591E0  E8 AB 71 00 00            CALL 0x00760390
007591E5  6A 50                     PUSH 0x50
007591E7  57                        PUSH EDI
007591E8  8B D8                     MOV EBX,EAX
007591EA  E8 F1 70 00 00            CALL 0x007602e0
007591EF  8B F0                     MOV ESI,EAX
007591F1  33 D2                     XOR EDX,EDX
007591F3  3B F2                     CMP ESI,EDX
007591F5  75 1F                     JNZ 0x00759216
007591F7  57                        PUSH EDI
007591F8  E8 A3 71 00 00            CALL 0x007603a0
007591FD  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00759202  68 27 04 00 00            PUSH 0x427
00759207  68 C8 2D 7F 00            PUSH 0x7f2dc8
0075920C  50                        PUSH EAX
0075920D  6A 35                     PUSH 0x35
0075920F  E8 2C CC F4 FF            CALL 0x006a5e40
00759214  33 D2                     XOR EDX,EDX
LAB_00759216:
00759216  C7 06 90 92 75 00         MOV dword ptr [ESI],0x759290
0075921C  C7 46 04 E0 93 75 00      MOV dword ptr [ESI + 0x4],0x7593e0
00759223  C7 46 08 80 94 75 00      MOV dword ptr [ESI + 0x8],0x759480
0075922A  C7 46 0C 30 95 75 00      MOV dword ptr [ESI + 0xc],0x759530
00759231  C7 46 10 F0 95 75 00      MOV dword ptr [ESI + 0x10],0x7595f0
00759238  C7 46 14 60 96 75 00      MOV dword ptr [ESI + 0x14],0x759660
0075923F  C7 46 18 D0 96 75 00      MOV dword ptr [ESI + 0x18],0x7596d0
00759246  C7 46 1C 60 98 75 00      MOV dword ptr [ESI + 0x1c],0x759860
0075924D  C7 46 20 80 9A 75 00      MOV dword ptr [ESI + 0x20],0x759a80
00759254  C7 46 24 A0 9C 75 00      MOV dword ptr [ESI + 0x24],0x759ca0
0075925B  C7 46 28 90 9D 75 00      MOV dword ptr [ESI + 0x28],0x759d90
00759262  89 5E 2C                  MOV dword ptr [ESI + 0x2c],EBX
00759265  8D 46 3C                  LEA EAX,[ESI + 0x3c]
00759268  B9 02 00 00 00            MOV ECX,0x2
LAB_0075926d:
0075926D  89 50 F8                  MOV dword ptr [EAX + -0x8],EDX
00759270  89 10                     MOV dword ptr [EAX],EDX
00759272  83 E8 04                  SUB EAX,0x4
00759275  49                        DEC ECX
00759276  75 F5                     JNZ 0x0075926d
00759278  89 56 40                  MOV dword ptr [ESI + 0x40],EDX
0075927B  89 56 44                  MOV dword ptr [ESI + 0x44],EDX
0075927E  C7 46 48 50 00 00 00      MOV dword ptr [ESI + 0x48],0x50
00759285  89 37                     MOV dword ptr [EDI],ESI
00759287  5F                        POP EDI
00759288  5E                        POP ESI
00759289  5B                        POP EBX
0075928A  5D                        POP EBP
0075928B  C2 04 00                  RET 0x4
