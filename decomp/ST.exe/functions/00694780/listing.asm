FUN_00694780:
00694780  55                        PUSH EBP
00694781  8B EC                     MOV EBP,ESP
00694783  83 EC 08                  SUB ESP,0x8
00694786  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00694789  53                        PUSH EBX
0069478A  33 D2                     XOR EDX,EDX
0069478C  56                        PUSH ESI
0069478D  85 C0                     TEST EAX,EAX
0069478F  57                        PUSH EDI
00694790  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00694793  76 65                     JBE 0x006947fa
LAB_00694795:
00694795  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00694798  33 F6                     XOR ESI,ESI
0069479A  03 D0                     ADD EDX,EAX
0069479C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069479F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_006947a2:
006947A2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006947A5  8B 39                     MOV EDI,dword ptr [ECX]
006947A7  3B C7                     CMP EAX,EDI
006947A9  73 5D                     JNC 0x00694808
006947AB  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
006947AE  3B D7                     CMP EDX,EDI
006947B0  73 56                     JNC 0x00694808
006947B2  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006947B5  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006947B8  3B D8                     CMP EBX,EAX
006947BA  73 4C                     JNC 0x00694808
006947BC  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006947BF  85 DB                     TEST EBX,EBX
006947C1  7C 45                     JL 0x00694808
006947C3  83 FB 02                  CMP EBX,0x2
006947C6  7D 40                     JGE 0x00694808
006947C8  0F AF C3                  IMUL EAX,EBX
006947CB  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006947CE  03 C3                     ADD EAX,EBX
006947D0  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006947D3  0F AF C7                  IMUL EAX,EDI
006947D6  03 C2                     ADD EAX,EDX
006947D8  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006947DB  0F AF 01                  IMUL EAX,dword ptr [ECX]
006947DE  03 C7                     ADD EAX,EDI
006947E0  8B 79 10                  MOV EDI,dword ptr [ECX + 0x10]
006947E3  46                        INC ESI
006947E4  42                        INC EDX
006947E5  89 1C 87                  MOV dword ptr [EDI + EAX*0x4],EBX
006947E8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006947EB  3B F0                     CMP ESI,EAX
006947ED  72 B3                     JC 0x006947a2
006947EF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006947F2  42                        INC EDX
006947F3  3B D0                     CMP EDX,EAX
006947F5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006947F8  72 9B                     JC 0x00694795
LAB_006947fa:
006947FA  5F                        POP EDI
006947FB  5E                        POP ESI
006947FC  B8 01 00 00 00            MOV EAX,0x1
00694801  5B                        POP EBX
00694802  8B E5                     MOV ESP,EBP
00694804  5D                        POP EBP
00694805  C2 18 00                  RET 0x18
LAB_00694808:
00694808  5F                        POP EDI
00694809  5E                        POP ESI
0069480A  33 C0                     XOR EAX,EAX
0069480C  5B                        POP EBX
0069480D  8B E5                     MOV ESP,EBP
0069480F  5D                        POP EBP
00694810  C2 18 00                  RET 0x18
