FUN_006ea5e0:
006EA5E0  55                        PUSH EBP
006EA5E1  8B EC                     MOV EBP,ESP
006EA5E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EA5E6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EA5EC  56                        PUSH ESI
006EA5ED  33 F6                     XOR ESI,ESI
006EA5EF  3B D0                     CMP EDX,EAX
006EA5F1  73 6F                     JNC 0x006ea662
006EA5F3  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EA5F9  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EA5FC  C1 E0 03                  SHL EAX,0x3
006EA5FF  2B C2                     SUB EAX,EDX
006EA601  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA604  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006EA607  8B 08                     MOV ECX,dword ptr [EAX]
006EA609  F6 C5 80                  TEST CH,0x80
006EA60C  74 54                     JZ 0x006ea662
006EA60E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EA611  8B 90 94 00 00 00         MOV EDX,dword ptr [EAX + 0x94]
006EA617  3B CA                     CMP ECX,EDX
006EA619  7D 36                     JGE 0x006ea651
006EA61B  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006EA621  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006EA624  8D 54 8A 02               LEA EDX,[EDX + ECX*0x4 + 0x2]
006EA628  66 8B 0A                  MOV CX,word ptr [EDX]
006EA62B  8A C1                     MOV AL,CL
006EA62D  F6 D0                     NOT AL
006EA62F  D1 E8                     SHR EAX,0x1
006EA631  83 E0 01                  AND EAX,0x1
006EA634  85 F6                     TEST ESI,ESI
006EA636  74 0E                     JZ 0x006ea646
006EA638  81 E1 FD FF 00 00         AND ECX,0xfffd
006EA63E  5E                        POP ESI
006EA63F  66 89 0A                  MOV word ptr [EDX],CX
006EA642  5D                        POP EBP
006EA643  C2 0C 00                  RET 0xc
LAB_006ea646:
006EA646  83 C9 02                  OR ECX,0x2
006EA649  5E                        POP ESI
006EA64A  66 89 0A                  MOV word ptr [EDX],CX
006EA64D  5D                        POP EBP
006EA64E  C2 0C 00                  RET 0xc
LAB_006ea651:
006EA651  68 A4 EE 7E 00            PUSH 0x7eeea4
006EA656  E8 45 EB FF FF            CALL 0x006e91a0
006EA65B  8B C6                     MOV EAX,ESI
006EA65D  5E                        POP ESI
006EA65E  5D                        POP EBP
006EA65F  C2 0C 00                  RET 0xc
LAB_006ea662:
006EA662  83 FA FF                  CMP EDX,-0x1
006EA665  74 0A                     JZ 0x006ea671
006EA667  68 A4 EE 7E 00            PUSH 0x7eeea4
006EA66C  E8 DF E5 FF FF            CALL 0x006e8c50
LAB_006ea671:
006EA671  8B C6                     MOV EAX,ESI
006EA673  5E                        POP ESI
006EA674  5D                        POP EBP
006EA675  C2 0C 00                  RET 0xc
