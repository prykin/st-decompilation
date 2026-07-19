FUN_005745e0:
005745E0  55                        PUSH EBP
005745E1  8B EC                     MOV EBP,ESP
005745E3  83 EC 24                  SUB ESP,0x24
005745E6  53                        PUSH EBX
005745E7  56                        PUSH ESI
005745E8  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005745EB  57                        PUSH EDI
005745EC  33 FF                     XOR EDI,EDI
005745EE  66 39 7E 08               CMP word ptr [ESI + 0x8],DI
005745F2  0F 84 67 02 00 00         JZ 0x0057485f
005745F8  66 8B 46 4E               MOV AX,word ptr [ESI + 0x4e]
005745FC  F6 C4 40                  TEST AH,0x40
005745FF  0F 85 5A 02 00 00         JNZ 0x0057485f
00574605  F6 C4 20                  TEST AH,0x20
00574608  74 09                     JZ 0x00574613
0057460A  F6 C4 10                  TEST AH,0x10
0057460D  0F 85 4C 02 00 00         JNZ 0x0057485f
LAB_00574613:
00574613  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00574616  8B 83 4D 04 00 00         MOV EAX,dword ptr [EBX + 0x44d]
0057461C  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
LAB_0057461f:
0057461F  8B 8B 4D 04 00 00         MOV ECX,dword ptr [EBX + 0x44d]
00574625  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00574628  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0057462B  3B D0                     CMP EDX,EAX
0057462D  73 22                     JNC 0x00574651
0057462F  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00574632  0F AF C2                  IMUL EAX,EDX
00574635  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00574638  8D 52 01                  LEA EDX,[EDX + 0x1]
0057463B  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
0057463E  74 11                     JZ 0x00574651
00574640  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
00574643  8B 10                     MOV EDX,dword ptr [EAX]
00574645  3B CA                     CMP ECX,EDX
00574647  75 D6                     JNZ 0x0057461f
00574649  3B C7                     CMP EAX,EDI
0057464B  0F 85 08 02 00 00         JNZ 0x00574859
FUN_005745e0::cf_break_loop_00574651:
00574651  0F BF 46 06               MOVSX EAX,word ptr [ESI + 0x6]
00574655  0F BF 56 04               MOVSX EDX,word ptr [ESI + 0x4]
00574659  0F BF 4E 08               MOVSX ECX,word ptr [ESI + 0x8]
0057465D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00574660  66 89 7E 04               MOV word ptr [ESI + 0x4],DI
00574664  66 89 7E 06               MOV word ptr [ESI + 0x6],DI
00574668  66 89 7E 08               MOV word ptr [ESI + 0x8],DI
0057466C  A1 0C 76 80 00            MOV EAX,[0x0080760c]
00574671  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00574674  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00574677  8B 90 40 01 00 00         MOV EDX,dword ptr [EAX + 0x140]
0057467D  8D 88 40 01 00 00         LEA ECX,[EAX + 0x140]
00574683  89 16                     MOV dword ptr [ESI],EDX
00574685  89 31                     MOV dword ptr [ECX],ESI
00574687  8B 88 3C 01 00 00         MOV ECX,dword ptr [EAX + 0x13c]
0057468D  41                        INC ECX
0057468E  89 88 3C 01 00 00         MOV dword ptr [EAX + 0x13c],ECX
00574694  8B 0D 0C 76 80 00         MOV ECX,dword ptr [0x0080760c]
0057469A  E8 41 95 16 00            CALL 0x006ddbe0
0057469F  A1 0C 76 80 00            MOV EAX,[0x0080760c]
005746A4  C7 80 24 01 00 00 03 00 00 00  MOV dword ptr [EAX + 0x124],0x3
005746AE  8B 0D 0C 76 80 00         MOV ECX,dword ptr [0x0080760c]
005746B4  E8 97 96 16 00            CALL 0x006ddd50
005746B9  8B 0D 0C 76 80 00         MOV ECX,dword ptr [0x0080760c]
005746BF  C7 81 24 01 00 00 04 00 00 00  MOV dword ptr [ECX + 0x124],0x4
005746C9  8B 0D 0C 76 80 00         MOV ECX,dword ptr [0x0080760c]
005746CF  E8 7C 96 16 00            CALL 0x006ddd50
005746D4  A1 0C 76 80 00            MOV EAX,[0x0080760c]
005746D9  66 8B 55 EC               MOV DX,word ptr [EBP + -0x14]
005746DD  66 8B 4D F4               MOV CX,word ptr [EBP + -0xc]
005746E1  89 B8 40 01 00 00         MOV dword ptr [EAX + 0x140],EDI
005746E7  89 B8 3C 01 00 00         MOV dword ptr [EAX + 0x13c],EDI
005746ED  66 8B 45 F0               MOV AX,word ptr [EBP + -0x10]
005746F1  66 89 56 04               MOV word ptr [ESI + 0x4],DX
005746F5  66 89 46 06               MOV word ptr [ESI + 0x6],AX
005746F9  33 C0                     XOR EAX,EAX
005746FB  66 89 4E 08               MOV word ptr [ESI + 0x8],CX
005746FF  8A 43 04                  MOV AL,byte ptr [EBX + 0x4]
00574702  8B D0                     MOV EDX,EAX
00574704  0F AF D0                  IMUL EDX,EAX
00574707  52                        PUSH EDX
00574708  E8 03 65 13 00            CALL 0x006aac10
0057470D  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
00574710  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00574713  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00574716  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00574719  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0057471C  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0057471F  EB 09                     JMP 0x0057472a
LAB_00574721:
00574721  33 FF                     XOR EDI,EDI
00574723  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00574726  EB 02                     JMP 0x0057472a
LAB_00574728:
00574728  33 FF                     XOR EDI,EDI
LAB_0057472a:
0057472A  33 D2                     XOR EDX,EDX
0057472C  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0057472F  8A 53 04                  MOV DL,byte ptr [EBX + 0x4]
00574732  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00574735  8B FA                     MOV EDI,EDX
00574737  85 FF                     TEST EDI,EDI
00574739  0F 8E DD 00 00 00         JLE 0x0057481c
LAB_0057473f:
0057473F  8B CF                     MOV ECX,EDI
00574741  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00574744  0F AF 4D F4               IMUL ECX,dword ptr [EBP + -0xc]
00574748  A1 0C 76 80 00            MOV EAX,[0x0080760c]
0057474D  03 CE                     ADD ECX,ESI
0057474F  8B DF                     MOV EBX,EDI
00574751  8B 70 28                  MOV ESI,dword ptr [EAX + 0x28]
00574754  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00574757  0F AF 5D F8               IMUL EBX,dword ptr [EBP + -0x8]
0057475B  0F AF F1                  IMUL ESI,ECX
0057475E  8B C7                     MOV EAX,EDI
00574760  03 F2                     ADD ESI,EDX
00574762  0F AF C1                  IMUL EAX,ECX
00574765  99                        CDQ
00574766  2B C2                     SUB EAX,EDX
00574768  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0057476B  8B C8                     MOV ECX,EAX
0057476D  8B C3                     MOV EAX,EBX
0057476F  99                        CDQ
00574770  83 E2 03                  AND EDX,0x3
00574773  33 DB                     XOR EBX,EBX
00574775  D1 F9                     SAR ECX,0x1
00574777  03 C2                     ADD EAX,EDX
00574779  8B D1                     MOV EDX,ECX
0057477B  8B C8                     MOV ECX,EAX
0057477D  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00574780  C1 F9 02                  SAR ECX,0x2
00574783  03 C2                     ADD EAX,EDX
00574785  03 C8                     ADD ECX,EAX
00574787  85 FF                     TEST EDI,EDI
00574789  7E 73                     JLE 0x005747fe
0057478B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0057478E  03 F0                     ADD ESI,EAX
LAB_00574790:
00574790  33 C0                     XOR EAX,EAX
00574792  8A 06                     MOV AL,byte ptr [ESI]
00574794  85 C0                     TEST EAX,EAX
00574796  74 58                     JZ 0x005747f0
00574798  3D FF 00 00 00            CMP EAX,0xff
0057479D  75 2C                     JNZ 0x005747cb
0057479F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005747A2  40                        INC EAX
005747A3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005747A6  8B C3                     MOV EAX,EBX
005747A8  99                        CDQ
005747A9  83 E2 03                  AND EDX,0x3
005747AC  03 C2                     ADD EAX,EDX
005747AE  8B D3                     MOV EDX,EBX
005747B0  C1 F8 02                  SAR EAX,0x2
005747B3  81 E2 03 00 00 80         AND EDX,0x80000003
005747B9  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
005747BC  79 05                     JNS 0x005747c3
005747BE  4A                        DEC EDX
005747BF  83 CA FC                  OR EDX,0xfffffffc
005747C2  42                        INC EDX
LAB_005747c3:
005747C3  8A 82 A4 A6 7C 00         MOV AL,byte ptr [EDX + 0x7ca6a4]
005747C9  EB 23                     JMP 0x005747ee
LAB_005747cb:
005747CB  8B C3                     MOV EAX,EBX
005747CD  99                        CDQ
005747CE  83 E2 03                  AND EDX,0x3
005747D1  03 C2                     ADD EAX,EDX
005747D3  8B D3                     MOV EDX,EBX
005747D5  C1 F8 02                  SAR EAX,0x2
005747D8  81 E2 03 00 00 80         AND EDX,0x80000003
005747DE  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
005747E1  79 05                     JNS 0x005747e8
005747E3  4A                        DEC EDX
005747E4  83 CA FC                  OR EDX,0xfffffffc
005747E7  42                        INC EDX
LAB_005747e8:
005747E8  8A 82 A8 A6 7C 00         MOV AL,byte ptr [EDX + 0x7ca6a8]
LAB_005747ee:
005747EE  08 07                     OR byte ptr [EDI],AL
LAB_005747f0:
005747F0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005747F3  33 D2                     XOR EDX,EDX
005747F5  43                        INC EBX
005747F6  46                        INC ESI
005747F7  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
005747FA  3B DA                     CMP EBX,EDX
005747FC  7C 92                     JL 0x00574790
LAB_005747fe:
005747FE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00574801  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00574804  33 C9                     XOR ECX,ECX
00574806  40                        INC EAX
00574807  8A 4A 04                  MOV CL,byte ptr [EDX + 0x4]
0057480A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0057480D  8B F9                     MOV EDI,ECX
0057480F  3B C7                     CMP EAX,EDI
00574811  0F 8C 28 FF FF FF         JL 0x0057473f
00574817  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0057481A  8B DA                     MOV EBX,EDX
LAB_0057481c:
0057481C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0057481F  40                        INC EAX
00574820  83 F8 02                  CMP EAX,0x2
00574823  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00574826  0F 8C FC FE FF FF         JL 0x00574728
0057482C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0057482F  40                        INC EAX
00574830  83 F8 02                  CMP EAX,0x2
00574833  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00574836  0F 8C E5 FE FF FF         JL 0x00574721
0057483C  8B 8B 4D 04 00 00         MOV ECX,dword ptr [EBX + 0x44d]
00574842  8D 45 DC                  LEA EAX,[EBP + -0x24]
00574845  50                        PUSH EAX
00574846  51                        PUSH ECX
00574847  E8 74 99 13 00            CALL 0x006ae1c0
0057484C  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0057484F  5F                        POP EDI
00574850  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
00574853  5E                        POP ESI
00574854  5B                        POP EBX
00574855  8B E5                     MOV ESP,EBP
00574857  5D                        POP EBP
00574858  C3                        RET
LAB_00574859:
00574859  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0057485C  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
LAB_0057485f:
0057485F  5F                        POP EDI
00574860  5E                        POP ESI
00574861  5B                        POP EBX
00574862  8B E5                     MOV ESP,EBP
00574864  5D                        POP EBP
00574865  C3                        RET
