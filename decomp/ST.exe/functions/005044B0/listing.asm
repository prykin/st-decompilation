CPanelTy::PaintMineInf:
005044B0  55                        PUSH EBP
005044B1  8B EC                     MOV EBP,ESP
005044B3  83 EC 50                  SUB ESP,0x50
005044B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005044BB  53                        PUSH EBX
005044BC  56                        PUSH ESI
005044BD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005044C0  57                        PUSH EDI
005044C1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005044C4  8D 4D B0                  LEA ECX,[EBP + -0x50]
005044C7  6A 00                     PUSH 0x0
005044C9  52                        PUSH EDX
005044CA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005044CD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005044D3  E8 18 93 22 00            CALL 0x0072d7f0
005044D8  8B F0                     MOV ESI,EAX
005044DA  83 C4 08                  ADD ESP,0x8
005044DD  85 F6                     TEST ESI,ESI
005044DF  0F 85 F3 01 00 00         JNZ 0x005046d8
005044E5  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005044E8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005044EB  8B 86 ED 09 00 00         MOV EAX,dword ptr [ESI + 0x9ed]
005044F1  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
005044F7  50                        PUSH EAX
005044F8  6A 01                     PUSH 0x1
005044FA  6A 50                     PUSH 0x50
005044FC  57                        PUSH EDI
005044FD  51                        PUSH ECX
005044FE  E8 26 ED EF FF            CALL 0x00403229
00504503  8B 86 F5 0B 00 00         MOV EAX,dword ptr [ESI + 0xbf5]
00504509  83 C4 14                  ADD ESP,0x14
0050450C  83 F8 38                  CMP EAX,0x38
0050450F  74 0B                     JZ 0x0050451c
00504511  83 F8 4F                  CMP EAX,0x4f
00504514  0F 94 C2                  SETZ DL
00504517  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
0050451A  EB 04                     JMP 0x00504520
LAB_0050451c:
0050451C  C6 45 F8 02               MOV byte ptr [EBP + -0x8],0x2
LAB_00504520:
00504520  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00504523  8B 8E D2 02 00 00         MOV ECX,dword ptr [ESI + 0x2d2]
00504529  25 FF 00 00 00            AND EAX,0xff
0050452E  50                        PUSH EAX
0050452F  51                        PUSH ECX
00504530  E8 6B 6E 20 00            CALL 0x0070b3a0
00504535  50                        PUSH EAX
00504536  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
0050453C  6A 01                     PUSH 0x1
0050453E  8D 57 03                  LEA EDX,[EDI + 0x3]
00504541  6A 53                     PUSH 0x53
00504543  52                        PUSH EDX
00504544  50                        PUSH EAX
00504545  E8 DF EC EF FF            CALL 0x00403229
0050454A  8B 86 F5 0B 00 00         MOV EAX,dword ptr [ESI + 0xbf5]
00504550  83 C4 1C                  ADD ESP,0x1c
00504553  83 F8 38                  CMP EAX,0x38
00504556  74 25                     JZ 0x0050457d
00504558  83 F8 4F                  CMP EAX,0x4f
0050455B  74 10                     JZ 0x0050456d
0050455D  C7 45 F8 28 A0 7A 00      MOV dword ptr [EBP + -0x8],0x7aa028
00504564  C7 45 FC 1D 27 00 00      MOV dword ptr [EBP + -0x4],0x271d
0050456B  EB 1E                     JMP 0x0050458b
LAB_0050456d:
0050456D  C7 45 F8 20 A0 7A 00      MOV dword ptr [EBP + -0x8],0x7aa020
00504574  C7 45 FC 1E 27 00 00      MOV dword ptr [EBP + -0x4],0x271e
0050457B  EB 0E                     JMP 0x0050458b
LAB_0050457d:
0050457D  C7 45 F8 24 A0 7A 00      MOV dword ptr [EBP + -0x8],0x7aa024
00504584  C7 45 FC 1C 27 00 00      MOV dword ptr [EBP + -0x4],0x271c
LAB_0050458b:
0050458B  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00504591  6A 32                     PUSH 0x32
00504593  51                        PUSH ECX
00504594  68 21 27 00 00            PUSH 0x2721
00504599  8D 9E E1 01 00 00         LEA EBX,[ESI + 0x1e1]
0050459F  E8 9C BB 1A 00            CALL 0x006b0140
005045A4  50                        PUSH EAX
005045A5  53                        PUSH EBX
005045A6  E8 95 9D 22 00            CALL 0x0072e340
005045AB  6A 0A                     PUSH 0xa
005045AD  53                        PUSH EBX
005045AE  C6 86 12 02 00 00 00      MOV byte ptr [ESI + 0x212],0x0
005045B5  E8 A6 9F 22 00            CALL 0x0072e560
005045BA  83 C4 14                  ADD ESP,0x14
005045BD  85 C0                     TEST EAX,EAX
005045BF  74 12                     JZ 0x005045d3
LAB_005045c1:
005045C1  6A 0A                     PUSH 0xa
005045C3  50                        PUSH EAX
005045C4  C6 00 20                  MOV byte ptr [EAX],0x20
005045C7  E8 94 9F 22 00            CALL 0x0072e560
005045CC  83 C4 08                  ADD ESP,0x8
005045CF  85 C0                     TEST EAX,EAX
005045D1  75 EE                     JNZ 0x005045c1
LAB_005045d3:
005045D3  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005045D9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005045DC  53                        PUSH EBX
005045DD  52                        PUSH EDX
005045DE  50                        PUSH EAX
005045DF  E8 5C BB 1A 00            CALL 0x006b0140
005045E4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005045E7  50                        PUSH EAX
005045E8  51                        PUSH ECX
005045E9  68 4C 27 7C 00            PUSH 0x7c274c
005045EE  68 3A F3 80 00            PUSH 0x80f33a
005045F3  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005045F9  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
005045FF  83 C4 14                  ADD ESP,0x14
00504602  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00504608  83 C7 40                  ADD EDI,0x40
0050460B  6A 16                     PUSH 0x16
0050460D  6A 75                     PUSH 0x75
0050460F  6A 57                     PUSH 0x57
00504611  57                        PUSH EDI
00504612  6A 00                     PUSH 0x0
00504614  52                        PUSH EDX
00504615  E8 76 C4 20 00            CALL 0x00710a90
0050461A  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
00504620  6A FF                     PUSH -0x1
00504622  6A FF                     PUSH -0x1
00504624  6A 00                     PUSH 0x0
00504626  6A FF                     PUSH -0x1
00504628  6A FE                     PUSH -0x2
0050462A  68 3A F3 80 00            PUSH 0x80f33a
0050462F  E8 3C D5 20 00            CALL 0x00711b70
00504634  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
0050463A  8B 8E C4 01 00 00         MOV ECX,dword ptr [ESI + 0x1c4]
00504640  6A 00                     PUSH 0x0
00504642  6A 0E                     PUSH 0xe
00504644  6A 75                     PUSH 0x75
00504646  6A 6D                     PUSH 0x6d
00504648  57                        PUSH EDI
00504649  6A 00                     PUSH 0x0
0050464B  50                        PUSH EAX
0050464C  E8 4F C5 20 00            CALL 0x00710ba0
00504651  8B D8                     MOV EBX,EAX
00504653  85 DB                     TEST EBX,EBX
00504655  74 70                     JZ 0x005046c7
00504657  33 C9                     XOR ECX,ECX
00504659  66 8B 8E 34 0C 00 00      MOV CX,word ptr [ESI + 0xc34]
00504660  51                        PUSH ECX
00504661  68 44 27 7C 00            PUSH 0x7c2744
00504666  68 3A F3 80 00            PUSH 0x80f33a
0050466B  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00504671  8B 86 F5 0B 00 00         MOV EAX,dword ptr [ESI + 0xbf5]
00504677  83 C4 0C                  ADD ESP,0xc
0050467A  83 F8 38                  CMP EAX,0x38
0050467D  74 0E                     JZ 0x0050468d
0050467F  83 E8 4F                  SUB EAX,0x4f
00504682  F7 D8                     NEG EAX
00504684  1B C0                     SBB EAX,EAX
00504686  24 FE                     AND AL,0xfe
00504688  83 C0 02                  ADD EAX,0x2
0050468B  EB 05                     JMP 0x00504692
LAB_0050468d:
0050468D  B8 01 00 00 00            MOV EAX,0x1
LAB_00504692:
00504692  8B 8E C4 01 00 00         MOV ECX,dword ptr [ESI + 0x1c4]
00504698  50                        PUSH EAX
00504699  6A FF                     PUSH -0x1
0050469B  6A FF                     PUSH -0x1
0050469D  68 3A F3 80 00            PUSH 0x80f33a
005046A2  E8 19 D3 20 00            CALL 0x007119c0
005046A7  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
005046AD  53                        PUSH EBX
005046AE  6A 01                     PUSH 0x1
005046B0  6A 6F                     PUSH 0x6f
005046B2  57                        PUSH EDI
005046B3  52                        PUSH EDX
005046B4  E8 70 EB EF FF            CALL 0x00403229
005046B9  8B 8E C4 01 00 00         MOV ECX,dword ptr [ESI + 0x1c4]
005046BF  83 C4 14                  ADD ESP,0x14
005046C2  E8 39 C8 20 00            CALL 0x00710f00
LAB_005046c7:
005046C7  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
005046CA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005046CF  5F                        POP EDI
005046D0  5E                        POP ESI
005046D1  5B                        POP EBX
005046D2  8B E5                     MOV ESP,EBP
005046D4  5D                        POP EBP
005046D5  C2 04 00                  RET 0x4
LAB_005046d8:
005046D8  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005046DB  68 28 27 7C 00            PUSH 0x7c2728
005046E0  68 CC 4C 7A 00            PUSH 0x7a4ccc
005046E5  56                        PUSH ESI
005046E6  6A 00                     PUSH 0x0
005046E8  6A 47                     PUSH 0x47
005046EA  68 00 27 7C 00            PUSH 0x7c2700
005046EF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005046F5  E8 D6 8D 1A 00            CALL 0x006ad4d0
005046FA  83 C4 18                  ADD ESP,0x18
005046FD  85 C0                     TEST EAX,EAX
005046FF  74 01                     JZ 0x00504702
00504701  CC                        INT3
LAB_00504702:
00504702  6A 47                     PUSH 0x47
00504704  68 00 27 7C 00            PUSH 0x7c2700
00504709  6A 00                     PUSH 0x0
0050470B  56                        PUSH ESI
0050470C  E8 2F 17 1A 00            CALL 0x006a5e40
00504711  5F                        POP EDI
00504712  5E                        POP ESI
00504713  5B                        POP EBX
00504714  8B E5                     MOV ESP,EBP
00504716  5D                        POP EBP
00504717  C2 04 00                  RET 0x4
