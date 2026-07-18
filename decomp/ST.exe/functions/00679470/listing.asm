AiPlrClassTy::CloseAllTact:
00679470  55                        PUSH EBP
00679471  8B EC                     MOV EBP,ESP
00679473  83 EC 7C                  SUB ESP,0x7c
00679476  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067947B  53                        PUSH EBX
0067947C  56                        PUSH ESI
0067947D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00679480  57                        PUSH EDI
00679481  8D 55 88                  LEA EDX,[EBP + -0x78]
00679484  8D 4D 84                  LEA ECX,[EBP + -0x7c]
00679487  6A 00                     PUSH 0x0
00679489  52                        PUSH EDX
0067948A  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0067948D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00679493  E8 58 43 0B 00            CALL 0x0072d7f0
00679498  8B F0                     MOV ESI,EAX
0067949A  83 C4 08                  ADD ESP,0x8
0067949D  85 F6                     TEST ESI,ESI
0067949F  0F 85 BC 00 00 00         JNZ 0x00679561
006794A5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006794A8  8B 83 95 06 00 00         MOV EAX,dword ptr [EBX + 0x695]
006794AE  85 C0                     TEST EAX,EAX
006794B0  75 17                     JNZ 0x006794c9
006794B2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006794B7  68 FD 00 00 00            PUSH 0xfd
006794BC  68 4C 2E 7D 00            PUSH 0x7d2e4c
006794C1  50                        PUSH EAX
006794C2  6A CC                     PUSH -0x34
006794C4  E8 77 C9 02 00            CALL 0x006a5e40
LAB_006794c9:
006794C9  B9 0D 00 00 00            MOV ECX,0xd
006794CE  33 C0                     XOR EAX,EAX
006794D0  8D 7D C8                  LEA EDI,[EBP + -0x38]
006794D3  F3 AB                     STOSD.REP ES:EDI
006794D5  8B 8B 95 06 00 00         MOV ECX,dword ptr [EBX + 0x695]
006794DB  C7 45 C8 71 00 00 00      MOV dword ptr [EBP + -0x38],0x71
006794E2  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
006794E5  4F                        DEC EDI
006794E6  78 68                     JS 0x00679550
LAB_006794e8:
006794E8  8B 8B 95 06 00 00         MOV ECX,dword ptr [EBX + 0x695]
006794EE  85 C9                     TEST ECX,ECX
006794F0  74 27                     JZ 0x00679519
006794F2  85 FF                     TEST EDI,EDI
006794F4  7C 23                     JL 0x00679519
006794F6  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006794F9  3B F8                     CMP EDI,EAX
006794FB  7D 1C                     JGE 0x00679519
006794FD  73 0D                     JNC 0x0067950c
006794FF  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00679502  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00679505  0F AF C7                  IMUL EAX,EDI
00679508  03 C2                     ADD EAX,EDX
0067950A  EB 02                     JMP 0x0067950e
LAB_0067950c:
0067950C  33 C0                     XOR EAX,EAX
LAB_0067950e:
0067950E  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00679511  85 C9                     TEST ECX,ECX
00679513  74 04                     JZ 0x00679519
00679515  8B 30                     MOV ESI,dword ptr [EAX]
00679517  EB 02                     JMP 0x0067951b
LAB_00679519:
00679519  33 F6                     XOR ESI,ESI
LAB_0067951b:
0067951B  85 F6                     TEST ESI,ESI
0067951D  74 2E                     JZ 0x0067954d
0067951F  8D 55 C8                  LEA EDX,[EBP + -0x38]
00679522  85 D2                     TEST EDX,EDX
00679524  74 0B                     JZ 0x00679531
00679526  8D 45 C8                  LEA EAX,[EBP + -0x38]
00679529  8B CE                     MOV ECX,ESI
0067952B  50                        PUSH EAX
0067952C  E8 B0 7B D8 FF            CALL 0x004010e1
LAB_00679531:
00679531  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00679534  51                        PUSH ECX
00679535  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0067953B  E8 EC AD D8 FF            CALL 0x0040432c
00679540  8B 93 95 06 00 00         MOV EDX,dword ptr [EBX + 0x695]
00679546  57                        PUSH EDI
00679547  52                        PUSH EDX
00679548  E8 23 77 03 00            CALL 0x006b0c70
LAB_0067954d:
0067954D  4F                        DEC EDI
0067954E  79 98                     JNS 0x006794e8
LAB_00679550:
00679550  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00679553  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00679558  33 C0                     XOR EAX,EAX
0067955A  5F                        POP EDI
0067955B  5E                        POP ESI
0067955C  5B                        POP EBX
0067955D  8B E5                     MOV ESP,EBP
0067955F  5D                        POP EBP
00679560  C3                        RET
LAB_00679561:
00679561  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
00679564  68 D4 2E 7D 00            PUSH 0x7d2ed4
00679569  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067956E  56                        PUSH ESI
0067956F  6A 00                     PUSH 0x0
00679571  68 0E 01 00 00            PUSH 0x10e
00679576  68 4C 2E 7D 00            PUSH 0x7d2e4c
0067957B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00679581  E8 4A 3F 03 00            CALL 0x006ad4d0
00679586  83 C4 18                  ADD ESP,0x18
00679589  85 C0                     TEST EAX,EAX
0067958B  74 01                     JZ 0x0067958e
0067958D  CC                        INT3
LAB_0067958e:
0067958E  68 0F 01 00 00            PUSH 0x10f
00679593  68 4C 2E 7D 00            PUSH 0x7d2e4c
00679598  6A 00                     PUSH 0x0
0067959A  56                        PUSH ESI
0067959B  E8 A0 C8 02 00            CALL 0x006a5e40
006795A0  8B C6                     MOV EAX,ESI
006795A2  5F                        POP EDI
006795A3  5E                        POP ESI
006795A4  5B                        POP EBX
006795A5  8B E5                     MOV ESP,EBP
006795A7  5D                        POP EBP
006795A8  C3                        RET
