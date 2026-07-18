FUN_00484020:
00484020  55                        PUSH EBP
00484021  8B EC                     MOV EBP,ESP
00484023  83 EC 54                  SUB ESP,0x54
00484026  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00484029  53                        PUSH EBX
0048402A  33 DB                     XOR EBX,EBX
0048402C  56                        PUSH ESI
0048402D  83 E8 06                  SUB EAX,0x6
00484030  57                        PUSH EDI
00484031  8B F1                     MOV ESI,ECX
00484033  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
00484036  74 32                     JZ 0x0048406a
00484038  48                        DEC EAX
00484039  74 1F                     JZ 0x0048405a
0048403B  48                        DEC EAX
0048403C  74 0C                     JZ 0x0048404a
0048403E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00484045  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00484048  EB 2E                     JMP 0x00484078
LAB_0048404a:
0048404A  C7 45 FC 98 00 00 00      MOV dword ptr [EBP + -0x4],0x98
00484051  C7 45 F8 48 97 7A 00      MOV dword ptr [EBP + -0x8],0x7a9748
00484058  EB 1E                     JMP 0x00484078
LAB_0048405a:
0048405A  C7 45 FC 2C 00 00 00      MOV dword ptr [EBP + -0x4],0x2c
00484061  C7 45 F8 40 96 7A 00      MOV dword ptr [EBP + -0x8],0x7a9640
00484068  EB 0E                     JMP 0x00484078
LAB_0048406a:
0048406A  C7 45 FC 2C 00 00 00      MOV dword ptr [EBP + -0x4],0x2c
00484071  C7 45 F8 38 95 7A 00      MOV dword ptr [EBP + -0x8],0x7a9538
LAB_00484078:
00484078  66 8B 86 00 08 00 00      MOV AX,word ptr [ESI + 0x800]
0048407F  66 8B 8E 02 08 00 00      MOV CX,word ptr [ESI + 0x802]
00484086  66 8B 96 04 08 00 00      MOV DX,word ptr [ESI + 0x804]
0048408D  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00484094  66 3B C3                  CMP AX,BX
00484097  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0048409A  7C 5C                     JL 0x004840f8
0048409C  66 3B C7                  CMP AX,DI
0048409F  7D 57                     JGE 0x004840f8
004840A1  66 3B CB                  CMP CX,BX
004840A4  7C 52                     JL 0x004840f8
004840A6  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004840AD  7D 49                     JGE 0x004840f8
004840AF  66 85 D2                  TEST DX,DX
004840B2  7C 44                     JL 0x004840f8
004840B4  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
004840BB  7D 3B                     JGE 0x004840f8
004840BD  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004840C4  0F BF FA                  MOVSX EDI,DX
004840C7  0F AF FB                  IMUL EDI,EBX
004840CA  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
004840D1  0F BF C9                  MOVSX ECX,CX
004840D4  0F AF CB                  IMUL ECX,EBX
004840D7  03 F9                     ADD EDI,ECX
004840D9  0F BF C8                  MOVSX ECX,AX
004840DC  03 F9                     ADD EDI,ECX
004840DE  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004840E4  8B 0C F9                  MOV ECX,dword ptr [ECX + EDI*0x8]
004840E7  85 C9                     TEST ECX,ECX
004840E9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004840EC  75 6C                     JNZ 0x0048415a
004840EE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004840F1  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
LAB_004840f8:
004840F8  66 85 C0                  TEST AX,AX
004840FB  7C 4F                     JL 0x0048414c
004840FD  66 3B C7                  CMP AX,DI
00484100  7D 4A                     JGE 0x0048414c
00484102  66 85 C9                  TEST CX,CX
00484105  7C 45                     JL 0x0048414c
00484107  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0048410E  7D 3C                     JGE 0x0048414c
00484110  66 85 D2                  TEST DX,DX
00484113  7C 37                     JL 0x0048414c
00484115  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0048411C  7D 2E                     JGE 0x0048414c
0048411E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00484125  0F BF D2                  MOVSX EDX,DX
00484128  0F BF C9                  MOVSX ECX,CX
0048412B  0F AF D3                  IMUL EDX,EBX
0048412E  0F BF FF                  MOVSX EDI,DI
00484131  0F AF CF                  IMUL ECX,EDI
00484134  0F BF C0                  MOVSX EAX,AX
00484137  03 D1                     ADD EDX,ECX
00484139  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0048413F  03 D0                     ADD EDX,EAX
00484141  8B 44 D1 04               MOV EAX,dword ptr [ECX + EDX*0x8 + 0x4]
00484145  85 C0                     TEST EAX,EAX
00484147  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0048414A  75 0B                     JNZ 0x00484157
LAB_0048414c:
0048414C  33 C0                     XOR EAX,EAX
0048414E  5F                        POP EDI
0048414F  5E                        POP ESI
00484150  5B                        POP EBX
00484151  8B E5                     MOV ESP,EBP
00484153  5D                        POP EBP
00484154  C2 10 00                  RET 0x10
LAB_00484157:
00484157  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0048415a:
0048415A  8D 55 08                  LEA EDX,[EBP + 0x8]
0048415D  8D 45 EC                  LEA EAX,[EBP + -0x14]
00484160  52                        PUSH EDX
00484161  8D 55 F0                  LEA EDX,[EBP + -0x10]
00484164  50                        PUSH EAX
00484165  52                        PUSH EDX
00484166  E8 78 F0 F7 FF            CALL 0x004031e3
0048416B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0048416E  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
00484175  85 C0                     TEST EAX,EAX
00484177  0F 8E 19 03 00 00         JLE 0x00484496
0048417D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00484180  8D 48 02                  LEA ECX,[EAX + 0x2]
00484183  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_00484186:
00484186  66 8B 41 02               MOV AX,word ptr [ECX + 0x2]
0048418A  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0048418D  66 03 46 4B               ADD AX,word ptr [ESI + 0x4b]
00484191  66 85 C0                  TEST AX,AX
00484194  66 89 03                  MOV word ptr [EBX],AX
00484197  0F 8C D6 02 00 00         JL 0x00484473
0048419D  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
004841A4  0F BF C0                  MOVSX EAX,AX
004841A7  4A                        DEC EDX
004841A8  3B C2                     CMP EAX,EDX
004841AA  0F 8F C3 02 00 00         JG 0x00484473
004841B0  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
004841B4  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004841B7  66 03 01                  ADD AX,word ptr [ECX]
004841BA  66 85 C0                  TEST AX,AX
004841BD  66 89 07                  MOV word ptr [EDI],AX
004841C0  0F 8C AD 02 00 00         JL 0x00484473
004841C6  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004841CD  0F BF C0                  MOVSX EAX,AX
004841D0  4A                        DEC EDX
004841D1  3B C2                     CMP EAX,EDX
004841D3  0F 8F 9A 02 00 00         JG 0x00484473
004841D9  66 8B 41 FE               MOV AX,word ptr [ECX + -0x2]
004841DD  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004841E0  66 03 46 47               ADD AX,word ptr [ESI + 0x47]
004841E4  66 85 C0                  TEST AX,AX
004841E7  66 89 01                  MOV word ptr [ECX],AX
004841EA  0F 8C 83 02 00 00         JL 0x00484473
004841F0  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004841F7  0F BF D0                  MOVSX EDX,AX
004841FA  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
004841FD  49                        DEC ECX
004841FE  3B D1                     CMP EDX,ECX
00484200  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00484203  0F 8F 6A 02 00 00         JG 0x00484473
00484209  66 8B 0F                  MOV CX,word ptr [EDI]
0048420C  66 8B 13                  MOV DX,word ptr [EBX]
0048420F  0F BF 1D 78 B2 7F 00      MOVSX EBX,word ptr [0x007fb278]
00484216  0F BF F9                  MOVSX EDI,CX
00484219  0F AF FB                  IMUL EDI,EBX
0048421C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0048421F  0F BF DA                  MOVSX EBX,DX
00484222  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
00484229  0F AF DA                  IMUL EBX,EDX
0048422C  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0048422F  03 D7                     ADD EDX,EDI
00484231  03 DA                     ADD EBX,EDX
00484233  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
00484239  66 83 3C 5A 00            CMP word ptr [EDX + EBX*0x2],0x0
0048423E  0F 8C 2F 02 00 00         JL 0x00484473
00484244  66 85 C0                  TEST AX,AX
00484247  7C 53                     JL 0x0048429c
00484249  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00484250  7D 4A                     JGE 0x0048429c
00484252  66 85 C9                  TEST CX,CX
00484255  7C 45                     JL 0x0048429c
00484257  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0048425E  7D 3C                     JGE 0x0048429c
00484260  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00484263  66 85 DB                  TEST BX,BX
00484266  7C 37                     JL 0x0048429f
00484268  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
0048426F  7D 2E                     JGE 0x0048429f
00484271  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00484278  0F BF D3                  MOVSX EDX,BX
0048427B  0F AF D7                  IMUL EDX,EDI
0048427E  0F BF F9                  MOVSX EDI,CX
00484281  0F AF 7D DC               IMUL EDI,dword ptr [EBP + -0x24]
00484285  03 D7                     ADD EDX,EDI
00484287  0F BF F8                  MOVSX EDI,AX
0048428A  03 D7                     ADD EDX,EDI
0048428C  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
00484292  83 3C D7 00               CMP dword ptr [EDI + EDX*0x8],0x0
00484296  0F 85 D7 01 00 00         JNZ 0x00484473
LAB_0048429c:
0048429C  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0048429f:
0048429F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004842A2  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004842A5  8D 7C D0 64               LEA EDI,[EAX + EDX*0x8 + 0x64]
004842A9  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
004842AC  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
004842AF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004842B2  8D 4C C1 64               LEA ECX,[ECX + EAX*0x8 + 0x64]
004842B6  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
004842B9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004842BC  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004842BF  8D 1C D5 64 00 00 00      LEA EBX,[EDX*0x8 + 0x64]
004842C6  0F BF 55 08               MOVSX EDX,word ptr [EBP + 0x8]
004842CA  52                        PUSH EDX
004842CB  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
004842CE  0F BF 55 EC               MOVSX EDX,word ptr [EBP + -0x14]
004842D2  52                        PUSH EDX
004842D3  0F BF 55 F0               MOVSX EDX,word ptr [EBP + -0x10]
004842D7  0F BF C3                  MOVSX EAX,BX
004842DA  52                        PUSH EDX
004842DB  50                        PUSH EAX
004842DC  0F BF C1                  MOVSX EAX,CX
004842DF  0F BF CF                  MOVSX ECX,DI
004842E2  50                        PUSH EAX
004842E3  51                        PUSH ECX
004842E4  E8 24 8C 22 00            CALL 0x006acf0d
004842E9  0F BF 96 14 08 00 00      MOVSX EDX,word ptr [ESI + 0x814]
004842F0  8B C8                     MOV ECX,EAX
004842F2  83 C4 18                  ADD ESP,0x18
004842F5  3B CA                     CMP ECX,EDX
004842F7  0F 8F 76 01 00 00         JG 0x00484473
004842FD  85 C9                     TEST ECX,ECX
004842FF  7E 1F                     JLE 0x00484320
00484301  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
00484305  0F BF D3                  MOVSX EDX,BX
00484308  2B C2                     SUB EAX,EDX
0048430A  99                        CDQ
0048430B  33 C2                     XOR EAX,EDX
0048430D  2B C2                     SUB EAX,EDX
0048430F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00484312  D1 E0                     SHL EAX,0x1
00484314  99                        CDQ
00484315  F7 F9                     IDIV ECX
00484317  83 F8 03                  CMP EAX,0x3
0048431A  0F 8F 53 01 00 00         JG 0x00484473
LAB_00484320:
00484320  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00484323  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00484326  8B 06                     MOV EAX,dword ptr [ESI]
00484328  51                        PUSH ECX
00484329  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0048432C  52                        PUSH EDX
0048432D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00484330  51                        PUSH ECX
00484331  53                        PUSH EBX
00484332  52                        PUSH EDX
00484333  57                        PUSH EDI
00484334  8B CE                     MOV ECX,ESI
00484336  FF 50 10                  CALL dword ptr [EAX + 0x10]
00484339  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0048433C  8A 86 B2 02 00 00         MOV AL,byte ptr [ESI + 0x2b2]
00484342  84 C0                     TEST AL,AL
00484344  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
0048434B  0F 86 3E 01 00 00         JBE 0x0048448f
00484351  8D 9E A8 02 00 00         LEA EBX,[ESI + 0x2a8]
LAB_00484357:
00484357  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0048435A  8D 4B FE                  LEA ECX,[EBX + -0x2]
0048435D  50                        PUSH EAX
0048435E  8B 01                     MOV EAX,dword ptr [ECX]
00484360  83 EC 08                  SUB ESP,0x8
00484363  8B D4                     MOV EDX,ESP
00484365  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
00484369  89 02                     MOV dword ptr [EDX],EAX
0048436B  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
0048436F  8D 55 BC                  LEA EDX,[EBP + -0x44]
00484372  52                        PUSH EDX
00484373  8B CE                     MOV ECX,ESI
00484375  E8 B2 F0 F7 FF            CALL 0x0040342c
0048437A  8B C8                     MOV ECX,EAX
0048437C  8B 01                     MOV EAX,dword ptr [ECX]
0048437E  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00484381  03 C7                     ADD EAX,EDI
00484383  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
00484387  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0048438A  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0048438D  66 89 55 B0               MOV word ptr [EBP + -0x50],DX
00484391  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00484394  8B 45 AE                  MOV EAX,dword ptr [EBP + -0x52]
00484397  66 8B 13                  MOV DX,word ptr [EBX]
0048439A  2B F8                     SUB EDI,EAX
0048439C  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0048439F  66 89 55 AE               MOV word ptr [EBP + -0x52],DX
004843A3  03 C1                     ADD EAX,ECX
004843A5  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004843A8  51                        PUSH ECX
004843A9  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
004843AC  33 C0                     XOR EAX,EAX
004843AE  83 EC 08                  SUB ESP,0x8
004843B1  66 89 45 AC               MOV word ptr [EBP + -0x54],AX
004843B5  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004843B8  8B D4                     MOV EDX,ESP
004843BA  89 0A                     MOV dword ptr [EDX],ECX
004843BC  8B CE                     MOV ECX,ESI
004843BE  66 89 42 04               MOV word ptr [EDX + 0x4],AX
004843C2  8D 55 B4                  LEA EDX,[EBP + -0x4c]
004843C5  52                        PUSH EDX
004843C6  E8 61 F0 F7 FF            CALL 0x0040342c
004843CB  8B C8                     MOV ECX,EAX
004843CD  8B 01                     MOV EAX,dword ptr [ECX]
004843CF  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004843D2  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
004843D6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004843D9  66 89 55 B0               MOV word ptr [EBP + -0x50],DX
004843DD  8B 55 AE                  MOV EDX,dword ptr [EBP + -0x52]
004843E0  03 C8                     ADD ECX,EAX
004843E2  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004843E5  2B C2                     SUB EAX,EDX
004843E7  8B 96 36 07 00 00         MOV EDX,dword ptr [ESI + 0x736]
004843ED  85 D2                     TEST EDX,EDX
004843EF  75 33                     JNZ 0x00484424
004843F1  8D 55 E8                  LEA EDX,[EBP + -0x18]
004843F4  6A 00                     PUSH 0x0
004843F6  52                        PUSH EDX
004843F7  8B 96 9A 07 00 00         MOV EDX,dword ptr [ESI + 0x79a]
004843FD  52                        PUSH EDX
004843FE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00484401  52                        PUSH EDX
00484402  50                        PUSH EAX
00484403  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00484406  51                        PUSH ECX
00484407  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0048440A  50                        PUSH EAX
0048440B  57                        PUSH EDI
0048440C  51                        PUSH ECX
0048440D  8B CE                     MOV ECX,ESI
0048440F  E8 F3 14 F8 FF            CALL 0x00405907
00484414  85 C0                     TEST EAX,EAX
00484416  75 3D                     JNZ 0x00484455
00484418  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0048441B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0048441E  3B C2                     CMP EAX,EDX
00484420  75 51                     JNZ 0x00484473
00484422  EB 31                     JMP 0x00484455
LAB_00484424:
00484424  8D 55 E8                  LEA EDX,[EBP + -0x18]
00484427  6A 01                     PUSH 0x1
00484429  52                        PUSH EDX
0048442A  8B 96 9A 07 00 00         MOV EDX,dword ptr [ESI + 0x79a]
00484430  52                        PUSH EDX
00484431  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00484434  52                        PUSH EDX
00484435  50                        PUSH EAX
00484436  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00484439  51                        PUSH ECX
0048443A  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0048443D  50                        PUSH EAX
0048443E  57                        PUSH EDI
0048443F  51                        PUSH ECX
00484440  8B CE                     MOV ECX,ESI
00484442  E8 C0 14 F8 FF            CALL 0x00405907
00484447  85 C0                     TEST EAX,EAX
00484449  75 0A                     JNZ 0x00484455
0048444B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0048444E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00484451  3B C2                     CMP EAX,EDX
00484453  75 1E                     JNZ 0x00484473
LAB_00484455:
00484455  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00484458  33 C9                     XOR ECX,ECX
0048445A  8A 8E B2 02 00 00         MOV CL,byte ptr [ESI + 0x2b2]
00484460  40                        INC EAX
00484461  83 C3 06                  ADD EBX,0x6
00484464  3B C1                     CMP EAX,ECX
00484466  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00484469  7D 24                     JGE 0x0048448f
0048446B  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
0048446E  E9 E4 FE FF FF            JMP 0x00484357
LAB_00484473:
00484473  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00484476  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00484479  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0048447C  40                        INC EAX
0048447D  83 C1 06                  ADD ECX,0x6
00484480  3B C2                     CMP EAX,EDX
00484482  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00484485  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00484488  7D 0C                     JGE 0x00484496
0048448A  E9 F7 FC FF FF            JMP 0x00484186
LAB_0048448f:
0048448F  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
LAB_00484496:
00484496  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00484499  5F                        POP EDI
0048449A  5E                        POP ESI
0048449B  5B                        POP EBX
0048449C  8B E5                     MOV ESP,EBP
0048449E  5D                        POP EBP
0048449F  C2 10 00                  RET 0x10
