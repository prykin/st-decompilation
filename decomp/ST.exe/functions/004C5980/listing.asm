FUN_004c5980:
004C5980  55                        PUSH EBP
004C5981  8B EC                     MOV EBP,ESP
004C5983  83 EC 18                  SUB ESP,0x18
004C5986  53                        PUSH EBX
004C5987  56                        PUSH ESI
004C5988  57                        PUSH EDI
004C5989  8B F9                     MOV EDI,ECX
004C598B  83 CB FF                  OR EBX,0xffffffff
004C598E  8B 87 35 02 00 00         MOV EAX,dword ptr [EDI + 0x235]
004C5994  8B 17                     MOV EDX,dword ptr [EDI]
004C5996  8B 34 85 30 1E 79 00      MOV ESI,dword ptr [EAX*0x4 + 0x791e30]
004C599D  4E                        DEC ESI
004C599E  F7 DE                     NEG ESI
004C59A0  1B F6                     SBB ESI,ESI
004C59A2  83 C6 02                  ADD ESI,0x2
004C59A5  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
004C59AB  85 C0                     TEST EAX,EAX
004C59AD  75 16                     JNZ 0x004c59c5
004C59AF  6A 04                     PUSH 0x4
004C59B1  8D 8F D5 01 00 00         LEA ECX,[EDI + 0x1d5]
004C59B7  E8 F3 E8 F3 FF            CALL 0x004042af
004C59BC  83 F8 11                  CMP EAX,0x11
004C59BF  0F 8D 79 01 00 00         JGE 0x004c5b3e
LAB_004c59c5:
004C59C5  8B 87 B0 05 00 00         MOV EAX,dword ptr [EDI + 0x5b0]
004C59CB  0F BF 55 08               MOVSX EDX,word ptr [EBP + 0x8]
004C59CF  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C59D2  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004C59D5  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
004C59D8  3B D1                     CMP EDX,ECX
004C59DA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004C59DD  0F 8C 5B 01 00 00         JL 0x004c5b3e
004C59E3  03 C6                     ADD EAX,ESI
004C59E5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C59E8  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004C59EB  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
004C59EE  3B D0                     CMP EDX,EAX
004C59F0  0F 8D 48 01 00 00         JGE 0x004c5b3e
004C59F6  8B 87 B4 05 00 00         MOV EAX,dword ptr [EDI + 0x5b4]
004C59FC  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
004C5A00  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C5A03  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004C5A06  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
004C5A09  3B D1                     CMP EDX,ECX
004C5A0B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004C5A0E  0F 8C 2A 01 00 00         JL 0x004c5b3e
004C5A14  03 C6                     ADD EAX,ESI
004C5A16  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C5A19  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004C5A1C  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
004C5A1F  3B D0                     CMP EDX,EAX
004C5A21  0F 8D 17 01 00 00         JGE 0x004c5b3e
004C5A27  8B 87 B8 05 00 00         MOV EAX,dword ptr [EDI + 0x5b8]
004C5A2D  0F BF 5D 10               MOVSX EBX,word ptr [EBP + 0x10]
004C5A31  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C5A34  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004C5A37  C1 E1 03                  SHL ECX,0x3
004C5A3A  3B D9                     CMP EBX,ECX
004C5A3C  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004C5A3F  0F 8C ED 00 00 00         JL 0x004c5b32
004C5A45  8D 44 80 05               LEA EAX,[EAX + EAX*0x4 + 0x5]
004C5A49  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004C5A4C  C1 E1 03                  SHL ECX,0x3
004C5A4F  3B D9                     CMP EBX,ECX
004C5A51  0F 8D DB 00 00 00         JGE 0x004c5b32
004C5A57  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004C5A5A  8B 8F FB 05 00 00         MOV ECX,dword ptr [EDI + 0x5fb]
004C5A60  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
004C5A67  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
004C5A6E  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004C5A71  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004C5A74  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
004C5A77  99                        CDQ
004C5A78  2B C2                     SUB EAX,EDX
004C5A7A  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
004C5A7E  D1 F8                     SAR EAX,0x1
004C5A80  2B F2                     SUB ESI,EDX
004C5A82  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004C5A85  03 F0                     ADD ESI,EAX
004C5A87  8B F8                     MOV EDI,EAX
004C5A89  03 F2                     ADD ESI,EDX
004C5A8B  0F BF 55 08               MOVSX EDX,word ptr [EBP + 0x8]
004C5A8F  2B FA                     SUB EDI,EDX
004C5A91  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004C5A94  03 FA                     ADD EDI,EDX
004C5A96  8B 11                     MOV EDX,dword ptr [ECX]
004C5A98  03 FA                     ADD EDI,EDX
004C5A9A  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
004C5A9D  2B D3                     SUB EDX,EBX
004C5A9F  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
004C5AA2  03 D3                     ADD EDX,EBX
004C5AA4  8B DF                     MOV EBX,EDI
004C5AA6  0F AF DF                  IMUL EBX,EDI
004C5AA9  0F AF D2                  IMUL EDX,EDX
004C5AAC  8B FE                     MOV EDI,ESI
004C5AAE  03 D3                     ADD EDX,EBX
004C5AB0  0F AF FE                  IMUL EDI,ESI
004C5AB3  03 D7                     ADD EDX,EDI
004C5AB5  8D 71 0C                  LEA ESI,[ECX + 0xc]
LAB_004c5ab8:
004C5AB8  8B 0E                     MOV ECX,dword ptr [ESI]
004C5ABA  85 C9                     TEST ECX,ECX
004C5ABC  75 0E                     JNZ 0x004c5acc
004C5ABE  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
004C5AC1  85 FF                     TEST EDI,EDI
004C5AC3  75 07                     JNZ 0x004c5acc
004C5AC5  8B 7E 08                  MOV EDI,dword ptr [ESI + 0x8]
004C5AC8  85 FF                     TEST EDI,EDI
004C5ACA  74 5A                     JZ 0x004c5b26
LAB_004c5acc:
004C5ACC  0F BF 7D 08               MOVSX EDI,word ptr [EBP + 0x8]
004C5AD0  2B CF                     SUB ECX,EDI
004C5AD2  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004C5AD5  03 C8                     ADD ECX,EAX
004C5AD7  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
004C5ADA  03 CF                     ADD ECX,EDI
004C5ADC  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
004C5ADF  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004C5AE2  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
004C5AE6  2B F9                     SUB EDI,ECX
004C5AE8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004C5AEB  03 F8                     ADD EDI,EAX
004C5AED  03 CF                     ADD ECX,EDI
004C5AEF  0F BF 7D 10               MOVSX EDI,word ptr [EBP + 0x10]
004C5AF3  0F AF C9                  IMUL ECX,ECX
004C5AF6  2B DF                     SUB EBX,EDI
004C5AF8  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004C5AFB  03 FB                     ADD EDI,EBX
004C5AFD  8B DF                     MOV EBX,EDI
004C5AFF  0F AF DF                  IMUL EBX,EDI
004C5B02  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
004C5B05  03 CB                     ADD ECX,EBX
004C5B07  8B DF                     MOV EBX,EDI
004C5B09  0F AF DF                  IMUL EBX,EDI
004C5B0C  03 CB                     ADD ECX,EBX
004C5B0E  3B CA                     CMP ECX,EDX
004C5B10  7D 08                     JGE 0x004c5b1a
004C5B12  8B D1                     MOV EDX,ECX
004C5B14  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C5B17  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_004c5b1a:
004C5B1A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004C5B1D  47                        INC EDI
004C5B1E  83 C6 0C                  ADD ESI,0xc
004C5B21  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004C5B24  EB 92                     JMP 0x004c5ab8
LAB_004c5b26:
004C5B26  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004C5B29  5F                        POP EDI
004C5B2A  5E                        POP ESI
004C5B2B  5B                        POP EBX
004C5B2C  8B E5                     MOV ESP,EBP
004C5B2E  5D                        POP EBP
004C5B2F  C2 18 00                  RET 0x18
LAB_004c5b32:
004C5B32  5F                        POP EDI
004C5B33  5E                        POP ESI
004C5B34  83 C8 FF                  OR EAX,0xffffffff
004C5B37  5B                        POP EBX
004C5B38  8B E5                     MOV ESP,EBP
004C5B3A  5D                        POP EBP
004C5B3B  C2 18 00                  RET 0x18
LAB_004c5b3e:
004C5B3E  5F                        POP EDI
004C5B3F  8B C3                     MOV EAX,EBX
004C5B41  5E                        POP ESI
004C5B42  5B                        POP EBX
004C5B43  8B E5                     MOV ESP,EBP
004C5B45  5D                        POP EBP
004C5B46  C2 18 00                  RET 0x18
