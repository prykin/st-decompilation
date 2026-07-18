FUN_007540ac:
007540AC  56                        PUSH ESI
007540AD  57                        PUSH EDI
007540AE  57                        PUSH EDI
007540AF  81 C7 D0 00 00 00         ADD EDI,0xd0
007540B5  8B D7                     MOV EDX,EDI
007540B7  42                        INC EDX
007540B8  0F B7 5C 3D 00            MOVZX EBX,word ptr [EBP + EDI*0x1]
007540BD  81 E3 FF 0F 00 00         AND EBX,0xfff
007540C3  D1 E3                     SHL EBX,0x1
007540C5  81 C3 02 40 00 00         ADD EBX,0x4002
007540CB  53                        PUSH EBX
007540CC  B8 FC 00 00 00            MOV EAX,0xfc
LAB_007540d1:
007540D1  0F B7 9C 1D CE 21 00 00   MOVZX EBX,word ptr [EBP + EBX*0x1 + 0x21ce]
007540D9  81 FB 00 40 00 00         CMP EBX,0x4000
007540DF  74 2C                     JZ 0x0075410d
007540E1  8B F3                     MOV ESI,EBX
007540E3  D1 EE                     SHR ESI,0x1
007540E5  81 C6 D1 00 00 00         ADD ESI,0xd1
007540EB  8B FA                     MOV EDI,EDX
007540ED  B9 FC 00 00 00            MOV ECX,0xfc
007540F2  03 F5                     ADD ESI,EBP
007540F4  03 FD                     ADD EDI,EBP
007540F6  F3 A6                     CMPSB.REPE ES:EDI,ESI
007540F8  74 0B                     JZ 0x00754105
007540FA  3B C8                     CMP ECX,EAX
007540FC  73 D3                     JNC 0x007540d1
007540FE  89 5D 44                  MOV dword ptr [EBP + 0x44],EBX
00754101  8B C1                     MOV EAX,ECX
00754103  EB CC                     JMP 0x007540d1
LAB_00754105:
00754105  89 5D 44                  MOV dword ptr [EBP + 0x44],EBX
00754108  B8 FF FF FF FF            MOV EAX,0xffffffff
LAB_0075410d:
0075410D  5E                        POP ESI
0075410E  5F                        POP EDI
0075410F  D1 E7                     SHL EDI,0x1
00754111  B9 FD 00 00 00            MOV ECX,0xfd
00754116  2B C8                     SUB ECX,EAX
00754118  49                        DEC ECX
00754119  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
0075411C  8B C7                     MOV EAX,EDI
0075411E  2B 45 44                  SUB EAX,dword ptr [EBP + 0x44]
00754121  D1 E8                     SHR EAX,0x1
00754123  25 FF 1F 00 00            AND EAX,0x1fff
00754128  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
0075412B  F7 D0                     NOT EAX
0075412D  40                        INC EAX
0075412E  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
00754131  0F B7 9C 35 CE 21 00 00   MOVZX EBX,word ptr [EBP + ESI*0x1 + 0x21ce]
00754139  66 89 9C 3D CE 21 00 00   MOV word ptr [EBP + EDI*0x1 + 0x21ce],BX
00754141  66 89 BC 1D D0 81 00 00   MOV word ptr [EBP + EBX*0x1 + 0x81d0],DI
00754149  66 89 BC 35 CE 21 00 00   MOV word ptr [EBP + ESI*0x1 + 0x21ce],DI
00754151  66 89 B4 3D D0 81 00 00   MOV word ptr [EBP + EDI*0x1 + 0x81d0],SI
00754159  5F                        POP EDI
0075415A  5E                        POP ESI
0075415B  C3                        RET
