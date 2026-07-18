FUN_0056a130:
0056A130  55                        PUSH EBP
0056A131  8B EC                     MOV EBP,ESP
0056A133  83 EC 48                  SUB ESP,0x48
0056A136  8B 81 8B 0F 00 00         MOV EAX,dword ptr [ECX + 0xf8b]
0056A13C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0056A13F  85 C0                     TEST EAX,EAX
0056A141  0F 84 FB 00 00 00         JZ 0x0056a242
0056A147  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056A14C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0056A14F  8D 4D B8                  LEA ECX,[EBP + -0x48]
0056A152  6A 00                     PUSH 0x0
0056A154  52                        PUSH EDX
0056A155  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0056A158  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056A15E  E8 8D 36 1C 00            CALL 0x0072d7f0
0056A163  83 C4 08                  ADD ESP,0x8
0056A166  85 C0                     TEST EAX,EAX
0056A168  0F 85 CC 00 00 00         JNZ 0x0056a23a
0056A16E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0056A171  85 C0                     TEST EAX,EAX
0056A173  75 1E                     JNZ 0x0056a193
0056A175  50                        PUSH EAX
0056A176  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056A179  99                        CDQ
0056A17A  33 C2                     XOR EAX,EDX
0056A17C  6A FF                     PUSH -0x1
0056A17E  2B C2                     SUB EAX,EDX
0056A180  50                        PUSH EAX
0056A181  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056A184  8B 88 F3 0D 00 00         MOV ECX,dword ptr [EAX + 0xdf3]
0056A18A  51                        PUSH ECX
0056A18B  E8 00 08 1B 00            CALL 0x0071a990
0056A190  83 C4 10                  ADD ESP,0x10
LAB_0056a193:
0056A193  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0056A196  81 E1 FF 00 00 00         AND ECX,0xff
0056A19C  49                        DEC ECX
0056A19D  74 5D                     JZ 0x0056a1fc
0056A19F  49                        DEC ECX
0056A1A0  74 2F                     JZ 0x0056a1d1
0056A1A2  85 C0                     TEST EAX,EAX
0056A1A4  0F 84 81 00 00 00         JZ 0x0056a22b
0056A1AA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0056A1AD  85 C9                     TEST ECX,ECX
0056A1AF  7D 11                     JGE 0x0056a1c2
0056A1B1  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
0056A1B7  6A 1F                     PUSH 0x1f
0056A1B9  6A 10                     PUSH 0x10
0056A1BB  6A 00                     PUSH 0x0
0056A1BD  52                        PUSH EDX
0056A1BE  6A 00                     PUSH 0x0
0056A1C0  EB 61                     JMP 0x0056a223
LAB_0056a1c2:
0056A1C2  51                        PUSH ECX
0056A1C3  51                        PUSH ECX
0056A1C4  8B 0D 0E 73 80 00         MOV ECX,dword ptr [0x0080730e]
0056A1CA  6A 00                     PUSH 0x0
0056A1CC  51                        PUSH ECX
0056A1CD  6A 00                     PUSH 0x0
0056A1CF  EB 52                     JMP 0x0056a223
LAB_0056a1d1:
0056A1D1  85 C0                     TEST EAX,EAX
0056A1D3  74 56                     JZ 0x0056a22b
0056A1D5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0056A1D8  85 C9                     TEST ECX,ECX
0056A1DA  7D 11                     JGE 0x0056a1ed
0056A1DC  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
0056A1E2  6A 0F                     PUSH 0xf
0056A1E4  6A 00                     PUSH 0x0
0056A1E6  6A 00                     PUSH 0x0
0056A1E8  52                        PUSH EDX
0056A1E9  6A 09                     PUSH 0x9
0056A1EB  EB 36                     JMP 0x0056a223
LAB_0056a1ed:
0056A1ED  51                        PUSH ECX
0056A1EE  51                        PUSH ECX
0056A1EF  8B 0D 0E 73 80 00         MOV ECX,dword ptr [0x0080730e]
0056A1F5  6A 00                     PUSH 0x0
0056A1F7  51                        PUSH ECX
0056A1F8  6A 09                     PUSH 0x9
0056A1FA  EB 27                     JMP 0x0056a223
LAB_0056a1fc:
0056A1FC  85 C0                     TEST EAX,EAX
0056A1FE  74 2B                     JZ 0x0056a22b
0056A200  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0056A203  85 C9                     TEST ECX,ECX
0056A205  7D 0F                     JGE 0x0056a216
0056A207  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
0056A20D  6A 0F                     PUSH 0xf
0056A20F  6A 00                     PUSH 0x0
0056A211  6A 00                     PUSH 0x0
0056A213  52                        PUSH EDX
0056A214  EB 0B                     JMP 0x0056a221
LAB_0056a216:
0056A216  51                        PUSH ECX
0056A217  51                        PUSH ECX
0056A218  8B 0D 0E 73 80 00         MOV ECX,dword ptr [0x0080730e]
0056A21E  6A 00                     PUSH 0x0
0056A220  51                        PUSH ECX
LAB_0056a221:
0056A221  6A 02                     PUSH 0x2
LAB_0056a223:
0056A223  6A 00                     PUSH 0x0
0056A225  50                        PUSH EAX
0056A226  E8 65 71 15 00            CALL 0x006c1390
LAB_0056a22b:
0056A22B  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0056A22E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056A234  8B E5                     MOV ESP,EBP
0056A236  5D                        POP EBP
0056A237  C2 10 00                  RET 0x10
LAB_0056a23a:
0056A23A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056A23D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_0056a242:
0056A242  8B E5                     MOV ESP,EBP
0056A244  5D                        POP EBP
0056A245  C2 10 00                  RET 0x10
