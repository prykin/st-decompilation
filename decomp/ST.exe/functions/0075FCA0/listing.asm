FUN_0075fca0:
0075FCA0  55                        PUSH EBP
0075FCA1  8B EC                     MOV EBP,ESP
0075FCA3  53                        PUSH EBX
0075FCA4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075FCA7  56                        PUSH ESI
0075FCA8  33 F6                     XOR ESI,ESI
0075FCAA  8B 43 70                  MOV EAX,dword ptr [EBX + 0x70]
0075FCAD  8B 8B BA 01 00 00         MOV ECX,dword ptr [EBX + 0x1ba]
0075FCB3  85 C0                     TEST EAX,EAX
0075FCB5  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0075FCB8  7E 43                     JLE 0x0075fcfd
0075FCBA  57                        PUSH EDI
0075FCBB  8D 79 34                  LEA EDI,[ECX + 0x34]
0075FCBE  EB 03                     JMP 0x0075fcc3
LAB_0075fcc0:
0075FCC0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_0075fcc3:
0075FCC3  8B 57 EC                  MOV EDX,dword ptr [EDI + -0x14]
0075FCC6  33 C0                     XOR EAX,EAX
0075FCC8  85 F6                     TEST ESI,ESI
0075FCCA  7E 1C                     JLE 0x0075fce8
0075FCCC  83 C1 20                  ADD ECX,0x20
LAB_0075fccf:
0075FCCF  3B 11                     CMP EDX,dword ptr [ECX]
0075FCD1  74 0A                     JZ 0x0075fcdd
0075FCD3  40                        INC EAX
0075FCD4  83 C1 04                  ADD ECX,0x4
0075FCD7  3B C6                     CMP EAX,ESI
0075FCD9  7C F4                     JL 0x0075fccf
0075FCDB  EB 0B                     JMP 0x0075fce8
LAB_0075fcdd:
0075FCDD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075FCE0  8B 44 81 34               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x34]
0075FCE4  85 C0                     TEST EAX,EAX
0075FCE6  75 07                     JNZ 0x0075fcef
LAB_0075fce8:
0075FCE8  52                        PUSH EDX
0075FCE9  53                        PUSH EBX
0075FCEA  E8 21 00 00 00            CALL 0x0075fd10
LAB_0075fcef:
0075FCEF  89 07                     MOV dword ptr [EDI],EAX
0075FCF1  8B 43 70                  MOV EAX,dword ptr [EBX + 0x70]
0075FCF4  46                        INC ESI
0075FCF5  83 C7 04                  ADD EDI,0x4
0075FCF8  3B F0                     CMP ESI,EAX
0075FCFA  7C C4                     JL 0x0075fcc0
0075FCFC  5F                        POP EDI
LAB_0075fcfd:
0075FCFD  5E                        POP ESI
0075FCFE  5B                        POP EBX
0075FCFF  5D                        POP EBP
0075FD00  C2 04 00                  RET 0x4
