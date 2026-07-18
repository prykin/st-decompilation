FUN_005ee080:
005EE080  55                        PUSH EBP
005EE081  8B EC                     MOV EBP,ESP
005EE083  83 EC 30                  SUB ESP,0x30
005EE086  8B 91 36 02 00 00         MOV EDX,dword ptr [ECX + 0x236]
005EE08C  53                        PUSH EBX
005EE08D  83 C8 FF                  OR EAX,0xffffffff
005EE090  56                        PUSH ESI
005EE091  85 D2                     TEST EDX,EDX
005EE093  57                        PUSH EDI
005EE094  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
005EE097  0F 85 96 02 00 00         JNZ 0x005ee333
005EE09D  33 D2                     XOR EDX,EDX
005EE09F  8A 91 51 02 00 00         MOV DL,byte ptr [ECX + 0x251]
005EE0A5  83 C2 0C                  ADD EDX,0xc
005EE0A8  83 FA 18                  CMP EDX,0x18
005EE0AB  7E 03                     JLE 0x005ee0b0
005EE0AD  83 EA 18                  SUB EDX,0x18
LAB_005ee0b0:
005EE0B0  0F BF 7D 08               MOVSX EDI,word ptr [EBP + 0x8]
005EE0B4  8B 99 BE 02 00 00         MOV EBX,dword ptr [ECX + 0x2be]
005EE0BA  A1 F4 DE 7C 00            MOV EAX,[0x007cdef4]
005EE0BF  8B F7                     MOV ESI,EDI
005EE0C1  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
005EE0C4  2B F3                     SUB ESI,EBX
005EE0C6  0F BF 5D 0C               MOVSX EBX,word ptr [EBP + 0xc]
005EE0CA  2B F0                     SUB ESI,EAX
005EE0CC  8B 81 C2 02 00 00         MOV EAX,dword ptr [ECX + 0x2c2]
005EE0D2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005EE0D5  2B D8                     SUB EBX,EAX
005EE0D7  2B 1D F8 DE 7C 00         SUB EBX,dword ptr [0x007cdef8]
005EE0DD  0F BF 04 95 94 DE 7C 00   MOVSX EAX,word ptr [EDX*0x4 + 0x7cde94]
005EE0E5  0F BF 14 95 96 DE 7C 00   MOVSX EDX,word ptr [EDX*0x4 + 0x7cde96]
005EE0ED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005EE0F0  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
005EE0F3  0F AF D3                  IMUL EDX,EBX
005EE0F6  0F AF C6                  IMUL EAX,ESI
005EE0F9  03 D0                     ADD EDX,EAX
005EE0FB  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005EE100  F7 EA                     IMUL EDX
005EE102  C1 FA 0C                  SAR EDX,0xc
005EE105  8B C2                     MOV EAX,EDX
005EE107  C1 E8 1F                  SHR EAX,0x1f
005EE10A  03 D0                     ADD EDX,EAX
005EE10C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EE10F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005EE112  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005EE115  0F AF C6                  IMUL EAX,ESI
005EE118  0F AF D3                  IMUL EDX,EBX
005EE11B  2B D0                     SUB EDX,EAX
005EE11D  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005EE122  F7 EA                     IMUL EDX
005EE124  8B 1D FC DE 7C 00         MOV EBX,dword ptr [0x007cdefc]
005EE12A  8B B1 C6 02 00 00         MOV ESI,dword ptr [ECX + 0x2c6]
005EE130  C1 FA 0C                  SAR EDX,0xc
005EE133  8B C2                     MOV EAX,EDX
005EE135  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005EE138  C1 E8 1F                  SHR EAX,0x1f
005EE13B  03 D0                     ADD EDX,EAX
005EE13D  8B C3                     MOV EAX,EBX
005EE13F  2B C6                     SUB EAX,ESI
005EE141  0F BF 75 10               MOVSX ESI,word ptr [EBP + 0x10]
005EE145  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005EE148  03 C6                     ADD EAX,ESI
005EE14A  85 C9                     TEST ECX,ECX
005EE14C  0F 8C DE 01 00 00         JL 0x005ee330
005EE152  8B 0D F4 DE 7C 00         MOV ECX,dword ptr [0x007cdef4]
005EE158  03 C9                     ADD ECX,ECX
005EE15A  39 4D F8                  CMP dword ptr [EBP + -0x8],ECX
005EE15D  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
005EE160  0F 8F CA 01 00 00         JG 0x005ee330
005EE166  85 D2                     TEST EDX,EDX
005EE168  0F 8C C2 01 00 00         JL 0x005ee330
005EE16E  8B 0D F8 DE 7C 00         MOV ECX,dword ptr [0x007cdef8]
005EE174  03 C9                     ADD ECX,ECX
005EE176  3B D1                     CMP EDX,ECX
005EE178  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
005EE17B  0F 8F AF 01 00 00         JG 0x005ee330
005EE181  85 C0                     TEST EAX,EAX
005EE183  0F 8C A7 01 00 00         JL 0x005ee330
005EE189  8D 0C 1B                  LEA ECX,[EBX + EBX*0x1]
005EE18C  3B C1                     CMP EAX,ECX
005EE18E  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
005EE191  0F 8F 99 01 00 00         JG 0x005ee330
005EE197  0F BF 4D 14               MOVSX ECX,word ptr [EBP + 0x14]
005EE19B  8B C7                     MOV EAX,EDI
005EE19D  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
005EE1A0  2B C1                     SUB EAX,ECX
005EE1A2  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005EE1A5  99                        CDQ
005EE1A6  2B C2                     SUB EAX,EDX
005EE1A8  C7 45 F0 03 00 00 00      MOV dword ptr [EBP + -0x10],0x3
005EE1AF  8B D8                     MOV EBX,EAX
005EE1B1  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
005EE1B5  D1 FB                     SAR EBX,0x1
005EE1B7  03 D9                     ADD EBX,ECX
005EE1B9  0F BF 4D 18               MOVSX ECX,word ptr [EBP + 0x18]
005EE1BD  2B C1                     SUB EAX,ECX
005EE1BF  99                        CDQ
005EE1C0  2B C2                     SUB EAX,EDX
005EE1C2  0F BF 55 1C               MOVSX EDX,word ptr [EBP + 0x1c]
005EE1C6  8B C8                     MOV ECX,EAX
005EE1C8  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
005EE1CC  D1 F9                     SAR ECX,0x1
005EE1CE  03 C8                     ADD ECX,EAX
005EE1D0  8B C6                     MOV EAX,ESI
005EE1D2  2B C2                     SUB EAX,EDX
005EE1D4  99                        CDQ
005EE1D5  2B C2                     SUB EAX,EDX
005EE1D7  0F BF 55 1C               MOVSX EDX,word ptr [EBP + 0x1c]
005EE1DB  D1 F8                     SAR EAX,0x1
005EE1DD  03 C2                     ADD EAX,EDX
005EE1DF  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
005EE1E2  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
005EE1E6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005EE1E9  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
005EE1ED  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
005EE1F0  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
005EE1F3  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
005EE1F7  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_005ee1fa:
005EE1FA  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
005EE1FD  8B 15 F4 DE 7C 00         MOV EDX,dword ptr [0x007cdef4]
005EE203  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005EE206  8B F3                     MOV ESI,EBX
005EE208  2B F7                     SUB ESI,EDI
005EE20A  8B F9                     MOV EDI,ECX
005EE20C  2B F2                     SUB ESI,EDX
005EE20E  8B 15 F8 DE 7C 00         MOV EDX,dword ptr [0x007cdef8]
005EE214  2B F8                     SUB EDI,EAX
005EE216  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EE219  2B FA                     SUB EDI,EDX
005EE21B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005EE21E  0F AF D7                  IMUL EDX,EDI
005EE221  0F AF C6                  IMUL EAX,ESI
005EE224  03 D0                     ADD EDX,EAX
005EE226  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005EE22B  F7 EA                     IMUL EDX
005EE22D  C1 FA 0C                  SAR EDX,0xc
005EE230  8B C2                     MOV EAX,EDX
005EE232  C1 E8 1F                  SHR EAX,0x1f
005EE235  03 D0                     ADD EDX,EAX
005EE237  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EE23A  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005EE23D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005EE240  0F AF C6                  IMUL EAX,ESI
005EE243  0F AF D7                  IMUL EDX,EDI
005EE246  2B D0                     SUB EDX,EAX
005EE248  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005EE24D  F7 EA                     IMUL EDX
005EE24F  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
005EE252  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
005EE255  C1 FA 0C                  SAR EDX,0xc
005EE258  8B C2                     MOV EAX,EDX
005EE25A  C1 E8 1F                  SHR EAX,0x1f
005EE25D  03 D0                     ADD EDX,EAX
005EE25F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005EE262  03 F0                     ADD ESI,EAX
005EE264  85 FF                     TEST EDI,EDI
005EE266  7C 17                     JL 0x005ee27f
005EE268  3B 7D DC                  CMP EDI,dword ptr [EBP + -0x24]
005EE26B  7F 12                     JG 0x005ee27f
005EE26D  85 D2                     TEST EDX,EDX
005EE26F  7C 0E                     JL 0x005ee27f
005EE271  3B 55 D8                  CMP EDX,dword ptr [EBP + -0x28]
005EE274  7F 09                     JG 0x005ee27f
005EE276  85 F6                     TEST ESI,ESI
005EE278  7C 05                     JL 0x005ee27f
005EE27A  3B 75 D4                  CMP ESI,dword ptr [EBP + -0x2c]
005EE27D  7E 0F                     JLE 0x005ee28e
LAB_005ee27f:
005EE27F  8B F3                     MOV ESI,EBX
005EE281  8B F9                     MOV EDI,ECX
005EE283  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
005EE286  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
005EE289  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
005EE28C  EB 0F                     JMP 0x005ee29d
LAB_005ee28e:
005EE28E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005EE291  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
005EE294  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
005EE297  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005EE29A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_005ee29d:
005EE29D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005EE2A0  2B C6                     SUB EAX,ESI
005EE2A2  99                        CDQ
005EE2A3  2B C2                     SUB EAX,EDX
005EE2A5  8B D8                     MOV EBX,EAX
005EE2A7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005EE2AA  2B C7                     SUB EAX,EDI
005EE2AC  99                        CDQ
005EE2AD  D1 FB                     SAR EBX,0x1
005EE2AF  2B C2                     SUB EAX,EDX
005EE2B1  03 DE                     ADD EBX,ESI
005EE2B3  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005EE2B6  8B C8                     MOV ECX,EAX
005EE2B8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005EE2BB  2B C6                     SUB EAX,ESI
005EE2BD  99                        CDQ
005EE2BE  2B C2                     SUB EAX,EDX
005EE2C0  D1 F8                     SAR EAX,0x1
005EE2C2  03 C6                     ADD EAX,ESI
005EE2C4  D1 F9                     SAR ECX,0x1
005EE2C6  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
005EE2C9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005EE2CC  03 CF                     ADD ECX,EDI
005EE2CE  48                        DEC EAX
005EE2CF  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005EE2D2  0F 85 22 FF FF FF         JNZ 0x005ee1fa
005EE2D8  33 C0                     XOR EAX,EAX
005EE2DA  BA FF 00 00 00            MOV EDX,0xff
LAB_005ee2df:
005EE2DF  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
005EE2E2  38 94 06 08 03 00 00      CMP byte ptr [ESI + EAX*0x1 + 0x308],DL
005EE2E9  74 08                     JZ 0x005ee2f3
005EE2EB  40                        INC EAX
005EE2EC  83 F8 05                  CMP EAX,0x5
005EE2EF  7C EE                     JL 0x005ee2df
005EE2F1  EB 07                     JMP 0x005ee2fa
LAB_005ee2f3:
005EE2F3  3A C2                     CMP AL,DL
005EE2F5  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
005EE2F8  75 04                     JNZ 0x005ee2fe
LAB_005ee2fa:
005EE2FA  C6 45 0C 04               MOV byte ptr [EBP + 0xc],0x4
LAB_005ee2fe:
005EE2FE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005EE301  5F                        POP EDI
005EE302  23 C2                     AND EAX,EDX
005EE304  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005EE307  8D 14 56                  LEA EDX,[ESI + EDX*0x2]
005EE30A  66 89 9A EA 02 00 00      MOV word ptr [EDX + 0x2ea],BX
005EE311  66 89 8A EC 02 00 00      MOV word ptr [EDX + 0x2ec],CX
005EE318  66 8B 55 1C               MOV DX,word ptr [EBP + 0x1c]
005EE31C  8D 8C 40 77 01 00 00      LEA ECX,[EAX + EAX*0x2 + 0x177]
005EE323  40                        INC EAX
005EE324  66 89 14 4E               MOV word ptr [ESI + ECX*0x2],DX
005EE328  5E                        POP ESI
005EE329  5B                        POP EBX
005EE32A  8B E5                     MOV ESP,EBP
005EE32C  5D                        POP EBP
005EE32D  C2 18 00                  RET 0x18
LAB_005ee330:
005EE330  83 C8 FF                  OR EAX,0xffffffff
LAB_005ee333:
005EE333  5F                        POP EDI
005EE334  5E                        POP ESI
005EE335  5B                        POP EBX
005EE336  8B E5                     MOV ESP,EBP
005EE338  5D                        POP EBP
005EE339  C2 18 00                  RET 0x18
