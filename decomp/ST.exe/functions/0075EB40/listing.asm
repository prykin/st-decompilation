FUN_0075eb40:
0075EB40  55                        PUSH EBP
0075EB41  8B EC                     MOV EBP,ESP
0075EB43  81 EC 28 02 00 00         SUB ESP,0x228
0075EB49  57                        PUSH EDI
0075EB4A  B9 80 00 00 00            MOV ECX,0x80
0075EB4F  B8 FF FF FF 7F            MOV EAX,0x7fffffff
0075EB54  8D BD D8 FD FF FF         LEA EDI,[EBP + 0xfffffdd8]
0075EB5A  F3 AB                     STOSD.REP ES:EDI
0075EB5C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0075EB5F  33 C0                     XOR EAX,EAX
0075EB61  85 C9                     TEST ECX,ECX
0075EB63  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0075EB66  0F 8E 0B 01 00 00         JLE 0x0075ec77
0075EB6C  53                        PUSH EBX
0075EB6D  56                        PUSH ESI
LAB_0075eb6e:
0075EB6E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0075EB71  33 D2                     XOR EDX,EDX
0075EB73  33 DB                     XOR EBX,EBX
0075EB75  C7 45 F4 04 00 00 00      MOV dword ptr [EBP + -0xc],0x4
0075EB7C  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
0075EB7F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075EB82  8B B8 80 00 00 00         MOV EDI,dword ptr [EAX + 0x80]
0075EB88  33 C0                     XOR EAX,EAX
0075EB8A  8B 0F                     MOV ECX,dword ptr [EDI]
0075EB8C  8A 04 0A                  MOV AL,byte ptr [EDX + ECX*0x1]
0075EB8F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075EB92  2B C8                     SUB ECX,EAX
0075EB94  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0075EB97  8A 1C 10                  MOV BL,byte ptr [EAX + EDX*0x1]
0075EB9A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075EB9D  2B C3                     SUB EAX,EBX
0075EB9F  33 DB                     XOR EBX,EBX
0075EBA1  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
0075EBA4  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0075EBA7  8A 1C 10                  MOV BL,byte ptr [EAX + EDX*0x1]
0075EBAA  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075EBAD  2B C3                     SUB EAX,EBX
0075EBAF  8B DE                     MOV EBX,ESI
0075EBB1  D1 E0                     SHL EAX,0x1
0075EBB3  0F AF DE                  IMUL EBX,ESI
0075EBB6  8B F8                     MOV EDI,EAX
0075EBB8  0F AF F8                  IMUL EDI,EAX
0075EBBB  03 FB                     ADD EDI,EBX
0075EBBD  8B D9                     MOV EBX,ECX
0075EBBF  0F AF D9                  IMUL EBX,ECX
0075EBC2  83 C0 08                  ADD EAX,0x8
0075EBC5  03 FB                     ADD EDI,EBX
0075EBC7  8D 5C 76 12               LEA EBX,[ESI + ESI*0x2 + 0x12]
0075EBCB  83 C1 04                  ADD ECX,0x4
0075EBCE  C1 E0 05                  SHL EAX,0x5
0075EBD1  C1 E3 03                  SHL EBX,0x3
0075EBD4  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0075EBD7  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0075EBDA  C1 E1 04                  SHL ECX,0x4
0075EBDD  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
0075EBE0  8D B5 D8 FD FF FF         LEA ESI,[EBP + 0xfffffdd8]
0075EBE6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075EBE9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0075EBEC  EB 03                     JMP 0x0075ebf1
LAB_0075ebee:
0075EBEE  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
LAB_0075ebf1:
0075EBF1  8B C7                     MOV EAX,EDI
0075EBF3  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0075EBF6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0075EBF9  C7 45 E8 08 00 00 00      MOV dword ptr [EBP + -0x18],0x8
LAB_0075ec00:
0075EC00  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0075EC03  C7 45 E0 04 00 00 00      MOV dword ptr [EBP + -0x20],0x4
LAB_0075ec0a:
0075EC0A  3B 06                     CMP EAX,dword ptr [ESI]
0075EC0C  7D 07                     JGE 0x0075ec15
0075EC0E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0075EC11  89 06                     MOV dword ptr [ESI],EAX
0075EC13  88 13                     MOV byte ptr [EBX],DL
LAB_0075ec15:
0075EC15  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0075EC18  03 C1                     ADD EAX,ECX
0075EC1A  81 C1 00 02 00 00         ADD ECX,0x200
0075EC20  83 C6 04                  ADD ESI,0x4
0075EC23  43                        INC EBX
0075EC24  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0075EC27  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0075EC2A  4B                        DEC EBX
0075EC2B  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0075EC2E  75 DA                     JNZ 0x0075ec0a
0075EC30  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0075EC33  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0075EC36  03 C1                     ADD EAX,ECX
0075EC38  81 C1 20 01 00 00         ADD ECX,0x120
0075EC3E  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0075EC41  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0075EC44  49                        DEC ECX
0075EC45  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0075EC48  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075EC4B  75 B3                     JNZ 0x0075ec00
0075EC4D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075EC50  03 F8                     ADD EDI,EAX
0075EC52  05 80 00 00 00            ADD EAX,0x80
0075EC57  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075EC5A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0075EC5D  48                        DEC EAX
0075EC5E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0075EC61  75 8B                     JNZ 0x0075ebee
0075EC63  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0075EC66  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0075EC69  40                        INC EAX
0075EC6A  3B C1                     CMP EAX,ECX
0075EC6C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0075EC6F  0F 8C F9 FE FF FF         JL 0x0075eb6e
0075EC75  5E                        POP ESI
0075EC76  5B                        POP EBX
LAB_0075ec77:
0075EC77  5F                        POP EDI
0075EC78  8B E5                     MOV ESP,EBP
0075EC7A  5D                        POP EBP
0075EC7B  C2 1C 00                  RET 0x1c
