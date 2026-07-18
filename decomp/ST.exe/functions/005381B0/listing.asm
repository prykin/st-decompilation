FUN_005381b0:
005381B0  55                        PUSH EBP
005381B1  8B EC                     MOV EBP,ESP
005381B3  83 EC 48                  SUB ESP,0x48
005381B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005381BB  53                        PUSH EBX
005381BC  56                        PUSH ESI
005381BD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005381C0  57                        PUSH EDI
005381C1  8D 55 BC                  LEA EDX,[EBP + -0x44]
005381C4  8D 4D B8                  LEA ECX,[EBP + -0x48]
005381C7  6A 00                     PUSH 0x0
005381C9  52                        PUSH EDX
005381CA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005381CD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005381D3  E8 18 56 1F 00            CALL 0x0072d7f0
005381D8  8B F0                     MOV ESI,EAX
005381DA  83 C4 08                  ADD ESP,0x8
005381DD  85 F6                     TEST ESI,ESI
005381DF  0F 85 03 01 00 00         JNZ 0x005382e8
005381E5  A1 9C 67 80 00            MOV EAX,[0x0080679c]
005381EA  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005381ED  6A 01                     PUSH 0x1
005381EF  8D 48 28                  LEA ECX,[EAX + 0x28]
005381F2  51                        PUSH ECX
005381F3  50                        PUSH EAX
005381F4  E8 E7 CD 17 00            CALL 0x006b4fe0
005381F9  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
005381FC  50                        PUSH EAX
005381FD  A1 9C 67 80 00            MOV EAX,[0x0080679c]
00538202  33 D2                     XOR EDX,EDX
00538204  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
00538208  52                        PUSH EDX
00538209  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
0053820C  51                        PUSH ECX
0053820D  52                        PUSH EDX
0053820E  E8 AD CE 17 00            CALL 0x006b50c0
00538213  89 46 68                  MOV dword ptr [ESI + 0x68],EAX
00538216  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
00538219  85 DB                     TEST EBX,EBX
0053821B  75 18                     JNZ 0x00538235
0053821D  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
00538221  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
00538225  83 C3 1F                  ADD EBX,0x1f
00538228  C1 EB 03                  SHR EBX,0x3
0053822B  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
00538231  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_00538235:
00538235  50                        PUSH EAX
00538236  E8 65 CD 17 00            CALL 0x006b4fa0
0053823B  8B CB                     MOV ECX,EBX
0053823D  8B F8                     MOV EDI,EAX
0053823F  8B D1                     MOV EDX,ECX
00538241  83 C8 FF                  OR EAX,0xffffffff
00538244  C1 E9 02                  SHR ECX,0x2
00538247  F3 AB                     STOSD.REP ES:EDI
00538249  8B CA                     MOV ECX,EDX
0053824B  83 E1 03                  AND ECX,0x3
0053824E  F3 AA                     STOSB.REP ES:EDI
00538250  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00538256  8D 46 4C                  LEA EAX,[ESI + 0x4c]
00538259  50                        PUSH EAX
0053825A  6A 00                     PUSH 0x0
0053825C  6A 03                     PUSH 0x3
0053825E  51                        PUSH ECX
0053825F  E8 EC 97 17 00            CALL 0x006b1a50
00538264  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00538267  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
0053826A  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
0053826D  52                        PUSH EDX
0053826E  8B 56 64                  MOV EDX,dword ptr [ESI + 0x64]
00538271  50                        PUSH EAX
00538272  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00538277  51                        PUSH ECX
00538278  8D 7E 60                  LEA EDI,[ESI + 0x60]
0053827B  68 EA 57 40 00            PUSH 0x4057ea
00538280  52                        PUSH EDX
00538281  57                        PUSH EDI
00538282  50                        PUSH EAX
00538283  E8 A8 A0 17 00            CALL 0x006b2330
00538288  8B 0F                     MOV ECX,dword ptr [EDI]
0053828A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00538290  6A 03                     PUSH 0x3
00538292  51                        PUSH ECX
00538293  52                        PUSH EDX
00538294  E8 77 98 17 00            CALL 0x006b1b10
00538299  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0053829C  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0053829F  8B 17                     MOV EDX,dword ptr [EDI]
005382A1  50                        PUSH EAX
005382A2  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005382A7  51                        PUSH ECX
005382A8  6A FF                     PUSH -0x1
005382AA  52                        PUSH EDX
005382AB  50                        PUSH EAX
005382AC  E8 8F B3 17 00            CALL 0x006b3640
005382B1  8D 56 18                  LEA EDX,[ESI + 0x18]
005382B4  B9 08 00 00 00            MOV ECX,0x8
005382B9  33 C0                     XOR EAX,EAX
005382BB  8B FA                     MOV EDI,EDX
005382BD  F3 AB                     STOSD.REP ES:EDI
005382BF  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005382C2  52                        PUSH EDX
005382C3  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
005382C6  6A 01                     PUSH 0x1
005382C8  6A 03                     PUSH 0x3
005382CA  8B CE                     MOV ECX,ESI
005382CC  C7 46 28 13 00 00 00      MOV dword ptr [ESI + 0x28],0x13
005382D3  E8 28 DD 1A 00            CALL 0x006e6000
005382D8  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005382DB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005382E1  5F                        POP EDI
005382E2  5E                        POP ESI
005382E3  5B                        POP EBX
005382E4  8B E5                     MOV ESP,EBP
005382E6  5D                        POP EBP
005382E7  C3                        RET
LAB_005382e8:
005382E8  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005382EB  68 B4 73 7C 00            PUSH 0x7c73b4
005382F0  68 CC 4C 7A 00            PUSH 0x7a4ccc
005382F5  56                        PUSH ESI
005382F6  6A 00                     PUSH 0x0
005382F8  6A 2A                     PUSH 0x2a
005382FA  68 90 73 7C 00            PUSH 0x7c7390
005382FF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00538304  E8 C7 51 17 00            CALL 0x006ad4d0
00538309  83 C4 18                  ADD ESP,0x18
0053830C  85 C0                     TEST EAX,EAX
0053830E  74 01                     JZ 0x00538311
00538310  CC                        INT3
LAB_00538311:
00538311  6A 2A                     PUSH 0x2a
00538313  68 90 73 7C 00            PUSH 0x7c7390
00538318  6A 00                     PUSH 0x0
0053831A  56                        PUSH ESI
0053831B  E8 20 DB 16 00            CALL 0x006a5e40
00538320  5F                        POP EDI
00538321  5E                        POP ESI
00538322  5B                        POP EBX
00538323  8B E5                     MOV ESP,EBP
00538325  5D                        POP EBP
00538326  C3                        RET
