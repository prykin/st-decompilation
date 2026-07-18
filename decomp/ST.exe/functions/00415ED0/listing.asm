FUN_00415ed0:
00415ED0  55                        PUSH EBP
00415ED1  8B EC                     MOV EBP,ESP
00415ED3  6A FF                     PUSH -0x1
00415ED5  68 B0 01 79 00            PUSH 0x7901b0
00415EDA  68 64 D9 72 00            PUSH 0x72d964
00415EDF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00415EE5  50                        PUSH EAX
00415EE6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00415EED  83 EC 28                  SUB ESP,0x28
00415EF0  53                        PUSH EBX
00415EF1  56                        PUSH ESI
00415EF2  57                        PUSH EDI
00415EF3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00415EF6  8B F1                     MOV ESI,ECX
00415EF8  33 FF                     XOR EDI,EDI
00415EFA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00415EFD  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00415F00  3B 46 64                  CMP EAX,dword ptr [ESI + 0x64]
00415F03  75 20                     JNZ 0x00415f25
00415F05  3B C7                     CMP EAX,EDI
00415F07  7E 1C                     JLE 0x00415f25
00415F09  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00415F10  33 C0                     XOR EAX,EAX
00415F12  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00415F15  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00415F1C  5F                        POP EDI
00415F1D  5E                        POP ESI
00415F1E  5B                        POP EBX
00415F1F  8B E5                     MOV ESP,EBP
00415F21  5D                        POP EBP
00415F22  C2 08 00                  RET 0x8
LAB_00415f25:
00415F25  83 BE 8F 00 00 00 0A      CMP dword ptr [ESI + 0x8f],0xa
00415F2C  7E 07                     JLE 0x00415f35
00415F2E  8B CE                     MOV ECX,ESI
00415F30  E8 57 D4 FE FF            CALL 0x0040338c
LAB_00415f35:
00415F35  83 C8 FF                  OR EAX,0xffffffff
00415F38  89 86 8F 00 00 00         MOV dword ptr [ESI + 0x8f],EAX
00415F3E  83 7E 7A 01               CMP dword ptr [ESI + 0x7a],0x1
00415F42  75 27                     JNZ 0x00415f6b
00415F44  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00415F47  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00415F4D  89 7E 7A                  MOV dword ptr [ESI + 0x7a],EDI
00415F50  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00415F53  B8 01 00 00 00            MOV EAX,0x1
00415F58  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00415F5B  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00415F62  5F                        POP EDI
00415F63  5E                        POP ESI
00415F64  5B                        POP EBX
00415F65  8B E5                     MOV ESP,EBP
00415F67  5D                        POP EBP
00415F68  C2 08 00                  RET 0x8
LAB_00415f6b:
00415F6B  8A 56 4D                  MOV DL,byte ptr [ESI + 0x4d]
00415F6E  88 56 40                  MOV byte ptr [ESI + 0x40],DL
00415F71  66 8B 46 4E               MOV AX,word ptr [ESI + 0x4e]
00415F75  66 89 46 41               MOV word ptr [ESI + 0x41],AX
00415F79  66 8B 4E 50               MOV CX,word ptr [ESI + 0x50]
00415F7D  66 89 4E 43               MOV word ptr [ESI + 0x43],CX
00415F81  66 8B 56 52               MOV DX,word ptr [ESI + 0x52]
00415F85  66 89 56 45               MOV word ptr [ESI + 0x45],DX
00415F89  66 8B 46 54               MOV AX,word ptr [ESI + 0x54]
00415F8D  66 89 46 47               MOV word ptr [ESI + 0x47],AX
00415F91  66 8B 4E 56               MOV CX,word ptr [ESI + 0x56]
00415F95  66 89 4E 49               MOV word ptr [ESI + 0x49],CX
00415F99  66 8B 56 58               MOV DX,word ptr [ESI + 0x58]
00415F9D  66 89 56 4B               MOV word ptr [ESI + 0x4b],DX
00415FA1  8A 46 5A                  MOV AL,byte ptr [ESI + 0x5a]
00415FA4  88 46 4D                  MOV byte ptr [ESI + 0x4d],AL
00415FA7  8B 7E 68                  MOV EDI,dword ptr [ESI + 0x68]
00415FAA  47                        INC EDI
00415FAB  89 7E 68                  MOV dword ptr [ESI + 0x68],EDI
00415FAE  8B CF                     MOV ECX,EDI
00415FB0  0F BF 5E 34               MOVSX EBX,word ptr [ESI + 0x34]
00415FB4  41                        INC ECX
00415FB5  8B 7E 64                  MOV EDI,dword ptr [ESI + 0x64]
00415FB8  0F BF 46 3A               MOVSX EAX,word ptr [ESI + 0x3a]
00415FBC  2B C3                     SUB EAX,EBX
00415FBE  0F AF C1                  IMUL EAX,ECX
00415FC1  99                        CDQ
00415FC2  F7 FF                     IDIV EDI
00415FC4  03 D8                     ADD EBX,EAX
00415FC6  66 89 5E 4E               MOV word ptr [ESI + 0x4e],BX
00415FCA  0F BF 56 36               MOVSX EDX,word ptr [ESI + 0x36]
00415FCE  0F BF 46 3C               MOVSX EAX,word ptr [ESI + 0x3c]
00415FD2  2B C2                     SUB EAX,EDX
00415FD4  0F AF C1                  IMUL EAX,ECX
00415FD7  99                        CDQ
00415FD8  F7 FF                     IDIV EDI
00415FDA  0F BF 56 36               MOVSX EDX,word ptr [ESI + 0x36]
00415FDE  03 C2                     ADD EAX,EDX
00415FE0  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00415FE3  66 89 46 50               MOV word ptr [ESI + 0x50],AX
00415FE7  0F BF 56 38               MOVSX EDX,word ptr [ESI + 0x38]
00415FEB  0F BF 46 3E               MOVSX EAX,word ptr [ESI + 0x3e]
00415FEF  2B C2                     SUB EAX,EDX
00415FF1  0F AF C1                  IMUL EAX,ECX
00415FF4  99                        CDQ
00415FF5  F7 FF                     IDIV EDI
00415FF7  0F BF 4E 38               MOVSX ECX,word ptr [ESI + 0x38]
00415FFB  03 C1                     ADD EAX,ECX
00415FFD  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00416000  66 89 46 52               MOV word ptr [ESI + 0x52],AX
00416004  0F BF DB                  MOVSX EBX,BX
00416007  B8 79 19 8C 02            MOV EAX,0x28c1979
0041600C  F7 EB                     IMUL EBX
0041600E  D1 FA                     SAR EDX,0x1
00416010  8B CA                     MOV ECX,EDX
00416012  C1 E9 1F                  SHR ECX,0x1f
00416015  03 D1                     ADD EDX,ECX
00416017  8B CA                     MOV ECX,EDX
00416019  66 89 4E 54               MOV word ptr [ESI + 0x54],CX
0041601D  0F BF 55 D4               MOVSX EDX,word ptr [EBP + -0x2c]
00416021  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00416024  B8 79 19 8C 02            MOV EAX,0x28c1979
00416029  F7 EA                     IMUL EDX
0041602B  D1 FA                     SAR EDX,0x1
0041602D  8B C2                     MOV EAX,EDX
0041602F  C1 E8 1F                  SHR EAX,0x1f
00416032  03 D0                     ADD EDX,EAX
00416034  8B FA                     MOV EDI,EDX
00416036  66 89 7E 56               MOV word ptr [ESI + 0x56],DI
0041603A  0F BF 55 D0               MOVSX EDX,word ptr [EBP + -0x30]
0041603E  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00416041  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00416046  F7 EA                     IMUL EDX
00416048  C1 FA 06                  SAR EDX,0x6
0041604B  8B C2                     MOV EAX,EDX
0041604D  C1 E8 1F                  SHR EAX,0x1f
00416050  03 D0                     ADD EDX,EAX
00416052  66 89 56 58               MOV word ptr [ESI + 0x58],DX
00416056  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00416059  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0041605C  8D 4C C1 64               LEA ECX,[ECX + EAX*0x8 + 0x64]
00416060  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00416063  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
00416066  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00416069  8D 7C C7 64               LEA EDI,[EDI + EAX*0x8 + 0x64]
0041606D  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00416070  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00416073  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00416076  8D 14 D5 64 00 00 00      LEA EDX,[EDX*0x8 + 0x64]
0041607D  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00416080  8B C1                     MOV EAX,ECX
00416082  25 FF FF 00 00            AND EAX,0xffff
00416087  8D 48 E2                  LEA ECX,[EAX + -0x1e]
0041608A  3B D9                     CMP EBX,ECX
0041608C  7E 3B                     JLE 0x004160c9
0041608E  83 C0 1E                  ADD EAX,0x1e
00416091  3B D8                     CMP EBX,EAX
00416093  7D 34                     JGE 0x004160c9
00416095  81 E7 FF FF 00 00         AND EDI,0xffff
0041609B  8D 4F E2                  LEA ECX,[EDI + -0x1e]
0041609E  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
004160A1  3B C1                     CMP EAX,ECX
004160A3  7E 24                     JLE 0x004160c9
004160A5  83 C7 1E                  ADD EDI,0x1e
004160A8  3B C7                     CMP EAX,EDI
004160AA  7D 1D                     JGE 0x004160c9
004160AC  81 E2 FF FF 00 00         AND EDX,0xffff
004160B2  8D 4A E3                  LEA ECX,[EDX + -0x1d]
004160B5  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004160B8  3B C1                     CMP EAX,ECX
004160BA  7E 0D                     JLE 0x004160c9
004160BC  83 C2 1D                  ADD EDX,0x1d
004160BF  3B C2                     CMP EAX,EDX
004160C1  7D 06                     JGE 0x004160c9
004160C3  C6 46 5A 00               MOV byte ptr [ESI + 0x5a],0x0
004160C7  EB 04                     JMP 0x004160cd
LAB_004160c9:
004160C9  C6 46 5A 01               MOV byte ptr [ESI + 0x5a],0x1
LAB_004160cd:
004160CD  8A 46 4D                  MOV AL,byte ptr [ESI + 0x4d]
004160D0  84 C0                     TEST AL,AL
004160D2  75 11                     JNZ 0x004160e5
004160D4  80 7E 5A 01               CMP byte ptr [ESI + 0x5a],0x1
004160D8  75 0B                     JNZ 0x004160e5
004160DA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004160DD  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
004160E3  EB 09                     JMP 0x004160ee
LAB_004160e5:
004160E5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004160E8  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_004160ee:
004160EE  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
004160F2  66 3B 4E 54               CMP CX,word ptr [ESI + 0x54]
004160F6  75 1F                     JNZ 0x00416117
004160F8  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
004160FC  66 3B 56 56               CMP DX,word ptr [ESI + 0x56]
00416100  75 15                     JNZ 0x00416117
00416102  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
00416106  66 3B 46 58               CMP AX,word ptr [ESI + 0x58]
0041610A  75 0B                     JNZ 0x00416117
0041610C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0041610F  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
00416115  EB 09                     JMP 0x00416120
LAB_00416117:
00416117  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0041611A  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
LAB_00416120:
00416120  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00416123  3B 46 64                  CMP EAX,dword ptr [ESI + 0x64]
00416126  75 22                     JNZ 0x0041614a
00416128  FF 86 8F 00 00 00         INC dword ptr [ESI + 0x8f]
0041612E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00416135  33 C0                     XOR EAX,EAX
00416137  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0041613A  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00416141  5F                        POP EDI
00416142  5E                        POP ESI
00416143  5B                        POP EBX
00416144  8B E5                     MOV ESP,EBP
00416146  5D                        POP EBP
00416147  C2 08 00                  RET 0x8
LAB_0041614a:
0041614A  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00416151  B8 01 00 00 00            MOV EAX,0x1
00416156  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00416159  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00416160  5F                        POP EDI
00416161  5E                        POP ESI
00416162  5B                        POP EBX
00416163  8B E5                     MOV ESP,EBP
00416165  5D                        POP EBP
00416166  C2 08 00                  RET 0x8
