mfWavSaveFile:
0071A110  55                        PUSH EBP
0071A111  8B EC                     MOV EBP,ESP
0071A113  83 EC 4C                  SUB ESP,0x4c
0071A116  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071A11B  53                        PUSH EBX
0071A11C  56                        PUSH ESI
0071A11D  57                        PUSH EDI
0071A11E  8D 55 B8                  LEA EDX,[EBP + -0x48]
0071A121  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0071A124  6A 00                     PUSH 0x0
0071A126  52                        PUSH EDX
0071A127  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0071A12E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0071A131  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071A137  E8 B4 36 01 00            CALL 0x0072d7f0
0071A13C  8B F0                     MOV ESI,EAX
0071A13E  83 C4 08                  ADD ESP,0x8
0071A141  85 F6                     TEST ESI,ESI
0071A143  0F 85 8A 00 00 00         JNZ 0x0071a1d3
0071A149  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0071A14C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0071A14F  85 F6                     TEST ESI,ESI
0071A151  74 0B                     JZ 0x0071a15e
0071A153  85 FF                     TEST EDI,EDI
0071A155  74 07                     JZ 0x0071a15e
0071A157  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0071A15A  85 C0                     TEST EAX,EAX
0071A15C  75 17                     JNZ 0x0071a175
LAB_0071a15e:
0071A15E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071A163  68 97 00 00 00            PUSH 0x97
0071A168  68 00 08 7F 00            PUSH 0x7f0800
0071A16D  50                        PUSH EAX
0071A16E  6A FA                     PUSH -0x6
0071A170  E8 CB BC F8 FF            CALL 0x006a5e40
LAB_0071a175:
0071A175  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0071A178  84 DB                     TEST BL,BL
0071A17A  75 0C                     JNZ 0x0071a188
0071A17C  8D 4D F8                  LEA ECX,[EBP + -0x8]
0071A17F  51                        PUSH ECX
0071A180  57                        PUSH EDI
0071A181  E8 FA 0C 00 00            CALL 0x0071ae80
0071A186  EB 0A                     JMP 0x0071a192
LAB_0071a188:
0071A188  8D 55 F8                  LEA EDX,[EBP + -0x8]
0071A18B  52                        PUSH EDX
0071A18C  57                        PUSH EDI
0071A18D  E8 0E FD FF FF            CALL 0x00719ea0
LAB_0071a192:
0071A192  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0071A195  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0071A198  83 C4 08                  ADD ESP,0x8
0071A19B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071A19E  51                        PUSH ECX
0071A19F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0071A1A2  52                        PUSH EDX
0071A1A3  56                        PUSH ESI
0071A1A4  53                        PUSH EBX
0071A1A5  51                        PUSH ECX
0071A1A6  50                        PUSH EAX
0071A1A7  E8 84 FE FF FF            CALL 0x0071a030
0071A1AC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A1AF  83 C4 18                  ADD ESP,0x18
0071A1B2  85 C0                     TEST EAX,EAX
0071A1B4  74 09                     JZ 0x0071a1bf
0071A1B6  8D 55 FC                  LEA EDX,[EBP + -0x4]
0071A1B9  52                        PUSH EDX
0071A1BA  E8 A1 0E F9 FF            CALL 0x006ab060
LAB_0071a1bf:
0071A1BF  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0071A1C2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071A1C7  B8 01 00 00 00            MOV EAX,0x1
0071A1CC  5F                        POP EDI
0071A1CD  5E                        POP ESI
0071A1CE  5B                        POP EBX
0071A1CF  8B E5                     MOV ESP,EBP
0071A1D1  5D                        POP EBP
0071A1D2  C3                        RET
LAB_0071a1d3:
0071A1D3  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0071A1D6  68 50 08 7F 00            PUSH 0x7f0850
0071A1DB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071A1E0  56                        PUSH ESI
0071A1E1  6A 00                     PUSH 0x0
0071A1E3  68 A2 00 00 00            PUSH 0xa2
0071A1E8  68 00 08 7F 00            PUSH 0x7f0800
0071A1ED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071A1F3  E8 D8 32 F9 FF            CALL 0x006ad4d0
0071A1F8  83 C4 18                  ADD ESP,0x18
0071A1FB  85 C0                     TEST EAX,EAX
0071A1FD  74 01                     JZ 0x0071a200
0071A1FF  CC                        INT3
LAB_0071a200:
0071A200  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A203  85 C0                     TEST EAX,EAX
0071A205  74 09                     JZ 0x0071a210
0071A207  8D 55 FC                  LEA EDX,[EBP + -0x4]
0071A20A  52                        PUSH EDX
0071A20B  E8 50 0E F9 FF            CALL 0x006ab060
LAB_0071a210:
0071A210  68 A6 00 00 00            PUSH 0xa6
0071A215  68 00 08 7F 00            PUSH 0x7f0800
0071A21A  6A 00                     PUSH 0x0
0071A21C  56                        PUSH ESI
0071A21D  E8 1E BC F8 FF            CALL 0x006a5e40
0071A222  5F                        POP EDI
0071A223  5E                        POP ESI
0071A224  33 C0                     XOR EAX,EAX
0071A226  5B                        POP EBX
0071A227  8B E5                     MOV ESP,EBP
0071A229  5D                        POP EBP
0071A22A  C3                        RET
