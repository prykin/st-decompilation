mfTSprGetNumFas:
00716E60  55                        PUSH EBP
00716E61  8B EC                     MOV EBP,ESP
00716E63  83 EC 54                  SUB ESP,0x54
00716E66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00716E6B  56                        PUSH ESI
00716E6C  57                        PUSH EDI
00716E6D  8D 55 B0                  LEA EDX,[EBP + -0x50]
00716E70  8D 4D AC                  LEA ECX,[EBP + -0x54]
00716E73  6A 00                     PUSH 0x0
00716E75  52                        PUSH EDX
00716E76  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00716E79  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00716E7F  E8 6C 69 01 00            CALL 0x0072d7f0
00716E84  8B F0                     MOV ESI,EAX
00716E86  83 C4 08                  ADD ESP,0x8
00716E89  85 F6                     TEST ESI,ESI
00716E8B  0F 85 CA 00 00 00         JNZ 0x00716f5b
00716E91  80 7D 10 1D               CMP byte ptr [EBP + 0x10],0x1d
00716E95  75 7F                     JNZ 0x00716f16
00716E97  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00716E9A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00716E9D  57                        PUSH EDI
00716E9E  56                        PUSH ESI
00716E9F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00716EA2  50                        PUSH EAX
00716EA3  6A 1D                     PUSH 0x1d
00716EA5  8B CE                     MOV ECX,ESI
00716EA7  E8 34 AE FD FF            CALL 0x006f1ce0
00716EAC  85 C0                     TEST EAX,EAX
00716EAE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00716EB1  75 1B                     JNZ 0x00716ece
00716EB3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00716EB9  68 D2 00 00 00            PUSH 0xd2
00716EBE  68 04 05 7F 00            PUSH 0x7f0504
00716EC3  51                        PUSH ECX
00716EC4  6A FC                     PUSH -0x4
00716EC6  E8 75 EF F8 FF            CALL 0x006a5e40
00716ECB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00716ece:
00716ECE  8D 55 F0                  LEA EDX,[EBP + -0x10]
00716ED1  57                        PUSH EDI
00716ED2  52                        PUSH EDX
00716ED3  50                        PUSH EAX
00716ED4  6A 06                     PUSH 0x6
00716ED6  8B CE                     MOV ECX,ESI
00716ED8  E8 33 B4 FD FF            CALL 0x006f2310
00716EDD  85 C0                     TEST EAX,EAX
00716EDF  75 17                     JNZ 0x00716ef8
00716EE1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00716EE6  68 D3 00 00 00            PUSH 0xd3
00716EEB  68 04 05 7F 00            PUSH 0x7f0504
00716EF0  50                        PUSH EAX
00716EF1  6A FC                     PUSH -0x4
00716EF3  E8 48 EF F8 FF            CALL 0x006a5e40
LAB_00716ef8:
00716EF8  8D 4D FC                  LEA ECX,[EBP + -0x4]
00716EFB  51                        PUSH ECX
00716EFC  8B CE                     MOV ECX,ESI
00716EFE  E8 DD B1 FD FF            CALL 0x006f20e0
00716F03  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00716F06  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
00716F0A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00716F10  5F                        POP EDI
00716F11  5E                        POP ESI
00716F12  8B E5                     MOV ESP,EBP
00716F14  5D                        POP EBP
00716F15  C3                        RET
LAB_00716f16:
00716F16  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00716F19  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00716F1C  8D 45 F0                  LEA EAX,[EBP + -0x10]
00716F1F  52                        PUSH EDX
00716F20  50                        PUSH EAX
00716F21  51                        PUSH ECX
00716F22  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00716F25  6A 13                     PUSH 0x13
00716F27  E8 E4 B3 FD FF            CALL 0x006f2310
00716F2C  85 C0                     TEST EAX,EAX
00716F2E  75 18                     JNZ 0x00716f48
00716F30  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00716F36  68 D8 00 00 00            PUSH 0xd8
00716F3B  68 04 05 7F 00            PUSH 0x7f0504
00716F40  52                        PUSH EDX
00716F41  6A FC                     PUSH -0x4
00716F43  E8 F8 EE F8 FF            CALL 0x006a5e40
LAB_00716f48:
00716F48  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00716F4B  0F BF 45 F0               MOVSX EAX,word ptr [EBP + -0x10]
00716F4F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00716F55  5F                        POP EDI
00716F56  5E                        POP ESI
00716F57  8B E5                     MOV ESP,EBP
00716F59  5D                        POP EBP
00716F5A  C3                        RET
LAB_00716f5b:
00716F5B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00716F5E  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00716F61  85 C0                     TEST EAX,EAX
00716F63  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00716F69  75 0D                     JNZ 0x00716f78
00716F6B  83 FE FC                  CMP ESI,-0x4
00716F6E  75 08                     JNZ 0x00716f78
00716F70  8B C6                     MOV EAX,ESI
00716F72  5F                        POP EDI
00716F73  5E                        POP ESI
00716F74  8B E5                     MOV ESP,EBP
00716F76  5D                        POP EBP
00716F77  C3                        RET
LAB_00716f78:
00716F78  68 1C 05 7F 00            PUSH 0x7f051c
00716F7D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00716F82  56                        PUSH ESI
00716F83  6A 00                     PUSH 0x0
00716F85  68 DE 00 00 00            PUSH 0xde
00716F8A  68 04 05 7F 00            PUSH 0x7f0504
00716F8F  E8 3C 65 F9 FF            CALL 0x006ad4d0
00716F94  83 C4 18                  ADD ESP,0x18
00716F97  85 C0                     TEST EAX,EAX
00716F99  74 01                     JZ 0x00716f9c
00716F9B  CC                        INT3
LAB_00716f9c:
00716F9C  68 E0 00 00 00            PUSH 0xe0
00716FA1  68 04 05 7F 00            PUSH 0x7f0504
00716FA6  6A 00                     PUSH 0x0
00716FA8  56                        PUSH ESI
00716FA9  E8 92 EE F8 FF            CALL 0x006a5e40
00716FAE  85 F6                     TEST ESI,ESI
00716FB0  7D 08                     JGE 0x00716fba
00716FB2  8B C6                     MOV EAX,ESI
00716FB4  5F                        POP EDI
00716FB5  5E                        POP ESI
00716FB6  8B E5                     MOV ESP,EBP
00716FB8  5D                        POP EBP
00716FB9  C3                        RET
LAB_00716fba:
00716FBA  5F                        POP EDI
00716FBB  83 C8 FF                  OR EAX,0xffffffff
00716FBE  5E                        POP ESI
00716FBF  8B E5                     MOV ESP,EBP
00716FC1  5D                        POP EBP
00716FC2  C3                        RET
