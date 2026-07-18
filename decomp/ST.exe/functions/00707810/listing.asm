FUN_00707810:
00707810  55                        PUSH EBP
00707811  8B EC                     MOV EBP,ESP
00707813  83 EC 7C                  SUB ESP,0x7c
00707816  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
00707819  53                        PUSH EBX
0070781A  56                        PUSH ESI
0070781B  83 F8 02                  CMP EAX,0x2
0070781E  57                        PUSH EDI
0070781F  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
00707829  0F 8E 8C 06 00 00         JLE 0x00707ebb
0070782F  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
00707832  83 F9 02                  CMP ECX,0x2
00707835  0F 8E 80 06 00 00         JLE 0x00707ebb
0070783B  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0070783E  8D 72 01                  LEA ESI,[EDX + 0x1]
00707841  BA 03 00 00 00            MOV EDX,0x3
00707846  3B F0                     CMP ESI,EAX
00707848  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
0070784B  7C 05                     JL 0x00707852
0070784D  8B F2                     MOV ESI,EDX
0070784F  89 55 40                  MOV dword ptr [EBP + 0x40],EDX
LAB_00707852:
00707852  3B F1                     CMP ESI,ECX
00707854  7C 05                     JL 0x0070785b
00707856  8B F2                     MOV ESI,EDX
00707858  89 55 40                  MOV dword ptr [EBP + 0x40],EDX
LAB_0070785b:
0070785B  8D 7D 84                  LEA EDI,[EBP + -0x7c]
0070785E  C7 45 44 1F 00 00 00      MOV dword ptr [EBP + 0x44],0x1f
LAB_00707865:
00707865  E8 56 6E 02 00            CALL 0x0072e6c0
0070786A  99                        CDQ
0070786B  F7 7D 40                  IDIV dword ptr [EBP + 0x40]
0070786E  8B DA                     MOV EBX,EDX
00707870  E8 4B 6E 02 00            CALL 0x0072e6c0
00707875  99                        CDQ
00707876  F7 FE                     IDIV ESI
00707878  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
0070787B  83 C7 04                  ADD EDI,0x4
0070787E  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
00707882  03 D3                     ADD EDX,EBX
00707884  48                        DEC EAX
00707885  89 57 FC                  MOV dword ptr [EDI + -0x4],EDX
00707888  89 45 44                  MOV dword ptr [EBP + 0x44],EAX
0070788B  75 D8                     JNZ 0x00707865
0070788D  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00707890  33 FF                     XOR EDI,EDI
00707892  48                        DEC EAX
00707893  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00707896  0F 88 1F 06 00 00         JS 0x00707ebb
0070789C  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
0070789F  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
LAB_007078a2:
007078A2  F6 C2 01                  TEST DL,0x1
007078A5  75 4F                     JNZ 0x007078f6
LAB_007078a7:
007078A7  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
007078AA  48                        DEC EAX
007078AB  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
007078AE  78 43                     JS 0x007078f3
007078B0  33 C0                     XOR EAX,EAX
007078B2  8A 03                     MOV AL,byte ptr [EBX]
007078B4  43                        INC EBX
007078B5  85 C0                     TEST EAX,EAX
007078B7  74 2D                     JZ 0x007078e6
007078B9  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
LAB_007078bc:
007078BC  A8 80                     TEST AL,0x80
007078BE  74 16                     JZ 0x007078d6
007078C0  A8 40                     TEST AL,0x40
007078C2  74 06                     JZ 0x007078ca
007078C4  43                        INC EBX
007078C5  83 E0 3F                  AND EAX,0x3f
007078C8  EB 0F                     JMP 0x007078d9
LAB_007078ca:
007078CA  8B F0                     MOV ESI,EAX
007078CC  83 E6 3F                  AND ESI,0x3f
007078CF  03 DE                     ADD EBX,ESI
007078D1  83 E0 3F                  AND EAX,0x3f
007078D4  EB 03                     JMP 0x007078d9
LAB_007078d6:
007078D6  83 E0 7F                  AND EAX,0x7f
LAB_007078d9:
007078D9  2B C8                     SUB ECX,EAX
007078DB  85 C9                     TEST ECX,ECX
007078DD  7E 07                     JLE 0x007078e6
007078DF  33 C0                     XOR EAX,EAX
007078E1  8A 03                     MOV AL,byte ptr [EBX]
007078E3  43                        INC EBX
007078E4  EB D6                     JMP 0x007078bc
LAB_007078e6:
007078E6  42                        INC EDX
007078E7  83 FA 04                  CMP EDX,0x4
007078EA  7E 02                     JLE 0x007078ee
007078EC  33 D2                     XOR EDX,EDX
LAB_007078ee:
007078EE  F6 C2 01                  TEST DL,0x1
007078F1  74 B4                     JZ 0x007078a7
LAB_007078f3:
007078F3  89 55 3C                  MOV dword ptr [EBP + 0x3c],EDX
LAB_007078f6:
007078F6  33 C0                     XOR EAX,EAX
007078F8  8A 03                     MOV AL,byte ptr [EBX]
007078FA  43                        INC EBX
007078FB  85 C0                     TEST EAX,EAX
007078FD  89 45 44                  MOV dword ptr [EBP + 0x44],EAX
00707900  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00707903  0F 84 81 05 00 00         JZ 0x00707e8a
00707909  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
0070790C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070790F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00707912  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
00707915  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
LAB_00707918:
00707918  A8 80                     TEST AL,0x80
0070791A  74 20                     JZ 0x0070793c
0070791C  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
0070791F  83 E0 3F                  AND EAX,0x3f
00707922  3B C3                     CMP EAX,EBX
00707924  7F 38                     JG 0x0070795e
00707926  F6 45 44 40               TEST byte ptr [EBP + 0x44],0x40
0070792A  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0070792D  74 06                     JZ 0x00707935
0070792F  43                        INC EBX
00707930  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00707933  EB 11                     JMP 0x00707946
LAB_00707935:
00707935  03 D8                     ADD EBX,EAX
00707937  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
0070793A  EB 0A                     JMP 0x00707946
LAB_0070793c:
0070793C  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
0070793F  83 E0 7F                  AND EAX,0x7f
00707942  3B C3                     CMP EAX,EBX
00707944  7F 18                     JG 0x0070795e
LAB_00707946:
00707946  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00707949  2B D8                     SUB EBX,EAX
0070794B  33 C0                     XOR EAX,EAX
0070794D  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
00707950  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707953  8A 03                     MOV AL,byte ptr [EBX]
00707955  43                        INC EBX
00707956  89 45 44                  MOV dword ptr [EBP + 0x44],EAX
00707959  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
0070795C  EB BA                     JMP 0x00707918
LAB_0070795e:
0070795E  2B C3                     SUB EAX,EBX
00707960  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00707963  81 E3 C0 00 00 00         AND EBX,0xc0
00707969  80 FB 80                  CMP BL,0x80
0070796C  75 06                     JNZ 0x00707974
0070796E  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00707971  01 5D 1C                  ADD dword ptr [EBP + 0x1c],EBX
LAB_00707974:
00707974  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
00707977  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
0070797A  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
0070797D  85 DB                     TEST EBX,EBX
0070797F  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
00707982  0F 84 AC 06 00 00         JZ 0x00708034
00707988  3B C3                     CMP EAX,EBX
0070798A  0F 8F 57 03 00 00         JG 0x00707ce7
00707990  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
00707993  81 E3 80 00 00 00         AND EBX,0x80
00707999  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
LAB_0070799c:
0070799C  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
0070799F  2B D8                     SUB EBX,EAX
007079A1  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
007079A4  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
007079A7  85 DB                     TEST EBX,EBX
007079A9  0F 84 DC 02 00 00         JZ 0x00707c8b
007079AF  F6 45 44 40               TEST byte ptr [EBP + 0x44],0x40
007079B3  0F 84 51 01 00 00         JZ 0x00707b0a
007079B9  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007079BC  43                        INC EBX
007079BD  85 C9                     TEST ECX,ECX
007079BF  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
007079C2  0F 8E 92 00 00 00         JLE 0x00707a5a
007079C8  8D 59 FF                  LEA EBX,[ECX + -0x1]
007079CB  83 FB 03                  CMP EBX,0x3
007079CE  0F 87 86 00 00 00         JA 0x00707a5a
switchD_007079d4::switchD:
007079D4  FF 24 9D D0 85 70 00      JMP dword ptr [EBX*0x4 + 0x7085d0]
switchD_007079d4::caseD_1:
007079DB  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007079DE  33 C9                     XOR ECX,ECX
007079E0  66 8B 0A                  MOV CX,word ptr [EDX]
007079E3  3B D9                     CMP EBX,ECX
007079E5  77 19                     JA 0x00707a00
007079E7  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
007079EB  33 DB                     XOR EBX,EBX
007079ED  47                        INC EDI
007079EE  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
007079F1  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
007079F4  83 FF 1F                  CMP EDI,0x1f
007079F7  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
007079FA  88 0E                     MOV byte ptr [ESI],CL
007079FC  7C 02                     JL 0x00707a00
007079FE  33 FF                     XOR EDI,EDI
LAB_00707a00:
00707A00  83 C2 02                  ADD EDX,0x2
00707A03  46                        INC ESI
00707A04  48                        DEC EAX
00707A05  B9 02 00 00 00            MOV ECX,0x2
00707A0A  85 C0                     TEST EAX,EAX
00707A0C  0F 8E 96 02 00 00         JLE 0x00707ca8
switchD_007079d4::caseD_2:
00707A12  48                        DEC EAX
00707A13  B9 03 00 00 00            MOV ECX,0x3
00707A18  85 C0                     TEST EAX,EAX
00707A1A  0F 8E 88 02 00 00         JLE 0x00707ca8
switchD_007079d4::caseD_3:
00707A20  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707A23  33 C9                     XOR ECX,ECX
00707A25  66 8B 0A                  MOV CX,word ptr [EDX]
00707A28  3B D9                     CMP EBX,ECX
00707A2A  77 19                     JA 0x00707a45
00707A2C  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707A30  33 DB                     XOR EBX,EBX
00707A32  47                        INC EDI
00707A33  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707A36  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707A39  83 FF 1F                  CMP EDI,0x1f
00707A3C  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707A3F  88 0E                     MOV byte ptr [ESI],CL
00707A41  7C 02                     JL 0x00707a45
00707A43  33 FF                     XOR EDI,EDI
LAB_00707a45:
00707A45  83 C2 02                  ADD EDX,0x2
00707A48  46                        INC ESI
00707A49  48                        DEC EAX
00707A4A  B9 04 00 00 00            MOV ECX,0x4
00707A4F  85 C0                     TEST EAX,EAX
00707A51  0F 8E 51 02 00 00         JLE 0x00707ca8
switchD_007079d4::caseD_4:
00707A57  33 C9                     XOR ECX,ECX
00707A59  48                        DEC EAX
switchD_007079d4::default:
00707A5A  85 C0                     TEST EAX,EAX
00707A5C  0F 8E 46 02 00 00         JLE 0x00707ca8
00707A62  48                        DEC EAX
00707A63  B9 01 00 00 00            MOV ECX,0x1
00707A68  85 C0                     TEST EAX,EAX
00707A6A  0F 8E 38 02 00 00         JLE 0x00707ca8
LAB_00707a70:
00707A70  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707A73  33 C9                     XOR ECX,ECX
00707A75  66 8B 0A                  MOV CX,word ptr [EDX]
00707A78  3B D9                     CMP EBX,ECX
00707A7A  77 19                     JA 0x00707a95
00707A7C  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707A80  33 DB                     XOR EBX,EBX
00707A82  47                        INC EDI
00707A83  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707A86  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707A89  83 FF 1F                  CMP EDI,0x1f
00707A8C  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707A8F  88 0E                     MOV byte ptr [ESI],CL
00707A91  7C 02                     JL 0x00707a95
00707A93  33 FF                     XOR EDI,EDI
LAB_00707a95:
00707A95  83 C2 02                  ADD EDX,0x2
00707A98  46                        INC ESI
00707A99  48                        DEC EAX
00707A9A  B9 02 00 00 00            MOV ECX,0x2
00707A9F  85 C0                     TEST EAX,EAX
00707AA1  0F 8E 01 02 00 00         JLE 0x00707ca8
00707AA7  48                        DEC EAX
00707AA8  B9 03 00 00 00            MOV ECX,0x3
00707AAD  85 C0                     TEST EAX,EAX
00707AAF  0F 8E F3 01 00 00         JLE 0x00707ca8
00707AB5  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707AB8  33 C9                     XOR ECX,ECX
00707ABA  66 8B 0A                  MOV CX,word ptr [EDX]
00707ABD  3B D9                     CMP EBX,ECX
00707ABF  77 19                     JA 0x00707ada
00707AC1  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707AC5  33 DB                     XOR EBX,EBX
00707AC7  47                        INC EDI
00707AC8  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707ACB  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707ACE  83 FF 1F                  CMP EDI,0x1f
00707AD1  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707AD4  88 0E                     MOV byte ptr [ESI],CL
00707AD6  7C 02                     JL 0x00707ada
00707AD8  33 FF                     XOR EDI,EDI
LAB_00707ada:
00707ADA  83 C2 02                  ADD EDX,0x2
00707ADD  46                        INC ESI
00707ADE  48                        DEC EAX
00707ADF  B9 04 00 00 00            MOV ECX,0x4
00707AE4  85 C0                     TEST EAX,EAX
00707AE6  0F 8E BC 01 00 00         JLE 0x00707ca8
00707AEC  33 C9                     XOR ECX,ECX
00707AEE  48                        DEC EAX
00707AEF  85 C0                     TEST EAX,EAX
00707AF1  0F 8E B1 01 00 00         JLE 0x00707ca8
00707AF7  48                        DEC EAX
00707AF8  B9 01 00 00 00            MOV ECX,0x1
00707AFD  85 C0                     TEST EAX,EAX
00707AFF  0F 8F 6B FF FF FF         JG 0x00707a70
00707B05  E9 9E 01 00 00            JMP 0x00707ca8
LAB_00707b0a:
00707B0A  85 C9                     TEST ECX,ECX
00707B0C  0F 8E AE 00 00 00         JLE 0x00707bc0
00707B12  8D 59 FF                  LEA EBX,[ECX + -0x1]
00707B15  83 FB 03                  CMP EBX,0x3
00707B18  0F 87 A2 00 00 00         JA 0x00707bc0
switchD_00707b1e::switchD:
00707B1E  FF 24 9D E0 85 70 00      JMP dword ptr [EBX*0x4 + 0x7085e0]
switchD_00707b1e::caseD_1:
00707B25  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707B28  33 C9                     XOR ECX,ECX
00707B2A  66 8B 0A                  MOV CX,word ptr [EDX]
00707B2D  3B D9                     CMP EBX,ECX
00707B2F  77 19                     JA 0x00707b4a
00707B31  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707B35  33 DB                     XOR EBX,EBX
00707B37  47                        INC EDI
00707B38  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707B3B  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707B3E  83 FF 1F                  CMP EDI,0x1f
00707B41  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707B44  88 0E                     MOV byte ptr [ESI],CL
00707B46  7C 02                     JL 0x00707b4a
00707B48  33 FF                     XOR EDI,EDI
LAB_00707b4a:
00707B4A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00707B4D  83 C2 02                  ADD EDX,0x2
00707B50  46                        INC ESI
00707B51  41                        INC ECX
00707B52  48                        DEC EAX
00707B53  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00707B56  85 C0                     TEST EAX,EAX
00707B58  B9 02 00 00 00            MOV ECX,0x2
00707B5D  0F 8E 45 01 00 00         JLE 0x00707ca8
switchD_00707b1e::caseD_2:
00707B63  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00707B66  41                        INC ECX
00707B67  48                        DEC EAX
00707B68  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00707B6B  B9 03 00 00 00            MOV ECX,0x3
00707B70  85 C0                     TEST EAX,EAX
00707B72  0F 8E 30 01 00 00         JLE 0x00707ca8
switchD_00707b1e::caseD_3:
00707B78  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707B7B  33 C9                     XOR ECX,ECX
00707B7D  66 8B 0A                  MOV CX,word ptr [EDX]
00707B80  3B D9                     CMP EBX,ECX
00707B82  77 19                     JA 0x00707b9d
00707B84  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707B88  33 DB                     XOR EBX,EBX
00707B8A  47                        INC EDI
00707B8B  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707B8E  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707B91  83 FF 1F                  CMP EDI,0x1f
00707B94  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707B97  88 0E                     MOV byte ptr [ESI],CL
00707B99  7C 02                     JL 0x00707b9d
00707B9B  33 FF                     XOR EDI,EDI
LAB_00707b9d:
00707B9D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00707BA0  83 C2 02                  ADD EDX,0x2
00707BA3  46                        INC ESI
00707BA4  41                        INC ECX
00707BA5  48                        DEC EAX
00707BA6  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00707BA9  85 C0                     TEST EAX,EAX
00707BAB  B9 04 00 00 00            MOV ECX,0x4
00707BB0  0F 8E F2 00 00 00         JLE 0x00707ca8
switchD_00707b1e::caseD_4:
00707BB6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00707BB9  41                        INC ECX
00707BBA  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00707BBD  33 C9                     XOR ECX,ECX
00707BBF  48                        DEC EAX
switchD_00707b1e::default:
00707BC0  85 C0                     TEST EAX,EAX
00707BC2  0F 8E E0 00 00 00         JLE 0x00707ca8
00707BC8  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00707BCB  41                        INC ECX
00707BCC  48                        DEC EAX
00707BCD  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00707BD0  B9 01 00 00 00            MOV ECX,0x1
00707BD5  85 C0                     TEST EAX,EAX
00707BD7  0F 8E CB 00 00 00         JLE 0x00707ca8
LAB_00707bdd:
00707BDD  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707BE0  33 C9                     XOR ECX,ECX
00707BE2  66 8B 0A                  MOV CX,word ptr [EDX]
00707BE5  3B D9                     CMP EBX,ECX
00707BE7  77 19                     JA 0x00707c02
00707BE9  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707BED  33 DB                     XOR EBX,EBX
00707BEF  47                        INC EDI
00707BF0  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707BF3  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707BF6  83 FF 1F                  CMP EDI,0x1f
00707BF9  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707BFC  88 0E                     MOV byte ptr [ESI],CL
00707BFE  7C 02                     JL 0x00707c02
00707C00  33 FF                     XOR EDI,EDI
LAB_00707c02:
00707C02  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00707C05  83 C2 02                  ADD EDX,0x2
00707C08  46                        INC ESI
00707C09  41                        INC ECX
00707C0A  48                        DEC EAX
00707C0B  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00707C0E  85 C0                     TEST EAX,EAX
00707C10  B9 02 00 00 00            MOV ECX,0x2
00707C15  0F 8E 8D 00 00 00         JLE 0x00707ca8
00707C1B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00707C1E  41                        INC ECX
00707C1F  48                        DEC EAX
00707C20  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00707C23  B9 03 00 00 00            MOV ECX,0x3
00707C28  85 C0                     TEST EAX,EAX
00707C2A  7E 7C                     JLE 0x00707ca8
00707C2C  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707C2F  33 C9                     XOR ECX,ECX
00707C31  66 8B 0A                  MOV CX,word ptr [EDX]
00707C34  3B D9                     CMP EBX,ECX
00707C36  77 19                     JA 0x00707c51
00707C38  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707C3C  33 DB                     XOR EBX,EBX
00707C3E  47                        INC EDI
00707C3F  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707C42  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707C45  83 FF 1F                  CMP EDI,0x1f
00707C48  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707C4B  88 0E                     MOV byte ptr [ESI],CL
00707C4D  7C 02                     JL 0x00707c51
00707C4F  33 FF                     XOR EDI,EDI
LAB_00707c51:
00707C51  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00707C54  83 C2 02                  ADD EDX,0x2
00707C57  46                        INC ESI
00707C58  41                        INC ECX
00707C59  48                        DEC EAX
00707C5A  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00707C5D  85 C0                     TEST EAX,EAX
00707C5F  B9 04 00 00 00            MOV ECX,0x4
00707C64  7E 42                     JLE 0x00707ca8
00707C66  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00707C69  41                        INC ECX
00707C6A  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00707C6D  33 C9                     XOR ECX,ECX
00707C6F  48                        DEC EAX
00707C70  85 C0                     TEST EAX,EAX
00707C72  7E 34                     JLE 0x00707ca8
00707C74  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00707C77  41                        INC ECX
00707C78  48                        DEC EAX
00707C79  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00707C7C  B9 01 00 00 00            MOV ECX,0x1
00707C81  85 C0                     TEST EAX,EAX
00707C83  0F 8F 54 FF FF FF         JG 0x00707bdd
00707C89  EB 1D                     JMP 0x00707ca8
LAB_00707c8b:
00707C8B  48                        DEC EAX
00707C8C  78 1A                     JS 0x00707ca8
00707C8E  40                        INC EAX
LAB_00707c8f:
00707C8F  8B D9                     MOV EBX,ECX
00707C91  83 E3 01                  AND EBX,0x1
00707C94  80 FB 01                  CMP BL,0x1
00707C97  75 04                     JNZ 0x00707c9d
00707C99  46                        INC ESI
00707C9A  83 C2 02                  ADD EDX,0x2
LAB_00707c9d:
00707C9D  41                        INC ECX
00707C9E  83 F9 04                  CMP ECX,0x4
00707CA1  7E 02                     JLE 0x00707ca5
00707CA3  33 C9                     XOR ECX,ECX
LAB_00707ca5:
00707CA5  48                        DEC EAX
00707CA6  75 E7                     JNZ 0x00707c8f
LAB_00707ca8:
00707CA8  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
00707CAB  85 C0                     TEST EAX,EAX
00707CAD  7E 36                     JLE 0x00707ce5
00707CAF  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707CB2  33 C0                     XOR EAX,EAX
00707CB4  8A 03                     MOV AL,byte ptr [EBX]
00707CB6  8B D8                     MOV EBX,EAX
00707CB8  89 45 44                  MOV dword ptr [EBP + 0x44],EAX
00707CBB  81 E3 80 00 00 00         AND EBX,0x80
00707CC1  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
00707CC4  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707CC7  43                        INC EBX
00707CC8  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00707CCB  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00707CCE  85 DB                     TEST EBX,EBX
00707CD0  74 05                     JZ 0x00707cd7
00707CD2  83 E0 3F                  AND EAX,0x3f
00707CD5  EB 03                     JMP 0x00707cda
LAB_00707cd7:
00707CD7  83 E0 7F                  AND EAX,0x7f
LAB_00707cda:
00707CDA  3B 45 40                  CMP EAX,dword ptr [EBP + 0x40]
00707CDD  0F 8E B9 FC FF FF         JLE 0x0070799c
00707CE3  EB 02                     JMP 0x00707ce7
LAB_00707ce5:
00707CE5  33 C0                     XOR EAX,EAX
LAB_00707ce7:
00707CE7  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00707CEA  2B C3                     SUB EAX,EBX
00707CEC  85 DB                     TEST EBX,EBX
00707CEE  0F 8E 3F 01 00 00         JLE 0x00707e33
00707CF4  8A 5D 44                  MOV BL,byte ptr [EBP + 0x44]
00707CF7  F6 C3 80                  TEST BL,0x80
00707CFA  0F 84 33 01 00 00         JZ 0x00707e33
00707D00  F6 C3 40                  TEST BL,0x40
00707D03  0F 84 BB 01 00 00         JZ 0x00707ec4
00707D09  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707D0C  43                        INC EBX
00707D0D  85 C9                     TEST ECX,ECX
00707D0F  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00707D12  0F 8E 9B 00 00 00         JLE 0x00707db3
00707D18  49                        DEC ECX
00707D19  83 F9 03                  CMP ECX,0x3
00707D1C  0F 87 91 00 00 00         JA 0x00707db3
switchD_00707d22::switchD:
00707D22  FF 24 8D F0 85 70 00      JMP dword ptr [ECX*0x4 + 0x7085f0]
switchD_00707d22::caseD_1:
00707D29  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707D2C  33 C9                     XOR ECX,ECX
00707D2E  66 8B 0A                  MOV CX,word ptr [EDX]
00707D31  3B D9                     CMP EBX,ECX
00707D33  77 19                     JA 0x00707d4e
00707D35  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707D39  33 DB                     XOR EBX,EBX
00707D3B  47                        INC EDI
00707D3C  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707D3F  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707D42  83 FF 1F                  CMP EDI,0x1f
00707D45  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707D48  88 0E                     MOV byte ptr [ESI],CL
00707D4A  7C 02                     JL 0x00707d4e
00707D4C  33 FF                     XOR EDI,EDI
LAB_00707d4e:
00707D4E  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00707D51  83 C2 02                  ADD EDX,0x2
00707D54  46                        INC ESI
00707D55  49                        DEC ECX
00707D56  85 C9                     TEST ECX,ECX
00707D58  0F 8E D5 00 00 00         JLE 0x00707e33
00707D5E  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
LAB_00707d61:
00707D61  49                        DEC ECX
00707D62  85 C9                     TEST ECX,ECX
00707D64  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
00707D67  0F 8E C9 00 00 00         JLE 0x00707e36
switchD_00707d22::caseD_3:
00707D6D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707D70  33 C9                     XOR ECX,ECX
00707D72  66 8B 0A                  MOV CX,word ptr [EDX]
00707D75  3B D9                     CMP EBX,ECX
00707D77  77 19                     JA 0x00707d92
00707D79  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707D7D  33 DB                     XOR EBX,EBX
00707D7F  47                        INC EDI
00707D80  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707D83  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707D86  83 FF 1F                  CMP EDI,0x1f
00707D89  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707D8C  88 0E                     MOV byte ptr [ESI],CL
00707D8E  7C 02                     JL 0x00707d92
00707D90  33 FF                     XOR EDI,EDI
LAB_00707d92:
00707D92  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00707D95  83 C2 02                  ADD EDX,0x2
00707D98  46                        INC ESI
00707D99  49                        DEC ECX
00707D9A  85 C9                     TEST ECX,ECX
00707D9C  0F 8E 91 00 00 00         JLE 0x00707e33
00707DA2  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707DA5  49                        DEC ECX
00707DA6  EB 0E                     JMP 0x00707db6
switchD_00707d22::caseD_2:
00707DA8  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00707DAB  EB B4                     JMP 0x00707d61
switchD_00707d22::caseD_4:
00707DAD  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00707DB0  49                        DEC ECX
00707DB1  EB 03                     JMP 0x00707db6
LAB_00707db3:
00707DB3  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
switchD_00707d22::default:
00707DB6  85 C9                     TEST ECX,ECX
00707DB8  7E 7C                     JLE 0x00707e36
00707DBA  49                        DEC ECX
00707DBB  85 C9                     TEST ECX,ECX
00707DBD  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
00707DC0  7E 74                     JLE 0x00707e36
LAB_00707dc2:
00707DC2  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707DC5  33 C9                     XOR ECX,ECX
00707DC7  66 8B 0A                  MOV CX,word ptr [EDX]
00707DCA  3B D9                     CMP EBX,ECX
00707DCC  77 19                     JA 0x00707de7
00707DCE  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707DD2  33 DB                     XOR EBX,EBX
00707DD4  47                        INC EDI
00707DD5  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707DD8  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707DDB  83 FF 1F                  CMP EDI,0x1f
00707DDE  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707DE1  88 0E                     MOV byte ptr [ESI],CL
00707DE3  7C 02                     JL 0x00707de7
00707DE5  33 FF                     XOR EDI,EDI
LAB_00707de7:
00707DE7  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00707DEA  83 C2 02                  ADD EDX,0x2
00707DED  83 E9 02                  SUB ECX,0x2
00707DF0  46                        INC ESI
00707DF1  85 C9                     TEST ECX,ECX
00707DF3  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
00707DF6  7E 3B                     JLE 0x00707e33
00707DF8  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707DFB  33 C9                     XOR ECX,ECX
00707DFD  66 8B 0A                  MOV CX,word ptr [EDX]
00707E00  3B D9                     CMP EBX,ECX
00707E02  77 19                     JA 0x00707e1d
00707E04  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707E08  33 DB                     XOR EBX,EBX
00707E0A  47                        INC EDI
00707E0B  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707E0E  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707E11  83 FF 1F                  CMP EDI,0x1f
00707E14  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707E17  88 0E                     MOV byte ptr [ESI],CL
00707E19  7C 02                     JL 0x00707e1d
00707E1B  33 FF                     XOR EDI,EDI
LAB_00707e1d:
00707E1D  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00707E20  83 C2 02                  ADD EDX,0x2
00707E23  83 E9 02                  SUB ECX,0x2
00707E26  46                        INC ESI
00707E27  85 C9                     TEST ECX,ECX
00707E29  7E 08                     JLE 0x00707e33
00707E2B  49                        DEC ECX
00707E2C  85 C9                     TEST ECX,ECX
00707E2E  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
00707E31  7F 8F                     JG 0x00707dc2
LAB_00707e33:
00707E33  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
LAB_00707e36:
00707E36  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
00707E39  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00707E3C  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
00707E3F  2B F1                     SUB ESI,ECX
00707E41  2B F2                     SUB ESI,EDX
00707E43  3B C6                     CMP EAX,ESI
00707E45  7D 32                     JGE 0x00707e79
LAB_00707e47:
00707E47  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
00707E4A  2B F0                     SUB ESI,EAX
00707E4C  81 E1 C0 00 00 00         AND ECX,0xc0
00707E52  80 F9 80                  CMP CL,0x80
00707E55  75 02                     JNZ 0x00707e59
00707E57  03 D8                     ADD EBX,EAX
LAB_00707e59:
00707E59  33 C9                     XOR ECX,ECX
00707E5B  8A 0B                     MOV CL,byte ptr [EBX]
00707E5D  8B D1                     MOV EDX,ECX
00707E5F  89 4D 44                  MOV dword ptr [EBP + 0x44],ECX
00707E62  80 E2 80                  AND DL,0x80
00707E65  43                        INC EBX
00707E66  84 D2                     TEST DL,DL
00707E68  8B C1                     MOV EAX,ECX
00707E6A  74 09                     JZ 0x00707e75
00707E6C  83 E0 3F                  AND EAX,0x3f
00707E6F  F6 C1 40                  TEST CL,0x40
00707E72  74 01                     JZ 0x00707e75
00707E74  43                        INC EBX
LAB_00707e75:
00707E75  3B C6                     CMP EAX,ESI
00707E77  7C CE                     JL 0x00707e47
LAB_00707e79:
00707E79  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
00707E7C  25 C0 00 00 00            AND EAX,0xc0
00707E81  3C 80                     CMP AL,0x80
00707E83  75 02                     JNZ 0x00707e87
00707E85  03 DE                     ADD EBX,ESI
LAB_00707e87:
00707E87  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
LAB_00707e8a:
00707E8A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00707E8D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00707E90  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00707E93  03 C8                     ADD ECX,EAX
00707E95  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00707E98  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00707E9B  03 F1                     ADD ESI,ECX
00707E9D  42                        INC EDX
00707E9E  83 FA 04                  CMP EDX,0x4
00707EA1  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
00707EA4  89 55 3C                  MOV dword ptr [EBP + 0x3c],EDX
00707EA7  7E 05                     JLE 0x00707eae
00707EA9  33 D2                     XOR EDX,EDX
00707EAB  89 55 3C                  MOV dword ptr [EBP + 0x3c],EDX
LAB_00707eae:
00707EAE  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00707EB1  48                        DEC EAX
00707EB2  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
00707EB5  0F 89 E7 F9 FF FF         JNS 0x007078a2
LAB_00707ebb:
00707EBB  5F                        POP EDI
00707EBC  5E                        POP ESI
00707EBD  5B                        POP EBX
00707EBE  8B E5                     MOV ESP,EBP
00707EC0  5D                        POP EBP
00707EC1  C2 40 00                  RET 0x40
LAB_00707ec4:
00707EC4  85 C9                     TEST ECX,ECX
00707EC6  0F 8E A9 00 00 00         JLE 0x00707f75
00707ECC  49                        DEC ECX
00707ECD  83 F9 03                  CMP ECX,0x3
00707ED0  0F 87 9F 00 00 00         JA 0x00707f75
switchD_00707ed6::switchD:
00707ED6  FF 24 8D 00 86 70 00      JMP dword ptr [ECX*0x4 + 0x708600]
switchD_00707ed6::caseD_1:
00707EDD  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707EE0  33 C9                     XOR ECX,ECX
00707EE2  66 8B 0A                  MOV CX,word ptr [EDX]
00707EE5  3B D9                     CMP EBX,ECX
00707EE7  77 19                     JA 0x00707f02
00707EE9  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707EED  33 DB                     XOR EBX,EBX
00707EEF  47                        INC EDI
00707EF0  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707EF3  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707EF6  83 FF 1F                  CMP EDI,0x1f
00707EF9  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707EFC  88 0E                     MOV byte ptr [ESI],CL
00707EFE  7C 02                     JL 0x00707f02
00707F00  33 FF                     XOR EDI,EDI
LAB_00707f02:
00707F02  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707F05  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00707F08  83 C2 02                  ADD EDX,0x2
00707F0B  46                        INC ESI
00707F0C  43                        INC EBX
00707F0D  49                        DEC ECX
00707F0E  85 C9                     TEST ECX,ECX
00707F10  0F 8E 20 FF FF FF         JLE 0x00707e36
00707F16  EB 06                     JMP 0x00707f1e
switchD_00707ed6::caseD_2:
00707F18  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707F1B  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
LAB_00707f1e:
00707F1E  43                        INC EBX
00707F1F  49                        DEC ECX
00707F20  85 C9                     TEST ECX,ECX
00707F22  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00707F25  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
00707F28  0F 8E 08 FF FF FF         JLE 0x00707e36
switchD_00707ed6::caseD_3:
00707F2E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707F31  33 C9                     XOR ECX,ECX
00707F33  66 8B 0A                  MOV CX,word ptr [EDX]
00707F36  3B D9                     CMP EBX,ECX
00707F38  77 19                     JA 0x00707f53
00707F3A  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707F3E  33 DB                     XOR EBX,EBX
00707F40  47                        INC EDI
00707F41  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707F44  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707F47  83 FF 1F                  CMP EDI,0x1f
00707F4A  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707F4D  88 0E                     MOV byte ptr [ESI],CL
00707F4F  7C 02                     JL 0x00707f53
00707F51  33 FF                     XOR EDI,EDI
LAB_00707f53:
00707F53  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707F56  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00707F59  83 C2 02                  ADD EDX,0x2
00707F5C  46                        INC ESI
00707F5D  43                        INC EBX
00707F5E  49                        DEC ECX
00707F5F  85 C9                     TEST ECX,ECX
00707F61  0F 8E CF FE FF FF         JLE 0x00707e36
00707F67  43                        INC EBX
00707F68  49                        DEC ECX
00707F69  EB 10                     JMP 0x00707f7b
switchD_00707ed6::caseD_4:
00707F6B  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707F6E  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00707F71  43                        INC EBX
00707F72  49                        DEC ECX
00707F73  EB 06                     JMP 0x00707f7b
LAB_00707f75:
00707F75  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707F78  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
switchD_00707ed6::default:
00707F7B  85 C9                     TEST ECX,ECX
00707F7D  0F 8E B3 FE FF FF         JLE 0x00707e36
00707F83  43                        INC EBX
00707F84  49                        DEC ECX
00707F85  85 C9                     TEST ECX,ECX
00707F87  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00707F8A  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
00707F8D  0F 8E A3 FE FF FF         JLE 0x00707e36
LAB_00707f93:
00707F93  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707F96  33 C9                     XOR ECX,ECX
00707F98  66 8B 0A                  MOV CX,word ptr [EDX]
00707F9B  3B D9                     CMP EBX,ECX
00707F9D  77 19                     JA 0x00707fb8
00707F9F  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707FA3  33 DB                     XOR EBX,EBX
00707FA5  47                        INC EDI
00707FA6  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707FA9  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707FAC  83 FF 1F                  CMP EDI,0x1f
00707FAF  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707FB2  88 0E                     MOV byte ptr [ESI],CL
00707FB4  7C 02                     JL 0x00707fb8
00707FB6  33 FF                     XOR EDI,EDI
LAB_00707fb8:
00707FB8  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00707FBB  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00707FBE  83 C2 02                  ADD EDX,0x2
00707FC1  46                        INC ESI
00707FC2  43                        INC EBX
00707FC3  49                        DEC ECX
00707FC4  85 C9                     TEST ECX,ECX
00707FC6  0F 8E 6A FE FF FF         JLE 0x00707e36
00707FCC  43                        INC EBX
00707FCD  49                        DEC ECX
00707FCE  85 C9                     TEST ECX,ECX
00707FD0  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00707FD3  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
00707FD6  0F 8E 5A FE FF FF         JLE 0x00707e36
00707FDC  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00707FDF  33 C9                     XOR ECX,ECX
00707FE1  66 8B 0A                  MOV CX,word ptr [EDX]
00707FE4  3B D9                     CMP EBX,ECX
00707FE6  77 19                     JA 0x00708001
00707FE8  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00707FEC  33 DB                     XOR EBX,EBX
00707FEE  47                        INC EDI
00707FEF  8A 1C 31                  MOV BL,byte ptr [ECX + ESI*0x1]
00707FF2  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00707FF5  83 FF 1F                  CMP EDI,0x1f
00707FF8  8A 0C 0B                  MOV CL,byte ptr [EBX + ECX*0x1]
00707FFB  88 0E                     MOV byte ptr [ESI],CL
00707FFD  7C 02                     JL 0x00708001
00707FFF  33 FF                     XOR EDI,EDI
LAB_00708001:
00708001  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00708004  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00708007  83 C2 02                  ADD EDX,0x2
0070800A  46                        INC ESI
0070800B  43                        INC EBX
0070800C  49                        DEC ECX
0070800D  85 C9                     TEST ECX,ECX
0070800F  0F 8E 21 FE FF FF         JLE 0x00707e36
00708015  43                        INC EBX
00708016  49                        DEC ECX
00708017  85 C9                     TEST ECX,ECX
00708019  0F 8E 17 FE FF FF         JLE 0x00707e36
0070801F  43                        INC EBX
00708020  49                        DEC ECX
00708021  85 C9                     TEST ECX,ECX
00708023  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00708026  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
00708029  0F 8F 64 FF FF FF         JG 0x00707f93
0070802F  E9 02 FE FF FF            JMP 0x00707e36
LAB_00708034:
00708034  3B C3                     CMP EAX,EBX
00708036  0F 8F 05 03 00 00         JG 0x00708341
0070803C  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
0070803F  81 E3 80 00 00 00         AND EBX,0x80
00708045  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
LAB_00708048:
00708048  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
0070804B  2B D8                     SUB EBX,EAX
0070804D  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
00708050  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00708053  85 DB                     TEST EBX,EBX
00708055  0F 84 8A 02 00 00         JZ 0x007082e5
0070805B  F6 45 44 40               TEST byte ptr [EBP + 0x44],0x40
0070805F  0F 84 22 01 00 00         JZ 0x00708187
00708065  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00708068  43                        INC EBX
00708069  85 C9                     TEST ECX,ECX
0070806B  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
0070806E  7E 7E                     JLE 0x007080ee
00708070  8D 59 FF                  LEA EBX,[ECX + -0x1]
00708073  83 FB 03                  CMP EBX,0x3
00708076  77 76                     JA 0x007080ee
switchD_00708078::switchD:
00708078  FF 24 9D 10 86 70 00      JMP dword ptr [EBX*0x4 + 0x708610]
switchD_00708078::caseD_1:
0070807F  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00708082  33 C9                     XOR ECX,ECX
00708084  66 8B 0A                  MOV CX,word ptr [EDX]
00708087  3B D9                     CMP EBX,ECX
00708089  77 11                     JA 0x0070809c
0070808B  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
0070808F  47                        INC EDI
00708090  83 FF 1F                  CMP EDI,0x1f
00708093  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00708096  88 0E                     MOV byte ptr [ESI],CL
00708098  7C 02                     JL 0x0070809c
0070809A  33 FF                     XOR EDI,EDI
LAB_0070809c:
0070809C  83 C2 02                  ADD EDX,0x2
0070809F  46                        INC ESI
007080A0  48                        DEC EAX
007080A1  B9 02 00 00 00            MOV ECX,0x2
007080A6  85 C0                     TEST EAX,EAX
007080A8  0F 8E 54 02 00 00         JLE 0x00708302
switchD_00708078::caseD_2:
007080AE  48                        DEC EAX
007080AF  B9 03 00 00 00            MOV ECX,0x3
007080B4  85 C0                     TEST EAX,EAX
007080B6  0F 8E 46 02 00 00         JLE 0x00708302
switchD_00708078::caseD_3:
007080BC  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007080BF  33 C9                     XOR ECX,ECX
007080C1  66 8B 0A                  MOV CX,word ptr [EDX]
007080C4  3B D9                     CMP EBX,ECX
007080C6  77 11                     JA 0x007080d9
007080C8  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
007080CC  47                        INC EDI
007080CD  83 FF 1F                  CMP EDI,0x1f
007080D0  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
007080D3  88 0E                     MOV byte ptr [ESI],CL
007080D5  7C 02                     JL 0x007080d9
007080D7  33 FF                     XOR EDI,EDI
LAB_007080d9:
007080D9  83 C2 02                  ADD EDX,0x2
007080DC  46                        INC ESI
007080DD  48                        DEC EAX
007080DE  B9 04 00 00 00            MOV ECX,0x4
007080E3  85 C0                     TEST EAX,EAX
007080E5  0F 8E 17 02 00 00         JLE 0x00708302
switchD_00708078::caseD_4:
007080EB  33 C9                     XOR ECX,ECX
007080ED  48                        DEC EAX
switchD_00708078::default:
007080EE  85 C0                     TEST EAX,EAX
007080F0  0F 8E 0C 02 00 00         JLE 0x00708302
007080F6  48                        DEC EAX
007080F7  B9 01 00 00 00            MOV ECX,0x1
007080FC  85 C0                     TEST EAX,EAX
007080FE  0F 8E FE 01 00 00         JLE 0x00708302
00708104  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_00708107:
00708107  33 C9                     XOR ECX,ECX
00708109  66 8B 0A                  MOV CX,word ptr [EDX]
0070810C  3B D9                     CMP EBX,ECX
0070810E  77 11                     JA 0x00708121
00708110  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00708114  47                        INC EDI
00708115  83 FF 1F                  CMP EDI,0x1f
00708118  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
0070811B  88 0E                     MOV byte ptr [ESI],CL
0070811D  7C 02                     JL 0x00708121
0070811F  33 FF                     XOR EDI,EDI
LAB_00708121:
00708121  83 C2 02                  ADD EDX,0x2
00708124  46                        INC ESI
00708125  48                        DEC EAX
00708126  B9 02 00 00 00            MOV ECX,0x2
0070812B  85 C0                     TEST EAX,EAX
0070812D  0F 8E CF 01 00 00         JLE 0x00708302
00708133  48                        DEC EAX
00708134  B9 03 00 00 00            MOV ECX,0x3
00708139  85 C0                     TEST EAX,EAX
0070813B  0F 8E C1 01 00 00         JLE 0x00708302
00708141  33 C9                     XOR ECX,ECX
00708143  66 8B 0A                  MOV CX,word ptr [EDX]
00708146  3B D9                     CMP EBX,ECX
00708148  77 11                     JA 0x0070815b
0070814A  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
0070814E  47                        INC EDI
0070814F  83 FF 1F                  CMP EDI,0x1f
00708152  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00708155  88 0E                     MOV byte ptr [ESI],CL
00708157  7C 02                     JL 0x0070815b
00708159  33 FF                     XOR EDI,EDI
LAB_0070815b:
0070815B  83 C2 02                  ADD EDX,0x2
0070815E  46                        INC ESI
0070815F  48                        DEC EAX
00708160  B9 04 00 00 00            MOV ECX,0x4
00708165  85 C0                     TEST EAX,EAX
00708167  0F 8E 95 01 00 00         JLE 0x00708302
0070816D  33 C9                     XOR ECX,ECX
0070816F  48                        DEC EAX
00708170  85 C0                     TEST EAX,EAX
00708172  0F 8E 8A 01 00 00         JLE 0x00708302
00708178  48                        DEC EAX
00708179  B9 01 00 00 00            MOV ECX,0x1
0070817E  85 C0                     TEST EAX,EAX
00708180  7F 85                     JG 0x00708107
00708182  E9 7B 01 00 00            JMP 0x00708302
LAB_00708187:
00708187  85 C9                     TEST ECX,ECX
00708189  0F 8E 9E 00 00 00         JLE 0x0070822d
0070818F  8D 59 FF                  LEA EBX,[ECX + -0x1]
00708192  83 FB 03                  CMP EBX,0x3
00708195  0F 87 92 00 00 00         JA 0x0070822d
switchD_0070819b::switchD:
0070819B  FF 24 9D 20 86 70 00      JMP dword ptr [EBX*0x4 + 0x708620]
switchD_0070819b::caseD_1:
007081A2  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007081A5  33 C9                     XOR ECX,ECX
007081A7  66 8B 0A                  MOV CX,word ptr [EDX]
007081AA  3B D9                     CMP EBX,ECX
007081AC  77 11                     JA 0x007081bf
007081AE  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
007081B2  47                        INC EDI
007081B3  83 FF 1F                  CMP EDI,0x1f
007081B6  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
007081B9  88 0E                     MOV byte ptr [ESI],CL
007081BB  7C 02                     JL 0x007081bf
007081BD  33 FF                     XOR EDI,EDI
LAB_007081bf:
007081BF  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007081C2  83 C2 02                  ADD EDX,0x2
007081C5  46                        INC ESI
007081C6  41                        INC ECX
007081C7  48                        DEC EAX
007081C8  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
007081CB  85 C0                     TEST EAX,EAX
007081CD  B9 02 00 00 00            MOV ECX,0x2
007081D2  0F 8E 2A 01 00 00         JLE 0x00708302
switchD_0070819b::caseD_2:
007081D8  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007081DB  41                        INC ECX
007081DC  48                        DEC EAX
007081DD  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
007081E0  B9 03 00 00 00            MOV ECX,0x3
007081E5  85 C0                     TEST EAX,EAX
007081E7  0F 8E 15 01 00 00         JLE 0x00708302
switchD_0070819b::caseD_3:
007081ED  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007081F0  33 C9                     XOR ECX,ECX
007081F2  66 8B 0A                  MOV CX,word ptr [EDX]
007081F5  3B D9                     CMP EBX,ECX
007081F7  77 11                     JA 0x0070820a
007081F9  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
007081FD  47                        INC EDI
007081FE  83 FF 1F                  CMP EDI,0x1f
00708201  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00708204  88 0E                     MOV byte ptr [ESI],CL
00708206  7C 02                     JL 0x0070820a
00708208  33 FF                     XOR EDI,EDI
LAB_0070820a:
0070820A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0070820D  83 C2 02                  ADD EDX,0x2
00708210  46                        INC ESI
00708211  41                        INC ECX
00708212  48                        DEC EAX
00708213  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00708216  85 C0                     TEST EAX,EAX
00708218  B9 04 00 00 00            MOV ECX,0x4
0070821D  0F 8E DF 00 00 00         JLE 0x00708302
switchD_0070819b::caseD_4:
00708223  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00708226  41                        INC ECX
00708227  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
0070822A  33 C9                     XOR ECX,ECX
0070822C  48                        DEC EAX
switchD_0070819b::default:
0070822D  85 C0                     TEST EAX,EAX
0070822F  0F 8E CD 00 00 00         JLE 0x00708302
00708235  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00708238  41                        INC ECX
00708239  48                        DEC EAX
0070823A  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
0070823D  B9 01 00 00 00            MOV ECX,0x1
00708242  85 C0                     TEST EAX,EAX
00708244  0F 8E B8 00 00 00         JLE 0x00708302
0070824A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_0070824d:
0070824D  33 C9                     XOR ECX,ECX
0070824F  66 8B 0A                  MOV CX,word ptr [EDX]
00708252  3B D9                     CMP EBX,ECX
00708254  77 11                     JA 0x00708267
00708256  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
0070825A  47                        INC EDI
0070825B  83 FF 1F                  CMP EDI,0x1f
0070825E  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00708261  88 0E                     MOV byte ptr [ESI],CL
00708263  7C 02                     JL 0x00708267
00708265  33 FF                     XOR EDI,EDI
LAB_00708267:
00708267  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0070826A  83 C2 02                  ADD EDX,0x2
0070826D  46                        INC ESI
0070826E  41                        INC ECX
0070826F  48                        DEC EAX
00708270  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00708273  85 C0                     TEST EAX,EAX
00708275  B9 02 00 00 00            MOV ECX,0x2
0070827A  0F 8E 82 00 00 00         JLE 0x00708302
00708280  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00708283  41                        INC ECX
00708284  48                        DEC EAX
00708285  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00708288  B9 03 00 00 00            MOV ECX,0x3
0070828D  85 C0                     TEST EAX,EAX
0070828F  7E 71                     JLE 0x00708302
00708291  33 C9                     XOR ECX,ECX
00708293  66 8B 0A                  MOV CX,word ptr [EDX]
00708296  3B D9                     CMP EBX,ECX
00708298  77 11                     JA 0x007082ab
0070829A  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
0070829E  47                        INC EDI
0070829F  83 FF 1F                  CMP EDI,0x1f
007082A2  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
007082A5  88 0E                     MOV byte ptr [ESI],CL
007082A7  7C 02                     JL 0x007082ab
007082A9  33 FF                     XOR EDI,EDI
LAB_007082ab:
007082AB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007082AE  83 C2 02                  ADD EDX,0x2
007082B1  46                        INC ESI
007082B2  41                        INC ECX
007082B3  48                        DEC EAX
007082B4  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
007082B7  85 C0                     TEST EAX,EAX
007082B9  B9 04 00 00 00            MOV ECX,0x4
007082BE  7E 42                     JLE 0x00708302
007082C0  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007082C3  41                        INC ECX
007082C4  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
007082C7  33 C9                     XOR ECX,ECX
007082C9  48                        DEC EAX
007082CA  85 C0                     TEST EAX,EAX
007082CC  7E 34                     JLE 0x00708302
007082CE  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007082D1  41                        INC ECX
007082D2  48                        DEC EAX
007082D3  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
007082D6  B9 01 00 00 00            MOV ECX,0x1
007082DB  85 C0                     TEST EAX,EAX
007082DD  0F 8F 6A FF FF FF         JG 0x0070824d
007082E3  EB 1D                     JMP 0x00708302
LAB_007082e5:
007082E5  48                        DEC EAX
007082E6  78 1A                     JS 0x00708302
007082E8  40                        INC EAX
LAB_007082e9:
007082E9  8B D9                     MOV EBX,ECX
007082EB  83 E3 01                  AND EBX,0x1
007082EE  80 FB 01                  CMP BL,0x1
007082F1  75 04                     JNZ 0x007082f7
007082F3  46                        INC ESI
007082F4  83 C2 02                  ADD EDX,0x2
LAB_007082f7:
007082F7  41                        INC ECX
007082F8  83 F9 04                  CMP ECX,0x4
007082FB  7E 02                     JLE 0x007082ff
007082FD  33 C9                     XOR ECX,ECX
LAB_007082ff:
007082FF  48                        DEC EAX
00708300  75 E7                     JNZ 0x007082e9
LAB_00708302:
00708302  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
00708305  85 C0                     TEST EAX,EAX
00708307  7E 36                     JLE 0x0070833f
00708309  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0070830C  33 C0                     XOR EAX,EAX
0070830E  8A 03                     MOV AL,byte ptr [EBX]
00708310  8B D8                     MOV EBX,EAX
00708312  89 45 44                  MOV dword ptr [EBP + 0x44],EAX
00708315  81 E3 80 00 00 00         AND EBX,0x80
0070831B  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
0070831E  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00708321  43                        INC EBX
00708322  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00708325  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00708328  85 DB                     TEST EBX,EBX
0070832A  74 05                     JZ 0x00708331
0070832C  83 E0 3F                  AND EAX,0x3f
0070832F  EB 03                     JMP 0x00708334
LAB_00708331:
00708331  83 E0 7F                  AND EAX,0x7f
LAB_00708334:
00708334  3B 45 40                  CMP EAX,dword ptr [EBP + 0x40]
00708337  0F 8E 0B FD FF FF         JLE 0x00708048
0070833D  EB 02                     JMP 0x00708341
LAB_0070833f:
0070833F  33 C0                     XOR EAX,EAX
LAB_00708341:
00708341  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
00708344  2B C3                     SUB EAX,EBX
00708346  85 DB                     TEST EBX,EBX
00708348  0F 8E E5 FA FF FF         JLE 0x00707e33
0070834E  8A 5D 44                  MOV BL,byte ptr [EBP + 0x44]
00708351  F6 C3 80                  TEST BL,0x80
00708354  0F 84 D9 FA FF FF         JZ 0x00707e33
0070835A  F6 C3 40                  TEST BL,0x40
0070835D  0F 84 1C 01 00 00         JZ 0x0070847f
00708363  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00708366  43                        INC EBX
00708367  85 C9                     TEST ECX,ECX
00708369  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
0070836C  0F 8E 8B 00 00 00         JLE 0x007083fd
00708372  49                        DEC ECX
00708373  83 F9 03                  CMP ECX,0x3
00708376  0F 87 81 00 00 00         JA 0x007083fd
switchD_0070837c::switchD:
0070837C  FF 24 8D 30 86 70 00      JMP dword ptr [ECX*0x4 + 0x708630]
switchD_0070837c::caseD_1:
00708383  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00708386  33 C9                     XOR ECX,ECX
00708388  66 8B 0A                  MOV CX,word ptr [EDX]
0070838B  3B D9                     CMP EBX,ECX
0070838D  77 11                     JA 0x007083a0
0070838F  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00708393  47                        INC EDI
00708394  83 FF 1F                  CMP EDI,0x1f
00708397  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
0070839A  88 0E                     MOV byte ptr [ESI],CL
0070839C  7C 02                     JL 0x007083a0
0070839E  33 FF                     XOR EDI,EDI
LAB_007083a0:
007083A0  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
007083A3  83 C2 02                  ADD EDX,0x2
007083A6  46                        INC ESI
007083A7  49                        DEC ECX
007083A8  85 C9                     TEST ECX,ECX
007083AA  0F 8E 83 FA FF FF         JLE 0x00707e33
007083B0  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
LAB_007083b3:
007083B3  49                        DEC ECX
007083B4  85 C9                     TEST ECX,ECX
007083B6  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
007083B9  0F 8E 77 FA FF FF         JLE 0x00707e36
switchD_0070837c::caseD_3:
007083BF  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007083C2  33 C9                     XOR ECX,ECX
007083C4  66 8B 0A                  MOV CX,word ptr [EDX]
007083C7  3B D9                     CMP EBX,ECX
007083C9  77 11                     JA 0x007083dc
007083CB  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
007083CF  47                        INC EDI
007083D0  83 FF 1F                  CMP EDI,0x1f
007083D3  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
007083D6  88 0E                     MOV byte ptr [ESI],CL
007083D8  7C 02                     JL 0x007083dc
007083DA  33 FF                     XOR EDI,EDI
LAB_007083dc:
007083DC  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
007083DF  83 C2 02                  ADD EDX,0x2
007083E2  46                        INC ESI
007083E3  49                        DEC ECX
007083E4  85 C9                     TEST ECX,ECX
007083E6  0F 8E 47 FA FF FF         JLE 0x00707e33
007083EC  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007083EF  49                        DEC ECX
007083F0  EB 0E                     JMP 0x00708400
switchD_0070837c::caseD_2:
007083F2  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
007083F5  EB BC                     JMP 0x007083b3
switchD_0070837c::caseD_4:
007083F7  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
007083FA  49                        DEC ECX
007083FB  EB 03                     JMP 0x00708400
LAB_007083fd:
007083FD  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
switchD_0070837c::default:
00708400  85 C9                     TEST ECX,ECX
00708402  0F 8E 2E FA FF FF         JLE 0x00707e36
00708408  49                        DEC ECX
00708409  85 C9                     TEST ECX,ECX
0070840B  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
0070840E  0F 8E 22 FA FF FF         JLE 0x00707e36
00708414  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_00708417:
00708417  33 C9                     XOR ECX,ECX
00708419  66 8B 0A                  MOV CX,word ptr [EDX]
0070841C  3B D9                     CMP EBX,ECX
0070841E  77 11                     JA 0x00708431
00708420  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00708424  47                        INC EDI
00708425  83 FF 1F                  CMP EDI,0x1f
00708428  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
0070842B  88 0E                     MOV byte ptr [ESI],CL
0070842D  7C 02                     JL 0x00708431
0070842F  33 FF                     XOR EDI,EDI
LAB_00708431:
00708431  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00708434  83 C2 02                  ADD EDX,0x2
00708437  83 E9 02                  SUB ECX,0x2
0070843A  46                        INC ESI
0070843B  85 C9                     TEST ECX,ECX
0070843D  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
00708440  0F 8E ED F9 FF FF         JLE 0x00707e33
00708446  33 C9                     XOR ECX,ECX
00708448  66 8B 0A                  MOV CX,word ptr [EDX]
0070844B  3B D9                     CMP EBX,ECX
0070844D  77 11                     JA 0x00708460
0070844F  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
00708453  47                        INC EDI
00708454  83 FF 1F                  CMP EDI,0x1f
00708457  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
0070845A  88 0E                     MOV byte ptr [ESI],CL
0070845C  7C 02                     JL 0x00708460
0070845E  33 FF                     XOR EDI,EDI
LAB_00708460:
00708460  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00708463  83 C2 02                  ADD EDX,0x2
00708466  83 E9 02                  SUB ECX,0x2
00708469  46                        INC ESI
0070846A  85 C9                     TEST ECX,ECX
0070846C  0F 8E C1 F9 FF FF         JLE 0x00707e33
00708472  49                        DEC ECX
00708473  85 C9                     TEST ECX,ECX
00708475  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
00708478  7F 9D                     JG 0x00708417
0070847A  E9 B4 F9 FF FF            JMP 0x00707e33
LAB_0070847f:
0070847F  85 C9                     TEST ECX,ECX
00708481  0F 8E 99 00 00 00         JLE 0x00708520
00708487  49                        DEC ECX
00708488  83 F9 03                  CMP ECX,0x3
0070848B  0F 87 8F 00 00 00         JA 0x00708520
switchD_00708491::switchD:
00708491  FF 24 8D 40 86 70 00      JMP dword ptr [ECX*0x4 + 0x708640]
switchD_00708491::caseD_1:
00708498  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070849B  33 C9                     XOR ECX,ECX
0070849D  66 8B 0A                  MOV CX,word ptr [EDX]
007084A0  3B D9                     CMP EBX,ECX
007084A2  77 11                     JA 0x007084b5
007084A4  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
007084A8  47                        INC EDI
007084A9  83 FF 1F                  CMP EDI,0x1f
007084AC  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
007084AF  88 0E                     MOV byte ptr [ESI],CL
007084B1  7C 02                     JL 0x007084b5
007084B3  33 FF                     XOR EDI,EDI
LAB_007084b5:
007084B5  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007084B8  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
007084BB  83 C2 02                  ADD EDX,0x2
007084BE  46                        INC ESI
007084BF  43                        INC EBX
007084C0  49                        DEC ECX
007084C1  85 C9                     TEST ECX,ECX
007084C3  0F 8E 6D F9 FF FF         JLE 0x00707e36
007084C9  EB 06                     JMP 0x007084d1
switchD_00708491::caseD_2:
007084CB  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007084CE  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
LAB_007084d1:
007084D1  43                        INC EBX
007084D2  49                        DEC ECX
007084D3  85 C9                     TEST ECX,ECX
007084D5  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
007084D8  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
007084DB  0F 8E 55 F9 FF FF         JLE 0x00707e36
switchD_00708491::caseD_3:
007084E1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
007084E4  33 C9                     XOR ECX,ECX
007084E6  66 8B 0A                  MOV CX,word ptr [EDX]
007084E9  3B D9                     CMP EBX,ECX
007084EB  77 11                     JA 0x007084fe
007084ED  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
007084F1  47                        INC EDI
007084F2  83 FF 1F                  CMP EDI,0x1f
007084F5  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
007084F8  88 0E                     MOV byte ptr [ESI],CL
007084FA  7C 02                     JL 0x007084fe
007084FC  33 FF                     XOR EDI,EDI
LAB_007084fe:
007084FE  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00708501  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00708504  83 C2 02                  ADD EDX,0x2
00708507  46                        INC ESI
00708508  43                        INC EBX
00708509  49                        DEC ECX
0070850A  85 C9                     TEST ECX,ECX
0070850C  0F 8E 24 F9 FF FF         JLE 0x00707e36
00708512  43                        INC EBX
00708513  49                        DEC ECX
00708514  EB 10                     JMP 0x00708526
switchD_00708491::caseD_4:
00708516  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00708519  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
0070851C  43                        INC EBX
0070851D  49                        DEC ECX
0070851E  EB 06                     JMP 0x00708526
LAB_00708520:
00708520  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00708523  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
switchD_00708491::default:
00708526  85 C9                     TEST ECX,ECX
00708528  0F 8E 08 F9 FF FF         JLE 0x00707e36
0070852E  43                        INC EBX
0070852F  49                        DEC ECX
00708530  85 C9                     TEST ECX,ECX
00708532  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00708535  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
00708538  0F 8E F8 F8 FF FF         JLE 0x00707e36
LAB_0070853e:
0070853E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00708541  33 C9                     XOR ECX,ECX
00708543  66 8B 0A                  MOV CX,word ptr [EDX]
00708546  3B D9                     CMP EBX,ECX
00708548  77 11                     JA 0x0070855b
0070854A  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
0070854E  47                        INC EDI
0070854F  83 FF 1F                  CMP EDI,0x1f
00708552  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00708555  88 0E                     MOV byte ptr [ESI],CL
00708557  7C 02                     JL 0x0070855b
00708559  33 FF                     XOR EDI,EDI
LAB_0070855b:
0070855B  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0070855E  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
00708561  83 C2 02                  ADD EDX,0x2
00708564  46                        INC ESI
00708565  43                        INC EBX
00708566  49                        DEC ECX
00708567  85 C9                     TEST ECX,ECX
00708569  0F 8E C7 F8 FF FF         JLE 0x00707e36
0070856F  43                        INC EBX
00708570  49                        DEC ECX
00708571  85 C9                     TEST ECX,ECX
00708573  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00708576  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
00708579  0F 8E B7 F8 FF FF         JLE 0x00707e36
0070857F  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00708582  33 C9                     XOR ECX,ECX
00708584  66 8B 0A                  MOV CX,word ptr [EDX]
00708587  3B D9                     CMP EBX,ECX
00708589  77 11                     JA 0x0070859c
0070858B  8B 4C BD 84               MOV ECX,dword ptr [EBP + EDI*0x4 + -0x7c]
0070858F  47                        INC EDI
00708590  83 FF 1F                  CMP EDI,0x1f
00708593  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00708596  88 0E                     MOV byte ptr [ESI],CL
00708598  7C 02                     JL 0x0070859c
0070859A  33 FF                     XOR EDI,EDI
LAB_0070859c:
0070859C  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0070859F  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
007085A2  83 C2 02                  ADD EDX,0x2
007085A5  46                        INC ESI
007085A6  43                        INC EBX
007085A7  49                        DEC ECX
007085A8  85 C9                     TEST ECX,ECX
007085AA  0F 8E 86 F8 FF FF         JLE 0x00707e36
007085B0  43                        INC EBX
007085B1  49                        DEC ECX
007085B2  85 C9                     TEST ECX,ECX
007085B4  0F 8E 7C F8 FF FF         JLE 0x00707e36
007085BA  43                        INC EBX
007085BB  49                        DEC ECX
007085BC  85 C9                     TEST ECX,ECX
007085BE  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
007085C1  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
007085C4  0F 8F 74 FF FF FF         JG 0x0070853e
007085CA  E9 67 F8 FF FF            JMP 0x00707e36
