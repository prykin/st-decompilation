FUN_00678d90:
00678D90  55                        PUSH EBP
00678D91  8B EC                     MOV EBP,ESP
00678D93  53                        PUSH EBX
00678D94  56                        PUSH ESI
00678D95  8B B1 95 06 00 00         MOV ESI,dword ptr [ECX + 0x695]
00678D9B  57                        PUSH EDI
00678D9C  33 D2                     XOR EDX,EDX
00678D9E  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
00678DA1  85 FF                     TEST EDI,EDI
00678DA3  7E 26                     JLE 0x00678dcb
00678DA5  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00678DA8  3B D7                     CMP EDX,EDI
LAB_00678daa:
00678DAA  73 0D                     JNC 0x00678db9
00678DAC  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00678DAF  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00678DB2  0F AF C2                  IMUL EAX,EDX
00678DB5  03 C1                     ADD EAX,ECX
00678DB7  EB 02                     JMP 0x00678dbb
LAB_00678db9:
00678DB9  33 C0                     XOR EAX,EAX
LAB_00678dbb:
00678DBB  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00678DBE  85 C9                     TEST ECX,ECX
00678DC0  74 04                     JZ 0x00678dc6
00678DC2  3B CB                     CMP ECX,EBX
00678DC4  74 0E                     JZ 0x00678dd4
LAB_00678dc6:
00678DC6  42                        INC EDX
00678DC7  3B D7                     CMP EDX,EDI
00678DC9  7C DF                     JL 0x00678daa
LAB_00678dcb:
00678DCB  5F                        POP EDI
00678DCC  5E                        POP ESI
00678DCD  33 C0                     XOR EAX,EAX
00678DCF  5B                        POP EBX
00678DD0  5D                        POP EBP
00678DD1  C2 04 00                  RET 0x4
LAB_00678dd4:
00678DD4  8B 00                     MOV EAX,dword ptr [EAX]
00678DD6  5F                        POP EDI
00678DD7  5E                        POP ESI
00678DD8  5B                        POP EBX
00678DD9  5D                        POP EBP
00678DDA  C2 04 00                  RET 0x4
