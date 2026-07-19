SaveBossEdit:
006488C0  55                        PUSH EBP
006488C1  8B EC                     MOV EBP,ESP
006488C3  83 EC 54                  SUB ESP,0x54
006488C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006488CB  53                        PUSH EBX
006488CC  56                        PUSH ESI
006488CD  33 DB                     XOR EBX,EBX
006488CF  57                        PUSH EDI
006488D0  8D 55 B0                  LEA EDX,[EBP + -0x50]
006488D3  8D 4D AC                  LEA ECX,[EBP + -0x54]
006488D6  53                        PUSH EBX
006488D7  52                        PUSH EDX
006488D8  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006488DB  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006488DE  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006488E1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006488E7  E8 04 4F 0E 00            CALL 0x0072d7f0
006488EC  8B F0                     MOV ESI,EAX
006488EE  83 C4 08                  ADD ESP,0x8
006488F1  3B F3                     CMP ESI,EBX
006488F3  0F 85 8A 00 00 00         JNZ 0x00648983
006488F9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006488FC  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006488FF  3B FB                     CMP EDI,EBX
00648901  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00648904  74 0A                     JZ 0x00648910
00648906  85 DB                     TEST EBX,EBX
00648908  74 06                     JZ 0x00648910
0064890A  80 7E 05 02               CMP byte ptr [ESI + 0x5],0x2
0064890E  74 17                     JZ 0x00648927
LAB_00648910:
00648910  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00648915  68 9C 00 00 00            PUSH 0x9c
0064891A  68 F4 27 7D 00            PUSH 0x7d27f4
0064891F  50                        PUSH EAX
00648920  6A CC                     PUSH -0x34
00648922  E8 19 D5 05 00            CALL 0x006a5e40
LAB_00648927:
00648927  8B 56 4E                  MOV EDX,dword ptr [ESI + 0x4e]
0064892A  8D 4D F0                  LEA ECX,[EBP + -0x10]
0064892D  51                        PUSH ECX
0064892E  52                        PUSH EDX
0064892F  E8 8B 95 DB FF            CALL 0x00401ebf
00648934  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00648937  8D 4D F4                  LEA ECX,[EBP + -0xc]
0064893A  51                        PUSH ECX
0064893B  52                        PUSH EDX
0064893C  50                        PUSH EAX
0064893D  56                        PUSH ESI
0064893E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00648941  E8 DE D0 DB FF            CALL 0x00405a24
00648946  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00648949  8D 45 F8                  LEA EAX,[EBP + -0x8]
0064894C  50                        PUSH EAX
0064894D  E8 E5 8B DB FF            CALL 0x00401537
00648952  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00648955  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00648958  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064895B  51                        PUSH ECX
0064895C  52                        PUSH EDX
0064895D  50                        PUSH EAX
0064895E  53                        PUSH EBX
0064895F  57                        PUSH EDI
00648960  E8 AB A7 0A 00            CALL 0x006f3110
00648965  8D 4D FC                  LEA ECX,[EBP + -0x4]
00648968  51                        PUSH ECX
00648969  E8 36 97 DB FF            CALL 0x004020a4
0064896E  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00648971  83 C4 34                  ADD ESP,0x34
00648974  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064897A  33 C0                     XOR EAX,EAX
0064897C  5F                        POP EDI
0064897D  5E                        POP ESI
0064897E  5B                        POP EBX
0064897F  8B E5                     MOV ESP,EBP
00648981  5D                        POP EBP
00648982  C3                        RET
LAB_00648983:
00648983  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00648986  68 38 28 7D 00            PUSH 0x7d2838
0064898B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00648990  56                        PUSH ESI
00648991  53                        PUSH EBX
00648992  68 A3 00 00 00            PUSH 0xa3
00648997  68 F4 27 7D 00            PUSH 0x7d27f4
0064899C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006489A1  E8 2A 4B 06 00            CALL 0x006ad4d0
006489A6  83 C4 18                  ADD ESP,0x18
006489A9  85 C0                     TEST EAX,EAX
006489AB  74 01                     JZ 0x006489ae
006489AD  CC                        INT3
LAB_006489ae:
006489AE  8D 4D F8                  LEA ECX,[EBP + -0x8]
006489B1  51                        PUSH ECX
006489B2  E8 80 8B DB FF            CALL 0x00401537
006489B7  8D 55 FC                  LEA EDX,[EBP + -0x4]
006489BA  52                        PUSH EDX
006489BB  E8 E4 96 DB FF            CALL 0x004020a4
006489C0  83 C4 08                  ADD ESP,0x8
006489C3  68 A6 00 00 00            PUSH 0xa6
006489C8  68 F4 27 7D 00            PUSH 0x7d27f4
006489CD  53                        PUSH EBX
006489CE  56                        PUSH ESI
006489CF  E8 6C D4 05 00            CALL 0x006a5e40
006489D4  8B C6                     MOV EAX,ESI
006489D6  5F                        POP EDI
006489D7  5E                        POP ESI
006489D8  5B                        POP EBX
006489D9  8B E5                     MOV ESP,EBP
006489DB  5D                        POP EBP
006489DC  C3                        RET
