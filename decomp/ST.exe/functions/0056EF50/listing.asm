STAppC::sub_0056EF50:
0056EF50  55                        PUSH EBP
0056EF51  8B EC                     MOV EBP,ESP
0056EF53  51                        PUSH ECX
0056EF54  8A 81 95 11 00 00         MOV AL,byte ptr [ECX + 0x1195]
0056EF5A  53                        PUSH EBX
0056EF5B  56                        PUSH ESI
0056EF5C  57                        PUSH EDI
0056EF5D  84 C0                     TEST AL,AL
0056EF5F  74 38                     JZ 0x0056ef99
0056EF61  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
0056EF67  32 DB                     XOR BL,BL
0056EF69  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
LAB_0056ef6c:
0056EF6C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0056EF6F  8B C6                     MOV EAX,ESI
0056EF71  25 FF 00 00 00            AND EAX,0xff
0056EF76  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0056EF79  8D 3C C1                  LEA EDI,[ECX + EAX*0x8]
0056EF7C  03 C7                     ADD EAX,EDI
0056EF7E  38 90 C9 11 00 00         CMP byte ptr [EAX + 0x11c9],DL
0056EF84  75 09                     JNZ 0x0056ef8f
0056EF86  80 B8 A7 11 00 00 00      CMP byte ptr [EAX + 0x11a7],0x0
0056EF8D  74 60                     JZ 0x0056efef
LAB_0056ef8f:
0056EF8F  FE C3                     INC BL
0056EF91  80 FB 08                  CMP BL,0x8
0056EF94  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
0056EF97  72 D3                     JC 0x0056ef6c
LAB_0056ef99:
0056EF99  C6 81 2D 11 00 00 FF      MOV byte ptr [ECX + 0x112d],0xff
0056EFA0  C6 81 2E 11 00 00 00      MOV byte ptr [ECX + 0x112e],0x0
0056EFA7  8D 81 C9 11 00 00         LEA EAX,[ECX + 0x11c9]
0056EFAD  BE 08 00 00 00            MOV ESI,0x8
LAB_0056efb2:
0056EFB2  8A 10                     MOV DL,byte ptr [EAX]
0056EFB4  80 FA FF                  CMP DL,0xff
0056EFB7  74 24                     JZ 0x0056efdd
0056EFB9  8A 58 FF                  MOV BL,byte ptr [EAX + -0x1]
0056EFBC  84 DB                     TEST BL,BL
0056EFBE  74 1D                     JZ 0x0056efdd
0056EFC0  8A 58 DE                  MOV BL,byte ptr [EAX + -0x22]
0056EFC3  84 DB                     TEST BL,BL
0056EFC5  75 16                     JNZ 0x0056efdd
0056EFC7  88 91 2D 11 00 00         MOV byte ptr [ECX + 0x112d],DL
0056EFCD  8A 50 FF                  MOV DL,byte ptr [EAX + -0x1]
0056EFD0  88 91 2E 11 00 00         MOV byte ptr [ECX + 0x112e],DL
0056EFD6  C6 81 2F 11 00 00 00      MOV byte ptr [ECX + 0x112f],0x0
LAB_0056efdd:
0056EFDD  83 C0 51                  ADD EAX,0x51
0056EFE0  4E                        DEC ESI
0056EFE1  75 CF                     JNZ 0x0056efb2
0056EFE3  E8 33 69 E9 FF            CALL 0x0040591b
0056EFE8  5F                        POP EDI
0056EFE9  5E                        POP ESI
0056EFEA  5B                        POP EBX
0056EFEB  8B E5                     MOV ESP,EBP
0056EFED  5D                        POP EBP
0056EFEE  C3                        RET
LAB_0056efef:
0056EFEF  81 E6 FF 00 00 00         AND ESI,0xff
0056EFF5  5F                        POP EDI
0056EFF6  8D 04 F6                  LEA EAX,[ESI + ESI*0x8]
0056EFF9  5E                        POP ESI
0056EFFA  5B                        POP EBX
0056EFFB  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0056EFFE  8A 84 10 C8 11 00 00      MOV AL,byte ptr [EAX + EDX*0x1 + 0x11c8]
0056F005  88 81 2E 11 00 00         MOV byte ptr [ECX + 0x112e],AL
0056F00B  8B E5                     MOV ESP,EBP
0056F00D  5D                        POP EBP
0056F00E  C3                        RET
