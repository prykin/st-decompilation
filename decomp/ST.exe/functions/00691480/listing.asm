FUN_00691480:
00691480  55                        PUSH EBP
00691481  8B EC                     MOV EBP,ESP
00691483  57                        PUSH EDI
00691484  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00691487  8A 47 18                  MOV AL,byte ptr [EDI + 0x18]
0069148A  84 C0                     TEST AL,AL
0069148C  74 79                     JZ 0x00691507
0069148E  3C 02                     CMP AL,0x2
00691490  56                        PUSH ESI
00691491  75 50                     JNZ 0x006914e3
00691493  8B 8F 85 00 00 00         MOV ECX,dword ptr [EDI + 0x85]
00691499  33 F6                     XOR ESI,ESI
0069149B  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0069149E  85 C0                     TEST EAX,EAX
006914A0  7E 41                     JLE 0x006914e3
006914A2  3B F0                     CMP ESI,EAX
LAB_006914a4:
006914A4  73 0D                     JNC 0x006914b3
006914A6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006914A9  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
006914AC  0F AF C6                  IMUL EAX,ESI
006914AF  03 C2                     ADD EAX,EDX
006914B1  EB 02                     JMP 0x006914b5
LAB_006914b3:
006914B3  33 C0                     XOR EAX,EAX
LAB_006914b5:
006914B5  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006914B8  85 C0                     TEST EAX,EAX
006914BA  74 08                     JZ 0x006914c4
006914BC  83 C0 20                  ADD EAX,0x20
006914BF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006914C2  EB 07                     JMP 0x006914cb
LAB_006914c4:
006914C4  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006914cb:
006914CB  8D 45 08                  LEA EAX,[EBP + 0x8]
006914CE  50                        PUSH EAX
006914CF  E8 F9 46 D7 FF            CALL 0x00405bcd
006914D4  8B 8F 85 00 00 00         MOV ECX,dword ptr [EDI + 0x85]
006914DA  83 C4 04                  ADD ESP,0x4
006914DD  46                        INC ESI
006914DE  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
006914E1  7C C1                     JL 0x006914a4
LAB_006914e3:
006914E3  8D B7 85 00 00 00         LEA ESI,[EDI + 0x85]
006914E9  BF 08 00 00 00            MOV EDI,0x8
LAB_006914ee:
006914EE  8B 06                     MOV EAX,dword ptr [ESI]
006914F0  85 C0                     TEST EAX,EAX
006914F2  74 0C                     JZ 0x00691500
006914F4  50                        PUSH EAX
006914F5  E8 16 CC 01 00            CALL 0x006ae110
006914FA  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_00691500:
00691500  83 C6 0C                  ADD ESI,0xc
00691503  4F                        DEC EDI
00691504  75 E8                     JNZ 0x006914ee
00691506  5E                        POP ESI
LAB_00691507:
00691507  5F                        POP EDI
00691508  5D                        POP EBP
00691509  C3                        RET
