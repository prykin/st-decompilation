STGroupC::GetMessage:
00423EC0  55                        PUSH EBP
00423EC1  8B EC                     MOV EBP,ESP
00423EC3  83 EC 4C                  SUB ESP,0x4c
00423EC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00423ECB  53                        PUSH EBX
00423ECC  56                        PUSH ESI
00423ECD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00423ED0  33 DB                     XOR EBX,EBX
00423ED2  57                        PUSH EDI
00423ED3  8D 55 B8                  LEA EDX,[EBP + -0x48]
00423ED6  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00423ED9  53                        PUSH EBX
00423EDA  52                        PUSH EDX
00423EDB  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00423EDE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00423EE4  E8 07 99 30 00            CALL 0x0072d7f0
00423EE9  8B F0                     MOV ESI,EAX
00423EEB  83 C4 08                  ADD ESP,0x8
00423EEE  3B F3                     CMP ESI,EBX
00423EF0  0F 85 3B 01 00 00         JNZ 0x00424031
00423EF6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00423EF9  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00423EFC  57                        PUSH EDI
00423EFD  8B CE                     MOV ECX,ESI
00423EFF  E8 CC 20 2C 00            CALL 0x006e5fd0
00423F04  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00423F07  83 E8 02                  SUB EAX,0x2
00423F0A  74 57                     JZ 0x00423f63
00423F0C  48                        DEC EAX
00423F0D  0F 85 0A 01 00 00         JNZ 0x0042401d
00423F13  8B CE                     MOV ECX,ESI
00423F15  E8 6E 11 FE FF            CALL 0x00405088
00423F1A  8B 46 29                  MOV EAX,dword ptr [ESI + 0x29]
00423F1D  50                        PUSH EAX
00423F1E  E8 ED A1 28 00            CALL 0x006ae110
00423F23  66 8B 4E 25               MOV CX,word ptr [ESI + 0x25]
00423F27  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00423F2A  56                        PUSH ESI
00423F2B  89 5E 29                  MOV dword ptr [ESI + 0x29],EBX
00423F2E  51                        PUSH ECX
00423F2F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00423F35  52                        PUSH EDX
00423F36  E8 70 DA FD FF            CALL 0x004019ab
00423F3B  8B 46 2D                  MOV EAX,dword ptr [ESI + 0x2d]
00423F3E  3B C3                     CMP EAX,EBX
00423F40  0F 84 D7 00 00 00         JZ 0x0042401d
00423F46  50                        PUSH EAX
00423F47  E8 C4 A1 28 00            CALL 0x006ae110
00423F4C  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00423F4F  89 5E 2D                  MOV dword ptr [ESI + 0x2d],EBX
00423F52  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00423F58  33 C0                     XOR EAX,EAX
00423F5A  5F                        POP EDI
00423F5B  5E                        POP ESI
00423F5C  5B                        POP EBX
00423F5D  8B E5                     MOV ESP,EBP
00423F5F  5D                        POP EBP
00423F60  C2 04 00                  RET 0x4
LAB_00423f63:
00423F63  8B 7F 14                  MOV EDI,dword ptr [EDI + 0x14]
00423F66  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00423F69  83 F8 01                  CMP EAX,0x1
00423F6C  76 3A                     JBE 0x00423fa8
00423F6E  83 F8 02                  CMP EAX,0x2
00423F71  0F 85 A6 00 00 00         JNZ 0x0042401d
00423F77  57                        PUSH EDI
00423F78  8B CE                     MOV ECX,ESI
00423F7A  E8 C9 0F FE FF            CALL 0x00404f48
00423F7F  66 8B 46 25               MOV AX,word ptr [ESI + 0x25]
00423F83  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00423F86  56                        PUSH ESI
00423F87  50                        PUSH EAX
00423F88  51                        PUSH ECX
00423F89  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00423F8F  E8 45 1A FE FF            CALL 0x004059d9
00423F94  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00423F97  33 C0                     XOR EAX,EAX
00423F99  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00423F9F  5F                        POP EDI
00423FA0  5E                        POP ESI
00423FA1  5B                        POP EBX
00423FA2  8B E5                     MOV ESP,EBP
00423FA4  5D                        POP EBP
00423FA5  C2 04 00                  RET 0x4
LAB_00423fa8:
00423FA8  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00423FAB  68 C5 45 40 00            PUSH 0x4045c5
00423FB0  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
00423FB3  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
00423FB6  88 46 24                  MOV byte ptr [ESI + 0x24],AL
00423FB9  66 8B 4F 14               MOV CX,word ptr [EDI + 0x14]
00423FBD  6A 05                     PUSH 0x5
00423FBF  66 89 4E 25               MOV word ptr [ESI + 0x25],CX
00423FC3  66 8B 57 18               MOV DX,word ptr [EDI + 0x18]
00423FC7  6A 02                     PUSH 0x2
00423FC9  6A 05                     PUSH 0x5
00423FCB  53                        PUSH EBX
00423FCC  66 89 56 27               MOV word ptr [ESI + 0x27],DX
00423FD0  E8 3B A3 28 00            CALL 0x006ae310
00423FD5  89 46 29                  MOV dword ptr [ESI + 0x29],EAX
00423FD8  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
00423FDB  3B C3                     CMP EAX,EBX
00423FDD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00423FE0  7E 19                     JLE 0x00423ffb
00423FE2  83 C7 24                  ADD EDI,0x24
LAB_00423fe5:
00423FE5  8B 46 29                  MOV EAX,dword ptr [ESI + 0x29]
00423FE8  57                        PUSH EDI
00423FE9  53                        PUSH EBX
00423FEA  50                        PUSH EAX
00423FEB  E8 50 A1 28 00            CALL 0x006ae140
00423FF0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00423FF3  43                        INC EBX
00423FF4  83 C7 04                  ADD EDI,0x4
00423FF7  3B D8                     CMP EBX,EAX
00423FF9  7C EA                     JL 0x00423fe5
LAB_00423ffb:
00423FFB  66 8B 4E 25               MOV CX,word ptr [ESI + 0x25]
00423FFF  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00424002  56                        PUSH ESI
00424003  51                        PUSH ECX
00424004  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0042400A  52                        PUSH EDX
0042400B  E8 C9 19 FE FF            CALL 0x004059d9
00424010  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00424013  0F AF 05 54 87 80 00      IMUL EAX,dword ptr [0x00808754]
0042401A  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
LAB_0042401d:
0042401D  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00424020  33 C0                     XOR EAX,EAX
00424022  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00424028  5F                        POP EDI
00424029  5E                        POP ESI
0042402A  5B                        POP EBX
0042402B  8B E5                     MOV ESP,EBP
0042402D  5D                        POP EBP
0042402E  C2 04 00                  RET 0x4
LAB_00424031:
00424031  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00424034  68 4C 51 7A 00            PUSH 0x7a514c
00424039  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042403E  56                        PUSH ESI
0042403F  53                        PUSH EBX
00424040  68 7C 01 00 00            PUSH 0x17c
00424045  68 A4 50 7A 00            PUSH 0x7a50a4
0042404A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00424050  E8 7B 94 28 00            CALL 0x006ad4d0
00424055  83 C4 18                  ADD ESP,0x18
00424058  85 C0                     TEST EAX,EAX
0042405A  74 01                     JZ 0x0042405d
0042405C  CC                        INT3
LAB_0042405d:
0042405D  68 7D 01 00 00            PUSH 0x17d
00424062  68 A4 50 7A 00            PUSH 0x7a50a4
00424067  53                        PUSH EBX
00424068  56                        PUSH ESI
00424069  E8 D2 1D 28 00            CALL 0x006a5e40
0042406E  5F                        POP EDI
0042406F  5E                        POP ESI
00424070  B8 FF FF 00 00            MOV EAX,0xffff
00424075  5B                        POP EBX
00424076  8B E5                     MOV ESP,EBP
00424078  5D                        POP EBP
00424079  C2 04 00                  RET 0x4
