FUN_0073cf50:
0073CF50  55                        PUSH EBP
0073CF51  8B EC                     MOV EBP,ESP
0073CF53  83 EC 30                  SUB ESP,0x30
0073CF56  53                        PUSH EBX
0073CF57  56                        PUSH ESI
0073CF58  57                        PUSH EDI
0073CF59  8D 45 E0                  LEA EAX,[EBP + -0x20]
0073CF5C  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0073CF5F  8D 4D 14                  LEA ECX,[EBP + 0x14]
0073CF62  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
LAB_0073cf65:
0073CF65  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0073CF69  75 1E                     JNZ 0x0073cf89
0073CF6B  68 74 FE 79 00            PUSH 0x79fe74
0073CF70  6A 00                     PUSH 0x0
0073CF72  6A 5D                     PUSH 0x5d
0073CF74  68 2C FF 79 00            PUSH 0x79ff2c
0073CF79  6A 02                     PUSH 0x2
0073CF7B  E8 20 40 FF FF            CALL 0x00730fa0
0073CF80  83 C4 14                  ADD ESP,0x14
0073CF83  83 F8 01                  CMP EAX,0x1
0073CF86  75 01                     JNZ 0x0073cf89
0073CF88  CC                        INT3
LAB_0073cf89:
0073CF89  33 D2                     XOR EDX,EDX
0073CF8B  85 D2                     TEST EDX,EDX
0073CF8D  75 D6                     JNZ 0x0073cf65
LAB_0073cf8f:
0073CF8F  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073CF93  75 1E                     JNZ 0x0073cfb3
0073CF95  68 90 FE 79 00            PUSH 0x79fe90
0073CF9A  6A 00                     PUSH 0x0
0073CF9C  6A 5E                     PUSH 0x5e
0073CF9E  68 2C FF 79 00            PUSH 0x79ff2c
0073CFA3  6A 02                     PUSH 0x2
0073CFA5  E8 F6 3F FF FF            CALL 0x00730fa0
0073CFAA  83 C4 14                  ADD ESP,0x14
0073CFAD  83 F8 01                  CMP EAX,0x1
0073CFB0  75 01                     JNZ 0x0073cfb3
0073CFB2  CC                        INT3
LAB_0073cfb3:
0073CFB3  33 C0                     XOR EAX,EAX
0073CFB5  85 C0                     TEST EAX,EAX
0073CFB7  75 D6                     JNZ 0x0073cf8f
0073CFB9  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0073CFBC  C7 41 0C 42 00 00 00      MOV dword ptr [ECX + 0xc],0x42
0073CFC3  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0073CFC6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073CFC9  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0073CFCC  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0073CFCF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073CFD2  89 11                     MOV dword ptr [ECX],EDX
0073CFD4  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0073CFD7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073CFDA  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0073CFDD  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0073CFE0  52                        PUSH EDX
0073CFE1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073CFE4  50                        PUSH EAX
0073CFE5  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0073CFE8  51                        PUSH ECX
0073CFE9  E8 02 E7 FF FF            CALL 0x0073b6f0
0073CFEE  83 C4 0C                  ADD ESP,0xc
0073CFF1  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0073CFF4  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0073CFF7  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0073CFFA  83 E8 01                  SUB EAX,0x1
0073CFFD  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0073D000  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0073D003  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0073D006  83 7A 04 00               CMP dword ptr [EDX + 0x4],0x0
0073D00A  7C 22                     JL 0x0073d02e
0073D00C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0073D00F  8B 08                     MOV ECX,dword ptr [EAX]
0073D011  C6 01 00                  MOV byte ptr [ECX],0x0
0073D014  33 D2                     XOR EDX,EDX
0073D016  81 E2 FF 00 00 00         AND EDX,0xff
0073D01C  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0073D01F  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0073D022  8B 08                     MOV ECX,dword ptr [EAX]
0073D024  83 C1 01                  ADD ECX,0x1
0073D027  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0073D02A  89 0A                     MOV dword ptr [EDX],ECX
0073D02C  EB 11                     JMP 0x0073d03f
LAB_0073d02e:
0073D02E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0073D031  50                        PUSH EAX
0073D032  6A 00                     PUSH 0x0
0073D034  E8 37 E4 FF FF            CALL 0x0073b470
0073D039  83 C4 08                  ADD ESP,0x8
0073D03C  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_0073d03f:
0073D03F  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0073D042  5F                        POP EDI
0073D043  5E                        POP ESI
0073D044  5B                        POP EBX
0073D045  8B E5                     MOV ESP,EBP
0073D047  5D                        POP EBP
0073D048  C3                        RET
