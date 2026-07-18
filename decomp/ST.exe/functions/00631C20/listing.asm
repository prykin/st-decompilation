FUN_00631c20:
00631C20  55                        PUSH EBP
00631C21  8B EC                     MOV EBP,ESP
00631C23  83 EC 08                  SUB ESP,0x8
00631C26  8B 41 6D                  MOV EAX,dword ptr [ECX + 0x6d]
00631C29  57                        PUSH EDI
00631C2A  85 C0                     TEST EAX,EAX
00631C2C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00631C2F  0F 84 58 01 00 00         JZ 0x00631d8d
00631C35  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00631C38  33 FF                     XOR EDI,EDI
00631C3A  85 C0                     TEST EAX,EAX
00631C3C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00631C3F  0F 8E 48 01 00 00         JLE 0x00631d8d
00631C45  53                        PUSH EBX
00631C46  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00631C49  56                        PUSH ESI
00631C4A  EB 03                     JMP 0x00631c4f
LAB_00631c4c:
00631C4C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00631c4f:
00631C4F  8B 41 6D                  MOV EAX,dword ptr [ECX + 0x6d]
00631C52  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
00631C55  0F 83 24 01 00 00         JNC 0x00631d7f
00631C5B  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00631C5E  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00631C61  0F AF F7                  IMUL ESI,EDI
00631C64  03 F1                     ADD ESI,ECX
00631C66  85 F6                     TEST ESI,ESI
00631C68  0F 84 11 01 00 00         JZ 0x00631d7f
00631C6E  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00631C71  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00631C74  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00631C77  50                        PUSH EAX
00631C78  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00631C7B  51                        PUSH ECX
00631C7C  52                        PUSH EDX
00631C7D  50                        PUSH EAX
00631C7E  E8 55 B2 07 00            CALL 0x006aced8
00631C83  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00631C86  83 C4 10                  ADD ESP,0x10
00631C89  3B C1                     CMP EAX,ECX
00631C8B  0F 8D EE 00 00 00         JGE 0x00631d7f
00631C91  8B 06                     MOV EAX,dword ptr [ESI]
00631C93  83 F8 08                  CMP EAX,0x8
00631C96  0F 83 E3 00 00 00         JNC 0x00631d7f
00631C9C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00631CA2  85 C9                     TEST ECX,ECX
00631CA4  74 11                     JZ 0x00631cb7
00631CA6  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00631CA9  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00631CB1  0F 83 C8 00 00 00         JNC 0x00631d7f
LAB_00631cb7:
00631CB7  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
00631CBD  8A 06                     MOV AL,byte ptr [ESI]
00631CBF  84 C9                     TEST CL,CL
00631CC1  88 45 10                  MOV byte ptr [EBP + 0x10],AL
00631CC4  74 2C                     JZ 0x00631cf2
00631CC6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00631CC9  33 D2                     XOR EDX,EDX
00631CCB  25 FF 00 00 00            AND EAX,0xff
00631CD0  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00631CD3  8B C3                     MOV EAX,EBX
00631CD5  25 FF 00 00 00            AND EAX,0xff
00631CDA  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00631CE1  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00631CE4  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00631CEB  0F 95 C2                  SETNZ DL
00631CEE  8B C2                     MOV EAX,EDX
00631CF0  EB 79                     JMP 0x00631d6b
LAB_00631cf2:
00631CF2  3A D8                     CMP BL,AL
00631CF4  74 6A                     JZ 0x00631d60
00631CF6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00631CF9  8B C3                     MOV EAX,EBX
00631CFB  25 FF 00 00 00            AND EAX,0xff
00631D00  81 E1 FF 00 00 00         AND ECX,0xff
00631D06  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00631D0D  84 D2                     TEST DL,DL
00631D0F  75 10                     JNZ 0x00631d21
00631D11  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00631D18  75 07                     JNZ 0x00631d21
00631D1A  B8 FE FF FF FF            MOV EAX,0xfffffffe
00631D1F  EB 41                     JMP 0x00631d62
LAB_00631d21:
00631D21  80 FA 01                  CMP DL,0x1
00631D24  75 0F                     JNZ 0x00631d35
00631D26  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00631D2E  75 05                     JNZ 0x00631d35
00631D30  83 C8 FF                  OR EAX,0xffffffff
00631D33  EB 2D                     JMP 0x00631d62
LAB_00631d35:
00631D35  84 D2                     TEST DL,DL
00631D37  75 11                     JNZ 0x00631d4a
00631D39  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00631D41  75 07                     JNZ 0x00631d4a
00631D43  B8 01 00 00 00            MOV EAX,0x1
00631D48  EB 18                     JMP 0x00631d62
LAB_00631d4a:
00631D4A  80 FA 01                  CMP DL,0x1
00631D4D  75 11                     JNZ 0x00631d60
00631D4F  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00631D57  75 07                     JNZ 0x00631d60
00631D59  B8 02 00 00 00            MOV EAX,0x2
00631D5E  EB 02                     JMP 0x00631d62
LAB_00631d60:
00631D60  33 C0                     XOR EAX,EAX
LAB_00631d62:
00631D62  33 C9                     XOR ECX,ECX
00631D64  85 C0                     TEST EAX,EAX
00631D66  0F 9C C1                  SETL CL
00631D69  8B C1                     MOV EAX,ECX
LAB_00631d6b:
00631D6B  85 C0                     TEST EAX,EAX
00631D6D  74 10                     JZ 0x00631d7f
00631D6F  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00631D72  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00631D75  89 56 25                  MOV dword ptr [ESI + 0x25],EDX
00631D78  C6 46 20 01               MOV byte ptr [ESI + 0x20],0x1
00631D7C  89 46 21                  MOV dword ptr [ESI + 0x21],EAX
LAB_00631d7f:
00631D7F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00631D82  47                        INC EDI
00631D83  3B F8                     CMP EDI,EAX
00631D85  0F 8C C1 FE FF FF         JL 0x00631c4c
00631D8B  5E                        POP ESI
00631D8C  5B                        POP EBX
LAB_00631d8d:
00631D8D  5F                        POP EDI
00631D8E  8B E5                     MOV ESP,EBP
00631D90  5D                        POP EBP
00631D91  C2 18 00                  RET 0x18
