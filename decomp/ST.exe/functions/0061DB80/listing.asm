FUN_0061db80:
0061DB80  55                        PUSH EBP
0061DB81  8B EC                     MOV EBP,ESP
0061DB83  83 EC 4C                  SUB ESP,0x4c
0061DB86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0061DB8B  56                        PUSH ESI
0061DB8C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0061DB8F  57                        PUSH EDI
0061DB90  8D 55 B8                  LEA EDX,[EBP + -0x48]
0061DB93  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0061DB96  6A 00                     PUSH 0x0
0061DB98  52                        PUSH EDX
0061DB99  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0061DB9C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0061DBA2  E8 49 FC 10 00            CALL 0x0072d7f0
0061DBA7  8B F0                     MOV ESI,EAX
0061DBA9  83 C4 08                  ADD ESP,0x8
0061DBAC  85 F6                     TEST ESI,ESI
0061DBAE  0F 85 DE 00 00 00         JNZ 0x0061dc92
0061DBB4  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0061DBB7  50                        PUSH EAX
0061DBB8  50                        PUSH EAX
0061DBB9  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
0061DBBF  6A 01                     PUSH 0x1
0061DBC1  50                        PUSH EAX
0061DBC2  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0061DBC5  6A FF                     PUSH -0x1
0061DBC7  8B 0C 85 64 01 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d0164]
0061DBCE  51                        PUSH ECX
0061DBCF  6A 00                     PUSH 0x0
0061DBD1  52                        PUSH EDX
0061DBD2  E8 19 BF 0E 00            CALL 0x00709af0
0061DBD7  83 C4 20                  ADD ESP,0x20
0061DBDA  8D 4D FC                  LEA ECX,[EBP + -0x4]
0061DBDD  6A 00                     PUSH 0x0
0061DBDF  51                        PUSH ECX
0061DBE0  50                        PUSH EAX
0061DBE1  8B CE                     MOV ECX,ESI
0061DBE3  E8 EB 74 DE FF            CALL 0x004050d3
0061DBE8  8B 96 93 00 00 00         MOV EDX,dword ptr [ESI + 0x93]
0061DBEE  C1 E2 04                  SHL EDX,0x4
0061DBF1  52                        PUSH EDX
0061DBF2  E8 79 D0 08 00            CALL 0x006aac70
0061DBF7  8B 8E 93 00 00 00         MOV ECX,dword ptr [ESI + 0x93]
0061DBFD  8B F8                     MOV EDI,EAX
0061DBFF  C1 E1 04                  SHL ECX,0x4
0061DC02  8B D1                     MOV EDX,ECX
0061DC04  33 C0                     XOR EAX,EAX
0061DC06  C1 E9 02                  SHR ECX,0x2
0061DC09  89 7E 57                  MOV dword ptr [ESI + 0x57],EDI
0061DC0C  F3 AB                     STOSD.REP ES:EDI
0061DC0E  8B CA                     MOV ECX,EDX
0061DC10  83 E1 03                  AND ECX,0x3
0061DC13  F3 AA                     STOSB.REP ES:EDI
0061DC15  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
0061DC1B  33 C9                     XOR ECX,ECX
0061DC1D  85 C0                     TEST EAX,EAX
0061DC1F  7E 2A                     JLE 0x0061dc4b
LAB_0061dc21:
0061DC21  8B 46 57                  MOV EAX,dword ptr [ESI + 0x57]
0061DC24  C7 04 88 FF FF FF FF      MOV dword ptr [EAX + ECX*0x4],0xffffffff
0061DC2B  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
0061DC31  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
0061DC34  03 C2                     ADD EAX,EDX
0061DC36  8B 56 57                  MOV EDX,dword ptr [ESI + 0x57]
0061DC39  41                        INC ECX
0061DC3A  C7 04 82 FF FF FF FF      MOV dword ptr [EDX + EAX*0x4],0xffffffff
0061DC41  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
0061DC47  3B C8                     CMP ECX,EAX
0061DC49  7C D6                     JL 0x0061dc21
LAB_0061dc4b:
0061DC4B  8B 46 57                  MOV EAX,dword ptr [ESI + 0x57]
0061DC4E  6A 0A                     PUSH 0xa
0061DC50  6A 30                     PUSH 0x30
0061DC52  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0061DC58  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
0061DC5E  8B 56 57                  MOV EDX,dword ptr [ESI + 0x57]
0061DC61  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0061DC64  C7 04 8A 00 00 00 00      MOV dword ptr [EDX + ECX*0x4],0x0
0061DC6B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061DC6E  50                        PUSH EAX
0061DC6F  6A 00                     PUSH 0x0
0061DC71  E8 1A 06 09 00            CALL 0x006ae290
0061DC76  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0061DC79  89 86 A3 00 00 00         MOV dword ptr [ESI + 0xa3],EAX
0061DC7F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0061DC85  B8 01 00 00 00            MOV EAX,0x1
0061DC8A  5F                        POP EDI
0061DC8B  5E                        POP ESI
0061DC8C  8B E5                     MOV ESP,EBP
0061DC8E  5D                        POP EBP
0061DC8F  C2 04 00                  RET 0x4
LAB_0061dc92:
0061DC92  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0061DC95  68 F0 01 7D 00            PUSH 0x7d01f0
0061DC9A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0061DC9F  56                        PUSH ESI
0061DCA0  6A 00                     PUSH 0x0
0061DCA2  68 3B 01 00 00            PUSH 0x13b
0061DCA7  68 B0 01 7D 00            PUSH 0x7d01b0
0061DCAC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0061DCB2  E8 19 F8 08 00            CALL 0x006ad4d0
0061DCB7  83 C4 18                  ADD ESP,0x18
0061DCBA  85 C0                     TEST EAX,EAX
0061DCBC  74 01                     JZ 0x0061dcbf
0061DCBE  CC                        INT3
LAB_0061dcbf:
0061DCBF  68 3D 01 00 00            PUSH 0x13d
0061DCC4  68 B0 01 7D 00            PUSH 0x7d01b0
0061DCC9  6A 00                     PUSH 0x0
0061DCCB  56                        PUSH ESI
0061DCCC  E8 6F 81 08 00            CALL 0x006a5e40
0061DCD1  5F                        POP EDI
0061DCD2  B8 FF FF 00 00            MOV EAX,0xffff
0061DCD7  5E                        POP ESI
0061DCD8  8B E5                     MOV ESP,EBP
0061DCDA  5D                        POP EBP
0061DCDB  C2 04 00                  RET 0x4
