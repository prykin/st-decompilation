FUN_005f1fa0:
005F1FA0  55                        PUSH EBP
005F1FA1  8B EC                     MOV EBP,ESP
005F1FA3  83 EC 18                  SUB ESP,0x18
005F1FA6  53                        PUSH EBX
005F1FA7  56                        PUSH ESI
005F1FA8  8B F1                     MOV ESI,ECX
005F1FAA  57                        PUSH EDI
005F1FAB  33 FF                     XOR EDI,EDI
005F1FAD  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
005F1FB0  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
005F1FB3  3B C7                     CMP EAX,EDI
005F1FB5  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
005F1FB8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005F1FBB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005F1FBE  74 20                     JZ 0x005f1fe0
005F1FC0  8D 4D FC                  LEA ECX,[EBP + -0x4]
005F1FC3  51                        PUSH ECX
005F1FC4  50                        PUSH EAX
005F1FC5  E8 56 E0 0B 00            CALL 0x006b0020
005F1FCA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005F1FCD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F1FD0  3B C7                     CMP EAX,EDI
005F1FD2  75 0C                     JNZ 0x005f1fe0
005F1FD4  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
005F1FD7  52                        PUSH EDX
005F1FD8  E8 33 C1 0B 00            CALL 0x006ae110
005F1FDD  89 7E 38                  MOV dword ptr [ESI + 0x38],EDI
LAB_005f1fe0:
005F1FE0  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
005F1FE3  3B C7                     CMP EAX,EDI
005F1FE5  74 20                     JZ 0x005f2007
005F1FE7  8D 4D F8                  LEA ECX,[EBP + -0x8]
005F1FEA  51                        PUSH ECX
005F1FEB  50                        PUSH EAX
005F1FEC  E8 2F E0 0B 00            CALL 0x006b0020
005F1FF1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005F1FF4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F1FF7  3B C7                     CMP EAX,EDI
005F1FF9  75 0C                     JNZ 0x005f2007
005F1FFB  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
005F1FFE  52                        PUSH EDX
005F1FFF  E8 0C C1 0B 00            CALL 0x006ae110
005F2004  89 7E 3C                  MOV dword ptr [ESI + 0x3c],EDI
LAB_005f2007:
005F2007  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F200A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F200D  8D 44 08 30               LEA EAX,[EAX + ECX*0x1 + 0x30]
005F2011  50                        PUSH EAX
005F2012  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005F2015  E8 56 8C 0B 00            CALL 0x006aac70
005F201A  8B 15 88 17 81 00         MOV EDX,dword ptr [0x00811788]
005F2020  C7 46 2C 02 00 00 00      MOV dword ptr [ESI + 0x2c],0x2
005F2027  89 56 34                  MOV dword ptr [ESI + 0x34],EDX
005F202A  B9 0A 00 00 00            MOV ECX,0xa
005F202F  83 C6 20                  ADD ESI,0x20
005F2032  8B F8                     MOV EDI,EAX
005F2034  F3 A5                     MOVSD.REP ES:EDI,ESI
005F2036  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F2039  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005F203C  85 C9                     TEST ECX,ECX
005F203E  8D 58 28                  LEA EBX,[EAX + 0x28]
005F2041  74 2C                     JZ 0x005f206f
005F2043  89 0B                     MOV dword ptr [EBX],ECX
005F2045  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F2048  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005F204B  83 C3 04                  ADD EBX,0x4
005F204E  8B C1                     MOV EAX,ECX
005F2050  8B FB                     MOV EDI,EBX
005F2052  C1 E9 02                  SHR ECX,0x2
005F2055  F3 A5                     MOVSD.REP ES:EDI,ESI
005F2057  8B C8                     MOV ECX,EAX
005F2059  83 E1 03                  AND ECX,0x3
005F205C  F3 A4                     MOVSB.REP ES:EDI,ESI
005F205E  8D 4D F4                  LEA ECX,[EBP + -0xc]
005F2061  51                        PUSH ECX
005F2062  E8 F9 8F 0B 00            CALL 0x006ab060
005F2067  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F206A  03 D8                     ADD EBX,EAX
005F206C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_005f206f:
005F206F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F2072  85 C9                     TEST ECX,ECX
005F2074  74 36                     JZ 0x005f20ac
005F2076  89 0B                     MOV dword ptr [EBX],ECX
005F2078  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F207B  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005F207E  8B D1                     MOV EDX,ECX
005F2080  8D 7B 04                  LEA EDI,[EBX + 0x4]
005F2083  8D 45 F0                  LEA EAX,[EBP + -0x10]
005F2086  C1 E9 02                  SHR ECX,0x2
005F2089  F3 A5                     MOVSD.REP ES:EDI,ESI
005F208B  8B CA                     MOV ECX,EDX
005F208D  50                        PUSH EAX
005F208E  83 E1 03                  AND ECX,0x3
005F2091  F3 A4                     MOVSB.REP ES:EDI,ESI
005F2093  E8 C8 8F 0B 00            CALL 0x006ab060
005F2098  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F209B  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005F209E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005F20A1  5F                        POP EDI
005F20A2  5E                        POP ESI
005F20A3  89 11                     MOV dword ptr [ECX],EDX
005F20A5  5B                        POP EBX
005F20A6  8B E5                     MOV ESP,EBP
005F20A8  5D                        POP EBP
005F20A9  C2 04 00                  RET 0x4
LAB_005f20ac:
005F20AC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F20AF  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005F20B2  5F                        POP EDI
005F20B3  5E                        POP ESI
005F20B4  89 11                     MOV dword ptr [ECX],EDX
005F20B6  5B                        POP EBX
005F20B7  8B E5                     MOV ESP,EBP
005F20B9  5D                        POP EBP
005F20BA  C2 04 00                  RET 0x4
