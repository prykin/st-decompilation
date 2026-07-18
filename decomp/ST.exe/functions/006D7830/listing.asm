FUN_006d7830:
006D7830  55                        PUSH EBP
006D7831  8B EC                     MOV EBP,ESP
006D7833  83 EC 14                  SUB ESP,0x14
006D7836  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D7839  53                        PUSH EBX
006D783A  56                        PUSH ESI
006D783B  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006D783E  8B C1                     MOV EAX,ECX
006D7840  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D7843  2B C6                     SUB EAX,ESI
006D7845  57                        PUSH EDI
006D7846  48                        DEC EAX
006D7847  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D784A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D784D  8D 04 36                  LEA EAX,[ESI + ESI*0x1]
006D7850  2B C8                     SUB ECX,EAX
006D7852  8B C2                     MOV EAX,EDX
006D7854  25 FF 00 00 00            AND EAX,0xff
006D7859  03 F7                     ADD ESI,EDI
006D785B  8A D8                     MOV BL,AL
006D785D  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006D7860  8A FB                     MOV BH,BL
006D7862  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006D7865  8B C3                     MOV EAX,EBX
006D7867  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006D786A  8B FE                     MOV EDI,ESI
006D786C  8B F1                     MOV ESI,ECX
006D786E  C1 E0 10                  SHL EAX,0x10
006D7871  66 8B C3                  MOV AX,BX
006D7874  C1 E9 02                  SHR ECX,0x2
006D7877  F3 AB                     STOSD.REP ES:EDI
006D7879  8B CE                     MOV ECX,ESI
006D787B  83 E1 03                  AND ECX,0x3
006D787E  F3 AA                     STOSB.REP ES:EDI
006D7880  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D7883  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D7886  48                        DEC EAX
006D7887  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
006D788B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006D788E  03 C1                     ADD EAX,ECX
006D7890  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D7893  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
006D7896  8A 45 1C                  MOV AL,byte ptr [EBP + 0x1c]
006D7899  8A D8                     MOV BL,AL
006D789B  8B CE                     MOV ECX,ESI
006D789D  8A FB                     MOV BH,BL
006D789F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006D78A2  8B C3                     MOV EAX,EBX
006D78A4  C1 E0 10                  SHL EAX,0x10
006D78A7  66 8B C3                  MOV AX,BX
006D78AA  C1 E9 02                  SHR ECX,0x2
006D78AD  F3 AB                     STOSD.REP ES:EDI
006D78AF  8B CE                     MOV ECX,ESI
006D78B1  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D78B4  83 E1 03                  AND ECX,0x3
006D78B7  F3 AA                     STOSB.REP ES:EDI
006D78B9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006D78BC  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D78BF  0F AF F8                  IMUL EDI,EAX
006D78C2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D78C5  8D 1C 0F                  LEA EBX,[EDI + ECX*0x1]
006D78C8  8D 74 33 FF               LEA ESI,[EBX + ESI*0x1 + -0x1]
006D78CC  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006D78CF  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006D78D2  2B F0                     SUB ESI,EAX
006D78D4  3B C6                     CMP EAX,ESI
006D78D6  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006D78D9  7D 2A                     JGE 0x006d7905
006D78DB  2B F0                     SUB ESI,EAX
006D78DD  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
006D78E0  EB 03                     JMP 0x006d78e5
LAB_006d78e2:
006D78E2  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
LAB_006d78e5:
006D78E5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D78E8  88 13                     MOV byte ptr [EBX],DL
006D78EA  88 16                     MOV byte ptr [ESI],DL
006D78EC  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006D78EF  03 DE                     ADD EBX,ESI
006D78F1  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006D78F4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D78F7  03 DE                     ADD EBX,ESI
006D78F9  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006D78FC  4E                        DEC ESI
006D78FD  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006D7900  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
006D7903  75 DD                     JNZ 0x006d78e2
LAB_006d7905:
006D7905  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006D7908  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006D790B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006D790E  8D 1C 0E                  LEA EBX,[ESI + ECX*0x1]
006D7911  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006D7914  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006D7917  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006D791A  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006D791D  03 F3                     ADD ESI,EBX
006D791F  8D 1C 00                  LEA EBX,[EAX + EAX*0x1]
006D7922  03 F1                     ADD ESI,ECX
006D7924  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006D7927  8D 34 0F                  LEA ESI,[EDI + ECX*0x1]
006D792A  03 F0                     ADD ESI,EAX
006D792C  BF 03 00 00 00            MOV EDI,0x3
006D7931  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
006D7934  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006D7937  4E                        DEC ESI
006D7938  2B FB                     SUB EDI,EBX
006D793A  0F AF 75 0C               IMUL ESI,dword ptr [EBP + 0xc]
006D793E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006D7941  03 F1                     ADD ESI,ECX
006D7943  03 F0                     ADD ESI,EAX
006D7945  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006D7948  8B FE                     MOV EDI,ESI
006D794A  33 C9                     XOR ECX,ECX
006D794C  2B FB                     SUB EDI,EBX
006D794E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006D7951  03 FB                     ADD EDI,EBX
006D7953  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006D7956  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006D7959  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006D795C  2B FB                     SUB EDI,EBX
006D795E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006D7961  03 FB                     ADD EDI,EBX
006D7963  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
006D7966  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_006d7969:
006D7969  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006D796C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006D796F  2B D9                     SUB EBX,ECX
006D7971  88 13                     MOV byte ptr [EBX],DL
006D7973  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D7976  88 14 19                  MOV byte ptr [ECX + EBX*0x1],DL
006D7979  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006D797C  2B D9                     SUB EBX,ECX
006D797E  88 13                     MOV byte ptr [EBX],DL
006D7980  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006D7983  88 14 19                  MOV byte ptr [ECX + EBX*0x1],DL
006D7986  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006D7989  2B D8                     SUB EBX,EAX
006D798B  88 13                     MOV byte ptr [EBX],DL
006D798D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006D7990  88 14 03                  MOV byte ptr [EBX + EAX*0x1],DL
006D7993  8B DE                     MOV EBX,ESI
006D7995  2B D8                     SUB EBX,EAX
006D7997  88 13                     MOV byte ptr [EBX],DL
006D7999  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006D799C  88 14 03                  MOV byte ptr [EBX + EAX*0x1],DL
006D799F  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006D79A2  85 DB                     TEST EBX,EBX
006D79A4  7D 09                     JGE 0x006d79af
006D79A6  8D 5C 8B 06               LEA EBX,[EBX + ECX*0x4 + 0x6]
006D79AA  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006D79AD  EB 2F                     JMP 0x006d79de
LAB_006d79af:
006D79AF  8B F9                     MOV EDI,ECX
006D79B1  2B F8                     SUB EDI,EAX
006D79B3  48                        DEC EAX
006D79B4  8D 7C BB 0A               LEA EDI,[EBX + EDI*0x4 + 0xa]
006D79B8  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006D79BB  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006D79BE  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006D79C1  03 DF                     ADD EBX,EDI
006D79C3  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006D79C6  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D79C9  03 DF                     ADD EBX,EDI
006D79CB  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006D79CE  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006D79D1  2B DF                     SUB EBX,EDI
006D79D3  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006D79D6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006D79D9  2B DF                     SUB EBX,EDI
006D79DB  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006d79de:
006D79DE  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006D79E1  41                        INC ECX
006D79E2  2B DF                     SUB EBX,EDI
006D79E4  03 F7                     ADD ESI,EDI
006D79E6  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
006D79E9  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006D79EC  2B DF                     SUB EBX,EDI
006D79EE  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
006D79F1  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006D79F4  03 DF                     ADD EBX,EDI
006D79F6  3B C8                     CMP ECX,EAX
006D79F8  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006D79FB  0F 8C 68 FF FF FF         JL 0x006d7969
006D7A01  75 1F                     JNZ 0x006d7a22
006D7A03  3B 45 EC                  CMP EAX,dword ptr [EBP + -0x14]
006D7A06  74 1A                     JZ 0x006d7a22
006D7A08  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D7A0B  2B C1                     SUB EAX,ECX
006D7A0D  88 10                     MOV byte ptr [EAX],DL
006D7A0F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D7A12  88 14 01                  MOV byte ptr [ECX + EAX*0x1],DL
006D7A15  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D7A18  2B C1                     SUB EAX,ECX
006D7A1A  88 10                     MOV byte ptr [EAX],DL
006D7A1C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D7A1F  88 14 01                  MOV byte ptr [ECX + EAX*0x1],DL
LAB_006d7a22:
006D7A22  5F                        POP EDI
006D7A23  5E                        POP ESI
006D7A24  5B                        POP EBX
006D7A25  8B E5                     MOV ESP,EBP
006D7A27  5D                        POP EBP
006D7A28  C2 18 00                  RET 0x18
