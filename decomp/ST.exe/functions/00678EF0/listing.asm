FUN_00678ef0:
00678EF0  55                        PUSH EBP
00678EF1  8B EC                     MOV EBP,ESP
00678EF3  83 EC 08                  SUB ESP,0x8
00678EF6  8B 89 95 06 00 00         MOV ECX,dword ptr [ECX + 0x695]
00678EFC  53                        PUSH EBX
00678EFD  33 DB                     XOR EBX,EBX
00678EFF  56                        PUSH ESI
00678F00  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00678F03  57                        PUSH EDI
00678F04  85 D2                     TEST EDX,EDX
00678F06  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00678F09  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00678F0C  7E 68                     JLE 0x00678f76
LAB_00678f0e:
00678F0E  85 C9                     TEST ECX,ECX
00678F10  74 5F                     JZ 0x00678f71
00678F12  85 DB                     TEST EBX,EBX
00678F14  7C 5B                     JL 0x00678f71
00678F16  3B DA                     CMP EBX,EDX
00678F18  7D 57                     JGE 0x00678f71
00678F1A  73 0D                     JNC 0x00678f29
00678F1C  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00678F1F  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
00678F22  0F AF C3                  IMUL EAX,EBX
00678F25  03 C6                     ADD EAX,ESI
00678F27  EB 02                     JMP 0x00678f2b
LAB_00678f29:
00678F29  33 C0                     XOR EAX,EAX
LAB_00678f2b:
00678F2B  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
00678F2E  85 F6                     TEST ESI,ESI
00678F30  74 3F                     JZ 0x00678f71
00678F32  8B 38                     MOV EDI,dword ptr [EAX]
00678F34  85 FF                     TEST EDI,EDI
00678F36  74 39                     JZ 0x00678f71
00678F38  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00678F3B  8D 77 3B                  LEA ESI,[EDI + 0x3b]
LAB_00678f3e:
00678F3E  8A 01                     MOV AL,byte ptr [ECX]
00678F40  8A D0                     MOV DL,AL
00678F42  3A 06                     CMP AL,byte ptr [ESI]
00678F44  75 1C                     JNZ 0x00678f62
00678F46  84 D2                     TEST DL,DL
00678F48  74 14                     JZ 0x00678f5e
00678F4A  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
00678F4D  8A D0                     MOV DL,AL
00678F4F  3A 46 01                  CMP AL,byte ptr [ESI + 0x1]
00678F52  75 0E                     JNZ 0x00678f62
00678F54  83 C1 02                  ADD ECX,0x2
00678F57  83 C6 02                  ADD ESI,0x2
00678F5A  84 D2                     TEST DL,DL
00678F5C  75 E0                     JNZ 0x00678f3e
LAB_00678f5e:
00678F5E  33 C9                     XOR ECX,ECX
00678F60  EB 05                     JMP 0x00678f67
LAB_00678f62:
00678F62  1B C9                     SBB ECX,ECX
00678F64  83 D9 FF                  SBB ECX,-0x1
LAB_00678f67:
00678F67  85 C9                     TEST ECX,ECX
00678F69  74 16                     JZ 0x00678f81
00678F6B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00678F6E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00678f71:
00678F71  43                        INC EBX
00678F72  3B DA                     CMP EBX,EDX
00678F74  7C 98                     JL 0x00678f0e
LAB_00678f76:
00678F76  5F                        POP EDI
00678F77  5E                        POP ESI
00678F78  33 C0                     XOR EAX,EAX
00678F7A  5B                        POP EBX
00678F7B  8B E5                     MOV ESP,EBP
00678F7D  5D                        POP EBP
00678F7E  C2 04 00                  RET 0x4
LAB_00678f81:
00678F81  8B C7                     MOV EAX,EDI
00678F83  5F                        POP EDI
00678F84  5E                        POP ESI
00678F85  5B                        POP EBX
00678F86  8B E5                     MOV ESP,EBP
00678F88  5D                        POP EBP
00678F89  C2 04 00                  RET 0x4
