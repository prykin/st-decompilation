FUN_00681f70:
00681F70  55                        PUSH EBP
00681F71  8B EC                     MOV EBP,ESP
00681F73  56                        PUSH ESI
00681F74  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00681F77  33 D2                     XOR EDX,EDX
00681F79  85 F6                     TEST ESI,ESI
00681F7B  7E 2D                     JLE 0x00681faa
00681F7D  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681F83  8B C1                     MOV EAX,ECX
00681F85  C1 E0 04                  SHL EAX,0x4
00681F88  03 C1                     ADD EAX,ECX
00681F8A  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681F8D  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681F90  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681F93  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
LAB_00681f96:
00681F96  8A 84 8A C8 3B 81 00      MOV AL,byte ptr [EDX + ECX*0x4 + 0x813bc8]
00681F9D  3C 02                     CMP AL,0x2
00681F9F  74 04                     JZ 0x00681fa5
00681FA1  3C 04                     CMP AL,0x4
00681FA3  75 0D                     JNZ 0x00681fb2
LAB_00681fa5:
00681FA5  42                        INC EDX
00681FA6  3B D6                     CMP EDX,ESI
00681FA8  7C EC                     JL 0x00681f96
LAB_00681faa:
00681FAA  B8 01 00 00 00            MOV EAX,0x1
00681FAF  5E                        POP ESI
00681FB0  5D                        POP EBP
00681FB1  C3                        RET
LAB_00681fb2:
00681FB2  33 C0                     XOR EAX,EAX
00681FB4  5E                        POP ESI
00681FB5  5D                        POP EBP
00681FB6  C3                        RET
