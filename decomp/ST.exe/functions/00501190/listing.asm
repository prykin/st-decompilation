CPanelTy::PaintBCapacity:
00501190  55                        PUSH EBP
00501191  8B EC                     MOV EBP,ESP
00501193  83 EC 54                  SUB ESP,0x54
00501196  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0050119B  53                        PUSH EBX
0050119C  56                        PUSH ESI
0050119D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005011A0  57                        PUSH EDI
005011A1  8D 55 B0                  LEA EDX,[EBP + -0x50]
005011A4  8D 4D AC                  LEA ECX,[EBP + -0x54]
005011A7  6A 00                     PUSH 0x0
005011A9  52                        PUSH EDX
005011AA  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005011AD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005011B3  E8 38 C6 22 00            CALL 0x0072d7f0
005011B8  8B F0                     MOV ESI,EAX
005011BA  83 C4 08                  ADD ESP,0x8
005011BD  85 F6                     TEST ESI,ESI
005011BF  0F 85 89 01 00 00         JNZ 0x0050134e
005011C5  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005011C8  50                        PUSH EAX
005011C9  8B 86 B2 02 00 00         MOV EAX,dword ptr [ESI + 0x2b2]
005011CF  50                        PUSH EAX
005011D0  E8 CB A1 20 00            CALL 0x0070b3a0
005011D5  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
005011DB  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
005011DE  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005011E1  8B 8E B2 02 00 00         MOV ECX,dword ptr [ESI + 0x2b2]
005011E7  2B D7                     SUB EDX,EDI
005011E9  8B C2                     MOV EAX,EDX
005011EB  99                        CDQ
005011EC  2B C2                     SUB EAX,EDX
005011EE  8B D8                     MOV EBX,EAX
005011F0  A0 4E 87 80 00            MOV AL,[0x0080874e]
005011F5  D1 FB                     SAR EBX,0x1
005011F7  FE C8                     DEC AL
005011F9  F6 D8                     NEG AL
005011FB  1B C0                     SBB EAX,EAX
005011FD  83 E0 06                  AND EAX,0x6
00501200  50                        PUSH EAX
00501201  51                        PUSH ECX
00501202  E8 99 A1 20 00            CALL 0x0070b3a0
00501207  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
0050120D  50                        PUSH EAX
0050120E  6A 01                     PUSH 0x1
00501210  6A 50                     PUSH 0x50
00501212  53                        PUSH EBX
00501213  52                        PUSH EDX
00501214  E8 10 20 F0 FF            CALL 0x00403229
00501219  8A 86 B6 0B 00 00         MOV AL,byte ptr [ESI + 0xbb6]
0050121F  83 C4 24                  ADD ESP,0x24
00501222  84 C0                     TEST AL,AL
00501224  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
00501228  76 42                     JBE 0x0050126c
LAB_0050122a:
0050122A  8B 86 B6 02 00 00         MOV EAX,dword ptr [ESI + 0x2b6]
00501230  6A 01                     PUSH 0x1
00501232  50                        PUSH EAX
00501233  E8 68 A1 20 00            CALL 0x0070b3a0
00501238  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0050123B  50                        PUSH EAX
0050123C  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00501242  81 E1 FF 00 00 00         AND ECX,0xff
00501248  6A 01                     PUSH 0x1
0050124A  6A 53                     PUSH 0x53
0050124C  8D 54 8B 03               LEA EDX,[EBX + ECX*0x4 + 0x3]
00501250  52                        PUSH EDX
00501251  50                        PUSH EAX
00501252  E8 D2 1F F0 FF            CALL 0x00403229
00501257  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
0050125A  8A 8E B6 0B 00 00         MOV CL,byte ptr [ESI + 0xbb6]
00501260  83 C4 1C                  ADD ESP,0x1c
00501263  FE C0                     INC AL
00501265  3A C1                     CMP AL,CL
00501267  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
0050126A  72 BE                     JC 0x0050122a
LAB_0050126c:
0050126C  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0050126F  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
00501272  33 D2                     XOR EDX,EDX
00501274  81 E7 FF 00 00 00         AND EDI,0xff
0050127A  8A 96 B7 0B 00 00         MOV DL,byte ptr [ESI + 0xbb7]
00501280  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
00501283  03 D7                     ADD EDX,EDI
00501285  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00501288  3B FA                     CMP EDI,EDX
0050128A  7D 49                     JGE 0x005012d5
LAB_0050128c:
0050128C  8B 86 B6 02 00 00         MOV EAX,dword ptr [ESI + 0x2b6]
00501292  6A 05                     PUSH 0x5
00501294  50                        PUSH EAX
00501295  E8 06 A1 20 00            CALL 0x0070b3a0
0050129A  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
005012A0  50                        PUSH EAX
005012A1  6A 01                     PUSH 0x1
005012A3  8D 4C BB 03               LEA ECX,[EBX + EDI*0x4 + 0x3]
005012A7  6A 53                     PUSH 0x53
005012A9  51                        PUSH ECX
005012AA  52                        PUSH EDX
005012AB  E8 79 1F F0 FF            CALL 0x00403229
005012B0  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
005012B3  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005012B6  83 C4 1C                  ADD ESP,0x1c
005012B9  FE C1                     INC CL
005012BB  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
005012BE  33 C0                     XOR EAX,EAX
005012C0  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005012C3  8A 86 B7 0B 00 00         MOV AL,byte ptr [ESI + 0xbb7]
005012C9  81 E7 FF 00 00 00         AND EDI,0xff
005012CF  03 C2                     ADD EAX,EDX
005012D1  3B F8                     CMP EDI,EAX
005012D3  7C B7                     JL 0x0050128c
LAB_005012d5:
005012D5  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005012D8  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
005012DB  33 D2                     XOR EDX,EDX
005012DD  81 E7 FF 00 00 00         AND EDI,0xff
005012E3  8A 96 B5 0B 00 00         MOV DL,byte ptr [ESI + 0xbb5]
005012E9  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
005012EC  03 D7                     ADD EDX,EDI
005012EE  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
005012F1  3B FA                     CMP EDI,EDX
005012F3  7D 49                     JGE 0x0050133e
LAB_005012f5:
005012F5  8B 86 B6 02 00 00         MOV EAX,dword ptr [ESI + 0x2b6]
005012FB  6A 02                     PUSH 0x2
005012FD  50                        PUSH EAX
005012FE  E8 9D A0 20 00            CALL 0x0070b3a0
00501303  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
00501309  50                        PUSH EAX
0050130A  6A 01                     PUSH 0x1
0050130C  8D 4C BB 03               LEA ECX,[EBX + EDI*0x4 + 0x3]
00501310  6A 53                     PUSH 0x53
00501312  51                        PUSH ECX
00501313  52                        PUSH EDX
00501314  E8 10 1F F0 FF            CALL 0x00403229
00501319  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
0050131C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0050131F  83 C4 1C                  ADD ESP,0x1c
00501322  FE C1                     INC CL
00501324  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
00501327  33 C0                     XOR EAX,EAX
00501329  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0050132C  8A 86 B5 0B 00 00         MOV AL,byte ptr [ESI + 0xbb5]
00501332  81 E7 FF 00 00 00         AND EDI,0xff
00501338  03 C2                     ADD EAX,EDX
0050133A  3B F8                     CMP EDI,EAX
0050133C  7C B7                     JL 0x005012f5
LAB_0050133e:
0050133E  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00501341  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00501347  5F                        POP EDI
00501348  5E                        POP ESI
00501349  5B                        POP EBX
0050134A  8B E5                     MOV ESP,EBP
0050134C  5D                        POP EBP
0050134D  C3                        RET
LAB_0050134e:
0050134E  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00501351  68 68 25 7C 00            PUSH 0x7c2568
00501356  68 CC 4C 7A 00            PUSH 0x7a4ccc
0050135B  56                        PUSH ESI
0050135C  6A 00                     PUSH 0x0
0050135E  6A 32                     PUSH 0x32
00501360  68 24 25 7C 00            PUSH 0x7c2524
00501365  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0050136B  E8 60 C1 1A 00            CALL 0x006ad4d0
00501370  83 C4 18                  ADD ESP,0x18
00501373  85 C0                     TEST EAX,EAX
00501375  74 01                     JZ 0x00501378
00501377  CC                        INT3
LAB_00501378:
00501378  6A 32                     PUSH 0x32
0050137A  68 24 25 7C 00            PUSH 0x7c2524
0050137F  6A 00                     PUSH 0x0
00501381  56                        PUSH ESI
00501382  E8 B9 4A 1A 00            CALL 0x006a5e40
00501387  5F                        POP EDI
00501388  5E                        POP ESI
00501389  5B                        POP EBX
0050138A  8B E5                     MOV ESP,EBP
0050138C  5D                        POP EBP
0050138D  C3                        RET
