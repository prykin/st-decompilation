FUN_00649eb0:
00649EB0  55                        PUSH EBP
00649EB1  8B EC                     MOV EBP,ESP
00649EB3  83 EC 58                  SUB ESP,0x58
00649EB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00649EBB  56                        PUSH ESI
00649EBC  8D 55 AC                  LEA EDX,[EBP + -0x54]
00649EBF  8D 4D A8                  LEA ECX,[EBP + -0x58]
00649EC2  6A 00                     PUSH 0x0
00649EC4  52                        PUSH EDX
00649EC5  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00649ECC  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00649ED3  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00649EDA  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00649EDD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00649EE3  E8 08 39 0E 00            CALL 0x0072d7f0
00649EE8  8B F0                     MOV ESI,EAX
00649EEA  83 C4 08                  ADD ESP,0x8
00649EED  85 F6                     TEST ESI,ESI
00649EEF  75 59                     JNZ 0x00649f4a
00649EF1  6A 01                     PUSH 0x1
00649EF3  68 88 29 7D 00            PUSH 0x7d2988
00649EF8  E8 7F 72 DB FF            CALL 0x0040117c
00649EFD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00649F00  8B 50 4E                  MOV EDX,dword ptr [EAX + 0x4e]
00649F03  8D 4D F0                  LEA ECX,[EBP + -0x10]
00649F06  51                        PUSH ECX
00649F07  52                        PUSH EDX
00649F08  E8 B2 7F DB FF            CALL 0x00401ebf
00649F0D  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00649F10  8D 4D EC                  LEA ECX,[EBP + -0x14]
00649F13  51                        PUSH ECX
00649F14  52                        PUSH EDX
00649F15  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00649F18  50                        PUSH EAX
00649F19  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00649F1C  50                        PUSH EAX
00649F1D  E8 02 BB DB FF            CALL 0x00405a24
00649F22  8D 4D F4                  LEA ECX,[EBP + -0xc]
00649F25  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00649F28  51                        PUSH ECX
00649F29  E8 09 76 DB FF            CALL 0x00401537
00649F2E  8D 55 FC                  LEA EDX,[EBP + -0x4]
00649F31  52                        PUSH EDX
00649F32  E8 6D 81 DB FF            CALL 0x004020a4
00649F37  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00649F3A  83 C4 28                  ADD ESP,0x28
00649F3D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00649F42  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00649F45  5E                        POP ESI
00649F46  8B E5                     MOV ESP,EBP
00649F48  5D                        POP EBP
00649F49  C3                        RET
LAB_00649f4a:
00649F4A  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00649F4D  8D 55 F4                  LEA EDX,[EBP + -0xc]
00649F50  52                        PUSH EDX
00649F51  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00649F57  E8 DB 75 DB FF            CALL 0x00401537
00649F5C  8D 45 FC                  LEA EAX,[EBP + -0x4]
00649F5F  50                        PUSH EAX
00649F60  E8 3F 81 DB FF            CALL 0x004020a4
00649F65  8D 4D F8                  LEA ECX,[EBP + -0x8]
00649F68  51                        PUSH ECX
00649F69  E8 36 81 DB FF            CALL 0x004020a4
00649F6E  68 6C 29 7D 00            PUSH 0x7d296c
00649F73  68 CC 4C 7A 00            PUSH 0x7a4ccc
00649F78  56                        PUSH ESI
00649F79  6A 00                     PUSH 0x0
00649F7B  68 C1 01 00 00            PUSH 0x1c1
00649F80  68 80 28 7D 00            PUSH 0x7d2880
00649F85  E8 46 35 06 00            CALL 0x006ad4d0
00649F8A  83 C4 24                  ADD ESP,0x24
00649F8D  85 C0                     TEST EAX,EAX
00649F8F  74 01                     JZ 0x00649f92
00649F91  CC                        INT3
LAB_00649f92:
00649F92  68 C2 01 00 00            PUSH 0x1c2
00649F97  68 80 28 7D 00            PUSH 0x7d2880
00649F9C  6A 00                     PUSH 0x0
00649F9E  56                        PUSH ESI
00649F9F  E8 9C BE 05 00            CALL 0x006a5e40
00649FA4  33 C0                     XOR EAX,EAX
00649FA6  5E                        POP ESI
00649FA7  8B E5                     MOV ESP,EBP
00649FA9  5D                        POP EBP
00649FAA  C3                        RET
