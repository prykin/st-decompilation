FUN_006b80e0:
006B80E0  55                        PUSH EBP
006B80E1  8B EC                     MOV EBP,ESP
006B80E3  83 EC 60                  SUB ESP,0x60
006B80E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006B80EB  56                        PUSH ESI
006B80EC  57                        PUSH EDI
006B80ED  8D 55 A4                  LEA EDX,[EBP + -0x5c]
006B80F0  8D 4D A0                  LEA ECX,[EBP + -0x60]
006B80F3  6A 00                     PUSH 0x0
006B80F5  52                        PUSH EDX
006B80F6  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006B80F9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B80FF  E8 EC 56 07 00            CALL 0x0072d7f0
006B8104  83 C4 08                  ADD ESP,0x8
006B8107  85 C0                     TEST EAX,EAX
006B8109  0F 85 8D 00 00 00         JNZ 0x006b819c
006B810F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B8112  8B 71 30                  MOV ESI,dword ptr [ECX + 0x30]
006B8115  85 F6                     TEST ESI,ESI
006B8117  74 71                     JZ 0x006b818a
006B8119  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B811C  25 FF 00 00 00            AND EAX,0xff
006B8121  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006B8124  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
006B8127  8A 44 C1 38               MOV AL,byte ptr [ECX + EAX*0x8 + 0x38]
006B812B  A8 02                     TEST AL,0x2
006B812D  74 5B                     JZ 0x006b818a
006B812F  B9 06 00 00 00            MOV ECX,0x6
006B8134  33 C0                     XOR EAX,EAX
006B8136  8D 7D E4                  LEA EDI,[EBP + -0x1c]
006B8139  6A 00                     PUSH 0x0
006B813B  F3 AB                     STOSD.REP ES:EDI
006B813D  8B 4A 40                  MOV ECX,dword ptr [EDX + 0x40]
006B8140  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B8143  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006B8146  8D 4D E4                  LEA ECX,[EBP + -0x1c]
006B8149  8D 55 FC                  LEA EDX,[EBP + -0x4]
006B814C  51                        PUSH ECX
006B814D  56                        PUSH ESI
006B814E  C7 45 E4 18 00 00 00      MOV dword ptr [EBP + -0x1c],0x18
006B8155  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
006B815C  C7 45 F4 04 00 00 00      MOV dword ptr [EBP + -0xc],0x4
006B8163  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006B8166  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B8169  FF 15 C4 BE 85 00         CALL dword ptr [0x0085bec4]
006B816F  85 C0                     TEST EAX,EAX
006B8171  74 17                     JZ 0x006b818a
006B8173  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B8179  68 FD 00 00 00            PUSH 0xfd
006B817E  68 E8 DB 7E 00            PUSH 0x7edbe8
006B8183  52                        PUSH EDX
006B8184  50                        PUSH EAX
006B8185  E8 B6 DC FE FF            CALL 0x006a5e40
LAB_006b818a:
006B818A  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
006B818D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006B8192  33 C0                     XOR EAX,EAX
006B8194  5F                        POP EDI
006B8195  5E                        POP ESI
006B8196  8B E5                     MOV ESP,EBP
006B8198  5D                        POP EBP
006B8199  C2 0C 00                  RET 0xc
LAB_006b819c:
006B819C  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006B819F  68 02 01 00 00            PUSH 0x102
006B81A4  68 E8 DB 7E 00            PUSH 0x7edbe8
006B81A9  6A 00                     PUSH 0x0
006B81AB  50                        PUSH EAX
006B81AC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B81B2  E8 89 DC FE FF            CALL 0x006a5e40
006B81B7  5F                        POP EDI
006B81B8  83 C8 FF                  OR EAX,0xffffffff
006B81BB  5E                        POP ESI
006B81BC  8B E5                     MOV ESP,EBP
006B81BE  5D                        POP EBP
006B81BF  C2 0C 00                  RET 0xc
