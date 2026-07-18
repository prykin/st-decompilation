FUN_0062d120:
0062D120  55                        PUSH EBP
0062D121  8B EC                     MOV EBP,ESP
0062D123  8D 51 30                  LEA EDX,[ECX + 0x30]
0062D126  53                        PUSH EBX
0062D127  33 C0                     XOR EAX,EAX
0062D129  56                        PUSH ESI
0062D12A  85 D2                     TEST EDX,EDX
0062D12C  57                        PUSH EDI
0062D12D  0F 84 B0 00 00 00         JZ 0x0062d1e3
0062D133  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062D136  8B 54 91 30               MOV EDX,dword ptr [ECX + EDX*0x4 + 0x30]
0062D13A  3B D0                     CMP EDX,EAX
0062D13C  0F 84 A1 00 00 00         JZ 0x0062d1e3
0062D142  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0062D145  3B F0                     CMP ESI,EAX
0062D147  7C 31                     JL 0x0062d17a
0062D149  3B 72 0C                  CMP ESI,dword ptr [EDX + 0xc]
0062D14C  73 0B                     JNC 0x0062d159
0062D14E  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0062D151  0F AF CE                  IMUL ECX,ESI
0062D154  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
0062D157  EB 02                     JMP 0x0062d15b
LAB_0062d159:
0062D159  33 C9                     XOR ECX,ECX
LAB_0062d15b:
0062D15B  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0062D15E  3B D0                     CMP EDX,EAX
0062D160  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0062D163  74 03                     JZ 0x0062d168
0062D165  42                        INC EDX
0062D166  EB 01                     JMP 0x0062d169
LAB_0062d168:
0062D168  4A                        DEC EDX
LAB_0062d169:
0062D169  3B D0                     CMP EDX,EAX
0062D16B  89 51 1C                  MOV dword ptr [ECX + 0x1c],EDX
0062D16E  7D 73                     JGE 0x0062d1e3
0062D170  5F                        POP EDI
0062D171  5E                        POP ESI
0062D172  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
0062D175  5B                        POP EBX
0062D176  5D                        POP EBP
0062D177  C2 1C 00                  RET 0x1c
LAB_0062d17a:
0062D17A  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
0062D17D  33 F6                     XOR ESI,ESI
0062D17F  3B F8                     CMP EDI,EAX
0062D181  7E 60                     JLE 0x0062d1e3
0062D183  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0062D186  3B F7                     CMP ESI,EDI
LAB_0062d188:
0062D188  73 2C                     JNC 0x0062d1b6
0062D18A  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0062D18D  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0062D190  0F AF CE                  IMUL ECX,ESI
0062D193  03 C8                     ADD ECX,EAX
0062D195  85 C9                     TEST ECX,ECX
0062D197  74 1D                     JZ 0x0062d1b6
0062D199  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0062D19C  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
0062D19F  75 15                     JNZ 0x0062d1b6
0062D1A1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0062D1A4  39 41 08                  CMP dword ptr [ECX + 0x8],EAX
0062D1A7  75 0D                     JNZ 0x0062d1b6
0062D1A9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0062D1AC  39 41 0C                  CMP dword ptr [ECX + 0xc],EAX
0062D1AF  75 05                     JNZ 0x0062d1b6
0062D1B1  39 59 14                  CMP dword ptr [ECX + 0x14],EBX
0062D1B4  74 0E                     JZ 0x0062d1c4
LAB_0062d1b6:
0062D1B6  46                        INC ESI
0062D1B7  3B F7                     CMP ESI,EDI
0062D1B9  7C CD                     JL 0x0062d188
0062D1BB  5F                        POP EDI
0062D1BC  5E                        POP ESI
0062D1BD  33 C0                     XOR EAX,EAX
0062D1BF  5B                        POP EBX
0062D1C0  5D                        POP EBP
0062D1C1  C2 1C 00                  RET 0x1c
LAB_0062d1c4:
0062D1C4  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0062D1C7  85 C0                     TEST EAX,EAX
0062D1C9  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
0062D1CC  74 03                     JZ 0x0062d1d1
0062D1CE  40                        INC EAX
0062D1CF  EB 01                     JMP 0x0062d1d2
LAB_0062d1d1:
0062D1D1  48                        DEC EAX
LAB_0062d1d2:
0062D1D2  85 C0                     TEST EAX,EAX
0062D1D4  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
0062D1D7  7D 07                     JGE 0x0062d1e0
0062D1D9  C7 41 1C 00 00 00 00      MOV dword ptr [ECX + 0x1c],0x0
LAB_0062d1e0:
0062D1E0  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
LAB_0062d1e3:
0062D1E3  5F                        POP EDI
0062D1E4  5E                        POP ESI
0062D1E5  5B                        POP EBX
0062D1E6  5D                        POP EBP
0062D1E7  C2 1C 00                  RET 0x1c
