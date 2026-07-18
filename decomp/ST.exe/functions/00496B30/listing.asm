FUN_00496b30:
00496B30  55                        PUSH EBP
00496B31  8B EC                     MOV EBP,ESP
00496B33  83 EC 10                  SUB ESP,0x10
00496B36  8B 0D 70 B2 7F 00         MOV ECX,dword ptr [0x007fb270]
00496B3C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00496B3F  53                        PUSH EBX
00496B40  56                        PUSH ESI
00496B41  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00496B44  57                        PUSH EDI
00496B45  3B D0                     CMP EDX,EAX
00496B47  0F 83 1A 01 00 00         JNC 0x00496c67
00496B4D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00496B50  0F AF C2                  IMUL EAX,EDX
00496B53  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00496B56  85 C0                     TEST EAX,EAX
00496B58  0F 84 09 01 00 00         JZ 0x00496c67
00496B5E  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00496B61  8D 4A F9                  LEA ECX,[EDX + -0x7]
00496B64  85 C9                     TEST ECX,ECX
00496B66  7D 08                     JGE 0x00496b70
00496B68  8B F9                     MOV EDI,ECX
00496B6A  F7 DF                     NEG EDI
00496B6C  33 C9                     XOR ECX,ECX
00496B6E  EB 02                     JMP 0x00496b72
LAB_00496b70:
00496B70  33 FF                     XOR EDI,EDI
LAB_00496b72:
00496B72  8B 00                     MOV EAX,dword ptr [EAX]
00496B74  8D 58 F9                  LEA EBX,[EAX + -0x7]
00496B77  85 DB                     TEST EBX,EBX
00496B79  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00496B7C  7D 10                     JGE 0x00496b8e
00496B7E  8B F3                     MOV ESI,EBX
00496B80  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
00496B87  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00496B8A  F7 DE                     NEG ESI
00496B8C  EB 02                     JMP 0x00496b90
LAB_00496b8e:
00496B8E  33 F6                     XOR ESI,ESI
LAB_00496b90:
00496B90  83 C2 08                  ADD EDX,0x8
00496B93  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00496B96  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
00496B9D  39 55 FC                  CMP dword ptr [EBP + -0x4],EDX
00496BA0  7E 03                     JLE 0x00496ba5
00496BA2  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00496ba5:
00496BA5  8D 50 08                  LEA EDX,[EAX + 0x8]
00496BA8  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00496BAF  3B D0                     CMP EDX,EAX
00496BB1  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00496BB4  7E 03                     JLE 0x00496bb9
00496BB6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00496bb9:
00496BB9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00496BBC  8B D1                     MOV EDX,ECX
00496BBE  3B C8                     CMP ECX,EAX
00496BC0  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00496BC3  0F 8D 9E 00 00 00         JGE 0x00496c67
00496BC9  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
00496BCC  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00496BCF  8D 0C 86                  LEA ECX,[ESI + EAX*0x4]
00496BD2  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00496BD5  8D 84 08 64 BC 7A 00      LEA EAX,[EAX + ECX*0x1 + 0x7abc64]
00496BDC  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00496bdf:
00496BDF  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00496BE6  0F AF C2                  IMUL EAX,EDX
00496BE9  3B DE                     CMP EBX,ESI
00496BEB  7D 62                     JGE 0x00496c4f
00496BED  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00496BF0  03 C3                     ADD EAX,EBX
00496BF2  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00496BF5  2B F1                     SUB ESI,ECX
LAB_00496bf7:
00496BF7  80 3B 00                  CMP byte ptr [EBX],0x0
00496BFA  74 45                     JZ 0x00496c41
00496BFC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00496BFF  85 C9                     TEST ECX,ECX
00496C01  74 24                     JZ 0x00496c27
00496C03  8B 0C BD 4C B2 7F 00      MOV ECX,dword ptr [EDI*0x4 + 0x7fb24c]
00496C0A  03 C8                     ADD ECX,EAX
00496C0C  8A 11                     MOV DL,byte ptr [ECX]
00496C0E  FE C2                     INC DL
00496C10  88 11                     MOV byte ptr [ECX],DL
00496C12  8B 15 6C B2 7F 00         MOV EDX,dword ptr [0x007fb26c]
00496C18  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00496C1B  80 F9 FF                  CMP CL,0xff
00496C1E  73 21                     JNC 0x00496c41
00496C20  FE C1                     INC CL
00496C22  88 0C 10                  MOV byte ptr [EAX + EDX*0x1],CL
00496C25  EB 1A                     JMP 0x00496c41
LAB_00496c27:
00496C27  8B 14 BD 4C B2 7F 00      MOV EDX,dword ptr [EDI*0x4 + 0x7fb24c]
00496C2E  8D 0C 02                  LEA ECX,[EDX + EAX*0x1]
00496C31  8A 14 02                  MOV DL,byte ptr [EDX + EAX*0x1]
00496C34  FE CA                     DEC DL
00496C36  88 11                     MOV byte ptr [ECX],DL
00496C38  8B 0D 6C B2 7F 00         MOV ECX,dword ptr [0x007fb26c]
00496C3E  FE 0C 08                  DEC byte ptr [EAX + ECX*0x1]
LAB_00496c41:
00496C41  43                        INC EBX
00496C42  40                        INC EAX
00496C43  4E                        DEC ESI
00496C44  75 B1                     JNZ 0x00496bf7
00496C46  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00496C49  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00496C4C  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_00496c4f:
00496C4F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00496C52  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00496C55  42                        INC EDX
00496C56  83 C1 0F                  ADD ECX,0xf
00496C59  3B D0                     CMP EDX,EAX
00496C5B  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00496C5E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00496C61  0F 8C 78 FF FF FF         JL 0x00496bdf
LAB_00496c67:
00496C67  5F                        POP EDI
00496C68  5E                        POP ESI
00496C69  5B                        POP EBX
00496C6A  8B E5                     MOV ESP,EBP
00496C6C  5D                        POP EBP
00496C6D  C2 0C 00                  RET 0xc
