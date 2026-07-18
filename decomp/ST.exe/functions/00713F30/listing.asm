cTypingTy::TypingInitSarr:
00713F30  55                        PUSH EBP
00713F31  8B EC                     MOV EBP,ESP
00713F33  83 EC 4C                  SUB ESP,0x4c
00713F36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00713F3B  56                        PUSH ESI
00713F3C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00713F3F  57                        PUSH EDI
00713F40  8D 55 B8                  LEA EDX,[EBP + -0x48]
00713F43  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00713F46  6A 00                     PUSH 0x0
00713F48  52                        PUSH EDX
00713F49  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00713F50  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00713F53  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00713F59  E8 92 98 01 00            CALL 0x0072d7f0
00713F5E  8B F0                     MOV ESI,EAX
00713F60  83 C4 08                  ADD ESP,0x8
00713F63  85 F6                     TEST ESI,ESI
00713F65  0F 85 8C 00 00 00         JNZ 0x00713ff7
00713F6B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00713F6E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00713F71  85 FF                     TEST EDI,EDI
00713F73  74 04                     JZ 0x00713f79
00713F75  85 F6                     TEST ESI,ESI
00713F77  75 17                     JNZ 0x00713f90
LAB_00713f79:
00713F79  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00713F7E  68 39 0A 00 00            PUSH 0xa39
00713F83  68 90 01 7F 00            PUSH 0x7f0190
00713F88  50                        PUSH EAX
00713F89  6A CC                     PUSH -0x34
00713F8B  E8 B0 1E F9 FF            CALL 0x006a5e40
LAB_00713f90:
00713F90  57                        PUSH EDI
00713F91  6A 00                     PUSH 0x0
00713F93  8B CE                     MOV ECX,ESI
00713F95  E8 E6 F0 FF FF            CALL 0x00713080
00713F9A  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
00713F9D  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
00713FA0  51                        PUSH ECX
00713FA1  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
00713FA4  52                        PUSH EDX
00713FA5  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
00713FA8  51                        PUSH ECX
00713FA9  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
00713FAC  52                        PUSH EDX
00713FAD  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00713FB0  51                        PUSH ECX
00713FB1  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00713FB4  52                        PUSH EDX
00713FB5  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00713FB8  51                        PUSH ECX
00713FB9  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00713FBC  52                        PUSH EDX
00713FBD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00713FC0  51                        PUSH ECX
00713FC1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00713FC4  52                        PUSH EDX
00713FC5  51                        PUSH ECX
00713FC6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00713FC9  56                        PUSH ESI
00713FCA  50                        PUSH EAX
00713FCB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00713FCE  E8 2D FB FF FF            CALL 0x00713b00
00713FD3  8B F0                     MOV ESI,EAX
00713FD5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00713FD8  85 C0                     TEST EAX,EAX
00713FDA  74 09                     JZ 0x00713fe5
00713FDC  8D 55 FC                  LEA EDX,[EBP + -0x4]
00713FDF  52                        PUSH EDX
00713FE0  E8 7B 70 F9 FF            CALL 0x006ab060
LAB_00713fe5:
00713FE5  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00713FE8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00713FED  8B C6                     MOV EAX,ESI
00713FEF  5F                        POP EDI
00713FF0  5E                        POP ESI
00713FF1  8B E5                     MOV ESP,EBP
00713FF3  5D                        POP EBP
00713FF4  C2 34 00                  RET 0x34
LAB_00713ff7:
00713FF7  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00713FFA  68 D4 03 7F 00            PUSH 0x7f03d4
00713FFF  68 CC 4C 7A 00            PUSH 0x7a4ccc
00714004  56                        PUSH ESI
00714005  6A 00                     PUSH 0x0
00714007  68 3E 0A 00 00            PUSH 0xa3e
0071400C  68 90 01 7F 00            PUSH 0x7f0190
00714011  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00714017  E8 B4 94 F9 FF            CALL 0x006ad4d0
0071401C  83 C4 18                  ADD ESP,0x18
0071401F  85 C0                     TEST EAX,EAX
00714021  74 01                     JZ 0x00714024
00714023  CC                        INT3
LAB_00714024:
00714024  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00714027  85 C0                     TEST EAX,EAX
00714029  74 09                     JZ 0x00714034
0071402B  8D 55 FC                  LEA EDX,[EBP + -0x4]
0071402E  52                        PUSH EDX
0071402F  E8 2C 70 F9 FF            CALL 0x006ab060
LAB_00714034:
00714034  68 41 0A 00 00            PUSH 0xa41
00714039  68 90 01 7F 00            PUSH 0x7f0190
0071403E  6A 00                     PUSH 0x0
00714040  56                        PUSH ESI
00714041  E8 FA 1D F9 FF            CALL 0x006a5e40
00714046  85 F6                     TEST ESI,ESI
00714048  7D 0A                     JGE 0x00714054
0071404A  8B C6                     MOV EAX,ESI
0071404C  5F                        POP EDI
0071404D  5E                        POP ESI
0071404E  8B E5                     MOV ESP,EBP
00714050  5D                        POP EBP
00714051  C2 34 00                  RET 0x34
LAB_00714054:
00714054  5F                        POP EDI
00714055  83 C8 FF                  OR EAX,0xffffffff
00714058  5E                        POP ESI
00714059  8B E5                     MOV ESP,EBP
0071405B  5D                        POP EBP
0071405C  C2 34 00                  RET 0x34
