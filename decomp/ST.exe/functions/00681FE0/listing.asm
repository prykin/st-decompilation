FUN_00681fe0:
00681FE0  55                        PUSH EBP
00681FE1  8B EC                     MOV EBP,ESP
00681FE3  56                        PUSH ESI
00681FE4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00681FE7  33 D2                     XOR EDX,EDX
00681FE9  85 F6                     TEST ESI,ESI
00681FEB  7E 2D                     JLE 0x0068201a
00681FED  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681FF3  8B C1                     MOV EAX,ECX
00681FF5  C1 E0 04                  SHL EAX,0x4
00681FF8  03 C1                     ADD EAX,ECX
00681FFA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681FFD  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00682000  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00682003  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
LAB_00682006:
00682006  8A 84 8A C8 3B 81 00      MOV AL,byte ptr [EDX + ECX*0x4 + 0x813bc8]
0068200D  3C 01                     CMP AL,0x1
0068200F  74 04                     JZ 0x00682015
00682011  3C 04                     CMP AL,0x4
00682013  75 0D                     JNZ 0x00682022
LAB_00682015:
00682015  42                        INC EDX
00682016  3B D6                     CMP EDX,ESI
00682018  7C EC                     JL 0x00682006
LAB_0068201a:
0068201A  B8 01 00 00 00            MOV EAX,0x1
0068201F  5E                        POP ESI
00682020  5D                        POP EBP
00682021  C3                        RET
LAB_00682022:
00682022  33 C0                     XOR EAX,EAX
00682024  5E                        POP ESI
00682025  5D                        POP EBP
00682026  C3                        RET
