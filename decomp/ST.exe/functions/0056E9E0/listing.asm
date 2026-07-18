FUN_0056e9e0:
0056E9E0  55                        PUSH EBP
0056E9E1  8B EC                     MOV EBP,ESP
0056E9E3  81 EC 5C 01 00 00         SUB ESP,0x15c
0056E9E9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0056E9EC  53                        PUSH EBX
0056E9ED  B8 01 00 00 00            MOV EAX,0x1
0056E9F2  56                        PUSH ESI
0056E9F3  85 D2                     TEST EDX,EDX
0056E9F5  57                        PUSH EDI
0056E9F6  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0056E9F9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0056E9FC  74 0C                     JZ 0x0056ea0a
0056E9FE  88 81 63 11 00 00         MOV byte ptr [ECX + 0x1163],AL
0056EA04  89 81 0E 7D 00 00         MOV dword ptr [ECX + 0x7d0e],EAX
LAB_0056ea0a:
0056EA0A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056EA0F  8D 55 AC                  LEA EDX,[EBP + -0x54]
0056EA12  8D 4D A8                  LEA ECX,[EBP + -0x58]
0056EA15  6A 00                     PUSH 0x0
0056EA17  52                        PUSH EDX
0056EA18  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0056EA1B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056EA21  E8 CA ED 1B 00            CALL 0x0072d7f0
0056EA26  83 C4 08                  ADD ESP,0x8
0056EA29  85 C0                     TEST EAX,EAX
0056EA2B  0F 85 2B 01 00 00         JNZ 0x0056eb5c
0056EA31  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0056EA34  6A 00                     PUSH 0x0
0056EA36  6A 00                     PUSH 0x0
0056EA38  6A 00                     PUSH 0x0
0056EA3A  8D 86 F6 76 00 00         LEA EAX,[ESI + 0x76f6]
0056EA40  50                        PUSH EAX
0056EA41  68 45 03 00 00            PUSH 0x345
0056EA46  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0056EA49  E8 72 24 18 00            CALL 0x006f0ec0
0056EA4E  8B F8                     MOV EDI,EAX
0056EA50  8B 86 A7 4E 00 00         MOV EAX,dword ptr [ESI + 0x4ea7]
0056EA56  83 C4 14                  ADD ESP,0x14
0056EA59  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0056EA5C  85 C0                     TEST EAX,EAX
0056EA5E  74 06                     JZ 0x0056ea66
0056EA60  50                        PUSH EAX
0056EA61  E8 0A 6B 14 00            CALL 0x006b5570
LAB_0056ea66:
0056EA66  A1 74 B0 79 00            MOV EAX,[0x0079b074]
0056EA6B  6A 00                     PUSH 0x0
0056EA6D  50                        PUSH EAX
0056EA6E  57                        PUSH EDI
0056EA6F  E8 9C BF 1A 00            CALL 0x0071aa10
0056EA74  83 C4 0C                  ADD ESP,0xc
0056EA77  89 86 A7 4E 00 00         MOV dword ptr [ESI + 0x4ea7],EAX
0056EA7D  85 C0                     TEST EAX,EAX
0056EA7F  75 10                     JNZ 0x0056ea91
0056EA81  6A 0A                     PUSH 0xa
0056EA83  6A 0A                     PUSH 0xa
0056EA85  50                        PUSH EAX
0056EA86  E8 65 6A 14 00            CALL 0x006b54f0
0056EA8B  89 86 A7 4E 00 00         MOV dword ptr [ESI + 0x4ea7],EAX
LAB_0056ea91:
0056EA91  8B 86 AB 4E 00 00         MOV EAX,dword ptr [ESI + 0x4eab]
0056EA97  85 C0                     TEST EAX,EAX
0056EA99  74 06                     JZ 0x0056eaa1
0056EA9B  50                        PUSH EAX
0056EA9C  E8 CF 6A 14 00            CALL 0x006b5570
LAB_0056eaa1:
0056EAA1  8B 0D 78 B0 79 00         MOV ECX,dword ptr [0x0079b078]
0056EAA7  6A 00                     PUSH 0x0
0056EAA9  51                        PUSH ECX
0056EAAA  57                        PUSH EDI
0056EAAB  E8 60 BF 1A 00            CALL 0x0071aa10
0056EAB0  83 C4 0C                  ADD ESP,0xc
0056EAB3  89 86 AB 4E 00 00         MOV dword ptr [ESI + 0x4eab],EAX
0056EAB9  85 C0                     TEST EAX,EAX
0056EABB  75 10                     JNZ 0x0056eacd
0056EABD  6A 0A                     PUSH 0xa
0056EABF  6A 0A                     PUSH 0xa
0056EAC1  50                        PUSH EAX
0056EAC2  E8 29 6A 14 00            CALL 0x006b54f0
0056EAC7  89 86 AB 4E 00 00         MOV dword ptr [ESI + 0x4eab],EAX
LAB_0056eacd:
0056EACD  8D 9E A3 4D 00 00         LEA EBX,[ESI + 0x4da3]
0056EAD3  B9 41 00 00 00            MOV ECX,0x41
0056EAD8  33 C0                     XOR EAX,EAX
0056EADA  8B FB                     MOV EDI,EBX
0056EADC  F3 AB                     STOSD.REP ES:EDI
0056EADE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0056EAE1  50                        PUSH EAX
0056EAE2  A1 70 B0 79 00            MOV EAX,[0x0079b070]
0056EAE7  8D 55 F0                  LEA EDX,[EBP + -0x10]
0056EAEA  52                        PUSH EDX
0056EAEB  50                        PUSH EAX
0056EAEC  6A 0C                     PUSH 0xc
0056EAEE  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0056EAF1  E8 EA 31 18 00            CALL 0x006f1ce0
0056EAF6  85 C0                     TEST EAX,EAX
0056EAF8  74 05                     JZ 0x0056eaff
0056EAFA  80 3B 00                  CMP byte ptr [EBX],0x0
0056EAFD  75 3C                     JNZ 0x0056eb3b
LAB_0056eaff:
0056EAFF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0056EB02  8D 8D A4 FE FF FF         LEA ECX,[EBP + 0xfffffea4]
0056EB08  6A 00                     PUSH 0x0
0056EB0A  51                        PUSH ECX
0056EB0B  6A 00                     PUSH 0x0
0056EB0D  6A 00                     PUSH 0x0
0056EB0F  52                        PUSH EDX
0056EB10  E8 1B FC 1B 00            CALL 0x0072e730
0056EB15  8D BD A4 FE FF FF         LEA EDI,[EBP + 0xfffffea4]
0056EB1B  83 C9 FF                  OR ECX,0xffffffff
0056EB1E  33 C0                     XOR EAX,EAX
0056EB20  83 C4 14                  ADD ESP,0x14
0056EB23  F2 AE                     SCASB.REPNE ES:EDI
0056EB25  F7 D1                     NOT ECX
0056EB27  2B F9                     SUB EDI,ECX
0056EB29  8B C1                     MOV EAX,ECX
0056EB2B  8B F7                     MOV ESI,EDI
0056EB2D  8B FB                     MOV EDI,EBX
0056EB2F  C1 E9 02                  SHR ECX,0x2
0056EB32  F3 A5                     MOVSD.REP ES:EDI,ESI
0056EB34  8B C8                     MOV ECX,EAX
0056EB36  83 E1 03                  AND ECX,0x3
0056EB39  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0056eb3b:
0056EB3B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0056EB3E  51                        PUSH ECX
0056EB3F  E8 2C 26 18 00            CALL 0x006f1170
0056EB44  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0056EB47  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0056EB4A  83 C4 04                  ADD ESP,0x4
0056EB4D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056EB53  5F                        POP EDI
0056EB54  5E                        POP ESI
0056EB55  5B                        POP EBX
0056EB56  8B E5                     MOV ESP,EBP
0056EB58  5D                        POP EBP
0056EB59  C2 04 00                  RET 0x4
LAB_0056eb5c:
0056EB5C  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0056EB5F  5F                        POP EDI
0056EB60  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056EB65  5E                        POP ESI
0056EB66  33 C0                     XOR EAX,EAX
0056EB68  5B                        POP EBX
0056EB69  8B E5                     MOV ESP,EBP
0056EB6B  5D                        POP EBP
0056EB6C  C2 04 00                  RET 0x4
