FUN_0052db90:
0052DB90  55                        PUSH EBP
0052DB91  8B EC                     MOV EBP,ESP
0052DB93  83 EC 48                  SUB ESP,0x48
0052DB96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052DB9B  53                        PUSH EBX
0052DB9C  56                        PUSH ESI
0052DB9D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0052DBA0  57                        PUSH EDI
0052DBA1  8D 55 BC                  LEA EDX,[EBP + -0x44]
0052DBA4  8D 4D B8                  LEA ECX,[EBP + -0x48]
0052DBA7  6A 00                     PUSH 0x0
0052DBA9  52                        PUSH EDX
0052DBAA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0052DBAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052DBB3  E8 38 FC 1F 00            CALL 0x0072d7f0
0052DBB8  8B F0                     MOV ESI,EAX
0052DBBA  83 C4 08                  ADD ESP,0x8
0052DBBD  85 F6                     TEST ESI,ESI
0052DBBF  0F 85 C1 00 00 00         JNZ 0x0052dc86
0052DBC5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0052DBC8  8A 83 9C 00 00 00         MOV AL,byte ptr [EBX + 0x9c]
0052DBCE  84 C0                     TEST AL,AL
0052DBD0  0F 86 A0 00 00 00         JBE 0x0052dc76
0052DBD6  8B 83 98 00 00 00         MOV EAX,dword ptr [EBX + 0x98]
0052DBDC  85 C0                     TEST EAX,EAX
0052DBDE  74 06                     JZ 0x0052dbe6
0052DBE0  50                        PUSH EAX
0052DBE1  E8 8A 79 18 00            CALL 0x006b5570
LAB_0052dbe6:
0052DBE6  6A 0A                     PUSH 0xa
0052DBE8  6A 0A                     PUSH 0xa
0052DBEA  6A 00                     PUSH 0x0
0052DBEC  E8 FF 78 18 00            CALL 0x006b54f0
0052DBF1  89 83 98 00 00 00         MOV dword ptr [EBX + 0x98],EAX
0052DBF7  8B 83 90 00 00 00         MOV EAX,dword ptr [EBX + 0x90]
0052DBFD  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
0052DC00  85 F6                     TEST ESI,ESI
0052DC02  75 18                     JNZ 0x0052dc1c
0052DC04  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
0052DC08  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
0052DC0C  83 C6 1F                  ADD ESI,0x1f
0052DC0F  C1 EE 03                  SHR ESI,0x3
0052DC12  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
0052DC18  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_0052dc1c:
0052DC1C  50                        PUSH EAX
0052DC1D  E8 7E 73 18 00            CALL 0x006b4fa0
0052DC22  8B CE                     MOV ECX,ESI
0052DC24  8B F8                     MOV EDI,EAX
0052DC26  8B D1                     MOV EDX,ECX
0052DC28  B8 89 89 89 89            MOV EAX,0x89898989
0052DC2D  C1 E9 02                  SHR ECX,0x2
0052DC30  F3 AB                     STOSD.REP ES:EDI
0052DC32  8B CA                     MOV ECX,EDX
0052DC34  8D 73 18                  LEA ESI,[EBX + 0x18]
0052DC37  83 E1 03                  AND ECX,0x3
0052DC3A  F3 AA                     STOSB.REP ES:EDI
0052DC3C  BF 0F 00 00 00            MOV EDI,0xf
LAB_0052dc41:
0052DC41  C7 46 3C 00 00 00 00      MOV dword ptr [ESI + 0x3c],0x0
0052DC48  8B 06                     MOV EAX,dword ptr [ESI]
0052DC4A  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052DC50  6A 13                     PUSH 0x13
0052DC52  6A 00                     PUSH 0x0
0052DC54  50                        PUSH EAX
0052DC55  51                        PUSH ECX
0052DC56  E8 A5 4B 18 00            CALL 0x006b2800
0052DC5B  8B 16                     MOV EDX,dword ptr [ESI]
0052DC5D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0052DC62  52                        PUSH EDX
0052DC63  50                        PUSH EAX
0052DC64  E8 87 5E 18 00            CALL 0x006b3af0
0052DC69  83 C6 04                  ADD ESI,0x4
0052DC6C  4F                        DEC EDI
0052DC6D  75 D2                     JNZ 0x0052dc41
0052DC6F  C6 83 9C 00 00 00 00      MOV byte ptr [EBX + 0x9c],0x0
LAB_0052dc76:
0052DC76  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0052DC79  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052DC7F  5F                        POP EDI
0052DC80  5E                        POP ESI
0052DC81  5B                        POP EBX
0052DC82  8B E5                     MOV ESP,EBP
0052DC84  5D                        POP EBP
0052DC85  C3                        RET
LAB_0052dc86:
0052DC86  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0052DC89  68 2C 70 7C 00            PUSH 0x7c702c
0052DC8E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052DC93  56                        PUSH ESI
0052DC94  6A 00                     PUSH 0x0
0052DC96  68 A8 00 00 00            PUSH 0xa8
0052DC9B  68 84 6F 7C 00            PUSH 0x7c6f84
0052DCA0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052DCA6  E8 25 F8 17 00            CALL 0x006ad4d0
0052DCAB  83 C4 18                  ADD ESP,0x18
0052DCAE  85 C0                     TEST EAX,EAX
0052DCB0  74 01                     JZ 0x0052dcb3
0052DCB2  CC                        INT3
LAB_0052dcb3:
0052DCB3  68 A8 00 00 00            PUSH 0xa8
0052DCB8  68 84 6F 7C 00            PUSH 0x7c6f84
0052DCBD  6A 00                     PUSH 0x0
0052DCBF  56                        PUSH ESI
0052DCC0  E8 7B 81 17 00            CALL 0x006a5e40
0052DCC5  5F                        POP EDI
0052DCC6  5E                        POP ESI
0052DCC7  5B                        POP EBX
0052DCC8  8B E5                     MOV ESP,EBP
0052DCCA  5D                        POP EBP
0052DCCB  C3                        RET
