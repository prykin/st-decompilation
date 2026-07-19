FUN_006473e0:
006473E0  55                        PUSH EBP
006473E1  8B EC                     MOV EBP,ESP
006473E3  83 EC 40                  SUB ESP,0x40
006473E6  56                        PUSH ESI
006473E7  8B F1                     MOV ESI,ECX
006473E9  57                        PUSH EDI
006473EA  B9 10 00 00 00            MOV ECX,0x10
006473EF  33 C0                     XOR EAX,EAX
006473F1  8D 7D C0                  LEA EDI,[EBP + -0x40]
006473F4  F3 AB                     STOSD.REP ES:EDI
006473F6  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006473F9  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
006473FC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006473FF  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
00647402  83 E8 00                  SUB EAX,0x0
00647405  C7 45 C0 D2 00 00 00      MOV dword ptr [EBP + -0x40],0xd2
0064740C  C7 45 D8 04 00 00 00      MOV dword ptr [EBP + -0x28],0x4
00647413  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00647416  74 21                     JZ 0x00647439
00647418  48                        DEC EAX
00647419  74 10                     JZ 0x0064742b
0064741B  48                        DEC EAX
0064741C  75 1B                     JNZ 0x00647439
0064741E  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
00647421  05 FA 00 00 00            ADD EAX,0xfa
00647426  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00647429  EB 1A                     JMP 0x00647445
LAB_0064742b:
0064742B  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0064742E  81 C1 96 00 00 00         ADD ECX,0x96
00647434  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00647437  EB 0C                     JMP 0x00647445
LAB_00647439:
00647439  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
0064743C  81 C2 96 00 00 00         ADD EDX,0x96
00647442  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
FUN_006473e0::cf_common_exit_00647445:
00647445  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00647448  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0064744E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00647451  8D 45 C0                  LEA EAX,[EBP + -0x40]
00647454  6A 00                     PUSH 0x0
00647456  50                        PUSH EAX
00647457  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
0064745E  8B 11                     MOV EDX,dword ptr [ECX]
00647460  6A 00                     PUSH 0x0
00647462  6A 00                     PUSH 0x0
00647464  68 24 01 00 00            PUSH 0x124
00647469  FF 52 08                  CALL dword ptr [EDX + 0x8]
0064746C  68 B5 04 00 00            PUSH 0x4b5
00647471  8B CE                     MOV ECX,ESI
00647473  E8 84 C2 DB FF            CALL 0x004036fc
00647478  5F                        POP EDI
00647479  5E                        POP ESI
0064747A  8B E5                     MOV ESP,EBP
0064747C  5D                        POP EBP
0064747D  C2 04 00                  RET 0x4
