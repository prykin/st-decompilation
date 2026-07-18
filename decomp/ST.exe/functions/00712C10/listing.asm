FUN_00712c10:
00712C10  55                        PUSH EBP
00712C11  8B EC                     MOV EBP,ESP
00712C13  83 EC 54                  SUB ESP,0x54
00712C16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00712C1B  53                        PUSH EBX
00712C1C  56                        PUSH ESI
00712C1D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00712C20  33 F6                     XOR ESI,ESI
00712C22  57                        PUSH EDI
00712C23  8D 55 B0                  LEA EDX,[EBP + -0x50]
00712C26  8D 4D AC                  LEA ECX,[EBP + -0x54]
00712C29  56                        PUSH ESI
00712C2A  52                        PUSH EDX
00712C2B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00712C2E  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00712C31  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00712C34  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00712C37  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00712C3D  E8 AE AB 01 00            CALL 0x0072d7f0
00712C42  8B F8                     MOV EDI,EAX
00712C44  83 C4 08                  ADD ESP,0x8
00712C47  3B FE                     CMP EDI,ESI
00712C49  75 6E                     JNZ 0x00712cb9
00712C4B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00712C4E  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00712C51  50                        PUSH EAX
00712C52  8B CB                     MOV ECX,EBX
00712C54  E8 27 03 00 00            CALL 0x00712f80
00712C59  8B F8                     MOV EDI,EAX
00712C5B  3B FE                     CMP EDI,ESI
00712C5D  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00712C60  74 42                     JZ 0x00712ca4
00712C62  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00712C65  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00712C68  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00712C6B  51                        PUSH ECX
00712C6C  6A FF                     PUSH -0x1
00712C6E  56                        PUSH ESI
00712C6F  52                        PUSH EDX
00712C70  50                        PUSH EAX
00712C71  57                        PUSH EDI
00712C72  8B CB                     MOV ECX,EBX
00712C74  E8 77 F5 FF FF            CALL 0x007121f0
00712C79  8B F0                     MOV ESI,EAX
00712C7B  57                        PUSH EDI
00712C7C  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00712C7F  E8 EC 28 FA FF            CALL 0x006b5570
00712C84  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00712C87  56                        PUSH ESI
00712C88  51                        PUSH ECX
00712C89  8B CB                     MOV ECX,EBX
00712C8B  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00712C92  E8 E9 03 00 00            CALL 0x00713080
00712C97  85 F6                     TEST ESI,ESI
00712C99  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00712C9C  74 06                     JZ 0x00712ca4
00712C9E  56                        PUSH ESI
00712C9F  E8 CC 28 FA FF            CALL 0x006b5570
LAB_00712ca4:
00712CA4  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00712CA7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00712CAA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00712CB0  5F                        POP EDI
00712CB1  5E                        POP ESI
00712CB2  5B                        POP EBX
00712CB3  8B E5                     MOV ESP,EBP
00712CB5  5D                        POP EBP
00712CB6  C2 14 00                  RET 0x14
LAB_00712cb9:
00712CB9  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00712CBC  68 20 03 7F 00            PUSH 0x7f0320
00712CC1  68 CC 4C 7A 00            PUSH 0x7a4ccc
00712CC6  57                        PUSH EDI
00712CC7  56                        PUSH ESI
00712CC8  68 72 08 00 00            PUSH 0x872
00712CCD  68 90 01 7F 00            PUSH 0x7f0190
00712CD2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00712CD7  E8 F4 A7 F9 FF            CALL 0x006ad4d0
00712CDC  83 C4 18                  ADD ESP,0x18
00712CDF  85 C0                     TEST EAX,EAX
00712CE1  74 01                     JZ 0x00712ce4
00712CE3  CC                        INT3
LAB_00712ce4:
00712CE4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00712CE7  3B C6                     CMP EAX,ESI
00712CE9  74 0E                     JZ 0x00712cf9
00712CEB  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
00712CEE  74 09                     JZ 0x00712cf9
00712CF0  8D 4D FC                  LEA ECX,[EBP + -0x4]
00712CF3  51                        PUSH ECX
00712CF4  E8 67 83 F9 FF            CALL 0x006ab060
LAB_00712cf9:
00712CF9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00712CFC  3B C6                     CMP EAX,ESI
00712CFE  74 06                     JZ 0x00712d06
00712D00  50                        PUSH EAX
00712D01  E8 6A 28 FA FF            CALL 0x006b5570
LAB_00712d06:
00712D06  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00712D09  3B C6                     CMP EAX,ESI
00712D0B  74 06                     JZ 0x00712d13
00712D0D  50                        PUSH EAX
00712D0E  E8 5D 28 FA FF            CALL 0x006b5570
LAB_00712d13:
00712D13  68 78 08 00 00            PUSH 0x878
00712D18  68 90 01 7F 00            PUSH 0x7f0190
00712D1D  56                        PUSH ESI
00712D1E  57                        PUSH EDI
00712D1F  E8 1C 31 F9 FF            CALL 0x006a5e40
00712D24  5F                        POP EDI
00712D25  5E                        POP ESI
00712D26  33 C0                     XOR EAX,EAX
00712D28  5B                        POP EBX
00712D29  8B E5                     MOV ESP,EBP
00712D2B  5D                        POP EBP
00712D2C  C2 14 00                  RET 0x14
