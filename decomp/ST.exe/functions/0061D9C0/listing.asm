STLightC::sub_0061D9C0:
0061D9C0  55                        PUSH EBP
0061D9C1  8B EC                     MOV EBP,ESP
0061D9C3  83 EC 0C                  SUB ESP,0xc
0061D9C6  53                        PUSH EBX
0061D9C7  8B D9                     MOV EBX,ECX
0061D9C9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0061D9CC  33 C0                     XOR EAX,EAX
0061D9CE  56                        PUSH ESI
0061D9CF  3B C8                     CMP ECX,EAX
0061D9D1  57                        PUSH EDI
0061D9D2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0061D9D5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061D9D8  75 30                     JNZ 0x0061da0a
0061D9DA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0061D9DD  8D 93 93 00 00 00         LEA EDX,[EBX + 0x93]
0061D9E3  8B C8                     MOV ECX,EAX
0061D9E5  83 C0 10                  ADD EAX,0x10
0061D9E8  C7 45 10 10 00 00 00      MOV dword ptr [EBP + 0x10],0x10
0061D9EF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0061D9F2  8B 31                     MOV ESI,dword ptr [ECX]
0061D9F4  89 32                     MOV dword ptr [EDX],ESI
0061D9F6  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
0061D9F9  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
0061D9FC  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0061D9FF  89 72 08                  MOV dword ptr [EDX + 0x8],ESI
0061DA02  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0061DA05  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0061DA08  EB 09                     JMP 0x0061da13
LAB_0061da0a:
0061DA0A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0061DA0D  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0061DA10  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0061da13:
0061DA13  8B B3 93 00 00 00         MOV ESI,dword ptr [EBX + 0x93]
0061DA19  C1 E6 02                  SHL ESI,0x2
0061DA1C  56                        PUSH ESI
0061DA1D  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0061DA20  E8 4B D2 08 00            CALL 0x006aac70
0061DA25  8B CE                     MOV ECX,ESI
0061DA27  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0061DA2A  89 83 9B 00 00 00         MOV dword ptr [EBX + 0x9b],EAX
0061DA30  8B F8                     MOV EDI,EAX
0061DA32  8B C1                     MOV EAX,ECX
0061DA34  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0061DA37  C1 E9 02                  SHR ECX,0x2
0061DA3A  F3 A5                     MOVSD.REP ES:EDI,ESI
0061DA3C  8B C8                     MOV ECX,EAX
0061DA3E  03 D0                     ADD EDX,EAX
0061DA40  83 E1 03                  AND ECX,0x3
0061DA43  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0061DA46  F3 A4                     MOVSB.REP ES:EDI,ESI
0061DA48  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0061DA4B  03 F0                     ADD ESI,EAX
0061DA4D  8B 83 93 00 00 00         MOV EAX,dword ptr [EBX + 0x93]
0061DA53  85 C0                     TEST EAX,EAX
0061DA55  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0061DA58  7E 25                     JLE 0x0061da7f
0061DA5A  8B 8B 9B 00 00 00         MOV ECX,dword ptr [EBX + 0x9b]
0061DA60  8B D0                     MOV EDX,EAX
LAB_0061da62:
0061DA62  8B 01                     MOV EAX,dword ptr [ECX]
0061DA64  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0061DA67  83 C1 04                  ADD ECX,0x4
0061DA6A  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0061DA6D  8D 74 B7 08               LEA ESI,[EDI + ESI*0x4 + 0x8]
0061DA71  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0061DA74  03 F8                     ADD EDI,EAX
0061DA76  4A                        DEC EDX
0061DA77  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0061DA7A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0061DA7D  75 E3                     JNZ 0x0061da62
LAB_0061da7f:
0061DA7F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0061DA82  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061DA85  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0061DA88  50                        PUSH EAX
0061DA89  89 11                     MOV dword ptr [ECX],EDX
0061DA8B  E8 E0 D1 08 00            CALL 0x006aac70
0061DA90  8B 8B 93 00 00 00         MOV ECX,dword ptr [EBX + 0x93]
0061DA96  89 83 9F 00 00 00         MOV dword ptr [EBX + 0x9f],EAX
0061DA9C  8D 14 88                  LEA EDX,[EAX + ECX*0x4]
0061DA9F  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0061DAA2  33 D2                     XOR EDX,EDX
0061DAA4  85 C9                     TEST ECX,ECX
0061DAA6  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061DAA9  7E 60                     JLE 0x0061db0b
LAB_0061daab:
0061DAAB  8B 83 9F 00 00 00         MOV EAX,dword ptr [EBX + 0x9f]
0061DAB1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0061DAB4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0061DAB7  89 0C 90                  MOV dword ptr [EAX + EDX*0x4],ECX
0061DABA  8B 83 9B 00 00 00         MOV EAX,dword ptr [EBX + 0x9b]
0061DAC0  8B BB 9F 00 00 00         MOV EDI,dword ptr [EBX + 0x9f]
0061DAC6  8B 04 90                  MOV EAX,dword ptr [EAX + EDX*0x4]
0061DAC9  8B 3C 97                  MOV EDI,dword ptr [EDI + EDX*0x4]
0061DACC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061DACF  C1 E0 02                  SHL EAX,0x2
0061DAD2  8B C8                     MOV ECX,EAX
0061DAD4  8B D1                     MOV EDX,ECX
0061DAD6  C1 E9 02                  SHR ECX,0x2
0061DAD9  F3 A5                     MOVSD.REP ES:EDI,ESI
0061DADB  8B CA                     MOV ECX,EDX
0061DADD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0061DAE0  83 E1 03                  AND ECX,0x3
0061DAE3  03 D0                     ADD EDX,EAX
0061DAE5  F3 A4                     MOVSB.REP ES:EDI,ESI
0061DAE7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0061DAEA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0061DAED  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0061DAF0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0061DAF3  03 F8                     ADD EDI,EAX
0061DAF5  03 F0                     ADD ESI,EAX
0061DAF7  8B 83 93 00 00 00         MOV EAX,dword ptr [EBX + 0x93]
0061DAFD  42                        INC EDX
0061DAFE  3B D0                     CMP EDX,EAX
0061DB00  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0061DB03  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
0061DB06  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061DB09  7C A0                     JL 0x0061daab
LAB_0061db0b:
0061DB0B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0061DB0E  5F                        POP EDI
0061DB0F  5E                        POP ESI
0061DB10  5B                        POP EBX
0061DB11  8B E5                     MOV ESP,EBP
0061DB13  5D                        POP EBP
0061DB14  C2 0C 00                  RET 0xc
