FUN_004e6680:
004E6680  55                        PUSH EBP
004E6681  8B EC                     MOV EBP,ESP
004E6683  83 EC 14                  SUB ESP,0x14
004E6686  53                        PUSH EBX
004E6687  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E668A  56                        PUSH ESI
004E668B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004E668E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E6694  57                        PUSH EDI
004E6695  53                        PUSH EBX
004E6696  E8 1C E3 F1 FF            CALL 0x004049b7
004E669B  25 FF 00 00 00            AND EAX,0xff
004E66A0  C7 45 FC 42 00 00 00      MOV dword ptr [EBP + -0x4],0x42
004E66A7  48                        DEC EAX
004E66A8  BF D4 0D 7C 00            MOV EDI,0x7c0dd4
004E66AD  8B F0                     MOV ESI,EAX
004E66AF  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
004E66B2  C1 E6 04                  SHL ESI,0x4
004E66B5  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_004e66b8:
004E66B8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E66BB  6A FF                     PUSH -0x1
004E66BD  50                        PUSH EAX
004E66BE  8D 86 F0 13 80 00         LEA EAX,[ESI + 0x8013f0]
004E66C4  50                        PUSH EAX
004E66C5  E8 06 A9 1C 00            CALL 0x006b0fd0
004E66CA  83 C4 0C                  ADD ESP,0xc
004E66CD  85 C0                     TEST EAX,EAX
004E66CF  75 19                     JNZ 0x004e66ea
004E66D1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E66D4  6A FF                     PUSH -0x1
004E66D6  8D 96 B0 13 80 00         LEA EDX,[ESI + 0x8013b0]
004E66DC  51                        PUSH ECX
004E66DD  52                        PUSH EDX
004E66DE  E8 ED A8 1C 00            CALL 0x006b0fd0
004E66E3  83 C4 0C                  ADD ESP,0xc
004E66E6  85 C0                     TEST EAX,EAX
004E66E8  74 56                     JZ 0x004e6740
LAB_004e66ea:
004E66EA  8A 47 01                  MOV AL,byte ptr [EDI + 0x1]
004E66ED  BE 01 00 00 00            MOV ESI,0x1
004E66F2  84 C0                     TEST AL,AL
004E66F4  74 47                     JZ 0x004e673d
LAB_004e66f6:
004E66F6  83 FE 03                  CMP ESI,0x3
004E66F9  7D 1C                     JGE 0x004e6717
004E66FB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004E66FE  33 C0                     XOR EAX,EAX
004E6700  8A 04 37                  MOV AL,byte ptr [EDI + ESI*0x1]
004E6703  50                        PUSH EAX
004E6704  53                        PUSH EBX
004E6705  E8 61 B1 F1 FF            CALL 0x0040186b
004E670A  85 C0                     TEST EAX,EAX
004E670C  74 2F                     JZ 0x004e673d
004E670E  8A 44 37 01               MOV AL,byte ptr [EDI + ESI*0x1 + 0x1]
004E6712  46                        INC ESI
004E6713  84 C0                     TEST AL,AL
004E6715  75 DF                     JNZ 0x004e66f6
LAB_004e6717:
004E6717  8A 47 01                  MOV AL,byte ptr [EDI + 0x1]
004E671A  84 C0                     TEST AL,AL
004E671C  74 1F                     JZ 0x004e673d
004E671E  8D 14 9B                  LEA EDX,[EBX + EBX*0x4]
004E6721  33 C9                     XOR ECX,ECX
004E6723  8A 0F                     MOV CL,byte ptr [EDI]
004E6725  8D 04 D3                  LEA EAX,[EBX + EDX*0x8]
004E6728  8D 14 43                  LEA EDX,[EBX + EAX*0x2]
004E672B  C1 E2 04                  SHL EDX,0x4
004E672E  03 D3                     ADD EDX,EBX
004E6730  D1 E2                     SHL EDX,0x1
004E6732  C7 84 8A B3 53 7F 00 01 00 00 00  MOV dword ptr [EDX + ECX*0x4 + 0x7f53b3],0x1
LAB_004e673d:
004E673D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_004e6740:
004E6740  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E6743  83 C7 03                  ADD EDI,0x3
004E6746  40                        INC EAX
004E6747  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004E674A  83 C0 BF                  ADD EAX,-0x41
004E674D  83 F8 29                  CMP EAX,0x29
004E6750  0F 8C 62 FF FF FF         JL 0x004e66b8
004E6756  B8 32 00 00 00            MOV EAX,0x32
004E675B  8D 8E 80 13 80 00         LEA ECX,[ESI + 0x801380]
004E6761  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004E6764  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_004e6767:
004E6767  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004E676A  83 C0 CE                  ADD EAX,-0x32
004E676D  6A FF                     PUSH -0x1
004E676F  50                        PUSH EAX
004E6770  52                        PUSH EDX
004E6771  E8 5A A8 1C 00            CALL 0x006b0fd0
004E6776  83 C4 0C                  ADD ESP,0xc
004E6779  85 C0                     TEST EAX,EAX
004E677B  0F 84 8C 00 00 00         JZ 0x004e680d
004E6781  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
004E6784  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E6787  6B FF 42                  IMUL EDI,EDI,0x42
004E678A  BE 01 00 00 00            MOV ESI,0x1
004E678F  8D 44 07 CE               LEA EAX,[EDI + EAX*0x1 + -0x32]
004E6793  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004E6796  8A 8C 40 4D 0E 7C 00      MOV CL,byte ptr [EAX + EAX*0x2 + 0x7c0e4d]
004E679D  84 C9                     TEST CL,CL
004E679F  74 6C                     JZ 0x004e680d
LAB_004e67a1:
004E67A1  83 FE 03                  CMP ESI,0x3
004E67A4  7D 33                     JGE 0x004e67d9
004E67A6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E67A9  33 D2                     XOR EDX,EDX
004E67AB  8D 44 0F CE               LEA EAX,[EDI + ECX*0x1 + -0x32]
004E67AF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004E67B2  8D 9C 40 4C 0E 7C 00      LEA EBX,[EAX + EAX*0x2 + 0x7c0e4c]
004E67B9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E67BC  8A 14 33                  MOV DL,byte ptr [EBX + ESI*0x1]
004E67BF  52                        PUSH EDX
004E67C0  50                        PUSH EAX
004E67C1  E8 A5 B0 F1 FF            CALL 0x0040186b
004E67C6  85 C0                     TEST EAX,EAX
004E67C8  74 40                     JZ 0x004e680a
004E67CA  8A 44 33 01               MOV AL,byte ptr [EBX + ESI*0x1 + 0x1]
004E67CE  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E67D1  46                        INC ESI
004E67D2  84 C0                     TEST AL,AL
004E67D4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004E67D7  75 C8                     JNZ 0x004e67a1
LAB_004e67d9:
004E67D9  8A 8C 40 4D 0E 7C 00      MOV CL,byte ptr [EAX + EAX*0x2 + 0x7c0e4d]
004E67E0  84 C9                     TEST CL,CL
004E67E2  74 29                     JZ 0x004e680d
004E67E4  33 C9                     XOR ECX,ECX
004E67E6  8D 14 9B                  LEA EDX,[EBX + EBX*0x4]
004E67E9  8A 8C 40 4C 0E 7C 00      MOV CL,byte ptr [EAX + EAX*0x2 + 0x7c0e4c]
004E67F0  8D 04 D3                  LEA EAX,[EBX + EDX*0x8]
004E67F3  8D 14 43                  LEA EDX,[EBX + EAX*0x2]
004E67F6  C1 E2 04                  SHL EDX,0x4
004E67F9  03 D3                     ADD EDX,EBX
004E67FB  D1 E2                     SHL EDX,0x1
004E67FD  C7 84 8A B3 53 7F 00 01 00 00 00  MOV dword ptr [EDX + ECX*0x4 + 0x7f53b3],0x1
004E6808  EB 03                     JMP 0x004e680d
LAB_004e680a:
004E680A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_004e680d:
004E680D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E6810  40                        INC EAX
004E6811  83 F8 74                  CMP EAX,0x74
004E6814  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004E6817  0F 8C 4A FF FF FF         JL 0x004e6767
004E681D  5F                        POP EDI
004E681E  5E                        POP ESI
004E681F  5B                        POP EBX
004E6820  8B E5                     MOV ESP,EBP
004E6822  5D                        POP EBP
004E6823  C2 04 00                  RET 0x4
