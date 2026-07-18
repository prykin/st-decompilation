FUN_00713080:
00713080  55                        PUSH EBP
00713081  8B EC                     MOV EBP,ESP
00713083  83 EC 50                  SUB ESP,0x50
00713086  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00713089  53                        PUSH EBX
0071308A  56                        PUSH ESI
0071308B  57                        PUSH EDI
0071308C  33 FF                     XOR EDI,EDI
0071308E  3B C7                     CMP EAX,EDI
00713090  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00713093  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00713096  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00713099  0F 84 4A 01 00 00         JZ 0x007131e9
0071309F  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007130A4  8D 55 B4                  LEA EDX,[EBP + -0x4c]
007130A7  8D 4D B0                  LEA ECX,[EBP + -0x50]
007130AA  57                        PUSH EDI
007130AB  52                        PUSH EDX
007130AC  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
007130AF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007130B5  E8 36 A7 01 00            CALL 0x0072d7f0
007130BA  8B F0                     MOV ESI,EAX
007130BC  83 C4 08                  ADD ESP,0x8
007130BF  3B F7                     CMP ESI,EDI
007130C1  0F 85 D2 00 00 00         JNZ 0x00713199
007130C7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007130CA  3B C7                     CMP EAX,EDI
007130CC  75 47                     JNZ 0x00713115
007130CE  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007130D1  33 D2                     XOR EDX,EDX
007130D3  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
007130D6  3B DF                     CMP EBX,EDI
007130D8  7E 2B                     JLE 0x00713105
007130DA  3B D3                     CMP EDX,EBX
007130DC  7D 08                     JGE 0x007130e6
LAB_007130de:
007130DE  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
007130E1  8B 3C 90                  MOV EDI,dword ptr [EAX + EDX*0x4]
007130E4  EB 02                     JMP 0x007130e8
LAB_007130e6:
007130E6  33 FF                     XOR EDI,EDI
LAB_007130e8:
007130E8  85 FF                     TEST EDI,EDI
007130EA  74 14                     JZ 0x00713100
007130EC  83 C9 FF                  OR ECX,0xffffffff
007130EF  33 C0                     XOR EAX,EAX
007130F1  F2 AE                     SCASB.REPNE ES:EDI
007130F3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007130F6  F7 D1                     NOT ECX
007130F8  49                        DEC ECX
007130F9  8D 4C 08 03               LEA ECX,[EAX + ECX*0x1 + 0x3]
007130FD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00713100:
00713100  42                        INC EDX
00713101  3B D3                     CMP EDX,EBX
00713103  7C D9                     JL 0x007130de
LAB_00713105:
00713105  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00713108  52                        PUSH EDX
00713109  E8 02 7B F9 FF            CALL 0x006aac10
0071310E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00713111  33 FF                     XOR EDI,EDI
00713113  EB 06                     JMP 0x0071311b
LAB_00713115:
00713115  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00713118  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0071311b:
0071311B  8B D0                     MOV EDX,EAX
0071311D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00713120  33 DB                     XOR EBX,EBX
00713122  3B C7                     CMP EAX,EDI
00713124  7E 5B                     JLE 0x00713181
00713126  3B D8                     CMP EBX,EAX
00713128  7D 08                     JGE 0x00713132
LAB_0071312a:
0071312A  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0071312D  8B 3C 98                  MOV EDI,dword ptr [EAX + EBX*0x4]
00713130  EB 02                     JMP 0x00713134
LAB_00713132:
00713132  33 FF                     XOR EDI,EDI
LAB_00713134:
00713134  85 FF                     TEST EDI,EDI
00713136  74 41                     JZ 0x00713179
00713138  85 D2                     TEST EDX,EDX
0071313A  74 20                     JZ 0x0071315c
0071313C  83 C9 FF                  OR ECX,0xffffffff
0071313F  33 C0                     XOR EAX,EAX
00713141  F2 AE                     SCASB.REPNE ES:EDI
00713143  F7 D1                     NOT ECX
00713145  2B F9                     SUB EDI,ECX
00713147  8B C1                     MOV EAX,ECX
00713149  8B F7                     MOV ESI,EDI
0071314B  8B FA                     MOV EDI,EDX
0071314D  C1 E9 02                  SHR ECX,0x2
00713150  F3 A5                     MOVSD.REP ES:EDI,ESI
00713152  8B C8                     MOV ECX,EAX
00713154  83 E1 03                  AND ECX,0x3
00713157  F3 A4                     MOVSB.REP ES:EDI,ESI
00713159  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_0071315c:
0071315C  80 3A 00                  CMP byte ptr [EDX],0x0
0071315F  74 08                     JZ 0x00713169
LAB_00713161:
00713161  8A 42 01                  MOV AL,byte ptr [EDX + 0x1]
00713164  42                        INC EDX
00713165  84 C0                     TEST AL,AL
00713167  75 F8                     JNZ 0x00713161
LAB_00713169:
00713169  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0071316C  49                        DEC ECX
0071316D  3B D9                     CMP EBX,ECX
0071316F  7D 08                     JGE 0x00713179
00713171  A0 F4 8F 7C 00            MOV AL,[0x007c8ff4]
00713176  88 02                     MOV byte ptr [EDX],AL
00713178  42                        INC EDX
LAB_00713179:
00713179  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0071317C  43                        INC EBX
0071317D  3B D8                     CMP EBX,EAX
0071317F  7C A9                     JL 0x0071312a
LAB_00713181:
00713181  C6 02 00                  MOV byte ptr [EDX],0x0
00713184  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00713187  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071318A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00713190  5F                        POP EDI
00713191  5E                        POP ESI
00713192  5B                        POP EBX
00713193  8B E5                     MOV ESP,EBP
00713195  5D                        POP EBP
00713196  C2 08 00                  RET 0x8
LAB_00713199:
00713199  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0071319C  68 78 03 7F 00            PUSH 0x7f0378
007131A1  68 CC 4C 7A 00            PUSH 0x7a4ccc
007131A6  56                        PUSH ESI
007131A7  57                        PUSH EDI
007131A8  68 FF 08 00 00            PUSH 0x8ff
007131AD  68 90 01 7F 00            PUSH 0x7f0190
007131B2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007131B8  E8 13 A3 F9 FF            CALL 0x006ad4d0
007131BD  83 C4 18                  ADD ESP,0x18
007131C0  85 C0                     TEST EAX,EAX
007131C2  74 01                     JZ 0x007131c5
007131C4  CC                        INT3
LAB_007131c5:
007131C5  39 7D F4                  CMP dword ptr [EBP + -0xc],EDI
007131C8  74 0E                     JZ 0x007131d8
007131CA  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
007131CD  74 09                     JZ 0x007131d8
007131CF  8D 45 FC                  LEA EAX,[EBP + -0x4]
007131D2  50                        PUSH EAX
007131D3  E8 88 7E F9 FF            CALL 0x006ab060
LAB_007131d8:
007131D8  68 03 09 00 00            PUSH 0x903
007131DD  68 90 01 7F 00            PUSH 0x7f0190
007131E2  57                        PUSH EDI
007131E3  56                        PUSH ESI
007131E4  E8 57 2C F9 FF            CALL 0x006a5e40
LAB_007131e9:
007131E9  5F                        POP EDI
007131EA  5E                        POP ESI
007131EB  33 C0                     XOR EAX,EAX
007131ED  5B                        POP EBX
007131EE  8B E5                     MOV ESP,EBP
007131F0  5D                        POP EBP
007131F1  C2 08 00                  RET 0x8
