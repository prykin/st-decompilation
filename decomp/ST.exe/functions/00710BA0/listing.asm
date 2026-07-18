FUN_00710ba0:
00710BA0  55                        PUSH EBP
00710BA1  8B EC                     MOV EBP,ESP
00710BA3  83 EC 54                  SUB ESP,0x54
00710BA6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00710BAB  53                        PUSH EBX
00710BAC  56                        PUSH ESI
00710BAD  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00710BB0  33 F6                     XOR ESI,ESI
00710BB2  57                        PUSH EDI
00710BB3  8D 55 B0                  LEA EDX,[EBP + -0x50]
00710BB6  8D 4D AC                  LEA ECX,[EBP + -0x54]
00710BB9  56                        PUSH ESI
00710BBA  52                        PUSH EDX
00710BBB  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00710BBE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00710BC4  E8 27 CC 01 00            CALL 0x0072d7f0
00710BC9  8B F8                     MOV EDI,EAX
00710BCB  83 C4 08                  ADD ESP,0x8
00710BCE  3B FE                     CMP EDI,ESI
00710BD0  0F 85 5F 01 00 00         JNZ 0x00710d35
00710BD6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00710BD9  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00710BDC  3B FE                     CMP EDI,ESI
00710BDE  74 09                     JZ 0x00710be9
00710BE0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00710BE3  3B C6                     CMP EAX,ESI
00710BE5  75 36                     JNZ 0x00710c1d
00710BE7  EB 2E                     JMP 0x00710c17
LAB_00710be9:
00710BE9  39 B3 A0 00 00 00         CMP dword ptr [EBX + 0xa0],ESI
00710BEF  74 23                     JZ 0x00710c14
00710BF1  8B 83 A8 00 00 00         MOV EAX,dword ptr [EBX + 0xa8]
00710BF7  3B C6                     CMP EAX,ESI
00710BF9  74 19                     JZ 0x00710c14
00710BFB  8B 8B AC 00 00 00         MOV ECX,dword ptr [EBX + 0xac]
00710C01  8B 90 AC 00 00 00         MOV EDX,dword ptr [EAX + 0xac]
00710C07  3B CA                     CMP ECX,EDX
00710C09  74 09                     JZ 0x00710c14
00710C0B  53                        PUSH EBX
00710C0C  E8 7F FB FF FF            CALL 0x00710790
00710C11  83 C4 04                  ADD ESP,0x4
LAB_00710c14:
00710C14  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
LAB_00710c17:
00710C17  57                        PUSH EDI
00710C18  E8 83 43 FA FF            CALL 0x006b4fa0
LAB_00710c1d:
00710C1D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00710C20  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00710C23  3B CE                     CMP ECX,ESI
00710C25  74 0F                     JZ 0x00710c36
00710C27  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00710C2A  3B C6                     CMP EAX,ESI
00710C2C  74 08                     JZ 0x00710c36
00710C2E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00710C31  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00710C34  EB 12                     JMP 0x00710c48
LAB_00710c36:
00710C36  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
00710C39  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00710C3C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00710C3F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00710C42  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
00710C45  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
LAB_00710c48:
00710C48  8D 4F 28                  LEA ECX,[EDI + 0x28]
00710C4B  6A 01                     PUSH 0x1
00710C4D  51                        PUSH ECX
00710C4E  57                        PUSH EDI
00710C4F  E8 8C 43 FA FF            CALL 0x006b4fe0
00710C54  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00710C57  33 D2                     XOR EDX,EDX
00710C59  66 8B 57 0E               MOV DX,word ptr [EDI + 0xe]
00710C5D  50                        PUSH EAX
00710C5E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00710C61  52                        PUSH EDX
00710C62  50                        PUSH EAX
00710C63  51                        PUSH ECX
00710C64  E8 57 44 FA FF            CALL 0x006b50c0
00710C69  8B F0                     MOV ESI,EAX
00710C6B  85 F6                     TEST ESI,ESI
00710C6D  75 18                     JNZ 0x00710c87
00710C6F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00710C75  68 9D 04 00 00            PUSH 0x49d
00710C7A  68 90 01 7F 00            PUSH 0x7f0190
00710C7F  52                        PUSH EDX
00710C80  6A CC                     PUSH -0x34
00710C82  E8 B9 51 F9 FF            CALL 0x006a5e40
LAB_00710c87:
00710C87  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00710C8A  85 C0                     TEST EAX,EAX
00710C8C  74 3E                     JZ 0x00710ccc
00710C8E  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00710C91  85 C0                     TEST EAX,EAX
00710C93  75 17                     JNZ 0x00710cac
00710C95  66 8B 46 0E               MOV AX,word ptr [ESI + 0xe]
00710C99  0F AF 46 04               IMUL EAX,dword ptr [ESI + 0x4]
00710C9D  83 C0 1F                  ADD EAX,0x1f
00710CA0  C1 E8 03                  SHR EAX,0x3
00710CA3  25 FC FF FF 1F            AND EAX,0x1ffffffc
00710CA8  0F AF 46 08               IMUL EAX,dword ptr [ESI + 0x8]
LAB_00710cac:
00710CAC  56                        PUSH ESI
00710CAD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00710CB0  E8 EB 42 FA FF            CALL 0x006b4fa0
00710CB5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00710CB8  8B F8                     MOV EDI,EAX
00710CBA  8B D1                     MOV EDX,ECX
00710CBC  33 C0                     XOR EAX,EAX
00710CBE  C1 E9 02                  SHR ECX,0x2
00710CC1  F3 AB                     STOSD.REP ES:EDI
00710CC3  8B CA                     MOV ECX,EDX
00710CC5  83 E1 03                  AND ECX,0x3
00710CC8  F3 AA                     STOSB.REP ES:EDI
00710CCA  EB 21                     JMP 0x00710ced
LAB_00710ccc:
00710CCC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00710CCF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00710CD2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00710CD5  50                        PUSH EAX
00710CD6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00710CD9  51                        PUSH ECX
00710CDA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00710CDD  52                        PUSH EDX
00710CDE  50                        PUSH EAX
00710CDF  51                        PUSH ECX
00710CE0  57                        PUSH EDI
00710CE1  6A 00                     PUSH 0x0
00710CE3  6A 00                     PUSH 0x0
00710CE5  6A 00                     PUSH 0x0
00710CE7  56                        PUSH ESI
00710CE8  E8 03 49 FA FF            CALL 0x006b55f0
LAB_00710ced:
00710CED  8B CB                     MOV ECX,EBX
00710CEF  E8 0C 02 00 00            CALL 0x00710f00
00710CF4  56                        PUSH ESI
00710CF5  89 73 72                  MOV dword ptr [EBX + 0x72],ESI
00710CF8  E8 A3 42 FA FF            CALL 0x006b4fa0
00710CFD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00710D00  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00710D03  89 43 76                  MOV dword ptr [EBX + 0x76],EAX
00710D06  33 C0                     XOR EAX,EAX
00710D08  89 53 68                  MOV dword ptr [EBX + 0x68],EDX
00710D0B  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00710D0E  C7 43 7A 01 00 00 00      MOV dword ptr [EBX + 0x7a],0x1
00710D15  89 43 60                  MOV dword ptr [EBX + 0x60],EAX
00710D18  89 43 64                  MOV dword ptr [EBX + 0x64],EAX
00710D1B  89 4B 6C                  MOV dword ptr [EBX + 0x6c],ECX
00710D1E  89 43 50                  MOV dword ptr [EBX + 0x50],EAX
00710D21  89 43 54                  MOV dword ptr [EBX + 0x54],EAX
00710D24  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00710D2A  8B C6                     MOV EAX,ESI
00710D2C  5F                        POP EDI
00710D2D  5E                        POP ESI
00710D2E  5B                        POP EBX
00710D2F  8B E5                     MOV ESP,EBP
00710D31  5D                        POP EBP
00710D32  C2 1C 00                  RET 0x1c
LAB_00710d35:
00710D35  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00710D38  68 38 02 7F 00            PUSH 0x7f0238
00710D3D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00710D42  57                        PUSH EDI
00710D43  56                        PUSH ESI
00710D44  68 AB 04 00 00            PUSH 0x4ab
00710D49  68 90 01 7F 00            PUSH 0x7f0190
00710D4E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00710D53  E8 78 C7 F9 FF            CALL 0x006ad4d0
00710D58  83 C4 18                  ADD ESP,0x18
00710D5B  85 C0                     TEST EAX,EAX
00710D5D  74 01                     JZ 0x00710d60
00710D5F  CC                        INT3
LAB_00710d60:
00710D60  68 AD 04 00 00            PUSH 0x4ad
00710D65  68 90 01 7F 00            PUSH 0x7f0190
00710D6A  56                        PUSH ESI
00710D6B  57                        PUSH EDI
00710D6C  E8 CF 50 F9 FF            CALL 0x006a5e40
00710D71  5F                        POP EDI
00710D72  5E                        POP ESI
00710D73  33 C0                     XOR EAX,EAX
00710D75  5B                        POP EBX
00710D76  8B E5                     MOV ESP,EBP
00710D78  5D                        POP EBP
00710D79  C2 1C 00                  RET 0x1c
