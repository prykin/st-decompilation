STBoatC::BackBring:
0047CF20  55                        PUSH EBP
0047CF21  8B EC                     MOV EBP,ESP
0047CF23  56                        PUSH ESI
0047CF24  8B F1                     MOV ESI,ECX
0047CF26  57                        PUSH EDI
0047CF27  66 8B 86 6F 06 00 00      MOV AX,word ptr [ESI + 0x66f]
0047CF2E  66 8B 8E 73 06 00 00      MOV CX,word ptr [ESI + 0x673]
0047CF35  66 8B 96 71 06 00 00      MOV DX,word ptr [ESI + 0x671]
0047CF3C  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
0047CF46  66 85 C0                  TEST AX,AX
0047CF49  7C 70                     JL 0x0047cfbb
0047CF4B  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047CF52  66 3B C7                  CMP AX,DI
0047CF55  7D 64                     JGE 0x0047cfbb
0047CF57  66 85 D2                  TEST DX,DX
0047CF5A  7C 5F                     JL 0x0047cfbb
0047CF5C  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047CF63  7D 56                     JGE 0x0047cfbb
0047CF65  66 85 C9                  TEST CX,CX
0047CF68  7C 51                     JL 0x0047cfbb
0047CF6A  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047CF71  7D 48                     JGE 0x0047cfbb
0047CF73  53                        PUSH EBX
0047CF74  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047CF7B  0F BF C9                  MOVSX ECX,CX
0047CF7E  0F AF D9                  IMUL EBX,ECX
0047CF81  0F BF CF                  MOVSX ECX,DI
0047CF84  0F BF D2                  MOVSX EDX,DX
0047CF87  0F AF CA                  IMUL ECX,EDX
0047CF8A  0F BF C0                  MOVSX EAX,AX
0047CF8D  03 D9                     ADD EBX,ECX
0047CF8F  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0047CF95  03 D8                     ADD EBX,EAX
0047CF97  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
0047CF9A  5B                        POP EBX
0047CF9B  85 C9                     TEST ECX,ECX
0047CF9D  74 1C                     JZ 0x0047cfbb
0047CF9F  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0047CFA2  8B 86 79 06 00 00         MOV EAX,dword ptr [ESI + 0x679]
0047CFA8  3B D0                     CMP EDX,EAX
0047CFAA  75 0F                     JNZ 0x0047cfbb
0047CFAC  83 BE 75 06 00 00 63      CMP dword ptr [ESI + 0x675],0x63
0047CFB3  75 06                     JNZ 0x0047cfbb
0047CFB5  56                        PUSH ESI
0047CFB6  E8 88 57 F8 FF            CALL 0x00402743
LAB_0047cfbb:
0047CFBB  8B 86 87 06 00 00         MOV EAX,dword ptr [ESI + 0x687]
0047CFC1  83 F8 04                  CMP EAX,0x4
0047CFC4  77 27                     JA 0x0047cfed
switchD_0047cfc6::switchD:
0047CFC6  FF 24 85 1C D0 47 00      JMP dword ptr [EAX*0x4 + 0x47d01c]
switchD_0047cfc6::caseD_0:
0047CFCD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047CFD0  8B CE                     MOV ECX,ESI
0047CFD2  50                        PUSH EAX
0047CFD3  E8 18 6E F8 FF            CALL 0x00403df0
0047CFD8  5F                        POP EDI
0047CFD9  5E                        POP ESI
0047CFDA  5D                        POP EBP
0047CFDB  C2 04 00                  RET 0x4
switchD_0047cfc6::caseD_3:
0047CFDE  6A 02                     PUSH 0x2
0047CFE0  8B CE                     MOV ECX,ESI
0047CFE2  E8 C7 41 F8 FF            CALL 0x004011ae
0047CFE7  5F                        POP EDI
0047CFE8  5E                        POP ESI
0047CFE9  5D                        POP EBP
0047CFEA  C2 04 00                  RET 0x4
switchD_0047cfc6::default:
0047CFED  68 04 B6 7A 00            PUSH 0x7ab604
0047CFF2  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047CFF7  6A 00                     PUSH 0x0
0047CFF9  6A 00                     PUSH 0x0
0047CFFB  68 70 38 00 00            PUSH 0x3870
0047D000  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047D005  E8 C6 04 23 00            CALL 0x006ad4d0
0047D00A  83 C4 18                  ADD ESP,0x18
0047D00D  85 C0                     TEST EAX,EAX
0047D00F  74 01                     JZ 0x0047d012
0047D011  CC                        INT3
LAB_0047d012:
0047D012  5F                        POP EDI
0047D013  83 C8 FF                  OR EAX,0xffffffff
0047D016  5E                        POP ESI
0047D017  5D                        POP EBP
0047D018  C2 04 00                  RET 0x4
