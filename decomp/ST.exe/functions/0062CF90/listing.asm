STManRub3C::AddNewRub3:
0062CF90  55                        PUSH EBP
0062CF91  8B EC                     MOV EBP,ESP
0062CF93  83 EC 70                  SUB ESP,0x70
0062CF96  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062CF99  53                        PUSH EBX
0062CF9A  56                        PUSH ESI
0062CF9B  57                        PUSH EDI
0062CF9C  85 C0                     TEST EAX,EAX
0062CF9E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062CFA1  C7 45 F4 FF FF FF FF      MOV dword ptr [EBP + -0xc],0xffffffff
0062CFA8  75 0C                     JNZ 0x0062cfb6
0062CFAA  83 C8 FF                  OR EAX,0xffffffff
0062CFAD  5F                        POP EDI
0062CFAE  5E                        POP ESI
0062CFAF  5B                        POP EBX
0062CFB0  8B E5                     MOV ESP,EBP
0062CFB2  5D                        POP EBP
0062CFB3  C2 04 00                  RET 0x4
LAB_0062cfb6:
0062CFB6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0062CFB9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0062CFBE  8D 55 94                  LEA EDX,[EBP + -0x6c]
0062CFC1  8D 4D 90                  LEA ECX,[EBP + -0x70]
0062CFC4  6A 00                     PUSH 0x0
0062CFC6  52                        PUSH EDX
0062CFC7  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0062CFCA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062CFD0  E8 1B 08 10 00            CALL 0x0072d7f0
0062CFD5  8B F0                     MOV ESI,EAX
0062CFD7  83 C4 08                  ADD ESP,0x8
0062CFDA  85 F6                     TEST ESI,ESI
0062CFDC  0F 85 94 00 00 00         JNZ 0x0062d076
0062CFE2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0062CFE5  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0062CFE8  8B 06                     MOV EAX,dword ptr [ESI]
0062CFEA  8B 4C 83 30               MOV ECX,dword ptr [EBX + EAX*0x4 + 0x30]
0062CFEE  85 C9                     TEST ECX,ECX
0062CFF0  75 13                     JNZ 0x0062d005
0062CFF2  6A 0A                     PUSH 0xa
0062CFF4  6A 20                     PUSH 0x20
0062CFF6  6A 0A                     PUSH 0xa
0062CFF8  6A 00                     PUSH 0x0
0062CFFA  E8 91 12 08 00            CALL 0x006ae290
0062CFFF  8B 0E                     MOV ECX,dword ptr [ESI]
0062D001  89 44 8B 30               MOV dword ptr [EBX + ECX*0x4 + 0x30],EAX
LAB_0062d005:
0062D005  8B 16                     MOV EDX,dword ptr [ESI]
0062D007  8B 44 93 30               MOV EAX,dword ptr [EBX + EDX*0x4 + 0x30]
0062D00B  85 C0                     TEST EAX,EAX
0062D00D  74 52                     JZ 0x0062d061
0062D00F  B9 08 00 00 00            MOV ECX,0x8
0062D014  33 C0                     XOR EAX,EAX
0062D016  8D 7D D4                  LEA EDI,[EBP + -0x2c]
0062D019  F3 AB                     STOSD.REP ES:EDI
0062D01B  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0062D01E  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0062D021  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0062D024  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0062D027  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0062D02A  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0062D02D  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0062D030  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0062D033  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0062D036  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0062D039  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0062D03C  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0062D03F  8B 0E                     MOV ECX,dword ptr [ESI]
0062D041  8D 45 D4                  LEA EAX,[EBP + -0x2c]
0062D044  8B 54 8B 30               MOV EDX,dword ptr [EBX + ECX*0x4 + 0x30]
0062D048  50                        PUSH EAX
0062D049  52                        PUSH EDX
0062D04A  E8 71 11 08 00            CALL 0x006ae1c0
0062D04F  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0062D052  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062D058  5F                        POP EDI
0062D059  5E                        POP ESI
0062D05A  5B                        POP EBX
0062D05B  8B E5                     MOV ESP,EBP
0062D05D  5D                        POP EBP
0062D05E  C2 04 00                  RET 0x4
LAB_0062d061:
0062D061  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0062D064  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0062D067  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062D06D  5F                        POP EDI
0062D06E  5E                        POP ESI
0062D06F  5B                        POP EBX
0062D070  8B E5                     MOV ESP,EBP
0062D072  5D                        POP EBP
0062D073  C2 04 00                  RET 0x4
LAB_0062d076:
0062D076  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0062D079  68 2C 14 7D 00            PUSH 0x7d142c
0062D07E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0062D083  56                        PUSH ESI
0062D084  6A 00                     PUSH 0x0
0062D086  68 86 00 00 00            PUSH 0x86
0062D08B  68 EC 13 7D 00            PUSH 0x7d13ec
0062D090  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062D096  E8 35 04 08 00            CALL 0x006ad4d0
0062D09B  83 C4 18                  ADD ESP,0x18
0062D09E  85 C0                     TEST EAX,EAX
0062D0A0  74 01                     JZ 0x0062d0a3
0062D0A2  CC                        INT3
LAB_0062d0a3:
0062D0A3  68 88 00 00 00            PUSH 0x88
0062D0A8  68 EC 13 7D 00            PUSH 0x7d13ec
0062D0AD  6A 00                     PUSH 0x0
0062D0AF  56                        PUSH ESI
0062D0B0  E8 8B 8D 07 00            CALL 0x006a5e40
0062D0B5  5F                        POP EDI
0062D0B6  5E                        POP ESI
0062D0B7  B8 FF FF 00 00            MOV EAX,0xffff
0062D0BC  5B                        POP EBX
0062D0BD  8B E5                     MOV ESP,EBP
0062D0BF  5D                        POP EBP
0062D0C0  C2 04 00                  RET 0x4
