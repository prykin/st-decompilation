FUN_00709f40:
00709F40  55                        PUSH EBP
00709F41  8B EC                     MOV EBP,ESP
00709F43  83 EC 4C                  SUB ESP,0x4c
00709F46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00709F4B  56                        PUSH ESI
00709F4C  8D 55 B8                  LEA EDX,[EBP + -0x48]
00709F4F  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00709F52  6A 00                     PUSH 0x0
00709F54  52                        PUSH EDX
00709F55  C7 45 F8 FC FF FF FF      MOV dword ptr [EBP + -0x8],0xfffffffc
00709F5C  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00709F5F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00709F65  E8 86 38 02 00            CALL 0x0072d7f0
00709F6A  8B F0                     MOV ESI,EAX
00709F6C  83 C4 08                  ADD ESP,0x8
00709F6F  85 F6                     TEST ESI,ESI
00709F71  0F 85 8E 00 00 00         JNZ 0x0070a005
00709F77  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00709F7A  85 C0                     TEST EAX,EAX
00709F7C  75 21                     JNZ 0x00709f9f
00709F7E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00709F83  68 01 01 00 00            PUSH 0x101
00709F88  68 5C FF 7E 00            PUSH 0x7eff5c
00709F8D  50                        PUSH EAX
00709F8E  6A CC                     PUSH -0x34
00709F90  E8 AB BE F9 FF            CALL 0x006a5e40
00709F95  B8 CC FF FF FF            MOV EAX,0xffffffcc
00709F9A  5E                        POP ESI
00709F9B  8B E5                     MOV ESP,EBP
00709F9D  5D                        POP EBP
00709F9E  C3                        RET
LAB_00709f9f:
00709F9F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00709FA2  85 C9                     TEST ECX,ECX
00709FA4  75 22                     JNZ 0x00709fc8
00709FA6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00709FAC  68 02 01 00 00            PUSH 0x102
00709FB1  68 5C FF 7E 00            PUSH 0x7eff5c
00709FB6  51                        PUSH ECX
00709FB7  6A CC                     PUSH -0x34
00709FB9  E8 82 BE F9 FF            CALL 0x006a5e40
00709FBE  B8 CC FF FF FF            MOV EAX,0xffffffcc
00709FC3  5E                        POP ESI
00709FC4  8B E5                     MOV ESP,EBP
00709FC6  5D                        POP EBP
00709FC7  C3                        RET
LAB_00709fc8:
00709FC8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00709FCB  8D 55 FC                  LEA EDX,[EBP + -0x4]
00709FCE  52                        PUSH EDX
00709FCF  51                        PUSH ECX
00709FD0  50                        PUSH EAX
00709FD1  E8 BA F9 FF FF            CALL 0x00709990
00709FD6  83 C4 0C                  ADD ESP,0xc
00709FD9  85 C0                     TEST EAX,EAX
00709FDB  74 17                     JZ 0x00709ff4
00709FDD  8B 48 25                  MOV ECX,dword ptr [EAX + 0x25]
00709FE0  41                        INC ECX
00709FE1  89 48 25                  MOV dword ptr [EAX + 0x25],ECX
00709FE4  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00709FE7  8B C1                     MOV EAX,ECX
00709FE9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00709FEF  5E                        POP ESI
00709FF0  8B E5                     MOV ESP,EBP
00709FF2  5D                        POP EBP
00709FF3  C3                        RET
LAB_00709ff4:
00709FF4  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00709FF7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00709FFA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070A000  5E                        POP ESI
0070A001  8B E5                     MOV ESP,EBP
0070A003  5D                        POP EBP
0070A004  C3                        RET
LAB_0070a005:
0070A005  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0070A008  68 8C FF 7E 00            PUSH 0x7eff8c
0070A00D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070A012  56                        PUSH ESI
0070A013  6A 00                     PUSH 0x0
0070A015  68 0A 01 00 00            PUSH 0x10a
0070A01A  68 5C FF 7E 00            PUSH 0x7eff5c
0070A01F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070A024  E8 A7 34 FA FF            CALL 0x006ad4d0
0070A029  83 C4 18                  ADD ESP,0x18
0070A02C  85 C0                     TEST EAX,EAX
0070A02E  74 01                     JZ 0x0070a031
0070A030  CC                        INT3
LAB_0070a031:
0070A031  68 0C 01 00 00            PUSH 0x10c
0070A036  68 5C FF 7E 00            PUSH 0x7eff5c
0070A03B  6A 00                     PUSH 0x0
0070A03D  56                        PUSH ESI
0070A03E  E8 FD BD F9 FF            CALL 0x006a5e40
0070A043  8B C6                     MOV EAX,ESI
0070A045  5E                        POP ESI
0070A046  8B E5                     MOV ESP,EBP
0070A048  5D                        POP EBP
0070A049  C3                        RET
