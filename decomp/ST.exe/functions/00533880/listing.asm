OptPanelTy::Question:
00533880  55                        PUSH EBP
00533881  8B EC                     MOV EBP,ESP
00533883  83 EC 48                  SUB ESP,0x48
00533886  66 83 B9 72 01 00 00 02   CMP word ptr [ECX + 0x172],0x2
0053388E  56                        PUSH ESI
0053388F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00533892  0F 85 1C 01 00 00         JNZ 0x005339b4
00533898  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053389D  8D 55 BC                  LEA EDX,[EBP + -0x44]
005338A0  8D 4D B8                  LEA ECX,[EBP + -0x48]
005338A3  6A 00                     PUSH 0x0
005338A5  52                        PUSH EDX
005338A6  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005338A9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005338AF  E8 3C 9F 1F 00            CALL 0x0072d7f0
005338B4  8B F0                     MOV ESI,EAX
005338B6  83 C4 08                  ADD ESP,0x8
005338B9  85 F6                     TEST ESI,ESI
005338BB  0F 85 B4 00 00 00         JNZ 0x00533975
005338C1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005338C4  8B C1                     MOV EAX,ECX
005338C6  25 FF 00 00 00            AND EAX,0xff
005338CB  83 E8 04                  SUB EAX,0x4
005338CE  74 2A                     JZ 0x005338fa
005338D0  48                        DEC EAX
005338D1  74 18                     JZ 0x005338eb
005338D3  83 E8 02                  SUB EAX,0x2
005338D6  0F 85 89 00 00 00         JNZ 0x00533965
005338DC  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005338DF  C7 86 A5 01 00 00 72 42 00 00  MOV dword ptr [ESI + 0x1a5],0x4272
005338E9  EB 45                     JMP 0x00533930
LAB_005338eb:
005338EB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005338EE  C7 86 A5 01 00 00 85 3E 00 00  MOV dword ptr [ESI + 0x1a5],0x3e85
005338F8  EB 36                     JMP 0x00533930
LAB_005338fa:
005338FA  A0 A0 67 80 00            MOV AL,[0x008067a0]
005338FF  84 C0                     TEST AL,AL
00533901  74 1F                     JZ 0x00533922
00533903  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00533908  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
0053390E  8B 70 34                  MOV ESI,dword ptr [EAX + 0x34]
00533911  2B D6                     SUB EDX,ESI
00533913  81 FA 70 17 00 00         CMP EDX,0x1770
00533919  1B C0                     SBB EAX,EAX
0053391B  05 96 3E 00 00            ADD EAX,0x3e96
00533920  EB 05                     JMP 0x00533927
LAB_00533922:
00533922  B8 84 3E 00 00            MOV EAX,0x3e84
LAB_00533927:
00533927  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053392A  89 86 A5 01 00 00         MOV dword ptr [ESI + 0x1a5],EAX
LAB_00533930:
00533930  33 C0                     XOR EAX,EAX
00533932  80 F9 07                  CMP CL,0x7
00533935  0F 95 C0                  SETNZ AL
00533938  88 8E AB 01 00 00         MOV byte ptr [ESI + 0x1ab],CL
0053393E  8B CE                     MOV ECX,ESI
00533940  89 86 A0 01 00 00         MOV dword ptr [ESI + 0x1a0],EAX
00533946  C6 86 A9 01 00 00 00      MOV byte ptr [ESI + 0x1a9],0x0
0053394D  C6 86 A4 01 00 00 05      MOV byte ptr [ESI + 0x1a4],0x5
00533954  E8 F8 EE EC FF            CALL 0x00402851
00533959  68 FF 00 00 00            PUSH 0xff
0053395E  8B CE                     MOV ECX,ESI
00533960  E8 DD 20 ED FF            CALL 0x00405a42
LAB_00533965:
00533965  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00533968  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053396E  5E                        POP ESI
0053396F  8B E5                     MOV ESP,EBP
00533971  5D                        POP EBP
00533972  C2 04 00                  RET 0x4
LAB_00533975:
00533975  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00533978  68 F8 72 7C 00            PUSH 0x7c72f8
0053397D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00533982  56                        PUSH ESI
00533983  6A 00                     PUSH 0x0
00533985  68 90 04 00 00            PUSH 0x490
0053398A  68 A0 70 7C 00            PUSH 0x7c70a0
0053398F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00533995  E8 36 9B 17 00            CALL 0x006ad4d0
0053399A  83 C4 18                  ADD ESP,0x18
0053399D  85 C0                     TEST EAX,EAX
0053399F  74 01                     JZ 0x005339a2
005339A1  CC                        INT3
LAB_005339a2:
005339A2  68 90 04 00 00            PUSH 0x490
005339A7  68 A0 70 7C 00            PUSH 0x7c70a0
005339AC  6A 00                     PUSH 0x0
005339AE  56                        PUSH ESI
005339AF  E8 8C 24 17 00            CALL 0x006a5e40
LAB_005339b4:
005339B4  5E                        POP ESI
005339B5  8B E5                     MOV ESP,EBP
005339B7  5D                        POP EBP
005339B8  C2 04 00                  RET 0x4
