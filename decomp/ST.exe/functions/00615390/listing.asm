FUN_00615390:
00615390  8B 81 F7 01 00 00         MOV EAX,dword ptr [ECX + 0x1f7]
00615396  83 E8 00                  SUB EAX,0x0
00615399  74 0F                     JZ 0x006153aa
0061539B  48                        DEC EAX
0061539C  74 04                     JZ 0x006153a2
0061539E  48                        DEC EAX
0061539F  74 09                     JZ 0x006153aa
006153A1  C3                        RET
LAB_006153a2:
006153A2  C6 81 14 02 00 00 03      MOV byte ptr [ECX + 0x214],0x3
006153A9  C3                        RET
LAB_006153aa:
006153AA  0F BF 81 CF 02 00 00      MOVSX EAX,word ptr [ECX + 0x2cf]
006153B1  0F BF 91 ED 01 00 00      MOVSX EDX,word ptr [ECX + 0x1ed]
006153B8  56                        PUSH ESI
006153B9  2B C2                     SUB EAX,EDX
006153BB  0F BF 91 CD 02 00 00      MOVSX EDX,word ptr [ECX + 0x2cd]
006153C2  0F BF B1 EB 01 00 00      MOVSX ESI,word ptr [ECX + 0x1eb]
006153C9  57                        PUSH EDI
006153CA  2B D6                     SUB EDX,ESI
006153CC  0F BF B1 CB 02 00 00      MOVSX ESI,word ptr [ECX + 0x2cb]
006153D3  0F BF B9 E9 01 00 00      MOVSX EDI,word ptr [ECX + 0x1e9]
006153DA  2B F7                     SUB ESI,EDI
006153DC  8B FE                     MOV EDI,ESI
006153DE  0F AF FE                  IMUL EDI,ESI
006153E1  8B F2                     MOV ESI,EDX
006153E3  0F AF F2                  IMUL ESI,EDX
006153E6  8B D0                     MOV EDX,EAX
006153E8  03 FE                     ADD EDI,ESI
006153EA  0F AF D0                  IMUL EDX,EAX
006153ED  03 FA                     ADD EDI,EDX
006153EF  81 FF 06 3C 01 00         CMP EDI,0x13c06
006153F5  5F                        POP EDI
006153F6  5E                        POP ESI
006153F7  7D 08                     JGE 0x00615401
006153F9  C6 81 14 02 00 00 01      MOV byte ptr [ECX + 0x214],0x1
00615400  C3                        RET
LAB_00615401:
00615401  C6 81 14 02 00 00 02      MOV byte ptr [ECX + 0x214],0x2
00615408  C3                        RET
