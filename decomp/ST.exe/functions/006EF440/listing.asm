FUN_006ef440:
006EF440  55                        PUSH EBP
006EF441  8B EC                     MOV EBP,ESP
006EF443  83 EC 44                  SUB ESP,0x44
006EF446  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006EF44B  53                        PUSH EBX
006EF44C  56                        PUSH ESI
006EF44D  57                        PUSH EDI
006EF44E  8D 55 C0                  LEA EDX,[EBP + -0x40]
006EF451  8D 4D BC                  LEA ECX,[EBP + -0x44]
006EF454  6A 00                     PUSH 0x0
006EF456  52                        PUSH EDX
006EF457  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006EF45A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EF460  E8 8B E3 03 00            CALL 0x0072d7f0
006EF465  8B F0                     MOV ESI,EAX
006EF467  83 C4 08                  ADD ESP,0x8
006EF46A  85 F6                     TEST ESI,ESI
006EF46C  75 77                     JNZ 0x006ef4e5
006EF46E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006EF471  85 FF                     TEST EDI,EDI
006EF473  75 14                     JNZ 0x006ef489
006EF475  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006EF47A  6A 4A                     PUSH 0x4a
006EF47C  68 88 EF 7E 00            PUSH 0x7eef88
006EF481  50                        PUSH EAX
006EF482  6A CC                     PUSH -0x34
006EF484  E8 B7 69 FB FF            CALL 0x006a5e40
LAB_006ef489:
006EF489  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006EF48C  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006EF48F  85 C0                     TEST EAX,EAX
006EF491  74 14                     JZ 0x006ef4a7
006EF493  8B 4F 05                  MOV ECX,dword ptr [EDI + 0x5]
006EF496  6A 01                     PUSH 0x1
006EF498  6A 00                     PUSH 0x0
006EF49A  50                        PUSH EAX
006EF49B  51                        PUSH ECX
006EF49C  E8 8F B5 01 00            CALL 0x0070aa30
006EF4A1  83 C4 10                  ADD ESP,0x10
006EF4A4  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
LAB_006ef4a7:
006EF4A7  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006EF4AA  85 DB                     TEST EBX,EBX
006EF4AC  74 25                     JZ 0x006ef4d3
006EF4AE  8B 57 05                  MOV EDX,dword ptr [EDI + 0x5]
006EF4B1  6A 01                     PUSH 0x1
006EF4B3  6A 00                     PUSH 0x0
006EF4B5  53                        PUSH EBX
006EF4B6  52                        PUSH EDX
006EF4B7  E8 74 B5 01 00            CALL 0x0070aa30
006EF4BC  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
006EF4BF  8B 47 05                  MOV EAX,dword ptr [EDI + 0x5]
006EF4C2  6A 01                     PUSH 0x1
006EF4C4  53                        PUSH EBX
006EF4C5  6A 1C                     PUSH 0x1c
006EF4C7  50                        PUSH EAX
006EF4C8  E8 A3 B3 01 00            CALL 0x0070a870
006EF4CD  83 C4 20                  ADD ESP,0x20
006EF4D0  88 46 0A                  MOV byte ptr [ESI + 0xa],AL
LAB_006ef4d3:
006EF4D3  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006EF4D6  33 C0                     XOR EAX,EAX
006EF4D8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EF4DE  5F                        POP EDI
006EF4DF  5E                        POP ESI
006EF4E0  5B                        POP EBX
006EF4E1  8B E5                     MOV ESP,EBP
006EF4E3  5D                        POP EBP
006EF4E4  C3                        RET
LAB_006ef4e5:
006EF4E5  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006EF4E8  68 B0 EF 7E 00            PUSH 0x7eefb0
006EF4ED  68 CC 4C 7A 00            PUSH 0x7a4ccc
006EF4F2  56                        PUSH ESI
006EF4F3  6A 00                     PUSH 0x0
006EF4F5  6A 53                     PUSH 0x53
006EF4F7  68 88 EF 7E 00            PUSH 0x7eef88
006EF4FC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006EF502  E8 C9 DF FB FF            CALL 0x006ad4d0
006EF507  83 C4 18                  ADD ESP,0x18
006EF50A  85 C0                     TEST EAX,EAX
006EF50C  74 01                     JZ 0x006ef50f
006EF50E  CC                        INT3
LAB_006ef50f:
006EF50F  6A 54                     PUSH 0x54
006EF511  68 88 EF 7E 00            PUSH 0x7eef88
006EF516  6A 00                     PUSH 0x0
006EF518  56                        PUSH ESI
006EF519  E8 22 69 FB FF            CALL 0x006a5e40
006EF51E  8B C6                     MOV EAX,ESI
006EF520  5F                        POP EDI
006EF521  5E                        POP ESI
006EF522  5B                        POP EBX
006EF523  8B E5                     MOV ESP,EBP
006EF525  5D                        POP EBP
006EF526  C3                        RET
