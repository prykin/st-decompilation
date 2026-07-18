FUN_006c43b0:
006C43B0  55                        PUSH EBP
006C43B1  8B EC                     MOV EBP,ESP
006C43B3  83 EC 7C                  SUB ESP,0x7c
006C43B6  56                        PUSH ESI
006C43B7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C43BA  57                        PUSH EDI
006C43BB  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006C43BE  25 00 11 00 00            AND EAX,0x1100
006C43C3  3D 00 01 00 00            CMP EAX,0x100
006C43C8  0F 84 9E 00 00 00         JZ 0x006c446c
006C43CE  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C43D5  74 0D                     JZ 0x006c43e4
006C43D7  8D 8E F0 04 00 00         LEA ECX,[ESI + 0x4f0]
006C43DD  51                        PUSH ECX
006C43DE  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006c43e4:
006C43E4  53                        PUSH EBX
006C43E5  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C43E8  8D 45 84                  LEA EAX,[EBP + -0x7c]
006C43EB  C7 45 84 7C 00 00 00      MOV dword ptr [EBP + -0x7c],0x7c
006C43F2  8B 13                     MOV EDX,dword ptr [EBX]
006C43F4  50                        PUSH EAX
006C43F5  53                        PUSH EBX
006C43F6  C7 45 88 06 00 00 00      MOV dword ptr [EBP + -0x78],0x6
006C43FD  FF 52 58                  CALL dword ptr [EDX + 0x58]
006C4400  8B F8                     MOV EDI,EAX
006C4402  85 FF                     TEST EDI,EDI
006C4404  75 2C                     JNZ 0x006c4432
006C4406  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
006C4409  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006C440C  50                        PUSH EAX
006C440D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C4410  51                        PUSH ECX
006C4411  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C4414  52                        PUSH EDX
006C4415  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006C4418  53                        PUSH EBX
006C4419  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C441C  50                        PUSH EAX
006C441D  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006C4420  03 D3                     ADD EDX,EBX
006C4422  51                        PUSH ECX
006C4423  52                        PUSH EDX
006C4424  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C4427  03 C2                     ADD EAX,EDX
006C4429  50                        PUSH EAX
006C442A  56                        PUSH ESI
006C442B  E8 A0 75 FF FF            CALL 0x006bb9d0
006C4430  8B F8                     MOV EDI,EAX
LAB_006c4432:
006C4432  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006C4435  5B                        POP EBX
006C4436  A9 00 00 00 04            TEST EAX,0x4000000
006C443B  74 0D                     JZ 0x006c444a
006C443D  81 C6 F0 04 00 00         ADD ESI,0x4f0
006C4443  56                        PUSH ESI
006C4444  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006c444a:
006C444A  85 FF                     TEST EDI,EDI
006C444C  74 1E                     JZ 0x006c446c
006C444E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C4454  6A 23                     PUSH 0x23
006C4456  68 F4 DE 7E 00            PUSH 0x7edef4
006C445B  51                        PUSH ECX
006C445C  57                        PUSH EDI
006C445D  E8 DE 19 FE FF            CALL 0x006a5e40
006C4462  8B C7                     MOV EAX,EDI
006C4464  5F                        POP EDI
006C4465  5E                        POP ESI
006C4466  8B E5                     MOV ESP,EBP
006C4468  5D                        POP EBP
006C4469  C2 18 00                  RET 0x18
LAB_006c446c:
006C446C  5F                        POP EDI
006C446D  33 C0                     XOR EAX,EAX
006C446F  5E                        POP ESI
006C4470  8B E5                     MOV ESP,EBP
006C4472  5D                        POP EBP
006C4473  C2 18 00                  RET 0x18
