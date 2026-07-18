FUN_005a0ff0:
005A0FF0  55                        PUSH EBP
005A0FF1  8B EC                     MOV EBP,ESP
005A0FF3  83 EC 58                  SUB ESP,0x58
005A0FF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A0FFB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005A0FFE  56                        PUSH ESI
005A0FFF  8D 55 AC                  LEA EDX,[EBP + -0x54]
005A1002  8D 4D A8                  LEA ECX,[EBP + -0x58]
005A1005  6A 00                     PUSH 0x0
005A1007  52                        PUSH EDX
005A1008  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
005A100B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A1011  E8 DA C7 18 00            CALL 0x0072d7f0
005A1016  8B F0                     MOV ESI,EAX
005A1018  83 C4 08                  ADD ESP,0x8
005A101B  85 F6                     TEST ESI,ESI
005A101D  0F 85 A3 00 00 00         JNZ 0x005a10c6
005A1023  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A1029  85 F6                     TEST ESI,ESI
005A102B  74 4D                     JZ 0x005a107a
005A102D  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A1033  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A1039  50                        PUSH EAX
005A103A  51                        PUSH ECX
005A103B  6A 00                     PUSH 0x0
005A103D  8B CE                     MOV ECX,ESI
005A103F  C6 86 93 04 00 00 01      MOV byte ptr [ESI + 0x493],0x1
005A1046  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A104F  E8 2A 40 E6 FF            CALL 0x0040507e
005A1054  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A105A  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A1060  52                        PUSH EDX
005A1061  50                        PUSH EAX
005A1062  8B CE                     MOV ECX,ESI
005A1064  E8 B5 13 E6 FF            CALL 0x0040241e
005A1069  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A1070  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a107a:
005A107A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005A107D  8B CE                     MOV ECX,ESI
005A107F  8B 16                     MOV EDX,dword ptr [ESI]
005A1081  FF 52 08                  CALL dword ptr [EDX + 0x8]
005A1084  C6 86 61 1A 00 00 02      MOV byte ptr [ESI + 0x1a61],0x2
005A108B  8B B6 5B 1A 00 00         MOV ESI,dword ptr [ESI + 0x1a5b]
005A1091  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005A1097  85 C0                     TEST EAX,EAX
005A1099  74 1D                     JZ 0x005a10b8
005A109B  33 C0                     XOR EAX,EAX
005A109D  8D 4D EC                  LEA ECX,[EBP + -0x14]
005A10A0  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005A10A3  51                        PUSH ECX
005A10A4  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005A10A7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005A10AA  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
005A10AD  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005A10B3  E8 E3 09 E6 FF            CALL 0x00401a9b
LAB_005a10b8:
005A10B8  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
005A10BB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A10C1  5E                        POP ESI
005A10C2  8B E5                     MOV ESP,EBP
005A10C4  5D                        POP EBP
005A10C5  C3                        RET
LAB_005a10c6:
005A10C6  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
005A10C9  68 F4 C3 7C 00            PUSH 0x7cc3f4
005A10CE  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A10D3  56                        PUSH ESI
005A10D4  6A 00                     PUSH 0x0
005A10D6  68 18 09 00 00            PUSH 0x918
005A10DB  68 70 BF 7C 00            PUSH 0x7cbf70
005A10E0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A10E5  E8 E6 C3 10 00            CALL 0x006ad4d0
005A10EA  83 C4 18                  ADD ESP,0x18
005A10ED  85 C0                     TEST EAX,EAX
005A10EF  74 01                     JZ 0x005a10f2
005A10F1  CC                        INT3
LAB_005a10f2:
005A10F2  68 18 09 00 00            PUSH 0x918
005A10F7  68 70 BF 7C 00            PUSH 0x7cbf70
005A10FC  6A 00                     PUSH 0x0
005A10FE  56                        PUSH ESI
005A10FF  E8 3C 4D 10 00            CALL 0x006a5e40
005A1104  5E                        POP ESI
005A1105  8B E5                     MOV ESP,EBP
005A1107  5D                        POP EBP
005A1108  C3                        RET
