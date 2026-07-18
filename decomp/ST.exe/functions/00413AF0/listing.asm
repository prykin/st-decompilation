FUN_00413af0:
00413AF0  55                        PUSH EBP
00413AF1  8B EC                     MOV EBP,ESP
00413AF3  6A FF                     PUSH -0x1
00413AF5  68 90 00 79 00            PUSH 0x790090
00413AFA  68 64 D9 72 00            PUSH 0x72d964
00413AFF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00413B05  50                        PUSH EAX
00413B06  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00413B0D  83 EC 5C                  SUB ESP,0x5c
00413B10  53                        PUSH EBX
00413B11  56                        PUSH ESI
00413B12  57                        PUSH EDI
00413B13  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00413B16  33 F6                     XOR ESI,ESI
00413B18  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
00413B1B  89 35 04 4D 7F 00         MOV dword ptr [0x007f4d04],ESI
00413B21  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
00413B26  A3 F0 4C 7F 00            MOV [0x007f4cf0],EAX
00413B2B  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
00413B32  89 0D 2C 4D 7F 00         MOV dword ptr [0x007f4d2c],ECX
00413B38  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
00413B3F  89 15 30 4D 7F 00         MOV dword ptr [0x007f4d30],EDX
00413B45  0F BF 05 7C B2 7F 00      MOVSX EAX,word ptr [0x007fb27c]
00413B4C  A3 34 4D 7F 00            MOV [0x007f4d34],EAX
00413B51  39 35 50 4D 7F 00         CMP dword ptr [0x007f4d50],ESI
00413B57  74 08                     JZ 0x00413b61
00413B59  39 35 54 4D 7F 00         CMP dword ptr [0x007f4d54],ESI
00413B5F  75 0A                     JNZ 0x00413b6b
LAB_00413b61:
00413B61  68 A0 0F 00 00            PUSH 0xfa0
00413B66  E8 15 0E 00 00            CALL 0x00414980
LAB_00413b6b:
00413B6B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00413B6E  33 C0                     XOR EAX,EAX
00413B70  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00413B73  66 8B 43 27               MOV AX,word ptr [EBX + 0x27]
00413B77  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00413B7A  C1 E0 02                  SHL EAX,0x2
00413B7D  83 C0 03                  ADD EAX,0x3
00413B80  24 FC                     AND AL,0xfc
00413B82  E8 B9 9E 31 00            CALL 0x0072da40
00413B87  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00413B8A  8B C4                     MOV EAX,ESP
00413B8C  A3 3C 4D 7F 00            MOV [0x007f4d3c],EAX
00413B91  A1 34 4D 7F 00            MOV EAX,[0x007f4d34]
00413B96  0F AF 05 30 4D 7F 00      IMUL EAX,dword ptr [0x007f4d30]
00413B9D  0F AF 05 2C 4D 7F 00      IMUL EAX,dword ptr [0x007f4d2c]
00413BA4  83 C0 07                  ADD EAX,0x7
00413BA7  99                        CDQ
00413BA8  83 E2 07                  AND EDX,0x7
00413BAB  03 C2                     ADD EAX,EDX
00413BAD  8B F8                     MOV EDI,EAX
00413BAF  C1 FF 03                  SAR EDI,0x3
00413BB2  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
00413BB5  8B C7                     MOV EAX,EDI
00413BB7  83 C0 03                  ADD EAX,0x3
00413BBA  24 FC                     AND AL,0xfc
00413BBC  E8 7F 9E 31 00            CALL 0x0072da40
00413BC1  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00413BC4  8B C4                     MOV EAX,ESP
00413BC6  8B D0                     MOV EDX,EAX
00413BC8  89 15 FC 4C 7F 00         MOV dword ptr [0x007f4cfc],EDX
00413BCE  8B CF                     MOV ECX,EDI
00413BD0  33 C0                     XOR EAX,EAX
00413BD2  8B FA                     MOV EDI,EDX
00413BD4  8B D1                     MOV EDX,ECX
00413BD6  C1 E9 02                  SHR ECX,0x2
00413BD9  F3 AB                     STOSD.REP ES:EDI
00413BDB  8B CA                     MOV ECX,EDX
00413BDD  83 E1 03                  AND ECX,0x3
00413BE0  F3 AA                     STOSB.REP ES:EDI
00413BE2  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00413BE9  EB 2C                     JMP 0x00413c17
LAB_00413c17:
00413C17  A1 30 4D 7F 00            MOV EAX,[0x007f4d30]
00413C1C  0F AF 05 2C 4D 7F 00      IMUL EAX,dword ptr [0x007f4d2c]
00413C23  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00413C26  89 35 24 4D 7F 00         MOV dword ptr [0x007f4d24],ESI
00413C2C  33 C9                     XOR ECX,ECX
00413C2E  66 8B 4B 27               MOV CX,word ptr [EBX + 0x27]
00413C32  3B 0D 4C 4D 7F 00         CMP ECX,dword ptr [0x007f4d4c]
00413C38  0F 84 3C 01 00 00         JZ 0x00413d7a
00413C3E  8B 53 29                  MOV EDX,dword ptr [EBX + 0x29]
00413C41  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00413C44  A3 4C 4D 7F 00            MOV [0x007f4d4c],EAX
00413C49  33 FF                     XOR EDI,EDI
00413C4B  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00413C4E  3B C6                     CMP EAX,ESI
00413C50  0F 8E 24 01 00 00         JLE 0x00413d7a
LAB_00413c56:
00413C56  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
00413C59  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
00413C5C  73 0B                     JNC 0x00413c69
00413C5E  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00413C61  0F AF C7                  IMUL EAX,EDI
00413C64  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00413C67  EB 02                     JMP 0x00413c6b
LAB_00413c69:
00413C69  33 C0                     XOR EAX,EAX
LAB_00413c6b:
00413C6B  3B C6                     CMP EAX,ESI
00413C6D  0F 84 07 01 00 00         JZ 0x00413d7a
00413C73  66 8B 00                  MOV AX,word ptr [EAX]
00413C76  66 3D FF FF               CMP AX,0xffff
00413C7A  0F 84 EA 00 00 00         JZ 0x00413d6a
00413C80  50                        PUSH EAX
00413C81  8B CB                     MOV ECX,EBX
00413C83  E8 E7 EB FE FF            CALL 0x0040286f
00413C88  3B C6                     CMP EAX,ESI
00413C8A  0F 84 DA 00 00 00         JZ 0x00413d6a
00413C90  8B B8 C7 00 00 00         MOV EDI,dword ptr [EAX + 0xc7]
00413C96  3B FE                     CMP EDI,ESI
00413C98  7C 62                     JL 0x00413cfc
00413C9A  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
00413CA1  3B F9                     CMP EDI,ECX
00413CA3  7D 57                     JGE 0x00413cfc
00413CA5  8B 90 CB 00 00 00         MOV EDX,dword ptr [EAX + 0xcb]
00413CAB  3B D6                     CMP EDX,ESI
00413CAD  7C 4D                     JL 0x00413cfc
00413CAF  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
00413CB6  3B D1                     CMP EDX,ECX
00413CB8  7D 42                     JGE 0x00413cfc
00413CBA  8B 88 CF 00 00 00         MOV ECX,dword ptr [EAX + 0xcf]
00413CC0  3B CE                     CMP ECX,ESI
00413CC2  7C 38                     JL 0x00413cfc
00413CC4  0F BF 35 7C B2 7F 00      MOVSX ESI,word ptr [0x007fb27c]
00413CCB  3B CE                     CMP ECX,ESI
00413CCD  7D 2B                     JGE 0x00413cfa
00413CCF  0F AF 15 2C 4D 7F 00      IMUL EDX,dword ptr [0x007f4d2c]
00413CD6  0F AF 4D E0               IMUL ECX,dword ptr [EBP + -0x20]
00413CDA  03 FA                     ADD EDI,EDX
00413CDC  03 CF                     ADD ECX,EDI
00413CDE  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00413CE1  8B 15 FC 4C 7F 00         MOV EDX,dword ptr [0x007f4cfc]
00413CE7  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
00413CEA  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00413CED  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00413CF0  80 F2 07                  XOR DL,0x7
00413CF3  0F AB 11                  BTS [ECX],EDX
00413CF6  33 F6                     XOR ESI,ESI
00413CF8  EB 67                     JMP 0x00413d61
LAB_00413cfa:
00413CFA  33 F6                     XOR ESI,ESI
LAB_00413cfc:
00413CFC  66 8B 50 47               MOV DX,word ptr [EAX + 0x47]
00413D00  66 3B D6                  CMP DX,SI
00413D03  7C 5C                     JL 0x00413d61
00413D05  66 3B 15 78 B2 7F 00      CMP DX,word ptr [0x007fb278]
00413D0C  7D 53                     JGE 0x00413d61
00413D0E  66 8B 48 49               MOV CX,word ptr [EAX + 0x49]
00413D12  66 3B CE                  CMP CX,SI
00413D15  7C 4A                     JL 0x00413d61
00413D17  66 3B 0D 7A B2 7F 00      CMP CX,word ptr [0x007fb27a]
00413D1E  7D 41                     JGE 0x00413d61
00413D20  66 8B 40 4B               MOV AX,word ptr [EAX + 0x4b]
00413D24  66 3B C6                  CMP AX,SI
00413D27  7C 38                     JL 0x00413d61
00413D29  66 3B 05 7C B2 7F 00      CMP AX,word ptr [0x007fb27c]
00413D30  7D 2F                     JGE 0x00413d61
00413D32  0F BF C0                  MOVSX EAX,AX
00413D35  0F AF 45 E0               IMUL EAX,dword ptr [EBP + -0x20]
00413D39  0F BF C9                  MOVSX ECX,CX
00413D3C  0F AF 0D 2C 4D 7F 00      IMUL ECX,dword ptr [0x007f4d2c]
00413D43  03 C1                     ADD EAX,ECX
00413D45  0F BF D2                  MOVSX EDX,DX
00413D48  03 C2                     ADD EAX,EDX
00413D4A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00413D4D  A1 FC 4C 7F 00            MOV EAX,[0x007f4cfc]
00413D52  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00413D55  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00413D58  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00413D5B  80 F2 07                  XOR DL,0x7
00413D5E  0F AB 11                  BTS [ECX],EDX
LAB_00413d61:
00413D61  FF 05 24 4D 7F 00         INC dword ptr [0x007f4d24]
00413D67  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
LAB_00413d6a:
00413D6A  47                        INC EDI
00413D6B  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00413D6E  3B 3D 4C 4D 7F 00         CMP EDI,dword ptr [0x007f4d4c]
00413D74  0F 8C DC FE FF FF         JL 0x00413c56
LAB_00413d7a:
00413D7A  33 C0                     XOR EAX,EAX
00413D7C  66 8B 43 27               MOV AX,word ptr [EBX + 0x27]
00413D80  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00413D87  2B C8                     SUB ECX,EAX
00413D89  C1 E1 02                  SHL ECX,0x2
00413D8C  51                        PUSH ECX
00413D8D  E8 DE 6E 29 00            CALL 0x006aac70
00413D92  A3 04 4D 7F 00            MOV [0x007f4d04],EAX
00413D97  A3 48 4D 7F 00            MOV [0x007f4d48],EAX
00413D9C  89 35 40 4D 7F 00         MOV dword ptr [0x007f4d40],ESI
00413DA2  89 35 F8 4C 7F 00         MOV dword ptr [0x007f4cf8],ESI
00413DA8  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
00413DAB  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
00413DAE  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
00413DB1  8B 43 4D                  MOV EAX,dword ptr [EBX + 0x4d]
00413DB4  83 F8 FE                  CMP EAX,-0x2
00413DB7  0F 84 EC 01 00 00         JZ 0x00413fa9
00413DBD  83 F8 FD                  CMP EAX,-0x3
00413DC0  0F 84 E3 01 00 00         JZ 0x00413fa9
00413DC6  33 FF                     XOR EDI,EDI
00413DC8  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00413DCB  66 39 73 27               CMP word ptr [EBX + 0x27],SI
00413DCF  0F 86 6E 05 00 00         JBE 0x00414343
00413DD5  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_00413dd8:
00413DD8  3B 7E 0C                  CMP EDI,dword ptr [ESI + 0xc]
00413DDB  73 0B                     JNC 0x00413de8
00413DDD  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00413DE0  0F AF C7                  IMUL EAX,EDI
00413DE3  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
00413DE6  EB 02                     JMP 0x00413dea
LAB_00413de8:
00413DE8  33 C0                     XOR EAX,EAX
LAB_00413dea:
00413DEA  66 8B 10                  MOV DX,word ptr [EAX]
00413DED  52                        PUSH EDX
00413DEE  8B CB                     MOV ECX,EBX
00413DF0  E8 7A EA FE FF            CALL 0x0040286f
00413DF5  85 C0                     TEST EAX,EAX
00413DF7  0F 84 95 01 00 00         JZ 0x00413f92
00413DFD  C7 80 B7 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0xb7],0x0
00413E07  0F BF 50 47               MOVSX EDX,word ptr [EAX + 0x47]
00413E0B  8B 0D 40 4D 7F 00         MOV ECX,dword ptr [0x007f4d40]
00413E11  8D 34 CD 00 00 00 00      LEA ESI,[ECX*0x8 + 0x0]
00413E18  2B F1                     SUB ESI,ECX
00413E1A  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
00413E20  89 14 B1                  MOV dword ptr [ECX + ESI*0x4],EDX
00413E23  0F BF 50 47               MOVSX EDX,word ptr [EAX + 0x47]
00413E27  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00413E2A  8D 54 91 02               LEA EDX,[ECX + EDX*0x4 + 0x2]
00413E2E  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00413E31  0F BF 50 49               MOVSX EDX,word ptr [EAX + 0x49]
00413E35  8B 0D 40 4D 7F 00         MOV ECX,dword ptr [0x007f4d40]
00413E3B  8D 34 CD 00 00 00 00      LEA ESI,[ECX*0x8 + 0x0]
00413E42  2B F1                     SUB ESI,ECX
00413E44  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
00413E4A  89 54 B1 04               MOV dword ptr [ECX + ESI*0x4 + 0x4],EDX
00413E4E  0F BF 50 49               MOVSX EDX,word ptr [EAX + 0x49]
00413E52  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00413E55  8D 54 91 02               LEA EDX,[ECX + EDX*0x4 + 0x2]
00413E59  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00413E5C  0F BF 50 4B               MOVSX EDX,word ptr [EAX + 0x4b]
00413E60  8B 0D 40 4D 7F 00         MOV ECX,dword ptr [0x007f4d40]
00413E66  8D 34 CD 00 00 00 00      LEA ESI,[ECX*0x8 + 0x0]
00413E6D  2B F1                     SUB ESI,ECX
00413E6F  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
00413E75  89 54 B1 08               MOV dword ptr [ECX + ESI*0x4 + 0x8],EDX
00413E79  0F BF 50 4B               MOVSX EDX,word ptr [EAX + 0x4b]
00413E7D  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00413E80  8D 54 91 02               LEA EDX,[ECX + EDX*0x4 + 0x2]
00413E84  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
00413E87  8B 0D 40 4D 7F 00         MOV ECX,dword ptr [0x007f4d40]
00413E8D  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
00413E94  2B D1                     SUB EDX,ECX
00413E96  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
00413E9C  89 7C 91 18               MOV dword ptr [ECX + EDX*0x4 + 0x18],EDI
00413EA0  8B 0D 24 4D 7F 00         MOV ECX,dword ptr [0x007f4d24]
00413EA6  85 C9                     TEST ECX,ECX
00413EA8  0F 8E DB 00 00 00         JLE 0x00413f89
00413EAE  8B B0 C7 00 00 00         MOV ESI,dword ptr [EAX + 0xc7]
00413EB4  85 F6                     TEST ESI,ESI
00413EB6  7C 4F                     JL 0x00413f07
00413EB8  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
00413EBF  3B F2                     CMP ESI,EDX
00413EC1  7D 44                     JGE 0x00413f07
00413EC3  8B 90 CB 00 00 00         MOV EDX,dword ptr [EAX + 0xcb]
00413EC9  85 D2                     TEST EDX,EDX
00413ECB  7C 3A                     JL 0x00413f07
00413ECD  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
00413ED4  3B D1                     CMP EDX,ECX
00413ED6  7D 2F                     JGE 0x00413f07
00413ED8  8B 88 CF 00 00 00         MOV ECX,dword ptr [EAX + 0xcf]
00413EDE  85 C9                     TEST ECX,ECX
00413EE0  7C 25                     JL 0x00413f07
00413EE2  0F BF 3D 7C B2 7F 00      MOVSX EDI,word ptr [0x007fb27c]
00413EE9  3B CF                     CMP ECX,EDI
00413EEB  7D 17                     JGE 0x00413f04
00413EED  0F AF 15 2C 4D 7F 00      IMUL EDX,dword ptr [0x007f4d2c]
00413EF4  0F AF 4D E0               IMUL ECX,dword ptr [EBP + -0x20]
00413EF8  03 F2                     ADD ESI,EDX
00413EFA  03 CE                     ADD ECX,ESI
00413EFC  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00413EFF  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
00413F02  EB 54                     JMP 0x00413f58
LAB_00413f04:
00413F04  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
LAB_00413f07:
00413F07  66 8B 50 47               MOV DX,word ptr [EAX + 0x47]
00413F0B  66 85 D2                  TEST DX,DX
00413F0E  7C 48                     JL 0x00413f58
00413F10  66 3B 15 78 B2 7F 00      CMP DX,word ptr [0x007fb278]
00413F17  7D 3F                     JGE 0x00413f58
00413F19  66 8B 48 49               MOV CX,word ptr [EAX + 0x49]
00413F1D  66 85 C9                  TEST CX,CX
00413F20  7C 36                     JL 0x00413f58
00413F22  66 3B 0D 7A B2 7F 00      CMP CX,word ptr [0x007fb27a]
00413F29  7D 2D                     JGE 0x00413f58
00413F2B  66 8B 40 4B               MOV AX,word ptr [EAX + 0x4b]
00413F2F  66 85 C0                  TEST AX,AX
00413F32  7C 24                     JL 0x00413f58
00413F34  66 3B 05 7C B2 7F 00      CMP AX,word ptr [0x007fb27c]
00413F3B  7D 1B                     JGE 0x00413f58
00413F3D  0F BF C9                  MOVSX ECX,CX
00413F40  0F AF 0D 2C 4D 7F 00      IMUL ECX,dword ptr [0x007f4d2c]
00413F47  0F BF C0                  MOVSX EAX,AX
00413F4A  0F AF 45 E0               IMUL EAX,dword ptr [EBP + -0x20]
00413F4E  03 C8                     ADD ECX,EAX
00413F50  0F BF D2                  MOVSX EDX,DX
00413F53  03 CA                     ADD ECX,EDX
00413F55  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_00413f58:
00413F58  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00413F5B  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
00413F61  80 F2 07                  XOR DL,0x7
00413F64  33 C0                     XOR EAX,EAX
00413F66  0F A3 11                  BT [ECX],EDX
00413F69  D0 D0                     RCL AL,0x1
00413F6B  85 C0                     TEST EAX,EAX
00413F6D  74 1A                     JZ 0x00413f89
00413F6F  A1 FC 4C 7F 00            MOV EAX,[0x007f4cfc]
00413F74  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00413F77  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00413F7A  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00413F7D  80 F2 07                  XOR DL,0x7
00413F80  0F B3 11                  BTR [ECX],EDX
00413F83  FF 0D 24 4D 7F 00         DEC dword ptr [0x007f4d24]
LAB_00413f89:
00413F89  FF 05 40 4D 7F 00         INC dword ptr [0x007f4d40]
00413F8F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_00413f92:
00413F92  47                        INC EDI
00413F93  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00413F96  33 C9                     XOR ECX,ECX
00413F98  66 8B 4B 27               MOV CX,word ptr [EBX + 0x27]
00413F9C  3B F9                     CMP EDI,ECX
00413F9E  0F 8C 34 FE FF FF         JL 0x00413dd8
00413FA4  E9 94 03 00 00            JMP 0x0041433d
LAB_00413fa9:
00413FA9  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
00413FAC  33 FF                     XOR EDI,EDI
00413FAE  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00413FB1  66 39 73 27               CMP word ptr [EBX + 0x27],SI
00413FB5  0F 86 88 03 00 00         JBE 0x00414343
LAB_00413fbb:
00413FBB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00413FBE  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
00413FC1  73 0B                     JNC 0x00413fce
00413FC3  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00413FC6  0F AF C7                  IMUL EAX,EDI
00413FC9  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00413FCC  EB 02                     JMP 0x00413fd0
LAB_00413fce:
00413FCE  33 C0                     XOR EAX,EAX
LAB_00413fd0:
00413FD0  66 8B 10                  MOV DX,word ptr [EAX]
00413FD3  52                        PUSH EDX
00413FD4  8B CB                     MOV ECX,EBX
00413FD6  E8 94 E8 FE FF            CALL 0x0040286f
00413FDB  8B F0                     MOV ESI,EAX
00413FDD  85 F6                     TEST ESI,ESI
00413FDF  0F 84 46 03 00 00         JZ 0x0041432b
00413FE5  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
00413FEF  A1 24 4D 7F 00            MOV EAX,[0x007f4d24]
00413FF4  85 C0                     TEST EAX,EAX
00413FF6  0F 8E D5 00 00 00         JLE 0x004140d1
00413FFC  8B 96 C7 00 00 00         MOV EDX,dword ptr [ESI + 0xc7]
00414002  85 D2                     TEST EDX,EDX
00414004  7C 49                     JL 0x0041404f
00414006  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0041400D  3B D0                     CMP EDX,EAX
0041400F  7D 3E                     JGE 0x0041404f
00414011  8B 8E CB 00 00 00         MOV ECX,dword ptr [ESI + 0xcb]
00414017  85 C9                     TEST ECX,ECX
00414019  7C 34                     JL 0x0041404f
0041401B  0F BF 05 7A B2 7F 00      MOVSX EAX,word ptr [0x007fb27a]
00414022  3B C8                     CMP ECX,EAX
00414024  7D 29                     JGE 0x0041404f
00414026  8B 86 CF 00 00 00         MOV EAX,dword ptr [ESI + 0xcf]
0041402C  85 C0                     TEST EAX,EAX
0041402E  7C 1F                     JL 0x0041404f
00414030  0F BF 3D 7C B2 7F 00      MOVSX EDI,word ptr [0x007fb27c]
00414037  3B C7                     CMP EAX,EDI
00414039  7D 14                     JGE 0x0041404f
0041403B  0F AF 0D 2C 4D 7F 00      IMUL ECX,dword ptr [0x007f4d2c]
00414042  0F AF 45 E0               IMUL EAX,dword ptr [EBP + -0x20]
00414046  03 D1                     ADD EDX,ECX
00414048  03 C2                     ADD EAX,EDX
0041404A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0041404D  EB 51                     JMP 0x004140a0
LAB_0041404f:
0041404F  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
00414053  66 85 D2                  TEST DX,DX
00414056  7C 48                     JL 0x004140a0
00414058  66 3B 15 78 B2 7F 00      CMP DX,word ptr [0x007fb278]
0041405F  7D 3F                     JGE 0x004140a0
00414061  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
00414065  66 85 C9                  TEST CX,CX
00414068  7C 36                     JL 0x004140a0
0041406A  66 3B 0D 7A B2 7F 00      CMP CX,word ptr [0x007fb27a]
00414071  7D 2D                     JGE 0x004140a0
00414073  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
00414077  66 85 C0                  TEST AX,AX
0041407A  7C 24                     JL 0x004140a0
0041407C  66 3B 05 7C B2 7F 00      CMP AX,word ptr [0x007fb27c]
00414083  7D 1B                     JGE 0x004140a0
00414085  0F BF C9                  MOVSX ECX,CX
00414088  0F AF 0D 2C 4D 7F 00      IMUL ECX,dword ptr [0x007f4d2c]
0041408F  0F BF C0                  MOVSX EAX,AX
00414092  0F AF 45 E0               IMUL EAX,dword ptr [EBP + -0x20]
00414096  03 C8                     ADD ECX,EAX
00414098  0F BF D2                  MOVSX EDX,DX
0041409B  03 CA                     ADD ECX,EDX
0041409D  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_004140a0:
004140A0  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004140A3  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
004140A9  80 F2 07                  XOR DL,0x7
004140AC  33 C0                     XOR EAX,EAX
004140AE  0F A3 11                  BT [ECX],EDX
004140B1  D0 D0                     RCL AL,0x1
004140B3  85 C0                     TEST EAX,EAX
004140B5  74 1A                     JZ 0x004140d1
004140B7  A1 FC 4C 7F 00            MOV EAX,[0x007f4cfc]
004140BC  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
004140BF  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
004140C2  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004140C5  80 F2 07                  XOR DL,0x7
004140C8  0F B3 11                  BTR [ECX],EDX
004140CB  FF 0D 24 4D 7F 00         DEC dword ptr [0x007f4d24]
LAB_004140d1:
004140D1  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004140D4  8B 53 59                  MOV EDX,dword ptr [EBX + 0x59]
004140D7  33 C9                     XOR ECX,ECX
004140D9  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004140DD  8B F8                     MOV EDI,EAX
004140DF  C1 E7 04                  SHL EDI,0x4
004140E2  3B 4C 17 18               CMP ECX,dword ptr [EDI + EDX*0x1 + 0x18]
004140E6  74 25                     JZ 0x0041410d
004140E8  8B 3A                     MOV EDI,dword ptr [EDX]
004140EA  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
004140ED  EB 03                     JMP 0x004140f2
LAB_004140ef:
004140EF  8B 7D 98                  MOV EDI,dword ptr [EBP + -0x68]
LAB_004140f2:
004140F2  40                        INC EAX
004140F3  3B C7                     CMP EAX,EDI
004140F5  7C 02                     JL 0x004140f9
004140F7  33 C0                     XOR EAX,EAX
LAB_004140f9:
004140F9  3B 45 BC                  CMP EAX,dword ptr [EBP + -0x44]
004140FC  74 0D                     JZ 0x0041410b
004140FE  8B F8                     MOV EDI,EAX
00414100  C1 E7 04                  SHL EDI,0x4
00414103  3B 4C 17 18               CMP ECX,dword ptr [EDI + EDX*0x1 + 0x18]
00414107  75 E6                     JNZ 0x004140ef
00414109  EB 02                     JMP 0x0041410d
LAB_0041410b:
0041410B  8B C7                     MOV EAX,EDI
LAB_0041410d:
0041410D  3B 02                     CMP EAX,dword ptr [EDX]
0041410F  0F 8C 95 00 00 00         JL 0x004141aa
00414115  8B 0D F8 4C 7F 00         MOV ECX,dword ptr [0x007f4cf8]
0041411B  41                        INC ECX
0041411C  89 0D F8 4C 7F 00         MOV dword ptr [0x007f4cf8],ECX
00414122  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
00414126  33 C0                     XOR EAX,EAX
00414128  66 8B 43 27               MOV AX,word ptr [EBX + 0x27]
0041412C  2B C1                     SUB EAX,ECX
0041412E  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00414135  2B C8                     SUB ECX,EAX
00414137  A1 04 4D 7F 00            MOV EAX,[0x007f4d04]
0041413C  89 14 88                  MOV dword ptr [EAX + ECX*0x4],EDX
0041413F  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
00414143  33 C0                     XOR EAX,EAX
00414145  66 8B 43 27               MOV AX,word ptr [EBX + 0x27]
00414149  2B 05 F8 4C 7F 00         SUB EAX,dword ptr [0x007f4cf8]
0041414F  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
00414156  2B D0                     SUB EDX,EAX
00414158  A1 04 4D 7F 00            MOV EAX,[0x007f4d04]
0041415D  89 4C 90 04               MOV dword ptr [EAX + EDX*0x4 + 0x4],ECX
00414161  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
00414165  33 C0                     XOR EAX,EAX
00414167  66 8B 43 27               MOV AX,word ptr [EBX + 0x27]
0041416B  2B 05 F8 4C 7F 00         SUB EAX,dword ptr [0x007f4cf8]
00414171  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
00414178  2B D0                     SUB EDX,EAX
0041417A  A1 04 4D 7F 00            MOV EAX,[0x007f4d04]
0041417F  89 4C 90 08               MOV dword ptr [EAX + EDX*0x4 + 0x8],ECX
00414183  33 C0                     XOR EAX,EAX
00414185  66 8B 43 27               MOV AX,word ptr [EBX + 0x27]
00414189  2B 05 F8 4C 7F 00         SUB EAX,dword ptr [0x007f4cf8]
0041418F  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00414196  2B C8                     SUB ECX,EAX
00414198  8B 15 04 4D 7F 00         MOV EDX,dword ptr [0x007f4d04]
0041419E  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
004141A1  89 7C 8A 18               MOV dword ptr [EDX + ECX*0x4 + 0x18],EDI
004141A5  E9 81 01 00 00            JMP 0x0041432b
LAB_004141aa:
004141AA  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
004141AE  8B 0D 40 4D 7F 00         MOV ECX,dword ptr [0x007f4d40]
004141B4  8D 3C CD 00 00 00 00      LEA EDI,[ECX*0x8 + 0x0]
004141BB  2B F9                     SUB EDI,ECX
004141BD  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
004141C3  89 14 B9                  MOV dword ptr [ECX + EDI*0x4],EDX
004141C6  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
004141CA  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
004141CD  8D 54 91 02               LEA EDX,[ECX + EDX*0x4 + 0x2]
004141D1  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
004141D4  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
004141D8  8B 0D 40 4D 7F 00         MOV ECX,dword ptr [0x007f4d40]
004141DE  8D 3C CD 00 00 00 00      LEA EDI,[ECX*0x8 + 0x0]
004141E5  2B F9                     SUB EDI,ECX
004141E7  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
004141ED  89 54 B9 04               MOV dword ptr [ECX + EDI*0x4 + 0x4],EDX
004141F1  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
004141F5  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004141F8  8D 54 91 02               LEA EDX,[ECX + EDX*0x4 + 0x2]
004141FC  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
004141FF  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
00414203  8B 0D 40 4D 7F 00         MOV ECX,dword ptr [0x007f4d40]
00414209  8D 3C CD 00 00 00 00      LEA EDI,[ECX*0x8 + 0x0]
00414210  2B F9                     SUB EDI,ECX
00414212  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
00414218  89 54 B9 08               MOV dword ptr [ECX + EDI*0x4 + 0x8],EDX
0041421C  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
00414220  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00414223  8D 54 91 02               LEA EDX,[ECX + EDX*0x4 + 0x2]
00414227  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0041422A  8B 0D 40 4D 7F 00         MOV ECX,dword ptr [0x007f4d40]
00414230  8D 14 CD 00 00 00 00      LEA EDX,[ECX*0x8 + 0x0]
00414237  2B D1                     SUB EDX,ECX
00414239  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
0041423F  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
00414242  89 74 91 18               MOV dword ptr [ECX + EDX*0x4 + 0x18],ESI
00414246  83 7B 4D FD               CMP dword ptr [EBX + 0x4d],-0x3
0041424A  8B C8                     MOV ECX,EAX
0041424C  75 57                     JNZ 0x004142a5
0041424E  C1 E1 04                  SHL ECX,0x4
00414251  8B 73 59                  MOV ESI,dword ptr [EBX + 0x59]
00414254  8B 15 40 4D 7F 00         MOV EDX,dword ptr [0x007f4d40]
0041425A  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0041425D  8B 74 0E 0C               MOV ESI,dword ptr [ESI + ECX*0x1 + 0xc]
00414261  8B 3D 3C 4D 7F 00         MOV EDI,dword ptr [0x007f4d3c]
00414267  89 34 97                  MOV dword ptr [EDI + EDX*0x4],ESI
0041426A  40                        INC EAX
0041426B  8B F0                     MOV ESI,EAX
0041426D  C1 E6 04                  SHL ESI,0x4
00414270  8B 7B 59                  MOV EDI,dword ptr [EBX + 0x59]
00414273  8B 15 40 4D 7F 00         MOV EDX,dword ptr [0x007f4d40]
00414279  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0041427C  8B 34 3E                  MOV ESI,dword ptr [ESI + EDI*0x1]
0041427F  8B 3D 3C 4D 7F 00         MOV EDI,dword ptr [0x007f4d3c]
00414285  89 74 97 04               MOV dword ptr [EDI + EDX*0x4 + 0x4],ESI
00414289  8B 73 59                  MOV ESI,dword ptr [EBX + 0x59]
0041428C  8B 15 40 4D 7F 00         MOV EDX,dword ptr [0x007f4d40]
00414292  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00414295  8B 4C 0E 14               MOV ECX,dword ptr [ESI + ECX*0x1 + 0x14]
00414299  8B 35 3C 4D 7F 00         MOV ESI,dword ptr [0x007f4d3c]
0041429F  89 4C 96 08               MOV dword ptr [ESI + EDX*0x4 + 0x8],ECX
004142A3  EB 6C                     JMP 0x00414311
LAB_004142a5:
004142A5  C1 E1 04                  SHL ECX,0x4
004142A8  8B 73 59                  MOV ESI,dword ptr [EBX + 0x59]
004142AB  8B 15 40 4D 7F 00         MOV EDX,dword ptr [0x007f4d40]
004142B1  8D 3C D5 00 00 00 00      LEA EDI,[EDX*0x8 + 0x0]
004142B8  2B FA                     SUB EDI,EDX
004142BA  8B 54 0E 0C               MOV EDX,dword ptr [ESI + ECX*0x1 + 0xc]
004142BE  8B 35 04 4D 7F 00         MOV ESI,dword ptr [0x007f4d04]
004142C4  89 54 BE 0C               MOV dword ptr [ESI + EDI*0x4 + 0xc],EDX
004142C8  40                        INC EAX
004142C9  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
004142CC  8B D0                     MOV EDX,EAX
004142CE  C1 E2 04                  SHL EDX,0x4
004142D1  8B 73 59                  MOV ESI,dword ptr [EBX + 0x59]
004142D4  A1 40 4D 7F 00            MOV EAX,[0x007f4d40]
004142D9  8D 3C C5 00 00 00 00      LEA EDI,[EAX*0x8 + 0x0]
004142E0  2B F8                     SUB EDI,EAX
004142E2  8B 04 32                  MOV EAX,dword ptr [EDX + ESI*0x1]
004142E5  8B 15 04 4D 7F 00         MOV EDX,dword ptr [0x007f4d04]
004142EB  89 44 BA 10               MOV dword ptr [EDX + EDI*0x4 + 0x10],EAX
004142EF  8B 53 59                  MOV EDX,dword ptr [EBX + 0x59]
004142F2  A1 40 4D 7F 00            MOV EAX,[0x007f4d40]
004142F7  8D 34 C5 00 00 00 00      LEA ESI,[EAX*0x8 + 0x0]
004142FE  2B F0                     SUB ESI,EAX
00414300  8B 44 0A 14               MOV EAX,dword ptr [EDX + ECX*0x1 + 0x14]
00414304  8B 0D 04 4D 7F 00         MOV ECX,dword ptr [0x007f4d04]
0041430A  89 44 B1 14               MOV dword ptr [ECX + ESI*0x4 + 0x14],EAX
0041430E  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
LAB_00414311:
00414311  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
00414314  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00414317  8B 53 59                  MOV EDX,dword ptr [EBX + 0x59]
0041431A  3B 02                     CMP EAX,dword ptr [EDX]
0041431C  7C 07                     JL 0x00414325
0041431E  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
LAB_00414325:
00414325  FF 05 40 4D 7F 00         INC dword ptr [0x007f4d40]
LAB_0041432b:
0041432B  47                        INC EDI
0041432C  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0041432F  33 C0                     XOR EAX,EAX
00414331  66 8B 43 27               MOV AX,word ptr [EBX + 0x27]
00414335  3B F8                     CMP EDI,EAX
00414337  0F 8C 7E FC FF FF         JL 0x00413fbb
LAB_0041433d:
0041433D  8B 35 40 4D 7F 00         MOV ESI,dword ptr [0x007f4d40]
LAB_00414343:
00414343  A1 24 4D 7F 00            MOV EAX,[0x007f4d24]
00414348  85 C0                     TEST EAX,EAX
0041434A  7D 0A                     JGE 0x00414356
0041434C  C7 05 24 4D 7F 00 00 00 00 00  MOV dword ptr [0x007f4d24],0x0
LAB_00414356:
00414356  89 35 20 4D 7F 00         MOV dword ptr [0x007f4d20],ESI
0041435C  85 F6                     TEST ESI,ESI
0041435E  7E 67                     JLE 0x004143c7
00414360  8B C6                     MOV EAX,ESI
00414362  99                        CDQ
00414363  2B C2                     SUB EAX,EDX
00414365  8B C8                     MOV ECX,EAX
00414367  D1 F9                     SAR ECX,0x1
00414369  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0041436C  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
0041436F  99                        CDQ
00414370  F7 FE                     IDIV ESI
00414372  A3 0C 4D 7F 00            MOV [0x007f4d0c],EAX
00414377  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0041437A  03 C1                     ADD EAX,ECX
0041437C  99                        CDQ
0041437D  F7 FE                     IDIV ESI
0041437F  A3 10 4D 7F 00            MOV [0x007f4d10],EAX
00414384  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00414387  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
0041438A  99                        CDQ
0041438B  F7 FE                     IDIV ESI
0041438D  A3 1C 4D 7F 00            MOV [0x007f4d1c],EAX
00414392  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00414395  56                        PUSH ESI
00414396  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00414399  57                        PUSH EDI
0041439A  A1 10 4D 7F 00            MOV EAX,[0x007f4d10]
0041439F  C1 F8 02                  SAR EAX,0x2
004143A2  50                        PUSH EAX
004143A3  A1 0C 4D 7F 00            MOV EAX,[0x007f4d0c]
004143A8  C1 F8 02                  SAR EAX,0x2
004143AB  50                        PUSH EAX
004143AC  E8 FF 8C 29 00            CALL 0x006ad0b0
004143B1  A3 08 4D 7F 00            MOV [0x007f4d08],EAX
004143B6  83 F8 7F                  CMP EAX,0x7f
004143B9  75 12                     JNZ 0x004143cd
004143BB  C7 05 08 4D 7F 00 00 00 00 00  MOV dword ptr [0x007f4d08],0x0
004143C5  EB 06                     JMP 0x004143cd
LAB_004143c7:
004143C7  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
004143CA  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_004143cd:
004143CD  8B 43 4D                  MOV EAX,dword ptr [EBX + 0x4d]
004143D0  85 C0                     TEST EAX,EAX
004143D2  74 72                     JZ 0x00414446
004143D4  F6 43 49 01               TEST byte ptr [EBX + 0x49],0x1
004143D8  75 6C                     JNZ 0x00414446
004143DA  33 C0                     XOR EAX,EAX
004143DC  66 8B 43 27               MOV AX,word ptr [EBX + 0x27]
004143E0  39 05 4C 4D 7F 00         CMP dword ptr [0x007f4d4c],EAX
004143E6  75 5E                     JNZ 0x00414446
004143E8  8D 0C B5 02 00 00 00      LEA ECX,[ESI*0x4 + 0x2]
004143EF  51                        PUSH ECX
004143F0  8D 14 BD 02 00 00 00      LEA EDX,[EDI*0x4 + 0x2]
004143F7  52                        PUSH EDX
004143F8  A1 10 4D 7F 00            MOV EAX,[0x007f4d10]
004143FD  50                        PUSH EAX
004143FE  8B 0D 0C 4D 7F 00         MOV ECX,dword ptr [0x007f4d0c]
00414404  51                        PUSH ECX
00414405  E8 06 75 2C 00            CALL 0x006db910
0041440A  8D 0C 85 2D 00 00 00      LEA ECX,[EAX*0x4 + 0x2d]
00414411  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
00414416  F7 E9                     IMUL ECX
00414418  03 D1                     ADD EDX,ECX
0041441A  C1 FA 06                  SAR EDX,0x6
0041441D  8B C2                     MOV EAX,EDX
0041441F  C1 E8 1F                  SHR EAX,0x1f
00414422  03 D0                     ADD EDX,EAX
00414424  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
00414427  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0041442A  D1 E0                     SHL EAX,0x1
0041442C  99                        CDQ
0041442D  83 E2 03                  AND EDX,0x3
00414430  03 C2                     ADD EAX,EDX
00414432  C1 F8 02                  SAR EAX,0x2
00414435  89 43 55                  MOV dword ptr [EBX + 0x55],EAX
00414438  3D 68 01 00 00            CMP EAX,0x168
0041443D  75 07                     JNZ 0x00414446
0041443F  C7 43 55 00 00 00 00      MOV dword ptr [EBX + 0x55],0x0
LAB_00414446:
00414446  8B 4B 55                  MOV ECX,dword ptr [EBX + 0x55]
00414449  51                        PUSH ECX
0041444A  E8 F1 71 2C 00            CALL 0x006db640
0041444F  A3 28 4D 7F 00            MOV [0x007f4d28],EAX
00414454  8B 53 55                  MOV EDX,dword ptr [EBX + 0x55]
00414457  52                        PUSH EDX
00414458  E8 73 72 2C 00            CALL 0x006db6d0
0041445D  A3 38 4D 7F 00            MOV [0x007f4d38],EAX
00414462  8B 43 4D                  MOV EAX,dword ptr [EBX + 0x4d]
00414465  8D 48 0A                  LEA ECX,[EAX + 0xa]
00414468  83 F9 0F                  CMP ECX,0xf
0041446B  0F 87 C4 01 00 00         JA 0x00414635
00414471  33 D2                     XOR EDX,EDX
00414473  8A 91 7C 46 41 00         MOV DL,byte ptr [ECX + 0x41467c]
switchD_00414479::switchD:
00414479  FF 24 95 60 46 41 00      JMP dword ptr [EDX*0x4 + 0x414660]
switchD_00414479::caseD_fffffffd:
00414480  8B 0D 20 4D 7F 00         MOV ECX,dword ptr [0x007f4d20]
00414486  85 C9                     TEST ECX,ECX
00414488  7E 24                     JLE 0x004144ae
0041448A  33 C9                     XOR ECX,ECX
0041448C  83 F8 FE                  CMP EAX,-0x2
0041448F  0F 94 C1                  SETZ CL
00414492  51                        PUSH ECX
00414493  8B 53 59                  MOV EDX,dword ptr [EBX + 0x59]
00414496  52                        PUSH EDX
00414497  8B 43 51                  MOV EAX,dword ptr [EBX + 0x51]
0041449A  50                        PUSH EAX
0041449B  8B 4B 55                  MOV ECX,dword ptr [EBX + 0x55]
0041449E  51                        PUSH ECX
0041449F  6A 00                     PUSH 0x0
004144A1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004144A4  52                        PUSH EDX
004144A5  56                        PUSH ESI
004144A6  57                        PUSH EDI
004144A7  E8 36 F3 FE FF            CALL 0x004037e2
004144AC  EB 03                     JMP 0x004144b1
LAB_004144ae:
004144AE  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
LAB_004144b1:
004144B1  85 C0                     TEST EAX,EAX
004144B3  0F 85 8D 01 00 00         JNZ 0x00414646
004144B9  8B 0D F8 4C 7F 00         MOV ECX,dword ptr [0x007f4cf8]
004144BF  85 C9                     TEST ECX,ECX
004144C1  0F 8E 7F 01 00 00         JLE 0x00414646
004144C7  66 8B 43 27               MOV AX,word ptr [EBX + 0x27]
004144CB  2B C1                     SUB EAX,ECX
004144CD  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
004144D4  2B D0                     SUB EDX,EAX
004144D6  A1 04 4D 7F 00            MOV EAX,[0x007f4d04]
004144DB  8D 14 90                  LEA EDX,[EAX + EDX*0x4]
004144DE  89 15 48 4D 7F 00         MOV dword ptr [0x007f4d48],EDX
004144E4  89 0D 20 4D 7F 00         MOV dword ptr [0x007f4d20],ECX
004144EA  8B 43 55                  MOV EAX,dword ptr [EBX + 0x55]
004144ED  3D 52 01 00 00            CMP EAX,0x152
004144F2  0F 8D B9 00 00 00         JGE 0x004145b1
004144F8  83 F8 17                  CMP EAX,0x17
004144FB  0F 8E B0 00 00 00         JLE 0x004145b1
00414501  3D 25 01 00 00            CMP EAX,0x125
00414506  7C 17                     JL 0x0041451f
00414508  C7 05 08 4D 7F 00 07 00 00 00  MOV dword ptr [0x007f4d08],0x7
00414512  6A 00                     PUSH 0x0
00414514  6A 00                     PUSH 0x0
00414516  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00414519  52                        PUSH EDX
0041451A  E9 20 01 00 00            JMP 0x0041463f
LAB_0041451f:
0041451F  3D F8 00 00 00            CMP EAX,0xf8
00414524  7C 17                     JL 0x0041453d
00414526  C7 05 08 4D 7F 00 06 00 00 00  MOV dword ptr [0x007f4d08],0x6
00414530  6A 00                     PUSH 0x0
00414532  6A 00                     PUSH 0x0
00414534  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00414537  52                        PUSH EDX
00414538  E9 02 01 00 00            JMP 0x0041463f
LAB_0041453d:
0041453D  3D CB 00 00 00            CMP EAX,0xcb
00414542  7C 17                     JL 0x0041455b
00414544  C7 05 08 4D 7F 00 05 00 00 00  MOV dword ptr [0x007f4d08],0x5
0041454E  6A 00                     PUSH 0x0
00414550  6A 00                     PUSH 0x0
00414552  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00414555  52                        PUSH EDX
00414556  E9 E4 00 00 00            JMP 0x0041463f
LAB_0041455b:
0041455B  3D 9E 00 00 00            CMP EAX,0x9e
00414560  7C 17                     JL 0x00414579
00414562  C7 05 08 4D 7F 00 04 00 00 00  MOV dword ptr [0x007f4d08],0x4
0041456C  6A 00                     PUSH 0x0
0041456E  6A 00                     PUSH 0x0
00414570  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00414573  52                        PUSH EDX
00414574  E9 C6 00 00 00            JMP 0x0041463f
LAB_00414579:
00414579  83 F8 71                  CMP EAX,0x71
0041457C  7C 17                     JL 0x00414595
0041457E  C7 05 08 4D 7F 00 03 00 00 00  MOV dword ptr [0x007f4d08],0x3
00414588  6A 00                     PUSH 0x0
0041458A  6A 00                     PUSH 0x0
0041458C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0041458F  52                        PUSH EDX
00414590  E9 AA 00 00 00            JMP 0x0041463f
LAB_00414595:
00414595  33 C9                     XOR ECX,ECX
00414597  83 F8 44                  CMP EAX,0x44
0041459A  0F 9D C1                  SETGE CL
0041459D  41                        INC ECX
0041459E  89 0D 08 4D 7F 00         MOV dword ptr [0x007f4d08],ECX
004145A4  6A 00                     PUSH 0x0
004145A6  6A 00                     PUSH 0x0
004145A8  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004145AB  52                        PUSH EDX
004145AC  E9 8E 00 00 00            JMP 0x0041463f
LAB_004145b1:
004145B1  C7 05 08 4D 7F 00 00 00 00 00  MOV dword ptr [0x007f4d08],0x0
004145BB  6A 00                     PUSH 0x0
004145BD  6A 00                     PUSH 0x0
004145BF  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004145C2  52                        PUSH EDX
004145C3  EB 7A                     JMP 0x0041463f
switchD_00414479::caseD_1:
004145C5  8B 43 51                  MOV EAX,dword ptr [EBX + 0x51]
004145C8  50                        PUSH EAX
004145C9  6A 00                     PUSH 0x0
004145CB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004145CE  51                        PUSH ECX
004145CF  56                        PUSH ESI
004145D0  57                        PUSH EDI
004145D1  E8 B5 02 FF FF            CALL 0x0040488b
004145D6  EB 6E                     JMP 0x00414646
switchD_00414479::caseD_2:
004145D8  6A 00                     PUSH 0x0
004145DA  8B 53 51                  MOV EDX,dword ptr [EBX + 0x51]
004145DD  52                        PUSH EDX
004145DE  6A 00                     PUSH 0x0
004145E0  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004145E3  50                        PUSH EAX
004145E4  56                        PUSH ESI
004145E5  57                        PUSH EDI
004145E6  E8 58 CD FE FF            CALL 0x00401343
004145EB  EB 59                     JMP 0x00414646
switchD_00414479::caseD_3:
004145ED  8B 4B 55                  MOV ECX,dword ptr [EBX + 0x55]
004145F0  51                        PUSH ECX
004145F1  8B 53 51                  MOV EDX,dword ptr [EBX + 0x51]
004145F4  52                        PUSH EDX
004145F5  6A 00                     PUSH 0x0
004145F7  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004145FA  50                        PUSH EAX
004145FB  56                        PUSH ESI
004145FC  57                        PUSH EDI
004145FD  E8 BF F9 FE FF            CALL 0x00403fc1
00414602  EB 42                     JMP 0x00414646
switchD_00414479::caseD_4:
00414604  33 C9                     XOR ECX,ECX
00414606  83 F8 04                  CMP EAX,0x4
00414609  0F 94 C1                  SETZ CL
0041460C  51                        PUSH ECX
0041460D  8B 53 55                  MOV EDX,dword ptr [EBX + 0x55]
00414610  52                        PUSH EDX
00414611  8B 43 51                  MOV EAX,dword ptr [EBX + 0x51]
00414614  50                        PUSH EAX
00414615  6A 00                     PUSH 0x0
00414617  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0041461A  51                        PUSH ECX
0041461B  56                        PUSH ESI
0041461C  57                        PUSH EDI
0041461D  E8 46 FD FE FF            CALL 0x00404368
00414622  EB 22                     JMP 0x00414646
switchD_00414479::caseD_fffffff6:
00414624  8B 53 51                  MOV EDX,dword ptr [EBX + 0x51]
00414627  52                        PUSH EDX
00414628  6A 00                     PUSH 0x0
0041462A  6A 02                     PUSH 0x2
0041462C  56                        PUSH ESI
0041462D  57                        PUSH EDI
0041462E  E8 B4 FB FE FF            CALL 0x004041e7
00414633  EB 11                     JMP 0x00414646
switchD_00414479::caseD_fffffff7:
00414635  8B 43 51                  MOV EAX,dword ptr [EBX + 0x51]
00414638  50                        PUSH EAX
00414639  6A 00                     PUSH 0x0
0041463B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0041463E  51                        PUSH ECX
LAB_0041463f:
0041463F  56                        PUSH ESI
00414640  57                        PUSH EDI
00414641  E8 9D 09 FF FF            CALL 0x00404fe3
LAB_00414646:
00414646  83 63 49 FE               AND dword ptr [EBX + 0x49],0xfffffffe
0041464A  8D 65 88                  LEA ESP,[EBP + -0x78]
0041464D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00414650  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00414657  5F                        POP EDI
00414658  5E                        POP ESI
00414659  5B                        POP EBX
0041465A  8B E5                     MOV ESP,EBP
0041465C  5D                        POP EBP
0041465D  C2 18 00                  RET 0x18
