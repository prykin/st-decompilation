PanelTy::PaintTxtBut:
00538BA0  55                        PUSH EBP
00538BA1  8B EC                     MOV EBP,ESP
00538BA3  83 EC 58                  SUB ESP,0x58
00538BA6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00538BA9  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00538BAC  53                        PUSH EBX
00538BAD  56                        PUSH ESI
00538BAE  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00538BB1  57                        PUSH EDI
00538BB2  85 D2                     TEST EDX,EDX
00538BB4  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00538BB7  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00538BBE  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00538BC1  74 11                     JZ 0x00538bd4
00538BC3  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
00538BC6  85 D2                     TEST EDX,EDX
00538BC8  8B 10                     MOV EDX,dword ptr [EAX]
00538BCA  75 0A                     JNZ 0x00538bd6
00538BCC  8B 35 30 67 80 00         MOV ESI,dword ptr [0x00806730]
00538BD2  EB 05                     JMP 0x00538bd9
LAB_00538bd4:
00538BD4  8B 10                     MOV EDX,dword ptr [EAX]
LAB_00538bd6:
00538BD6  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
LAB_00538bd9:
00538BD9  2B D6                     SUB EDX,ESI
00538BDB  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00538BDE  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00538BE1  85 D2                     TEST EDX,EDX
00538BE3  74 21                     JZ 0x00538c06
00538BE5  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
00538BE8  85 D2                     TEST EDX,EDX
00538BEA  75 0D                     JNZ 0x00538bf9
00538BEC  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00538BEF  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
00538BF5  2B C1                     SUB EAX,ECX
00538BF7  EB 15                     JMP 0x00538c0e
LAB_00538bf9:
00538BF9  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00538BFC  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
00538BFF  2B D0                     SUB EDX,EAX
00538C01  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00538C04  EB 0B                     JMP 0x00538c11
LAB_00538c06:
00538C06  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00538C09  8B 51 44                  MOV EDX,dword ptr [ECX + 0x44]
00538C0C  2B C2                     SUB EAX,EDX
LAB_00538c0e:
00538C0E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00538c11:
00538C11  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00538C14  85 C0                     TEST EAX,EAX
00538C16  0F 84 19 01 00 00         JZ 0x00538d35
00538C1C  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00538C22  8D 45 AC                  LEA EAX,[EBP + -0x54]
00538C25  8D 55 A8                  LEA EDX,[EBP + -0x58]
00538C28  6A 00                     PUSH 0x0
00538C2A  50                        PUSH EAX
00538C2B  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
00538C2E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00538C34  E8 B7 4B 1F 00            CALL 0x0072d7f0
00538C39  8B F0                     MOV ESI,EAX
00538C3B  83 C4 08                  ADD ESP,0x8
00538C3E  85 F6                     TEST ESI,ESI
00538C40  0F 85 B1 00 00 00         JNZ 0x00538cf7
00538C46  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00538C49  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00538C4C  6A 01                     PUSH 0x1
00538C4E  50                        PUSH EAX
00538C4F  51                        PUSH ECX
00538C50  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00538C56  57                        PUSH EDI
00538C57  E8 84 90 1B 00            CALL 0x006f1ce0
00538C5C  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00538C5F  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00538C62  50                        PUSH EAX
00538C63  57                        PUSH EDI
00538C64  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00538C67  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00538C6A  57                        PUSH EDI
00538C6B  53                        PUSH EBX
00538C6C  52                        PUSH EDX
00538C6D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00538C70  E8 B4 A5 EC FF            CALL 0x00403229
00538C75  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00538C7B  83 C4 14                  ADD ESP,0x14
00538C7E  8D 45 FC                  LEA EAX,[EBP + -0x4]
00538C81  50                        PUSH EAX
00538C82  E8 59 94 1B 00            CALL 0x006f20e0
00538C87  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00538C8A  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00538C8D  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00538C90  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00538C93  51                        PUSH ECX
00538C94  52                        PUSH EDX
00538C95  57                        PUSH EDI
00538C96  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00538C99  53                        PUSH EBX
00538C9A  6A 00                     PUSH 0x0
00538C9C  50                        PUSH EAX
00538C9D  8B CF                     MOV ECX,EDI
00538C9F  E8 EC 7D 1D 00            CALL 0x00710a90
00538CA4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00538CA7  51                        PUSH ECX
00538CA8  FF 55 1C                  CALL dword ptr [EBP + 0x1c]
00538CAB  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00538CB1  83 C4 04                  ADD ESP,0x4
00538CB4  50                        PUSH EAX
00538CB5  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00538CB8  6A FF                     PUSH -0x1
00538CBA  6A FE                     PUSH -0x2
00538CBC  52                        PUSH EDX
00538CBD  50                        PUSH EAX
00538CBE  E8 7D 74 17 00            CALL 0x006b0140
00538CC3  50                        PUSH EAX
00538CC4  8B CF                     MOV ECX,EDI
00538CC6  E8 F5 8C 1D 00            CALL 0x007119c0
00538CCB  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
00538CCE  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
00538CD1  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
00538CD4  51                        PUSH ECX
00538CD5  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00538CDB  52                        PUSH EDX
00538CDC  6A FF                     PUSH -0x1
00538CDE  50                        PUSH EAX
00538CDF  51                        PUSH ECX
00538CE0  E8 5B A9 17 00            CALL 0x006b3640
00538CE5  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00538CE8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00538CEE  5F                        POP EDI
00538CEF  5E                        POP ESI
00538CF0  5B                        POP EBX
00538CF1  8B E5                     MOV ESP,EBP
00538CF3  5D                        POP EBP
00538CF4  C2 20 00                  RET 0x20
LAB_00538cf7:
00538CF7  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00538CFA  68 44 74 7C 00            PUSH 0x7c7444
00538CFF  68 CC 4C 7A 00            PUSH 0x7a4ccc
00538D04  56                        PUSH ESI
00538D05  6A 00                     PUSH 0x0
00538D07  68 CC 00 00 00            PUSH 0xcc
00538D0C  68 90 73 7C 00            PUSH 0x7c7390
00538D11  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00538D16  E8 B5 47 17 00            CALL 0x006ad4d0
00538D1B  83 C4 18                  ADD ESP,0x18
00538D1E  85 C0                     TEST EAX,EAX
00538D20  74 01                     JZ 0x00538d23
00538D22  CC                        INT3
LAB_00538d23:
00538D23  68 CC 00 00 00            PUSH 0xcc
00538D28  68 90 73 7C 00            PUSH 0x7c7390
00538D2D  6A 00                     PUSH 0x0
00538D2F  56                        PUSH ESI
00538D30  E8 0B D1 16 00            CALL 0x006a5e40
LAB_00538d35:
00538D35  5F                        POP EDI
00538D36  5E                        POP ESI
00538D37  5B                        POP EBX
00538D38  8B E5                     MOV ESP,EBP
00538D3A  5D                        POP EBP
00538D3B  C2 20 00                  RET 0x20
