FUN_0043e640:
0043E640  55                        PUSH EBP
0043E641  8B EC                     MOV EBP,ESP
0043E643  83 EC 08                  SUB ESP,0x8
0043E646  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0043E64A  53                        PUSH EBX
0043E64B  57                        PUSH EDI
0043E64C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043E64F  33 FF                     XOR EDI,EDI
0043E651  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043E654  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043E657  C1 E1 04                  SHL ECX,0x4
0043E65A  03 C8                     ADD ECX,EAX
0043E65C  33 C0                     XOR EAX,EAX
0043E65E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0043E661  8B 1C 4D 29 4E 7F 00      MOV EBX,dword ptr [ECX*0x2 + 0x7f4e29]
0043E668  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0043E66B  85 C9                     TEST ECX,ECX
0043E66D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0043E670  0F 8E 86 00 00 00         JLE 0x0043e6fc
0043E676  56                        PUSH ESI
LAB_0043e677:
0043E677  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0043E67A  8B 34 BA                  MOV ESI,dword ptr [EDX + EDI*0x4]
0043E67D  85 F6                     TEST ESI,ESI
0043E67F  74 6E                     JZ 0x0043e6ef
0043E681  8B 06                     MOV EAX,dword ptr [ESI]
0043E683  8B CE                     MOV ECX,ESI
0043E685  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0043E688  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
0043E68B  75 62                     JNZ 0x0043e6ef
0043E68D  8B 16                     MOV EDX,dword ptr [ESI]
0043E68F  8B CE                     MOV ECX,ESI
0043E691  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0043E697  85 C0                     TEST EAX,EAX
0043E699  74 54                     JZ 0x0043e6ef
0043E69B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043E69E  85 C9                     TEST ECX,ECX
0043E6A0  74 31                     JZ 0x0043e6d3
0043E6A2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043E6A5  83 C0 C8                  ADD EAX,-0x38
0043E6A8  83 F8 26                  CMP EAX,0x26
0043E6AB  77 42                     JA 0x0043e6ef
0043E6AD  33 D2                     XOR EDX,EDX
0043E6AF  8A 90 0C E7 43 00         MOV DL,byte ptr [EAX + 0x43e70c]
switchD_0043e6b5::switchD:
0043E6B5  FF 24 95 04 E7 43 00      JMP dword ptr [EDX*0x4 + 0x43e704]
switchD_0043e6b5::caseD_38:
0043E6BC  83 F9 01                  CMP ECX,0x1
0043E6BF  75 2E                     JNZ 0x0043e6ef
0043E6C1  8B 06                     MOV EAX,dword ptr [ESI]
0043E6C3  8D 4D F8                  LEA ECX,[EBP + -0x8]
0043E6C6  51                        PUSH ECX
0043E6C7  8B CE                     MOV ECX,ESI
0043E6C9  FF 90 88 00 00 00         CALL dword ptr [EAX + 0x88]
0043E6CF  85 C0                     TEST EAX,EAX
0043E6D1  7E 1C                     JLE 0x0043e6ef
LAB_0043e6d3:
0043E6D3  80 7D 14 FF               CMP byte ptr [EBP + 0x14],0xff
0043E6D7  74 13                     JZ 0x0043e6ec
0043E6D9  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0043E6DC  8B 0C BA                  MOV ECX,dword ptr [EDX + EDI*0x4]
0043E6DF  8B 01                     MOV EAX,dword ptr [ECX]
0043E6E1  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
0043E6E4  0F BE 4D 14               MOVSX ECX,byte ptr [EBP + 0x14]
0043E6E8  3B C1                     CMP EAX,ECX
0043E6EA  75 03                     JNZ 0x0043e6ef
LAB_0043e6ec:
0043E6EC  FF 45 08                  INC dword ptr [EBP + 0x8]
switchD_0043e6b5::caseD_3a:
0043E6EF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043E6F2  47                        INC EDI
0043E6F3  3B F8                     CMP EDI,EAX
0043E6F5  7C 80                     JL 0x0043e677
0043E6F7  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
0043E6FB  5E                        POP ESI
LAB_0043e6fc:
0043E6FC  5F                        POP EDI
0043E6FD  5B                        POP EBX
0043E6FE  8B E5                     MOV ESP,EBP
0043E700  5D                        POP EBP
0043E701  C2 10 00                  RET 0x10
