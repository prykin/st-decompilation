FUN_0068f020:
0068F020  55                        PUSH EBP
0068F021  8B EC                     MOV EBP,ESP
0068F023  83 EC 4C                  SUB ESP,0x4c
0068F026  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0068F02B  53                        PUSH EBX
0068F02C  56                        PUSH ESI
0068F02D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0068F030  57                        PUSH EDI
0068F031  8D 55 B8                  LEA EDX,[EBP + -0x48]
0068F034  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0068F037  6A 00                     PUSH 0x0
0068F039  52                        PUSH EDX
0068F03A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0068F03D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068F043  E8 A8 E7 09 00            CALL 0x0072d7f0
0068F048  8B F0                     MOV ESI,EAX
0068F04A  83 C4 08                  ADD ESP,0x8
0068F04D  85 F6                     TEST ESI,ESI
0068F04F  0F 85 05 02 00 00         JNZ 0x0068f25a
0068F055  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0068F058  85 DB                     TEST EBX,EBX
0068F05A  0F 84 60 01 00 00         JZ 0x0068f1c0
0068F060  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0068F063  85 C0                     TEST EAX,EAX
0068F065  0F 86 55 01 00 00         JBE 0x0068f1c0
0068F06B  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0068F06E  8B CF                     MOV ECX,EDI
0068F070  E8 7C 6A D7 FF            CALL 0x00405af1
0068F075  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
0068F07B  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068F07E  85 C0                     TEST EAX,EAX
0068F080  7E 33                     JLE 0x0068f0b5
0068F082  3B F0                     CMP ESI,EAX
LAB_0068f084:
0068F084  73 0D                     JNC 0x0068f093
0068F086  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068F089  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0068F08C  0F AF C6                  IMUL EAX,ESI
0068F08F  03 C2                     ADD EAX,EDX
0068F091  EB 02                     JMP 0x0068f095
LAB_0068f093:
0068F093  33 C0                     XOR EAX,EAX
LAB_0068f095:
0068F095  85 C0                     TEST EAX,EAX
0068F097  74 0E                     JZ 0x0068f0a7
0068F099  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0068F09C  85 C0                     TEST EAX,EAX
0068F09E  74 07                     JZ 0x0068f0a7
0068F0A0  8B C8                     MOV ECX,EAX
0068F0A2  E8 39 44 D7 FF            CALL 0x004034e0
LAB_0068f0a7:
0068F0A7  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
0068F0AD  46                        INC ESI
0068F0AE  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068F0B1  3B F0                     CMP ESI,EAX
0068F0B3  7C CF                     JL 0x0068f084
LAB_0068f0b5:
0068F0B5  8B 87 BD 00 00 00         MOV EAX,dword ptr [EDI + 0xbd]
0068F0BB  68 2D 24 40 00            PUSH 0x40242d
0068F0C0  50                        PUSH EAX
0068F0C1  E8 E2 58 D7 FF            CALL 0x004049a8
0068F0C6  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0068F0C9  83 C4 08                  ADD ESP,0x8
0068F0CC  49                        DEC ECX
0068F0CD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0068F0D0  0F 88 E3 00 00 00         JS 0x0068f1b9
0068F0D6  EB 03                     JMP 0x0068f0db
LAB_0068f0d8:
0068F0D8  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_0068f0db:
0068F0DB  3B 4B 0C                  CMP ECX,dword ptr [EBX + 0xc]
0068F0DE  73 0B                     JNC 0x0068f0eb
0068F0E0  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0068F0E3  0F AF C1                  IMUL EAX,ECX
0068F0E6  03 43 1C                  ADD EAX,dword ptr [EBX + 0x1c]
0068F0E9  EB 02                     JMP 0x0068f0ed
LAB_0068f0eb:
0068F0EB  33 C0                     XOR EAX,EAX
LAB_0068f0ed:
0068F0ED  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0068F0F3  66 8B 00                  MOV AX,word ptr [EAX]
0068F0F6  85 C9                     TEST ECX,ECX
0068F0F8  74 10                     JZ 0x0068f10a
0068F0FA  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
0068F0FD  6A 01                     PUSH 0x1
0068F0FF  50                        PUSH EAX
0068F100  52                        PUSH EDX
0068F101  E8 B4 37 D7 FF            CALL 0x004028ba
0068F106  8B D8                     MOV EBX,EAX
0068F108  EB 02                     JMP 0x0068f10c
LAB_0068f10a:
0068F10A  33 DB                     XOR EBX,EBX
LAB_0068f10c:
0068F10C  85 DB                     TEST EBX,EBX
0068F10E  0F 84 98 00 00 00         JZ 0x0068f1ac
0068F114  8B 03                     MOV EAX,dword ptr [EBX]
0068F116  8B CB                     MOV ECX,EBX
0068F118  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0068F11B  83 F8 78                  CMP EAX,0x78
0068F11E  0F 85 AE 00 00 00         JNZ 0x0068f1d2
0068F124  8B 13                     MOV EDX,dword ptr [EBX]
0068F126  8B CB                     MOV ECX,EBX
0068F128  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0068F12B  83 F8 78                  CMP EAX,0x78
0068F12E  75 08                     JNZ 0x0068f138
0068F130  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
0068F136  EB 02                     JMP 0x0068f13a
LAB_0068f138:
0068F138  33 C0                     XOR EAX,EAX
LAB_0068f13a:
0068F13A  85 C0                     TEST EAX,EAX
0068F13C  74 6E                     JZ 0x0068f1ac
0068F13E  50                        PUSH EAX
0068F13F  8B CF                     MOV ECX,EDI
0068F141  E8 40 48 D7 FF            CALL 0x00403986
0068F146  8B F8                     MOV EDI,EAX
0068F148  85 FF                     TEST EDI,EDI
0068F14A  7C 5D                     JL 0x0068f1a9
0068F14C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0068F14F  8B 88 BD 00 00 00         MOV ECX,dword ptr [EAX + 0xbd]
0068F155  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
0068F158  73 0D                     JNC 0x0068f167
0068F15A  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068F15D  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0068F160  0F AF C7                  IMUL EAX,EDI
0068F163  03 C2                     ADD EAX,EDX
0068F165  EB 02                     JMP 0x0068f169
LAB_0068f167:
0068F167  33 C0                     XOR EAX,EAX
LAB_0068f169:
0068F169  85 C0                     TEST EAX,EAX
0068F16B  74 2C                     JZ 0x0068f199
0068F16D  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
0068F170  85 C9                     TEST ECX,ECX
0068F172  7C 25                     JL 0x0068f199
0068F174  8B 13                     MOV EDX,dword ptr [EBX]
0068F176  33 F6                     XOR ESI,ESI
0068F178  66 8B 70 0C               MOV SI,word ptr [EAX + 0xc]
0068F17C  8B CB                     MOV ECX,EBX
0068F17E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0068F181  83 F8 78                  CMP EAX,0x78
0068F184  75 06                     JNZ 0x0068f18c
0068F186  89 B3 69 02 00 00         MOV dword ptr [EBX + 0x269],ESI
LAB_0068f18c:
0068F18C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0068F18F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0068F192  50                        PUSH EAX
0068F193  51                        PUSH ECX
0068F194  E8 D7 1A 02 00            CALL 0x006b0c70
LAB_0068f199:
0068F199  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0068F19C  57                        PUSH EDI
0068F19D  8B 82 BD 00 00 00         MOV EAX,dword ptr [EDX + 0xbd]
0068F1A3  50                        PUSH EAX
0068F1A4  E8 C7 1A 02 00            CALL 0x006b0c70
LAB_0068f1a9:
0068F1A9  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0068f1ac:
0068F1AC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0068F1AF  49                        DEC ECX
0068F1B0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0068F1B3  0F 89 1F FF FF FF         JNS 0x0068f0d8
LAB_0068f1b9:
0068F1B9  8B CF                     MOV ECX,EDI
0068F1BB  E8 92 44 D7 FF            CALL 0x00403652
LAB_0068f1c0:
0068F1C0  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0068F1C3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068F1C9  5F                        POP EDI
0068F1CA  5E                        POP ESI
0068F1CB  5B                        POP EBX
0068F1CC  8B E5                     MOV ESP,EBP
0068F1CE  5D                        POP EBP
0068F1CF  C2 04 00                  RET 0x4
LAB_0068f1d2:
0068F1D2  50                        PUSH EAX
0068F1D3  8B CF                     MOV ECX,EDI
0068F1D5  E8 AC 47 D7 FF            CALL 0x00403986
0068F1DA  8B F0                     MOV ESI,EAX
0068F1DC  85 F6                     TEST ESI,ESI
0068F1DE  7C CC                     JL 0x0068f1ac
0068F1E0  8B 8F BD 00 00 00         MOV ECX,dword ptr [EDI + 0xbd]
0068F1E6  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
0068F1E9  73 0D                     JNC 0x0068f1f8
0068F1EB  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068F1EE  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0068F1F1  0F AF C6                  IMUL EAX,ESI
0068F1F4  03 C2                     ADD EAX,EDX
0068F1F6  EB 02                     JMP 0x0068f1fa
LAB_0068f1f8:
0068F1F8  33 C0                     XOR EAX,EAX
LAB_0068f1fa:
0068F1FA  85 C0                     TEST EAX,EAX
0068F1FC  74 4A                     JZ 0x0068f248
0068F1FE  8B 40 30                  MOV EAX,dword ptr [EAX + 0x30]
0068F201  85 C0                     TEST EAX,EAX
0068F203  7C 43                     JL 0x0068f248
0068F205  8B 97 A5 00 00 00         MOV EDX,dword ptr [EDI + 0xa5]
0068F20B  85 D2                     TEST EDX,EDX
0068F20D  74 22                     JZ 0x0068f231
0068F20F  85 C0                     TEST EAX,EAX
0068F211  7C 1E                     JL 0x0068f231
0068F213  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
0068F216  3B C1                     CMP EAX,ECX
0068F218  7D 17                     JGE 0x0068f231
0068F21A  73 0E                     JNC 0x0068f22a
0068F21C  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0068F21F  0F AF C8                  IMUL ECX,EAX
0068F222  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
0068F225  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
0068F228  EB 09                     JMP 0x0068f233
LAB_0068f22a:
0068F22A  33 C9                     XOR ECX,ECX
0068F22C  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
0068F22F  EB 02                     JMP 0x0068f233
LAB_0068f231:
0068F231  33 C9                     XOR ECX,ECX
LAB_0068f233:
0068F233  6A 00                     PUSH 0x0
0068F235  53                        PUSH EBX
0068F236  E8 C5 4F D7 FF            CALL 0x00404200
0068F23B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0068F23E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0068F241  51                        PUSH ECX
0068F242  52                        PUSH EDX
0068F243  E8 28 1A 02 00            CALL 0x006b0c70
LAB_0068f248:
0068F248  8B 87 BD 00 00 00         MOV EAX,dword ptr [EDI + 0xbd]
0068F24E  56                        PUSH ESI
0068F24F  50                        PUSH EAX
0068F250  E8 1B 1A 02 00            CALL 0x006b0c70
0068F255  E9 52 FF FF FF            JMP 0x0068f1ac
LAB_0068f25a:
0068F25A  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0068F25D  68 B8 57 7D 00            PUSH 0x7d57b8
0068F262  68 CC 4C 7A 00            PUSH 0x7a4ccc
0068F267  56                        PUSH ESI
0068F268  6A 00                     PUSH 0x0
0068F26A  68 42 02 00 00            PUSH 0x242
0068F26F  68 E0 56 7D 00            PUSH 0x7d56e0
0068F274  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0068F27A  E8 51 E2 01 00            CALL 0x006ad4d0
0068F27F  83 C4 18                  ADD ESP,0x18
0068F282  85 C0                     TEST EAX,EAX
0068F284  74 01                     JZ 0x0068f287
0068F286  CC                        INT3
LAB_0068f287:
0068F287  68 43 02 00 00            PUSH 0x243
0068F28C  68 E0 56 7D 00            PUSH 0x7d56e0
0068F291  6A 00                     PUSH 0x0
0068F293  56                        PUSH ESI
0068F294  E8 A7 6B 01 00            CALL 0x006a5e40
0068F299  5F                        POP EDI
0068F29A  5E                        POP ESI
0068F29B  5B                        POP EBX
0068F29C  8B E5                     MOV ESP,EBP
0068F29E  5D                        POP EBP
0068F29F  C2 04 00                  RET 0x4
