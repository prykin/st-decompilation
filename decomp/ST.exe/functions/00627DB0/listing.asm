FUN_00627db0:
00627DB0  55                        PUSH EBP
00627DB1  8B EC                     MOV EBP,ESP
00627DB3  83 EC 0C                  SUB ESP,0xc
00627DB6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00627DB9  33 C0                     XOR EAX,EAX
00627DBB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00627DBE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00627DC1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00627DC4  B8 79 19 8C 02            MOV EAX,0x28c1979
00627DC9  85 D2                     TEST EDX,EDX
00627DCB  7C 10                     JL 0x00627ddd
00627DCD  F7 EA                     IMUL EDX
00627DCF  D1 FA                     SAR EDX,0x1
00627DD1  8B C2                     MOV EAX,EDX
00627DD3  C1 E8 1F                  SHR EAX,0x1f
00627DD6  03 D0                     ADD EDX,EAX
00627DD8  0F BF D2                  MOVSX EDX,DX
00627DDB  EB 0F                     JMP 0x00627dec
LAB_00627ddd:
00627DDD  F7 EA                     IMUL EDX
00627DDF  D1 FA                     SAR EDX,0x1
00627DE1  8B C2                     MOV EAX,EDX
00627DE3  C1 E8 1F                  SHR EAX,0x1f
00627DE6  03 D0                     ADD EDX,EAX
00627DE8  0F BF D2                  MOVSX EDX,DX
00627DEB  4A                        DEC EDX
LAB_00627dec:
00627DEC  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00627DEF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00627DF2  85 D2                     TEST EDX,EDX
00627DF4  B8 79 19 8C 02            MOV EAX,0x28c1979
00627DF9  7C 10                     JL 0x00627e0b
00627DFB  F7 EA                     IMUL EDX
00627DFD  D1 FA                     SAR EDX,0x1
00627DFF  8B C2                     MOV EAX,EDX
00627E01  C1 E8 1F                  SHR EAX,0x1f
00627E04  03 D0                     ADD EDX,EAX
00627E06  0F BF D2                  MOVSX EDX,DX
00627E09  EB 0F                     JMP 0x00627e1a
LAB_00627e0b:
00627E0B  F7 EA                     IMUL EDX
00627E0D  D1 FA                     SAR EDX,0x1
00627E0F  8B C2                     MOV EAX,EDX
00627E11  C1 E8 1F                  SHR EAX,0x1f
00627E14  03 D0                     ADD EDX,EAX
00627E16  0F BF D2                  MOVSX EDX,DX
00627E19  4A                        DEC EDX
LAB_00627e1a:
00627E1A  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00627E1D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00627E20  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00627E23  8D 4D F4                  LEA ECX,[EBP + -0xc]
00627E26  6A 00                     PUSH 0x0
00627E28  51                        PUSH ECX
00627E29  52                        PUSH EDX
00627E2A  6A 00                     PUSH 0x0
00627E2C  6A 02                     PUSH 0x2
00627E2E  B9 58 76 80 00            MOV ECX,0x807658
00627E33  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00627E36  E8 9D CD DD FF            CALL 0x00404bd8
00627E3B  8B E5                     MOV ESP,EBP
00627E3D  5D                        POP EBP
00627E3E  C2 0C 00                  RET 0xc
