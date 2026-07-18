FUN_005de050:
005DE050  55                        PUSH EBP
005DE051  8B EC                     MOV EBP,ESP
005DE053  83 EC 50                  SUB ESP,0x50
005DE056  8B 81 44 05 00 00         MOV EAX,dword ptr [ECX + 0x544]
005DE05C  53                        PUSH EBX
005DE05D  56                        PUSH ESI
005DE05E  57                        PUSH EDI
005DE05F  85 C0                     TEST EAX,EAX
005DE061  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005DE064  0F 84 7F 01 00 00         JZ 0x005de1e9
005DE06A  8B 81 48 05 00 00         MOV EAX,dword ptr [ECX + 0x548]
005DE070  85 C0                     TEST EAX,EAX
005DE072  0F 84 71 01 00 00         JZ 0x005de1e9
005DE078  8B 81 40 05 00 00         MOV EAX,dword ptr [ECX + 0x540]
005DE07E  85 C0                     TEST EAX,EAX
005DE080  0F 8C 63 01 00 00         JL 0x005de1e9
005DE086  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005DE089  85 C0                     TEST EAX,EAX
005DE08B  0F 84 58 01 00 00         JZ 0x005de1e9
005DE091  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
005DE094  85 C0                     TEST EAX,EAX
005DE096  0F 84 4D 01 00 00         JZ 0x005de1e9
005DE09C  8B 71 34                  MOV ESI,dword ptr [ECX + 0x34]
005DE09F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005DE0A2  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005DE0A8  85 C0                     TEST EAX,EAX
005DE0AA  74 09                     JZ 0x005de0b5
005DE0AC  56                        PUSH ESI
005DE0AD  E8 DE 26 13 00            CALL 0x00710790
005DE0B2  83 C4 04                  ADD ESP,0x4
LAB_005de0b5:
005DE0B5  8B 86 8A 00 00 00         MOV EAX,dword ptr [ESI + 0x8a]
005DE0BB  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005DE0C1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005DE0C4  8D 45 B4                  LEA EAX,[EBP + -0x4c]
005DE0C7  8D 55 B0                  LEA EDX,[EBP + -0x50]
005DE0CA  6A 00                     PUSH 0x0
005DE0CC  50                        PUSH EAX
005DE0CD  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
005DE0D0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DE0D6  E8 15 F7 14 00            CALL 0x0072d7f0
005DE0DB  8B F0                     MOV ESI,EAX
005DE0DD  83 C4 08                  ADD ESP,0x8
005DE0E0  85 F6                     TEST ESI,ESI
005DE0E2  0F 85 C2 00 00 00         JNZ 0x005de1aa
005DE0E8  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005DE0EB  68 FF 00 00 00            PUSH 0xff
005DE0F0  8B 87 44 05 00 00         MOV EAX,dword ptr [EDI + 0x544]
005DE0F6  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005DE0F9  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005DE0FC  51                        PUSH ECX
005DE0FD  52                        PUSH EDX
005DE0FE  56                        PUSH ESI
005DE0FF  56                        PUSH ESI
005DE100  56                        PUSH ESI
005DE101  50                        PUSH EAX
005DE102  E8 69 60 0D 00            CALL 0x006b4170
005DE107  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DE10A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005DE10D  33 C0                     XOR EAX,EAX
005DE10F  66 8B 41 16               MOV AX,word ptr [ECX + 0x16]
005DE113  8B 8A E0 01 00 00         MOV ECX,dword ptr [EDX + 0x1e0]
005DE119  8B F0                     MOV ESI,EAX
005DE11B  03 C8                     ADD ECX,EAX
005DE11D  3B F1                     CMP ESI,ECX
005DE11F  7D 65                     JGE 0x005de186
LAB_005de121:
005DE121  8B 8F 48 05 00 00         MOV ECX,dword ptr [EDI + 0x548]
005DE127  3B 71 08                  CMP ESI,dword ptr [ECX + 0x8]
005DE12A  7D 08                     JGE 0x005de134
005DE12C  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
005DE12F  8B 1C B2                  MOV EBX,dword ptr [EDX + ESI*0x4]
005DE132  EB 02                     JMP 0x005de136
LAB_005de134:
005DE134  33 DB                     XOR EBX,EBX
LAB_005de136:
005DE136  85 DB                     TEST EBX,EBX
005DE138  74 33                     JZ 0x005de16d
005DE13A  8B 8F 44 05 00 00         MOV ECX,dword ptr [EDI + 0x544]
005DE140  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005DE143  52                        PUSH EDX
005DE144  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005DE147  52                        PUSH EDX
005DE148  8B D6                     MOV EDX,ESI
005DE14A  2B D0                     SUB EDX,EAX
005DE14C  0F AF 55 FC               IMUL EDX,dword ptr [EBP + -0x4]
005DE150  52                        PUSH EDX
005DE151  6A 00                     PUSH 0x0
005DE153  6A 00                     PUSH 0x0
005DE155  51                        PUSH ECX
005DE156  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
005DE159  E8 32 29 13 00            CALL 0x00710a90
005DE15E  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
005DE161  6A 00                     PUSH 0x0
005DE163  6A FF                     PUSH -0x1
005DE165  6A 00                     PUSH 0x0
005DE167  53                        PUSH EBX
005DE168  E8 53 38 13 00            CALL 0x007119c0
LAB_005de16d:
005DE16D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DE170  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005DE173  33 C0                     XOR EAX,EAX
005DE175  46                        INC ESI
005DE176  66 8B 41 16               MOV AX,word ptr [ECX + 0x16]
005DE17A  8B 8A E0 01 00 00         MOV ECX,dword ptr [EDX + 0x1e0]
005DE180  03 C8                     ADD ECX,EAX
005DE182  3B F1                     CMP ESI,ECX
005DE184  7C 9B                     JL 0x005de121
LAB_005de186:
005DE186  8B 97 40 05 00 00         MOV EDX,dword ptr [EDI + 0x540]
005DE18C  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DE191  52                        PUSH EDX
005DE192  50                        PUSH EAX
005DE193  E8 38 54 0D 00            CALL 0x006b35d0
005DE198  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005DE19B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DE1A1  5F                        POP EDI
005DE1A2  5E                        POP ESI
005DE1A3  5B                        POP EBX
005DE1A4  8B E5                     MOV ESP,EBP
005DE1A6  5D                        POP EBP
005DE1A7  C2 04 00                  RET 0x4
LAB_005de1aa:
005DE1AA  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005DE1AD  68 E0 D8 7C 00            PUSH 0x7cd8e0
005DE1B2  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DE1B7  56                        PUSH ESI
005DE1B8  6A 00                     PUSH 0x0
005DE1BA  68 CB 03 00 00            PUSH 0x3cb
005DE1BF  68 18 D7 7C 00            PUSH 0x7cd718
005DE1C4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DE1CA  E8 01 F3 0C 00            CALL 0x006ad4d0
005DE1CF  83 C4 18                  ADD ESP,0x18
005DE1D2  85 C0                     TEST EAX,EAX
005DE1D4  74 01                     JZ 0x005de1d7
005DE1D6  CC                        INT3
LAB_005de1d7:
005DE1D7  68 CB 03 00 00            PUSH 0x3cb
005DE1DC  68 18 D7 7C 00            PUSH 0x7cd718
005DE1E1  6A 00                     PUSH 0x0
005DE1E3  56                        PUSH ESI
005DE1E4  E8 57 7C 0C 00            CALL 0x006a5e40
LAB_005de1e9:
005DE1E9  5F                        POP EDI
005DE1EA  5E                        POP ESI
005DE1EB  5B                        POP EBX
005DE1EC  8B E5                     MOV ESP,EBP
005DE1EE  5D                        POP EBP
005DE1EF  C2 04 00                  RET 0x4
