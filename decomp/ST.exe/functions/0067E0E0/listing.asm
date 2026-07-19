CreateStrategList:
0067E0E0  55                        PUSH EBP
0067E0E1  8B EC                     MOV EBP,ESP
0067E0E3  83 EC 48                  SUB ESP,0x48
0067E0E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067E0EB  56                        PUSH ESI
0067E0EC  57                        PUSH EDI
0067E0ED  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067E0F0  8D 4D B8                  LEA ECX,[EBP + -0x48]
0067E0F3  6A 00                     PUSH 0x0
0067E0F5  52                        PUSH EDX
0067E0F6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067E0FD  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0067E100  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E106  E8 E5 F6 0A 00            CALL 0x0072d7f0
0067E10B  8B F0                     MOV ESI,EAX
0067E10D  83 C4 08                  ADD ESP,0x8
0067E110  85 F6                     TEST ESI,ESI
0067E112  75 5B                     JNZ 0x0067e16f
0067E114  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0067E117  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0067E11A  85 FF                     TEST EDI,EDI
0067E11C  74 09                     JZ 0x0067e127
0067E11E  85 F6                     TEST ESI,ESI
0067E120  7C 05                     JL 0x0067e127
0067E122  83 FE 08                  CMP ESI,0x8
0067E125  7C 17                     JL 0x0067e13e
LAB_0067e127:
0067E127  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067E12C  68 97 01 00 00            PUSH 0x197
0067E131  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E136  50                        PUSH EAX
0067E137  6A CC                     PUSH -0x34
0067E139  E8 02 7D 02 00            CALL 0x006a5e40
LAB_0067e13e:
0067E13E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0067E141  8B 15 2C D7 79 00         MOV EDX,dword ptr [0x0079d72c]
0067E147  51                        PUSH ECX
0067E148  56                        PUSH ESI
0067E149  6A 01                     PUSH 0x1
0067E14B  52                        PUSH EDX
0067E14C  E8 AF 4A 07 00            CALL 0x006f2c00
0067E151  83 C4 0C                  ADD ESP,0xc
0067E154  50                        PUSH EAX
0067E155  6A 00                     PUSH 0x0
0067E157  57                        PUSH EDI
0067E158  E8 8E 34 D8 FF            CALL 0x004015eb
0067E15D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0067E160  83 C4 10                  ADD ESP,0x10
0067E163  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E169  5F                        POP EDI
0067E16A  5E                        POP ESI
0067E16B  8B E5                     MOV ESP,EBP
0067E16D  5D                        POP EBP
0067E16E  C3                        RET
LAB_0067e16f:
0067E16F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0067E172  68 54 30 7D 00            PUSH 0x7d3054
0067E177  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067E17C  56                        PUSH ESI
0067E17D  6A 00                     PUSH 0x0
0067E17F  68 9A 01 00 00            PUSH 0x19a
0067E184  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E189  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067E18F  E8 3C F3 02 00            CALL 0x006ad4d0
0067E194  83 C4 18                  ADD ESP,0x18
0067E197  85 C0                     TEST EAX,EAX
0067E199  74 01                     JZ 0x0067e19c
0067E19B  CC                        INT3
LAB_0067e19c:
0067E19C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067E19F  50                        PUSH EAX
0067E1A0  E8 6B FF 02 00            CALL 0x006ae110
0067E1A5  68 9C 01 00 00            PUSH 0x19c
0067E1AA  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E1AF  6A 00                     PUSH 0x0
0067E1B1  56                        PUSH ESI
0067E1B2  E8 89 7C 02 00            CALL 0x006a5e40
0067E1B7  5F                        POP EDI
0067E1B8  33 C0                     XOR EAX,EAX
0067E1BA  5E                        POP ESI
0067E1BB  8B E5                     MOV ESP,EBP
0067E1BD  5D                        POP EBP
0067E1BE  C3                        RET
