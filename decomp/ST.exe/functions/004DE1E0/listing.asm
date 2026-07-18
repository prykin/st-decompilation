FUN_004de1e0:
004DE1E0  55                        PUSH EBP
004DE1E1  8B EC                     MOV EBP,ESP
004DE1E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DE1E6  53                        PUSH EBX
004DE1E7  57                        PUSH EDI
004DE1E8  33 FF                     XOR EDI,EDI
004DE1EA  83 F8 09                  CMP EAX,0x9
004DE1ED  8B D9                     MOV EBX,ECX
004DE1EF  77 4B                     JA 0x004de23c
switchD_004de1f1::switchD:
004DE1F1  FF 24 85 98 E2 4D 00      JMP dword ptr [EAX*0x4 + 0x4de298]
switchD_004de1f1::caseD_0:
004DE1F8  BF 96 00 00 00            MOV EDI,0x96
004DE1FD  EB 3D                     JMP 0x004de23c
switchD_004de1f1::caseD_1:
004DE1FF  BF 97 00 00 00            MOV EDI,0x97
004DE204  EB 36                     JMP 0x004de23c
switchD_004de1f1::caseD_2:
004DE206  BF 98 00 00 00            MOV EDI,0x98
004DE20B  EB 2F                     JMP 0x004de23c
switchD_004de1f1::caseD_3:
004DE20D  BF 99 00 00 00            MOV EDI,0x99
004DE212  EB 28                     JMP 0x004de23c
switchD_004de1f1::caseD_4:
004DE214  BF 9A 00 00 00            MOV EDI,0x9a
004DE219  EB 21                     JMP 0x004de23c
switchD_004de1f1::caseD_5:
004DE21B  BF A6 00 00 00            MOV EDI,0xa6
004DE220  EB 1A                     JMP 0x004de23c
switchD_004de1f1::caseD_6:
004DE222  BF A9 00 00 00            MOV EDI,0xa9
004DE227  EB 13                     JMP 0x004de23c
switchD_004de1f1::caseD_7:
004DE229  BF A7 00 00 00            MOV EDI,0xa7
004DE22E  EB 0C                     JMP 0x004de23c
switchD_004de1f1::caseD_8:
004DE230  BF AB 00 00 00            MOV EDI,0xab
004DE235  EB 05                     JMP 0x004de23c
switchD_004de1f1::caseD_9:
004DE237  BF AC 00 00 00            MOV EDI,0xac
switchD_004de1f1::default:
004DE23C  8B 8B D0 04 00 00         MOV ECX,dword ptr [EBX + 0x4d0]
004DE242  8D 83 D0 04 00 00         LEA EAX,[EBX + 0x4d0]
004DE248  85 C9                     TEST ECX,ECX
004DE24A  7C 42                     JL 0x004de28e
004DE24C  56                        PUSH ESI
004DE24D  8D B3 DC 04 00 00         LEA ESI,[EBX + 0x4dc]
LAB_004de253:
004DE253  39 38                     CMP dword ptr [EAX],EDI
004DE255  75 21                     JNZ 0x004de278
004DE257  8B 0E                     MOV ECX,dword ptr [ESI]
004DE259  33 C0                     XOR EAX,EAX
004DE25B  85 C9                     TEST ECX,ECX
004DE25D  0F 94 C0                  SETZ AL
004DE260  89 06                     MOV dword ptr [ESI],EAX
004DE262  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DE268  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DE26E  8B CB                     MOV ECX,EBX
004DE270  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
004DE273  E8 D1 5C F2 FF            CALL 0x00403f49
LAB_004de278:
004DE278  83 C6 14                  ADD ESI,0x14
004DE27B  8B 4E F4                  MOV ECX,dword ptr [ESI + -0xc]
004DE27E  8D 46 F4                  LEA EAX,[ESI + -0xc]
004DE281  85 C9                     TEST ECX,ECX
004DE283  7D CE                     JGE 0x004de253
004DE285  5E                        POP ESI
004DE286  5F                        POP EDI
004DE287  33 C0                     XOR EAX,EAX
004DE289  5B                        POP EBX
004DE28A  5D                        POP EBP
004DE28B  C2 04 00                  RET 0x4
LAB_004de28e:
004DE28E  5F                        POP EDI
004DE28F  33 C0                     XOR EAX,EAX
004DE291  5B                        POP EBX
004DE292  5D                        POP EBP
004DE293  C2 04 00                  RET 0x4
