FUN_005f06e0:
005F06E0  55                        PUSH EBP
005F06E1  8B EC                     MOV EBP,ESP
005F06E3  83 EC 20                  SUB ESP,0x20
005F06E6  56                        PUSH ESI
005F06E7  8B 35 BC 17 81 00         MOV ESI,dword ptr [0x008117bc]
005F06ED  85 F6                     TEST ESI,ESI
005F06EF  8B D1                     MOV EDX,ECX
005F06F1  74 5F                     JZ 0x005f0752
005F06F3  57                        PUSH EDI
005F06F4  B9 08 00 00 00            MOV ECX,0x8
005F06F9  33 C0                     XOR EAX,EAX
005F06FB  8D 7D E0                  LEA EDI,[EBP + -0x20]
005F06FE  F3 AB                     STOSD.REP ES:EDI
005F0700  8B 82 B1 02 00 00         MOV EAX,dword ptr [EDX + 0x2b1]
005F0706  5F                        POP EDI
005F0707  83 F8 05                  CMP EAX,0x5
005F070A  77 46                     JA 0x005f0752
switchD_005f070c::switchD:
005F070C  FF 24 85 58 07 5F 00      JMP dword ptr [EAX*0x4 + 0x5f0758]
switchD_005f070c::caseD_3:
005F0713  66 8B 42 32               MOV AX,word ptr [EDX + 0x32]
005F0717  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
005F071B  B8 DE 5D 00 00            MOV EAX,0x5dde
005F0720  EB 0D                     JMP 0x005f072f
switchD_005f070c::caseD_0:
005F0722  66 8B 4A 32               MOV CX,word ptr [EDX + 0x32]
005F0726  B8 D9 5D 00 00            MOV EAX,0x5dd9
005F072B  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
LAB_005f072f:
005F072F  66 8B 8A AB 02 00 00      MOV CX,word ptr [EDX + 0x2ab]
005F0736  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005F0739  66 8B 82 A3 02 00 00      MOV AX,word ptr [EDX + 0x2a3]
005F0740  66 89 4D FA               MOV word ptr [EBP + -0x6],CX
005F0744  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
005F0748  8B 16                     MOV EDX,dword ptr [ESI]
005F074A  8D 45 E0                  LEA EAX,[EBP + -0x20]
005F074D  8B CE                     MOV ECX,ESI
005F074F  50                        PUSH EAX
005F0750  FF 12                     CALL dword ptr [EDX]
switchD_005f070c::default:
005F0752  5E                        POP ESI
005F0753  8B E5                     MOV ESP,EBP
005F0755  5D                        POP EBP
005F0756  C3                        RET
