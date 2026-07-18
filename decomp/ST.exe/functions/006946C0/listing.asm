FUN_006946c0:
006946C0  55                        PUSH EBP
006946C1  8B EC                     MOV EBP,ESP
006946C3  83 EC 08                  SUB ESP,0x8
006946C6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006946C9  53                        PUSH EBX
006946CA  8B 19                     MOV EBX,dword ptr [ECX]
006946CC  56                        PUSH ESI
006946CD  3B C3                     CMP EAX,EBX
006946CF  57                        PUSH EDI
006946D0  73 5F                     JNC 0x00694731
006946D2  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
006946D5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006946D8  3B C7                     CMP EAX,EDI
006946DA  73 55                     JNC 0x00694731
006946DC  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006946DF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006946E2  3B C2                     CMP EAX,EDX
006946E4  73 4B                     JNC 0x00694731
006946E6  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
006946E9  BE 01 00 00 00            MOV ESI,0x1
006946EE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006946F1  8B C2                     MOV EAX,EDX
006946F3  0F AF C7                  IMUL EAX,EDI
006946F6  0F AF C3                  IMUL EAX,EBX
006946F9  8B C8                     MOV ECX,EAX
006946FB  F7 D8                     NEG EAX
006946FD  C1 E0 02                  SHL EAX,0x2
00694700  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00694703  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00694706  03 D0                     ADD EDX,EAX
00694708  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069470B  0F AF D7                  IMUL EDX,EDI
0069470E  03 D0                     ADD EDX,EAX
00694710  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00694713  0F AF D3                  IMUL EDX,EBX
00694716  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00694719  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0069471C  F7 D9                     NEG ECX
0069471E  03 D0                     ADD EDX,EAX
00694720  8D 04 93                  LEA EAX,[EBX + EDX*0x4]
LAB_00694723:
00694723  83 38 00                  CMP dword ptr [EAX],0x0
00694726  75 14                     JNZ 0x0069473c
00694728  4E                        DEC ESI
00694729  03 C7                     ADD EAX,EDI
0069472B  03 D1                     ADD EDX,ECX
0069472D  85 F6                     TEST ESI,ESI
0069472F  7D F2                     JGE 0x00694723
LAB_00694731:
00694731  5F                        POP EDI
00694732  5E                        POP ESI
00694733  33 C0                     XOR EAX,EAX
00694735  5B                        POP EBX
00694736  8B E5                     MOV ESP,EBP
00694738  5D                        POP EBP
00694739  C2 0C 00                  RET 0xc
LAB_0069473c:
0069473C  8B 04 93                  MOV EAX,dword ptr [EBX + EDX*0x4]
0069473F  5F                        POP EDI
00694740  5E                        POP ESI
00694741  5B                        POP EBX
00694742  8B E5                     MOV ESP,EBP
00694744  5D                        POP EBP
00694745  C2 0C 00                  RET 0xc
