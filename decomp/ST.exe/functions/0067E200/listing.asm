CreateSaveStrategList:
0067E200  55                        PUSH EBP
0067E201  8B EC                     MOV EBP,ESP
0067E203  83 EC 48                  SUB ESP,0x48
0067E206  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067E20B  56                        PUSH ESI
0067E20C  57                        PUSH EDI
0067E20D  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067E210  8D 4D B8                  LEA ECX,[EBP + -0x48]
0067E213  6A 00                     PUSH 0x0
0067E215  52                        PUSH EDX
0067E216  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067E21D  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0067E220  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E226  E8 C5 F5 0A 00            CALL 0x0072d7f0
0067E22B  8B F0                     MOV ESI,EAX
0067E22D  83 C4 08                  ADD ESP,0x8
0067E230  85 F6                     TEST ESI,ESI
0067E232  75 5B                     JNZ 0x0067e28f
0067E234  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0067E237  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0067E23A  85 FF                     TEST EDI,EDI
0067E23C  74 09                     JZ 0x0067e247
0067E23E  85 F6                     TEST ESI,ESI
0067E240  7C 05                     JL 0x0067e247
0067E242  83 FE 08                  CMP ESI,0x8
0067E245  7C 17                     JL 0x0067e25e
LAB_0067e247:
0067E247  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067E24C  68 AD 01 00 00            PUSH 0x1ad
0067E251  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E256  50                        PUSH EAX
0067E257  6A CC                     PUSH -0x34
0067E259  E8 E2 7B 02 00            CALL 0x006a5e40
LAB_0067e25e:
0067E25E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0067E261  8B 15 1C D7 79 00         MOV EDX,dword ptr [0x0079d71c]
0067E267  51                        PUSH ECX
0067E268  56                        PUSH ESI
0067E269  6A 02                     PUSH 0x2
0067E26B  52                        PUSH EDX
0067E26C  E8 8F 49 07 00            CALL 0x006f2c00
0067E271  83 C4 0C                  ADD ESP,0xc
0067E274  50                        PUSH EAX
0067E275  6A 00                     PUSH 0x0
0067E277  57                        PUSH EDI
0067E278  E8 6E 33 D8 FF            CALL 0x004015eb
0067E27D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0067E280  83 C4 10                  ADD ESP,0x10
0067E283  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E289  5F                        POP EDI
0067E28A  5E                        POP ESI
0067E28B  8B E5                     MOV ESP,EBP
0067E28D  5D                        POP EBP
0067E28E  C3                        RET
LAB_0067e28f:
0067E28F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0067E292  68 6C 30 7D 00            PUSH 0x7d306c
0067E297  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067E29C  56                        PUSH ESI
0067E29D  6A 00                     PUSH 0x0
0067E29F  68 B0 01 00 00            PUSH 0x1b0
0067E2A4  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E2A9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067E2AF  E8 1C F2 02 00            CALL 0x006ad4d0
0067E2B4  83 C4 18                  ADD ESP,0x18
0067E2B7  85 C0                     TEST EAX,EAX
0067E2B9  74 01                     JZ 0x0067e2bc
0067E2BB  CC                        INT3
LAB_0067e2bc:
0067E2BC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067E2BF  50                        PUSH EAX
0067E2C0  E8 4B FE 02 00            CALL 0x006ae110
0067E2C5  68 B2 01 00 00            PUSH 0x1b2
0067E2CA  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E2CF  6A 00                     PUSH 0x0
0067E2D1  56                        PUSH ESI
0067E2D2  E8 69 7B 02 00            CALL 0x006a5e40
0067E2D7  5F                        POP EDI
0067E2D8  33 C0                     XOR EAX,EAX
0067E2DA  5E                        POP ESI
0067E2DB  8B E5                     MOV ESP,EBP
0067E2DD  5D                        POP EBP
0067E2DE  C3                        RET
