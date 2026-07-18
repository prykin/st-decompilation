FUN_0056ee90:
0056EE90  55                        PUSH EBP
0056EE91  8B EC                     MOV EBP,ESP
0056EE93  51                        PUSH ECX
0056EE94  8A 81 2D 11 00 00         MOV AL,byte ptr [ECX + 0x112d]
0056EE9A  53                        PUSH EBX
0056EE9B  3C FF                     CMP AL,0xff
0056EE9D  56                        PUSH ESI
0056EE9E  75 74                     JNZ 0x0056ef14
0056EEA0  32 DB                     XOR BL,BL
0056EEA2  C6 81 2D 11 00 00 00      MOV byte ptr [ECX + 0x112d],0x0
0056EEA9  C6 81 2E 11 00 00 01      MOV byte ptr [ECX + 0x112e],0x1
0056EEB0  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
LAB_0056eeb3:
0056EEB3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0056EEB6  8B C2                     MOV EAX,EDX
0056EEB8  25 FF 00 00 00            AND EAX,0xff
0056EEBD  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0056EEC0  8D 34 C1                  LEA ESI,[ECX + EAX*0x8]
0056EEC3  03 C6                     ADD EAX,ESI
0056EEC5  80 B8 C9 11 00 00 FF      CMP byte ptr [EAX + 0x11c9],0xff
0056EECC  74 09                     JZ 0x0056eed7
0056EECE  80 B8 C8 11 00 00 00      CMP byte ptr [EAX + 0x11c8],0x0
0056EED5  75 10                     JNZ 0x0056eee7
LAB_0056eed7:
0056EED7  FE C3                     INC BL
0056EED9  80 FB 08                  CMP BL,0x8
0056EEDC  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
0056EEDF  72 D2                     JC 0x0056eeb3
0056EEE1  5E                        POP ESI
0056EEE2  5B                        POP EBX
0056EEE3  8B E5                     MOV ESP,EBP
0056EEE5  5D                        POP EBP
0056EEE6  C3                        RET
LAB_0056eee7:
0056EEE7  81 E2 FF 00 00 00         AND EDX,0xff
0056EEED  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
0056EEF0  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0056EEF3  03 C2                     ADD EAX,EDX
0056EEF5  8A 90 C9 11 00 00         MOV DL,byte ptr [EAX + 0x11c9]
0056EEFB  88 91 2D 11 00 00         MOV byte ptr [ECX + 0x112d],DL
0056EF01  8A 80 C8 11 00 00         MOV AL,byte ptr [EAX + 0x11c8]
0056EF07  88 81 2E 11 00 00         MOV byte ptr [ECX + 0x112e],AL
0056EF0D  C6 81 2F 11 00 00 01      MOV byte ptr [ECX + 0x112f],0x1
LAB_0056ef14:
0056EF14  5E                        POP ESI
0056EF15  5B                        POP EBX
0056EF16  8B E5                     MOV ESP,EBP
0056EF18  5D                        POP EBP
0056EF19  C3                        RET
