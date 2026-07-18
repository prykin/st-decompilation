FUN_00415160:
00415160  55                        PUSH EBP
00415161  8B EC                     MOV EBP,ESP
00415163  83 EC 4C                  SUB ESP,0x4c
00415166  53                        PUSH EBX
00415167  56                        PUSH ESI
00415168  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0041516B  57                        PUSH EDI
0041516C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0041516F  33 DB                     XOR EBX,EBX
00415171  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00415174  66 8B 47 0C               MOV AX,word ptr [EDI + 0xc]
00415178  66 85 C0                  TEST AX,AX
0041517B  66 89 46 27               MOV word ptr [ESI + 0x27],AX
0041517F  0F 86 13 03 00 00         JBE 0x00415498
00415185  8B CE                     MOV ECX,ESI
00415187  E8 A9 C5 FE FF            CALL 0x00401735
0041518C  25 FF FF 00 00            AND EAX,0xffff
00415191  83 F8 01                  CMP EAX,0x1
00415194  A3 4C 4D 7F 00            MOV [0x007f4d4c],EAX
00415199  7F 64                     JG 0x004151ff
0041519B  66 83 7E 27 01            CMP word ptr [ESI + 0x27],0x1
004151A0  75 5D                     JNZ 0x004151ff
004151A2  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
004151A5  85 C0                     TEST EAX,EAX
004151A7  76 05                     JBE 0x004151ae
004151A9  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
004151AC  EB 02                     JMP 0x004151b0
LAB_004151ae:
004151AE  33 C0                     XOR EAX,EAX
LAB_004151b0:
004151B0  66 8B 00                  MOV AX,word ptr [EAX]
004151B3  8B CE                     MOV ECX,ESI
004151B5  50                        PUSH EAX
004151B6  E8 B4 D6 FE FF            CALL 0x0040286f
004151BB  85 C0                     TEST EAX,EAX
004151BD  0F 84 AF 02 00 00         JZ 0x00415472
004151C3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004151C6  C7 80 B7 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0xb7],0x0
004151D0  89 88 BB 00 00 00         MOV dword ptr [EAX + 0xbb],ECX
004151D6  89 88 C7 00 00 00         MOV dword ptr [EAX + 0xc7],ECX
004151DC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004151DF  89 88 BF 00 00 00         MOV dword ptr [EAX + 0xbf],ECX
004151E5  89 88 CB 00 00 00         MOV dword ptr [EAX + 0xcb],ECX
004151EB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004151EE  89 88 C3 00 00 00         MOV dword ptr [EAX + 0xc3],ECX
004151F4  89 88 CF 00 00 00         MOV dword ptr [EAX + 0xcf],ECX
004151FA  E9 73 02 00 00            JMP 0x00415472
LAB_004151ff:
004151FF  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00415205  8D 45 B8                  LEA EAX,[EBP + -0x48]
00415208  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0041520B  6A 00                     PUSH 0x0
0041520D  50                        PUSH EAX
0041520E  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00415211  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00415217  E8 D4 85 31 00            CALL 0x0072d7f0
0041521C  83 C4 08                  ADD ESP,0x8
0041521F  85 C0                     TEST EAX,EAX
00415221  0F 85 0E 02 00 00         JNZ 0x00415435
00415227  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0041522A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0041522D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00415230  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00415233  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00415236  51                        PUSH ECX
00415237  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0041523A  52                        PUSH EDX
0041523B  50                        PUSH EAX
0041523C  51                        PUSH ECX
0041523D  53                        PUSH EBX
0041523E  56                        PUSH ESI
0041523F  E8 15 E7 FE FF            CALL 0x00403959
00415244  33 FF                     XOR EDI,EDI
00415246  3B C7                     CMP EAX,EDI
00415248  0F 85 77 01 00 00         JNZ 0x004153c5
0041524E  A1 40 4D 7F 00            MOV EAX,[0x007f4d40]
00415253  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00415256  3B C7                     CMP EAX,EDI
00415258  0F 8E 87 00 00 00         JLE 0x004152e5
LAB_0041525e:
0041525E  8B 15 04 4D 7F 00         MOV EDX,dword ptr [0x007f4d04]
00415264  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00415267  8B 4C 17 18               MOV ECX,dword ptr [EDI + EDX*0x1 + 0x18]
0041526B  3B C8                     CMP ECX,EAX
0041526D  73 0B                     JNC 0x0041527a
0041526F  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00415272  0F AF C1                  IMUL EAX,ECX
00415275  03 43 1C                  ADD EAX,dword ptr [EBX + 0x1c]
00415278  EB 02                     JMP 0x0041527c
LAB_0041527a:
0041527A  33 C0                     XOR EAX,EAX
LAB_0041527c:
0041527C  66 8B 00                  MOV AX,word ptr [EAX]
0041527F  8B CE                     MOV ECX,ESI
00415281  50                        PUSH EAX
00415282  E8 E8 D5 FE FF            CALL 0x0040286f
00415287  85 C0                     TEST EAX,EAX
00415289  74 42                     JZ 0x004152cd
0041528B  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
00415291  8B 4C 0F 0C               MOV ECX,dword ptr [EDI + ECX*0x1 + 0xc]
00415295  89 88 BB 00 00 00         MOV dword ptr [EAX + 0xbb],ECX
0041529B  89 88 C7 00 00 00         MOV dword ptr [EAX + 0xc7],ECX
004152A1  8B 15 04 4D 7F 00         MOV EDX,dword ptr [0x007f4d04]
004152A7  8B 4C 17 10               MOV ECX,dword ptr [EDI + EDX*0x1 + 0x10]
004152AB  89 88 BF 00 00 00         MOV dword ptr [EAX + 0xbf],ECX
004152B1  89 88 CB 00 00 00         MOV dword ptr [EAX + 0xcb],ECX
004152B7  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
004152BD  8B 4C 0F 14               MOV ECX,dword ptr [EDI + ECX*0x1 + 0x14]
004152C1  89 88 C3 00 00 00         MOV dword ptr [EAX + 0xc3],ECX
004152C7  89 88 CF 00 00 00         MOV dword ptr [EAX + 0xcf],ECX
LAB_004152cd:
004152CD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004152D0  8B 0D 40 4D 7F 00         MOV ECX,dword ptr [0x007f4d40]
004152D6  40                        INC EAX
004152D7  83 C7 1C                  ADD EDI,0x1c
004152DA  3B C1                     CMP EAX,ECX
004152DC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004152DF  0F 8C 79 FF FF FF         JL 0x0041525e
LAB_004152e5:
004152E5  A1 F8 4C 7F 00            MOV EAX,[0x007f4cf8]
004152EA  33 FF                     XOR EDI,EDI
004152EC  85 C0                     TEST EAX,EAX
004152EE  0F 8E 33 01 00 00         JLE 0x00415427
LAB_004152f4:
004152F4  33 C0                     XOR EAX,EAX
004152F6  66 8B 46 27               MOV AX,word ptr [ESI + 0x27]
004152FA  2B C7                     SUB EAX,EDI
004152FC  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
00415303  2B D0                     SUB EDX,EAX
00415305  A1 04 4D 7F 00            MOV EAX,[0x007f4d04]
0041530A  8B 4C 90 FC               MOV ECX,dword ptr [EAX + EDX*0x4 + -0x4]
0041530E  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00415311  3B C8                     CMP ECX,EAX
00415313  73 0B                     JNC 0x00415320
00415315  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00415318  0F AF C1                  IMUL EAX,ECX
0041531B  03 43 1C                  ADD EAX,dword ptr [EBX + 0x1c]
0041531E  EB 02                     JMP 0x00415322
LAB_00415320:
00415320  33 C0                     XOR EAX,EAX
LAB_00415322:
00415322  66 8B 08                  MOV CX,word ptr [EAX]
00415325  51                        PUSH ECX
00415326  8B CE                     MOV ECX,ESI
00415328  E8 42 D5 FE FF            CALL 0x0040286f
0041532D  85 C0                     TEST EAX,EAX
0041532F  74 75                     JZ 0x004153a6
00415331  33 C9                     XOR ECX,ECX
00415333  66 8B 4E 27               MOV CX,word ptr [ESI + 0x27]
00415337  2B CF                     SUB ECX,EDI
00415339  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
00415340  2B D1                     SUB EDX,ECX
00415342  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
00415348  8B 4C 91 F0               MOV ECX,dword ptr [ECX + EDX*0x4 + -0x10]
0041534C  89 88 BB 00 00 00         MOV dword ptr [EAX + 0xbb],ECX
00415352  89 88 C7 00 00 00         MOV dword ptr [EAX + 0xc7],ECX
00415358  33 C9                     XOR ECX,ECX
0041535A  66 8B 4E 27               MOV CX,word ptr [ESI + 0x27]
0041535E  2B CF                     SUB ECX,EDI
00415360  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
00415367  2B D1                     SUB EDX,ECX
00415369  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
0041536F  8B 4C 91 F4               MOV ECX,dword ptr [ECX + EDX*0x4 + -0xc]
00415373  89 88 BF 00 00 00         MOV dword ptr [EAX + 0xbf],ECX
00415379  89 88 CB 00 00 00         MOV dword ptr [EAX + 0xcb],ECX
0041537F  33 C9                     XOR ECX,ECX
00415381  66 8B 4E 27               MOV CX,word ptr [ESI + 0x27]
00415385  2B CF                     SUB ECX,EDI
00415387  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
0041538E  2B D1                     SUB EDX,ECX
00415390  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
00415396  8B 4C 91 F8               MOV ECX,dword ptr [ECX + EDX*0x4 + -0x8]
0041539A  89 88 C3 00 00 00         MOV dword ptr [EAX + 0xc3],ECX
004153A0  89 88 CF 00 00 00         MOV dword ptr [EAX + 0xcf],ECX
LAB_004153a6:
004153A6  A1 F8 4C 7F 00            MOV EAX,[0x007f4cf8]
004153AB  47                        INC EDI
004153AC  3B F8                     CMP EDI,EAX
004153AE  0F 8C 40 FF FF FF         JL 0x004152f4
004153B4  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004153B7  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
004153BA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004153C0  E9 A2 00 00 00            JMP 0x00415467
LAB_004153c5:
004153C5  66 83 7E 27 00            CMP word ptr [ESI + 0x27],0x0
004153CA  76 5B                     JBE 0x00415427
LAB_004153cc:
004153CC  3B 7B 0C                  CMP EDI,dword ptr [EBX + 0xc]
004153CF  73 0D                     JNC 0x004153de
004153D1  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
004153D4  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
004153D7  0F AF C7                  IMUL EAX,EDI
004153DA  03 C1                     ADD EAX,ECX
004153DC  EB 02                     JMP 0x004153e0
LAB_004153de:
004153DE  33 C0                     XOR EAX,EAX
LAB_004153e0:
004153E0  66 8B 10                  MOV DX,word ptr [EAX]
004153E3  8B CE                     MOV ECX,ESI
004153E5  52                        PUSH EDX
004153E6  E8 84 D4 FE FF            CALL 0x0040286f
004153EB  85 C0                     TEST EAX,EAX
004153ED  74 2D                     JZ 0x0041541c
004153EF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004153F2  89 88 BB 00 00 00         MOV dword ptr [EAX + 0xbb],ECX
004153F8  89 88 C7 00 00 00         MOV dword ptr [EAX + 0xc7],ECX
004153FE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00415401  89 88 BF 00 00 00         MOV dword ptr [EAX + 0xbf],ECX
00415407  89 88 CB 00 00 00         MOV dword ptr [EAX + 0xcb],ECX
0041540D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00415410  89 88 C3 00 00 00         MOV dword ptr [EAX + 0xc3],ECX
00415416  89 88 CF 00 00 00         MOV dword ptr [EAX + 0xcf],ECX
LAB_0041541c:
0041541C  33 C0                     XOR EAX,EAX
0041541E  47                        INC EDI
0041541F  66 8B 46 27               MOV AX,word ptr [ESI + 0x27]
00415423  3B F8                     CMP EDI,EAX
00415425  7C A5                     JL 0x004153cc
LAB_00415427:
00415427  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0041542A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0041542D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00415433  EB 32                     JMP 0x00415467
LAB_00415435:
00415435  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00415438  68 D0 4C 7A 00            PUSH 0x7a4cd0
0041543D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00415442  50                        PUSH EAX
00415443  6A 00                     PUSH 0x0
00415445  8B D8                     MOV EBX,EAX
00415447  68 66 0E 00 00            PUSH 0xe66
0041544C  68 A8 4C 7A 00            PUSH 0x7a4ca8
00415451  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00415457  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0041545A  E8 71 80 29 00            CALL 0x006ad4d0
0041545F  83 C4 18                  ADD ESP,0x18
00415462  85 C0                     TEST EAX,EAX
00415464  74 01                     JZ 0x00415467
00415466  CC                        INT3
LAB_00415467:
00415467  A1 04 4D 7F 00            MOV EAX,[0x007f4d04]
0041546C  50                        PUSH EAX
0041546D  E8 1E 0A 29 00            CALL 0x006a5e90
LAB_00415472:
00415472  85 DB                     TEST EBX,EBX
00415474  74 22                     JZ 0x00415498
00415476  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0041547C  68 6D 0E 00 00            PUSH 0xe6d
00415481  68 A8 4C 7A 00            PUSH 0x7a4ca8
00415486  51                        PUSH ECX
00415487  53                        PUSH EBX
00415488  E8 B3 09 29 00            CALL 0x006a5e40
0041548D  8B C3                     MOV EAX,EBX
0041548F  5F                        POP EDI
00415490  5E                        POP ESI
00415491  5B                        POP EBX
00415492  8B E5                     MOV ESP,EBP
00415494  5D                        POP EBP
00415495  C2 18 00                  RET 0x18
LAB_00415498:
00415498  5F                        POP EDI
00415499  5E                        POP ESI
0041549A  33 C0                     XOR EAX,EAX
0041549C  5B                        POP EBX
0041549D  8B E5                     MOV ESP,EBP
0041549F  5D                        POP EBP
004154A0  C2 18 00                  RET 0x18
