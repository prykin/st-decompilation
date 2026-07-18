FUN_0064d0e0:
0064D0E0  55                        PUSH EBP
0064D0E1  8B EC                     MOV EBP,ESP
0064D0E3  81 EC 00 04 00 00         SUB ESP,0x400
0064D0E9  A0 4A 73 80 00            MOV AL,[0x0080734a]
0064D0EE  57                        PUSH EDI
0064D0EF  84 C0                     TEST AL,AL
0064D0F1  8B F9                     MOV EDI,ECX
0064D0F3  0F 84 12 01 00 00         JZ 0x0064d20b
0064D0F9  56                        PUSH ESI
0064D0FA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0064D0FD  81 FE 2C 01 00 00         CMP ESI,0x12c
0064D103  7E 07                     JLE 0x0064d10c
0064D105  BE 2C 01 00 00            MOV ESI,0x12c
0064D10A  EB 0D                     JMP 0x0064d119
LAB_0064d10c:
0064D10C  81 FE D4 FE FF FF         CMP ESI,0xfffffed4
0064D112  7D 05                     JGE 0x0064d119
0064D114  BE D4 FE FF FF            MOV ESI,0xfffffed4
LAB_0064d119:
0064D119  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0064D11C  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0064D122  BA 4C 1D 00 00            MOV EDX,0x1d4c
0064D127  50                        PUSH EAX
0064D128  2B D6                     SUB EDX,ESI
0064D12A  51                        PUSH ECX
0064D12B  52                        PUSH EDX
0064D12C  E8 0F 30 06 00            CALL 0x006b0140
0064D131  50                        PUSH EAX
0064D132  A1 18 76 80 00            MOV EAX,[0x00807618]
0064D137  56                        PUSH ESI
0064D138  50                        PUSH EAX
0064D139  68 5F 1B 00 00            PUSH 0x1b5f
0064D13E  E8 FD 2F 06 00            CALL 0x006b0140
0064D143  8B 35 E8 BD 85 00         MOV ESI,dword ptr [0x0085bde8]
0064D149  8D 8D 00 FC FF FF         LEA ECX,[EBP + 0xfffffc00]
0064D14F  50                        PUSH EAX
0064D150  51                        PUSH ECX
0064D151  FF D6                     CALL ESI
0064D153  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0064D159  83 C4 14                  ADD ESP,0x14
0064D15C  85 C9                     TEST ECX,ECX
0064D15E  74 0E                     JZ 0x0064d16e
0064D160  8D 95 00 FC FF FF         LEA EDX,[EBP + 0xfffffc00]
0064D166  6A 08                     PUSH 0x8
0064D168  52                        PUSH EDX
0064D169  E8 6A 43 DB FF            CALL 0x004014d8
LAB_0064d16e:
0064D16E  8D 85 00 FC FF FF         LEA EAX,[EBP + 0xfffffc00]
0064D174  50                        PUSH EAX
0064D175  E8 0F 6A DB FF            CALL 0x00403b89
0064D17A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0064D17D  83 C4 04                  ADD ESP,0x4
0064D180  85 C0                     TEST EAX,EAX
0064D182  7D 2B                     JGE 0x0064d1af
0064D184  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0064D187  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0064D18D  81 C7 92 00 00 00         ADD EDI,0x92
0064D193  51                        PUSH ECX
0064D194  57                        PUSH EDI
0064D195  52                        PUSH EDX
0064D196  68 60 1B 00 00            PUSH 0x1b60
0064D19B  E8 A0 2F 06 00            CALL 0x006b0140
0064D1A0  50                        PUSH EAX
0064D1A1  8D 85 00 FC FF FF         LEA EAX,[EBP + 0xfffffc00]
0064D1A7  50                        PUSH EAX
0064D1A8  FF D6                     CALL ESI
0064D1AA  83 C4 10                  ADD ESP,0x10
0064D1AD  EB 2A                     JMP 0x0064d1d9
LAB_0064d1af:
0064D1AF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0064D1B2  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0064D1B8  50                        PUSH EAX
0064D1B9  81 C7 92 00 00 00         ADD EDI,0x92
0064D1BF  51                        PUSH ECX
0064D1C0  57                        PUSH EDI
0064D1C1  52                        PUSH EDX
0064D1C2  68 61 1B 00 00            PUSH 0x1b61
0064D1C7  E8 74 2F 06 00            CALL 0x006b0140
0064D1CC  50                        PUSH EAX
0064D1CD  8D 85 00 FC FF FF         LEA EAX,[EBP + 0xfffffc00]
0064D1D3  50                        PUSH EAX
0064D1D4  FF D6                     CALL ESI
0064D1D6  83 C4 14                  ADD ESP,0x14
LAB_0064d1d9:
0064D1D9  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0064D1DF  5E                        POP ESI
0064D1E0  85 C9                     TEST ECX,ECX
0064D1E2  74 0E                     JZ 0x0064d1f2
0064D1E4  8D 95 00 FC FF FF         LEA EDX,[EBP + 0xfffffc00]
0064D1EA  6A 08                     PUSH 0x8
0064D1EC  52                        PUSH EDX
0064D1ED  E8 E6 42 DB FF            CALL 0x004014d8
LAB_0064d1f2:
0064D1F2  8D 85 00 FC FF FF         LEA EAX,[EBP + 0xfffffc00]
0064D1F8  50                        PUSH EAX
0064D1F9  E8 8B 69 DB FF            CALL 0x00403b89
0064D1FE  68 00 2A 7D 00            PUSH 0x7d2a00
0064D203  E8 81 69 DB FF            CALL 0x00403b89
0064D208  83 C4 08                  ADD ESP,0x8
LAB_0064d20b:
0064D20B  5F                        POP EDI
0064D20C  8B E5                     MOV ESP,EBP
0064D20E  5D                        POP EBP
0064D20F  C2 10 00                  RET 0x10
