STAllPlayersC::sub_004EB010:
004EB010  55                        PUSH EBP
004EB011  8B EC                     MOV EBP,ESP
004EB013  83 EC 0C                  SUB ESP,0xc
004EB016  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004EB019  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004EB01C  53                        PUSH EBX
004EB01D  56                        PUSH ESI
004EB01E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004EB021  57                        PUSH EDI
004EB022  33 F6                     XOR ESI,ESI
004EB024  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004EB027  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004EB02A  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004EB02D  C1 E7 04                  SHL EDI,0x4
004EB030  03 F8                     ADD EDI,EAX
004EB032  D1 E7                     SHL EDI,0x1
004EB034  33 DB                     XOR EBX,EBX
004EB036  89 B7 E6 57 7F 00         MOV dword ptr [EDI + 0x7f57e6],ESI
004EB03C  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
004EB03F  EB 0D                     JMP 0x004eb04e
LAB_004eb041:
004EB041  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004EB044  33 DB                     XOR EBX,EBX
004EB046  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
004EB049  EB 03                     JMP 0x004eb04e
LAB_004eb04b:
004EB04B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_004eb04e:
004EB04E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004EB051  50                        PUSH EAX
004EB052  E8 60 99 F1 FF            CALL 0x004049b7
004EB057  3C 03                     CMP AL,0x3
004EB059  74 58                     JZ 0x004eb0b3
004EB05B  8B 87 E6 57 7F 00         MOV EAX,dword ptr [EDI + 0x7f57e6]
004EB061  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004EB064  8D 0C 73                  LEA ECX,[EBX + ESI*0x2]
004EB067  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
004EB06A  C1 E1 03                  SHL ECX,0x3
004EB06D  8D 14 43                  LEA EDX,[EBX + EAX*0x2]
004EB070  8B B1 C4 15 7C 00         MOV ESI,dword ptr [ECX + 0x7c15c4]
004EB076  8B 1C D5 C0 15 7C 00      MOV EBX,dword ptr [EDX*0x8 + 0x7c15c0]
004EB07D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004EB080  2B F3                     SUB ESI,EBX
004EB082  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
004EB085  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004EB08B  05 39 30 00 00            ADD EAX,0x3039
004EB090  46                        INC ESI
004EB091  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
004EB094  33 D2                     XOR EDX,EDX
004EB096  C1 E8 10                  SHR EAX,0x10
004EB099  F7 F6                     DIV ESI
004EB09B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004EB09E  03 DA                     ADD EBX,EDX
004EB0A0  89 9C 39 C6 57 7F 00      MOV dword ptr [ECX + EDI*0x1 + 0x7f57c6],EBX
004EB0A7  89 9C 39 C2 57 7F 00      MOV dword ptr [ECX + EDI*0x1 + 0x7f57c2],EBX
004EB0AE  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
004EB0B1  EB 18                     JMP 0x004eb0cb
LAB_004eb0b3:
004EB0B3  8D 04 73                  LEA EAX,[EBX + ESI*0x2]
004EB0B6  8B 0C 85 20 16 7C 00      MOV ECX,dword ptr [EAX*0x4 + 0x7c1620]
004EB0BD  89 8C C7 C6 57 7F 00      MOV dword ptr [EDI + EAX*0x8 + 0x7f57c6],ECX
004EB0C4  89 8C C7 C2 57 7F 00      MOV dword ptr [EDI + EAX*0x8 + 0x7f57c2],ECX
LAB_004eb0cb:
004EB0CB  43                        INC EBX
004EB0CC  83 FB 02                  CMP EBX,0x2
004EB0CF  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
004EB0D2  0F 8C 73 FF FF FF         JL 0x004eb04b
004EB0D8  46                        INC ESI
004EB0D9  83 FE 02                  CMP ESI,0x2
004EB0DC  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004EB0DF  0F 8C 5C FF FF FF         JL 0x004eb041
004EB0E5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004EB0EB  33 C0                     XOR EAX,EAX
004EB0ED  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004EB0F3  89 97 E2 57 7F 00         MOV dword ptr [EDI + 0x7f57e2],EDX
004EB0F9  5F                        POP EDI
004EB0FA  5E                        POP ESI
004EB0FB  5B                        POP EBX
004EB0FC  8B E5                     MOV ESP,EBP
004EB0FE  5D                        POP EBP
004EB0FF  C2 04 00                  RET 0x4
