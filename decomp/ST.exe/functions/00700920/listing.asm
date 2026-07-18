FUN_00700920:
00700920  55                        PUSH EBP
00700921  8B EC                     MOV EBP,ESP
00700923  83 EC 20                  SUB ESP,0x20
00700926  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00700929  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00700930  48                        DEC EAX
00700931  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
0070093B  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
0070093E  0F 88 62 09 00 00         JS 0x007012a6
00700944  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
00700947  53                        PUSH EBX
00700948  56                        PUSH ESI
00700949  57                        PUSH EDI
0070094A  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_0070094d:
0070094D  F6 C2 01                  TEST DL,0x1
00700950  0F 85 8F 00 00 00         JNZ 0x007009e5
00700956  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
LAB_00700959:
00700959  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0070095C  48                        DEC EAX
0070095D  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
00700960  78 7D                     JS 0x007009df
00700962  33 C0                     XOR EAX,EAX
00700964  8A 07                     MOV AL,byte ptr [EDI]
00700966  47                        INC EDI
00700967  85 C0                     TEST EAX,EAX
00700969  74 2D                     JZ 0x00700998
0070096B  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
LAB_0070096e:
0070096E  A8 80                     TEST AL,0x80
00700970  74 16                     JZ 0x00700988
00700972  A8 40                     TEST AL,0x40
00700974  74 06                     JZ 0x0070097c
00700976  47                        INC EDI
00700977  83 E0 3F                  AND EAX,0x3f
0070097A  EB 0F                     JMP 0x0070098b
LAB_0070097c:
0070097C  8B F0                     MOV ESI,EAX
0070097E  83 E6 3F                  AND ESI,0x3f
00700981  03 FE                     ADD EDI,ESI
00700983  83 E0 3F                  AND EAX,0x3f
00700986  EB 03                     JMP 0x0070098b
LAB_00700988:
00700988  83 E0 7F                  AND EAX,0x7f
LAB_0070098b:
0070098B  2B C8                     SUB ECX,EAX
0070098D  85 C9                     TEST ECX,ECX
0070098F  7E 07                     JLE 0x00700998
00700991  33 C0                     XOR EAX,EAX
00700993  8A 07                     MOV AL,byte ptr [EDI]
00700995  47                        INC EDI
00700996  EB D6                     JMP 0x0070096e
LAB_00700998:
00700998  33 C0                     XOR EAX,EAX
0070099A  8A 03                     MOV AL,byte ptr [EBX]
0070099C  43                        INC EBX
0070099D  85 C0                     TEST EAX,EAX
0070099F  74 2D                     JZ 0x007009ce
007009A1  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
LAB_007009a4:
007009A4  A8 80                     TEST AL,0x80
007009A6  74 16                     JZ 0x007009be
007009A8  A8 40                     TEST AL,0x40
007009AA  74 06                     JZ 0x007009b2
007009AC  43                        INC EBX
007009AD  83 E0 3F                  AND EAX,0x3f
007009B0  EB 0F                     JMP 0x007009c1
LAB_007009b2:
007009B2  8B F0                     MOV ESI,EAX
007009B4  83 E6 3F                  AND ESI,0x3f
007009B7  03 DE                     ADD EBX,ESI
007009B9  83 E0 3F                  AND EAX,0x3f
007009BC  EB 03                     JMP 0x007009c1
LAB_007009be:
007009BE  83 E0 7F                  AND EAX,0x7f
LAB_007009c1:
007009C1  2B C8                     SUB ECX,EAX
007009C3  85 C9                     TEST ECX,ECX
007009C5  7E 07                     JLE 0x007009ce
007009C7  33 C0                     XOR EAX,EAX
007009C9  8A 03                     MOV AL,byte ptr [EBX]
007009CB  43                        INC EBX
007009CC  EB D6                     JMP 0x007009a4
LAB_007009ce:
007009CE  42                        INC EDX
007009CF  83 FA 04                  CMP EDX,0x4
007009D2  7E 02                     JLE 0x007009d6
007009D4  33 D2                     XOR EDX,EDX
LAB_007009d6:
007009D6  F6 C2 01                  TEST DL,0x1
007009D9  0F 84 7A FF FF FF         JZ 0x00700959
LAB_007009df:
007009DF  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
007009E2  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
LAB_007009e5:
007009E5  33 DB                     XOR EBX,EBX
007009E7  8A 1F                     MOV BL,byte ptr [EDI]
007009E9  47                        INC EDI
007009EA  85 DB                     TEST EBX,EBX
007009EC  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
007009EF  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
007009F2  0F 84 7A 08 00 00         JZ 0x00701272
007009F8  8B C3                     MOV EAX,EBX
007009FA  25 C0 00 00 00            AND EAX,0xc0
007009FF  3D C0 00 00 00            CMP EAX,0xc0
00700A04  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00700A07  75 0B                     JNZ 0x00700a14
00700A09  33 C0                     XOR EAX,EAX
00700A0B  8A 07                     MOV AL,byte ptr [EDI]
00700A0D  47                        INC EDI
00700A0E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00700A11  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_00700a14:
00700A14  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
00700A17  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
00700A1A  33 C9                     XOR ECX,ECX
00700A1C  8A 0A                     MOV CL,byte ptr [EDX]
00700A1E  42                        INC EDX
00700A1F  F6 C1 80                  TEST CL,0x80
00700A22  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00700A25  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
00700A28  8B C1                     MOV EAX,ECX
00700A2A  74 15                     JZ 0x00700a41
00700A2C  83 E0 3F                  AND EAX,0x3f
00700A2F  F6 C1 40                  TEST CL,0x40
00700A32  74 06                     JZ 0x00700a3a
00700A34  42                        INC EDX
00700A35  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
00700A38  EB 0A                     JMP 0x00700a44
LAB_00700a3a:
00700A3A  03 D0                     ADD EDX,EAX
00700A3C  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
00700A3F  EB 03                     JMP 0x00700a44
LAB_00700a41:
00700A41  83 E0 7F                  AND EAX,0x7f
LAB_00700a44:
00700A44  3B 45 40                  CMP EAX,dword ptr [EBP + 0x40]
00700A47  7F 2A                     JG 0x00700a73
LAB_00700a49:
00700A49  33 C9                     XOR ECX,ECX
00700A4B  2B F0                     SUB ESI,EAX
00700A4D  8A 0A                     MOV CL,byte ptr [EDX]
00700A4F  42                        INC EDX
00700A50  F6 C1 80                  TEST CL,0x80
00700A53  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00700A56  8B C1                     MOV EAX,ECX
00700A58  74 0F                     JZ 0x00700a69
00700A5A  83 E0 3F                  AND EAX,0x3f
00700A5D  F6 C1 40                  TEST CL,0x40
00700A60  74 03                     JZ 0x00700a65
00700A62  42                        INC EDX
00700A63  EB 07                     JMP 0x00700a6c
LAB_00700a65:
00700A65  03 D0                     ADD EDX,EAX
00700A67  EB 03                     JMP 0x00700a6c
LAB_00700a69:
00700A69  83 E0 7F                  AND EAX,0x7f
LAB_00700a6c:
00700A6C  3B C6                     CMP EAX,ESI
00700A6E  7E D9                     JLE 0x00700a49
00700A70  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
LAB_00700a73:
00700A73  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00700A76  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
00700A79  2B C6                     SUB EAX,ESI
00700A7B  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
00700A7E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00700A81  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00700A84  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00700a87:
00700A87  F6 C3 80                  TEST BL,0x80
00700A8A  8B C3                     MOV EAX,EBX
00700A8C  74 14                     JZ 0x00700aa2
00700A8E  83 E0 3F                  AND EAX,0x3f
00700A91  3B C6                     CMP EAX,ESI
00700A93  7F 36                     JG 0x00700acb
00700A95  81 7D E0 80 00 00 00      CMP dword ptr [EBP + -0x20],0x80
00700A9C  75 0B                     JNZ 0x00700aa9
00700A9E  03 F8                     ADD EDI,EAX
00700AA0  EB 07                     JMP 0x00700aa9
LAB_00700aa2:
00700AA2  83 E0 7F                  AND EAX,0x7f
00700AA5  3B C6                     CMP EAX,ESI
00700AA7  7F 22                     JG 0x00700acb
LAB_00700aa9:
00700AA9  33 DB                     XOR EBX,EBX
00700AAB  2B F0                     SUB ESI,EAX
00700AAD  8A 1F                     MOV BL,byte ptr [EDI]
00700AAF  47                        INC EDI
00700AB0  8B C3                     MOV EAX,EBX
00700AB2  25 C0 00 00 00            AND EAX,0xc0
00700AB7  3D C0 00 00 00            CMP EAX,0xc0
00700ABC  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00700ABF  75 C6                     JNZ 0x00700a87
00700AC1  33 C0                     XOR EAX,EAX
00700AC3  8A 07                     MOV AL,byte ptr [EDI]
00700AC5  47                        INC EDI
00700AC6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00700AC9  EB BC                     JMP 0x00700a87
LAB_00700acb:
00700ACB  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00700ACE  81 E3 C0 00 00 00         AND EBX,0xc0
00700AD4  2B C6                     SUB EAX,ESI
00700AD6  80 FB 80                  CMP BL,0x80
00700AD9  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00700ADC  75 05                     JNZ 0x00700ae3
00700ADE  03 FE                     ADD EDI,ESI
00700AE0  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_00700ae3:
00700AE3  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00700AE6  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00700AE9  85 DB                     TEST EBX,EBX
00700AEB  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00700AEE  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
00700AF5  0F 8E E0 06 00 00         JLE 0x007011db
LAB_00700afb:
00700AFB  39 5D F0                  CMP dword ptr [EBP + -0x10],EBX
00700AFE  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00700B01  7D 7D                     JGE 0x00700b80
00700B03  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00700B06  81 E7 80 00 00 00         AND EDI,0x80
LAB_00700b0c:
00700B0C  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
00700B0F  33 DB                     XOR EBX,EBX
00700B11  8A 1E                     MOV BL,byte ptr [ESI]
00700B13  8B F3                     MOV ESI,EBX
00700B15  81 E3 80 00 00 00         AND EBX,0x80
00700B1B  33 DF                     XOR EBX,EDI
00700B1D  75 5B                     JNZ 0x00700b7a
00700B1F  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00700B22  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00700B25  2B DF                     SUB EBX,EDI
00700B27  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
00700B2A  47                        INC EDI
00700B2B  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00700B2E  89 7D 38                  MOV dword ptr [EBP + 0x38],EDI
00700B31  8B FE                     MOV EDI,ESI
00700B33  81 E7 80 00 00 00         AND EDI,0x80
00700B39  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00700B3C  74 27                     JZ 0x00700b65
00700B3E  8A 5D F8                  MOV BL,byte ptr [EBP + -0x8]
00700B41  83 E6 3F                  AND ESI,0x3f
00700B44  F6 C3 40                  TEST BL,0x40
00700B47  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00700B4A  74 0C                     JZ 0x00700b58
00700B4C  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
00700B4F  46                        INC ESI
00700B50  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
00700B53  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00700B56  EB 13                     JMP 0x00700b6b
LAB_00700b58:
00700B58  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00700B5B  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
00700B5E  03 DE                     ADD EBX,ESI
00700B60  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
00700B63  EB 06                     JMP 0x00700b6b
LAB_00700b65:
00700B65  83 E6 7F                  AND ESI,0x7f
00700B68  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_00700b6b:
00700B6B  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00700B6E  03 DE                     ADD EBX,ESI
00700B70  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00700B73  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00700B76  3B F3                     CMP ESI,EBX
00700B78  7C 92                     JL 0x00700b0c
LAB_00700b7a:
00700B7A  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00700B7D  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_00700b80:
00700B80  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
00700B83  03 DE                     ADD EBX,ESI
00700B85  3B 5D 28                  CMP EBX,dword ptr [EBP + 0x28]
00700B88  7E 08                     JLE 0x00700b92
00700B8A  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
00700B8D  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
00700B90  2B F3                     SUB ESI,EBX
LAB_00700b92:
00700B92  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
00700B95  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00700B98  03 DE                     ADD EBX,ESI
00700B9A  3B C6                     CMP EAX,ESI
00700B9C  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
00700B9F  0F 8F 00 03 00 00         JG 0x00700ea5
00700BA5  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00700BA8  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00700BAB  81 E6 80 00 00 00         AND ESI,0x80
LAB_00700bb1:
00700BB1  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00700BB4  2B D8                     SUB EBX,EAX
00700BB6  85 F6                     TEST ESI,ESI
00700BB8  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00700BBB  0F 84 AA 02 00 00         JZ 0x00700e6b
00700BC1  F6 45 EC 40               TEST byte ptr [EBP + -0x14],0x40
00700BC5  0F 84 23 01 00 00         JZ 0x00700cee
00700BCB  85 C9                     TEST ECX,ECX
00700BCD  0F 8E 98 00 00 00         JLE 0x00700c6b
00700BD3  8D 71 FF                  LEA ESI,[ECX + -0x1]
00700BD6  83 FE 03                  CMP ESI,0x3
00700BD9  0F 87 8C 00 00 00         JA 0x00700c6b
switchD_00700bdf::switchD:
00700BDF  FF 24 B5 AC 12 70 00      JMP dword ptr [ESI*0x4 + 0x7012ac]
switchD_00700bdf::caseD_1:
00700BE6  F6 45 F8 80               TEST byte ptr [EBP + -0x8],0x80
00700BEA  74 16                     JZ 0x00700c02
00700BEC  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00700BEF  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00700BF2  33 C9                     XOR ECX,ECX
00700BF4  66 8B 0E                  MOV CX,word ptr [ESI]
00700BF7  3B F9                     CMP EDI,ECX
00700BF9  77 0A                     JA 0x00700c05
00700BFB  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
00700BFE  88 0A                     MOV byte ptr [EDX],CL
00700C00  EB 03                     JMP 0x00700c05
LAB_00700c02:
00700C02  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00700c05:
00700C05  83 C6 02                  ADD ESI,0x2
00700C08  42                        INC EDX
00700C09  48                        DEC EAX
00700C0A  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00700C0D  85 C0                     TEST EAX,EAX
00700C0F  B9 02 00 00 00            MOV ECX,0x2
00700C14  0F 8E CC 00 00 00         JLE 0x00700ce6
00700C1A  EB 03                     JMP 0x00700c1f
switchD_00700bdf::caseD_2:
00700C1C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00700c1f:
00700C1F  48                        DEC EAX
00700C20  B9 03 00 00 00            MOV ECX,0x3
00700C25  85 C0                     TEST EAX,EAX
00700C27  0F 8E B9 00 00 00         JLE 0x00700ce6
00700C2D  EB 03                     JMP 0x00700c32
switchD_00700bdf::caseD_3:
00700C2F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00700c32:
00700C32  F6 45 F8 80               TEST byte ptr [EBP + -0x8],0x80
00700C36  74 11                     JZ 0x00700c49
00700C38  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00700C3B  33 C9                     XOR ECX,ECX
00700C3D  66 8B 0E                  MOV CX,word ptr [ESI]
00700C40  3B F9                     CMP EDI,ECX
00700C42  77 05                     JA 0x00700c49
00700C44  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
00700C47  88 0A                     MOV byte ptr [EDX],CL
LAB_00700c49:
00700C49  83 C6 02                  ADD ESI,0x2
00700C4C  42                        INC EDX
00700C4D  48                        DEC EAX
00700C4E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00700C51  85 C0                     TEST EAX,EAX
00700C53  B9 04 00 00 00            MOV ECX,0x4
00700C58  0F 8E 88 00 00 00         JLE 0x00700ce6
00700C5E  33 C9                     XOR ECX,ECX
00700C60  48                        DEC EAX
00700C61  EB 0B                     JMP 0x00700c6e
switchD_00700bdf::caseD_4:
00700C63  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00700C66  33 C9                     XOR ECX,ECX
00700C68  48                        DEC EAX
00700C69  EB 03                     JMP 0x00700c6e
LAB_00700c6b:
00700C6B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
switchD_00700bdf::default:
00700C6E  85 C0                     TEST EAX,EAX
00700C70  7E 74                     JLE 0x00700ce6
00700C72  48                        DEC EAX
00700C73  B9 01 00 00 00            MOV ECX,0x1
00700C78  85 C0                     TEST EAX,EAX
00700C7A  7E 6A                     JLE 0x00700ce6
00700C7C  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00700C7F  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00700C82  81 E7 80 00 00 00         AND EDI,0x80
LAB_00700c88:
00700C88  85 FF                     TEST EDI,EDI
00700C8A  74 0E                     JZ 0x00700c9a
00700C8C  33 C9                     XOR ECX,ECX
00700C8E  66 8B 0E                  MOV CX,word ptr [ESI]
00700C91  3B D9                     CMP EBX,ECX
00700C93  77 05                     JA 0x00700c9a
00700C95  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
00700C98  88 0A                     MOV byte ptr [EDX],CL
LAB_00700c9a:
00700C9A  83 C6 02                  ADD ESI,0x2
00700C9D  42                        INC EDX
00700C9E  48                        DEC EAX
00700C9F  B9 02 00 00 00            MOV ECX,0x2
00700CA4  85 C0                     TEST EAX,EAX
00700CA6  7E 3B                     JLE 0x00700ce3
00700CA8  48                        DEC EAX
00700CA9  B9 03 00 00 00            MOV ECX,0x3
00700CAE  85 C0                     TEST EAX,EAX
00700CB0  7E 31                     JLE 0x00700ce3
00700CB2  85 FF                     TEST EDI,EDI
00700CB4  74 0E                     JZ 0x00700cc4
00700CB6  33 C9                     XOR ECX,ECX
00700CB8  66 8B 0E                  MOV CX,word ptr [ESI]
00700CBB  3B D9                     CMP EBX,ECX
00700CBD  77 05                     JA 0x00700cc4
00700CBF  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
00700CC2  88 0A                     MOV byte ptr [EDX],CL
LAB_00700cc4:
00700CC4  83 C6 02                  ADD ESI,0x2
00700CC7  42                        INC EDX
00700CC8  48                        DEC EAX
00700CC9  B9 04 00 00 00            MOV ECX,0x4
00700CCE  85 C0                     TEST EAX,EAX
00700CD0  7E 11                     JLE 0x00700ce3
00700CD2  33 C9                     XOR ECX,ECX
00700CD4  48                        DEC EAX
00700CD5  85 C0                     TEST EAX,EAX
00700CD7  7E 0A                     JLE 0x00700ce3
00700CD9  48                        DEC EAX
00700CDA  B9 01 00 00 00            MOV ECX,0x1
00700CDF  85 C0                     TEST EAX,EAX
00700CE1  7F A5                     JG 0x00700c88
LAB_00700ce3:
00700CE3  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_00700ce6:
00700CE6  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00700CE9  E9 48 01 00 00            JMP 0x00700e36
LAB_00700cee:
00700CEE  85 C9                     TEST ECX,ECX
00700CF0  0F 8E B9 00 00 00         JLE 0x00700daf
00700CF6  8D 71 FF                  LEA ESI,[ECX + -0x1]
00700CF9  83 FE 03                  CMP ESI,0x3
00700CFC  0F 87 AD 00 00 00         JA 0x00700daf
switchD_00700d02::switchD:
00700D02  FF 24 B5 BC 12 70 00      JMP dword ptr [ESI*0x4 + 0x7012bc]
switchD_00700d02::caseD_1:
00700D09  F6 45 F8 80               TEST byte ptr [EBP + -0x8],0x80
00700D0D  74 18                     JZ 0x00700d27
00700D0F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00700D12  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00700D15  33 C9                     XOR ECX,ECX
00700D17  66 8B 0E                  MOV CX,word ptr [ESI]
00700D1A  3B F9                     CMP EDI,ECX
00700D1C  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00700D1F  77 0C                     JA 0x00700d2d
00700D21  8A 0F                     MOV CL,byte ptr [EDI]
00700D23  88 0A                     MOV byte ptr [EDX],CL
00700D25  EB 06                     JMP 0x00700d2d
LAB_00700d27:
00700D27  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00700D2A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00700d2d:
00700D2D  83 C6 02                  ADD ESI,0x2
00700D30  42                        INC EDX
00700D31  47                        INC EDI
00700D32  48                        DEC EAX
00700D33  85 C0                     TEST EAX,EAX
00700D35  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00700D38  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00700D3B  B9 02 00 00 00            MOV ECX,0x2
00700D40  0F 8E F0 00 00 00         JLE 0x00700e36
00700D46  EB 06                     JMP 0x00700d4e
switchD_00700d02::caseD_2:
00700D48  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00700D4B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00700d4e:
00700D4E  47                        INC EDI
00700D4F  48                        DEC EAX
00700D50  85 C0                     TEST EAX,EAX
00700D52  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00700D55  B9 03 00 00 00            MOV ECX,0x3
00700D5A  0F 8E D6 00 00 00         JLE 0x00700e36
00700D60  EB 06                     JMP 0x00700d68
switchD_00700d02::caseD_3:
00700D62  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00700D65  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00700d68:
00700D68  F6 45 F8 80               TEST byte ptr [EBP + -0x8],0x80
00700D6C  74 10                     JZ 0x00700d7e
00700D6E  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00700D71  33 C9                     XOR ECX,ECX
00700D73  66 8B 0E                  MOV CX,word ptr [ESI]
00700D76  3B D9                     CMP EBX,ECX
00700D78  77 04                     JA 0x00700d7e
00700D7A  8A 0F                     MOV CL,byte ptr [EDI]
00700D7C  88 0A                     MOV byte ptr [EDX],CL
LAB_00700d7e:
00700D7E  83 C6 02                  ADD ESI,0x2
00700D81  42                        INC EDX
00700D82  47                        INC EDI
00700D83  48                        DEC EAX
00700D84  85 C0                     TEST EAX,EAX
00700D86  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00700D89  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00700D8C  B9 04 00 00 00            MOV ECX,0x4
00700D91  0F 8E 9F 00 00 00         JLE 0x00700e36
00700D97  47                        INC EDI
00700D98  33 C9                     XOR ECX,ECX
00700D9A  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00700D9D  48                        DEC EAX
00700D9E  EB 15                     JMP 0x00700db5
switchD_00700d02::caseD_4:
00700DA0  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00700DA3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00700DA6  47                        INC EDI
00700DA7  33 C9                     XOR ECX,ECX
00700DA9  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00700DAC  48                        DEC EAX
00700DAD  EB 06                     JMP 0x00700db5
LAB_00700daf:
00700DAF  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00700DB2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
switchD_00700d02::default:
00700DB5  85 C0                     TEST EAX,EAX
00700DB7  7E 7D                     JLE 0x00700e36
00700DB9  47                        INC EDI
00700DBA  48                        DEC EAX
00700DBB  85 C0                     TEST EAX,EAX
00700DBD  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00700DC0  B9 01 00 00 00            MOV ECX,0x1
00700DC5  7E 6F                     JLE 0x00700e36
00700DC7  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00700DCA  81 E3 80 00 00 00         AND EBX,0x80
LAB_00700dd0:
00700DD0  85 DB                     TEST EBX,EBX
00700DD2  74 0E                     JZ 0x00700de2
00700DD4  33 C9                     XOR ECX,ECX
00700DD6  66 8B 0E                  MOV CX,word ptr [ESI]
00700DD9  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
00700DDC  77 04                     JA 0x00700de2
00700DDE  8A 0F                     MOV CL,byte ptr [EDI]
00700DE0  88 0A                     MOV byte ptr [EDX],CL
LAB_00700de2:
00700DE2  83 C6 02                  ADD ESI,0x2
00700DE5  42                        INC EDX
00700DE6  47                        INC EDI
00700DE7  48                        DEC EAX
00700DE8  85 C0                     TEST EAX,EAX
00700DEA  B9 02 00 00 00            MOV ECX,0x2
00700DEF  7E 3F                     JLE 0x00700e30
00700DF1  47                        INC EDI
00700DF2  48                        DEC EAX
00700DF3  85 C0                     TEST EAX,EAX
00700DF5  B9 03 00 00 00            MOV ECX,0x3
00700DFA  7E 34                     JLE 0x00700e30
00700DFC  85 DB                     TEST EBX,EBX
00700DFE  74 0E                     JZ 0x00700e0e
00700E00  33 C9                     XOR ECX,ECX
00700E02  66 8B 0E                  MOV CX,word ptr [ESI]
00700E05  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
00700E08  77 04                     JA 0x00700e0e
00700E0A  8A 0F                     MOV CL,byte ptr [EDI]
00700E0C  88 0A                     MOV byte ptr [EDX],CL
LAB_00700e0e:
00700E0E  83 C6 02                  ADD ESI,0x2
00700E11  42                        INC EDX
00700E12  47                        INC EDI
00700E13  48                        DEC EAX
00700E14  85 C0                     TEST EAX,EAX
00700E16  B9 04 00 00 00            MOV ECX,0x4
00700E1B  7E 13                     JLE 0x00700e30
00700E1D  47                        INC EDI
00700E1E  33 C9                     XOR ECX,ECX
00700E20  48                        DEC EAX
00700E21  85 C0                     TEST EAX,EAX
00700E23  7E 0B                     JLE 0x00700e30
00700E25  47                        INC EDI
00700E26  48                        DEC EAX
00700E27  85 C0                     TEST EAX,EAX
00700E29  B9 01 00 00 00            MOV ECX,0x1
00700E2E  7F A0                     JG 0x00700dd0
LAB_00700e30:
00700E30  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_00700e33:
00700E33  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_00700e36:
00700E36  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00700E39  85 C0                     TEST EAX,EAX
00700E3B  7E 63                     JLE 0x00700ea0
00700E3D  33 DB                     XOR EBX,EBX
00700E3F  8A 1F                     MOV BL,byte ptr [EDI]
00700E41  8B F3                     MOV ESI,EBX
00700E43  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00700E46  81 E6 80 00 00 00         AND ESI,0x80
00700E4C  47                        INC EDI
00700E4D  85 F6                     TEST ESI,ESI
00700E4F  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00700E52  8B C3                     MOV EAX,EBX
00700E54  74 37                     JZ 0x00700e8d
00700E56  83 E0 3F                  AND EAX,0x3f
00700E59  F6 C3 40                  TEST BL,0x40
00700E5C  74 34                     JZ 0x00700e92
00700E5E  33 DB                     XOR EBX,EBX
00700E60  8A 1F                     MOV BL,byte ptr [EDI]
00700E62  47                        INC EDI
00700E63  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00700E66  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00700E69  EB 2A                     JMP 0x00700e95
LAB_00700e6b:
00700E6B  48                        DEC EAX
00700E6C  78 C8                     JS 0x00700e36
00700E6E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00700E71  40                        INC EAX
LAB_00700e72:
00700E72  8B D9                     MOV EBX,ECX
00700E74  83 E3 01                  AND EBX,0x1
00700E77  80 FB 01                  CMP BL,0x1
00700E7A  75 04                     JNZ 0x00700e80
00700E7C  42                        INC EDX
00700E7D  83 C6 02                  ADD ESI,0x2
LAB_00700e80:
00700E80  41                        INC ECX
00700E81  83 F9 04                  CMP ECX,0x4
00700E84  7E 02                     JLE 0x00700e88
00700E86  33 C9                     XOR ECX,ECX
LAB_00700e88:
00700E88  48                        DEC EAX
00700E89  75 E7                     JNZ 0x00700e72
00700E8B  EB A6                     JMP 0x00700e33
LAB_00700e8d:
00700E8D  83 E0 7F                  AND EAX,0x7f
00700E90  EB 03                     JMP 0x00700e95
LAB_00700e92:
00700E92  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_00700e95:
00700E95  3B 45 E8                  CMP EAX,dword ptr [EBP + -0x18]
00700E98  0F 8E 13 FD FF FF         JLE 0x00700bb1
00700E9E  EB 02                     JMP 0x00700ea2
LAB_00700ea0:
00700EA0  33 C0                     XOR EAX,EAX
LAB_00700ea2:
00700EA2  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_00700ea5:
00700EA5  2B C6                     SUB EAX,ESI
00700EA7  85 F6                     TEST ESI,ESI
00700EA9  0F 8E BB 02 00 00         JLE 0x0070116a
00700EAF  8A 5D EC                  MOV BL,byte ptr [EBP + -0x14]
00700EB2  F6 C3 80                  TEST BL,0x80
00700EB5  0F 84 89 02 00 00         JZ 0x00701144
00700EBB  F6 C3 40                  TEST BL,0x40
00700EBE  0F 84 27 01 00 00         JZ 0x00700feb
00700EC4  85 C9                     TEST ECX,ECX
00700EC6  0F 8E 98 00 00 00         JLE 0x00700f64
00700ECC  8D 79 FF                  LEA EDI,[ECX + -0x1]
00700ECF  83 FF 03                  CMP EDI,0x3
00700ED2  0F 87 8C 00 00 00         JA 0x00700f64
switchD_00700ed8::switchD:
00700ED8  FF 24 BD CC 12 70 00      JMP dword ptr [EDI*0x4 + 0x7012cc]
switchD_00700ed8::caseD_1:
00700EDF  F6 45 F8 80               TEST byte ptr [EBP + -0x8],0x80
00700EE3  74 16                     JZ 0x00700efb
00700EE5  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00700EE8  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00700EEB  33 C9                     XOR ECX,ECX
00700EED  66 8B 0F                  MOV CX,word ptr [EDI]
00700EF0  3B D9                     CMP EBX,ECX
00700EF2  77 0A                     JA 0x00700efe
00700EF4  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
00700EF7  88 0A                     MOV byte ptr [EDX],CL
00700EF9  EB 03                     JMP 0x00700efe
LAB_00700efb:
00700EFB  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00700efe:
00700EFE  83 C7 02                  ADD EDI,0x2
00700F01  42                        INC EDX
00700F02  4E                        DEC ESI
00700F03  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00700F06  85 F6                     TEST ESI,ESI
00700F08  B9 02 00 00 00            MOV ECX,0x2
00700F0D  0F 8E 54 02 00 00         JLE 0x00701167
00700F13  EB 03                     JMP 0x00700f18
switchD_00700ed8::caseD_2:
00700F15  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00700f18:
00700F18  4E                        DEC ESI
00700F19  B9 03 00 00 00            MOV ECX,0x3
00700F1E  85 F6                     TEST ESI,ESI
00700F20  0F 8E 41 02 00 00         JLE 0x00701167
00700F26  EB 03                     JMP 0x00700f2b
switchD_00700ed8::caseD_3:
00700F28  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00700f2b:
00700F2B  F6 45 F8 80               TEST byte ptr [EBP + -0x8],0x80
00700F2F  74 11                     JZ 0x00700f42
00700F31  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00700F34  33 C9                     XOR ECX,ECX
00700F36  66 8B 0F                  MOV CX,word ptr [EDI]
00700F39  3B D9                     CMP EBX,ECX
00700F3B  77 05                     JA 0x00700f42
00700F3D  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
00700F40  88 0A                     MOV byte ptr [EDX],CL
LAB_00700f42:
00700F42  83 C7 02                  ADD EDI,0x2
00700F45  42                        INC EDX
00700F46  4E                        DEC ESI
00700F47  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00700F4A  85 F6                     TEST ESI,ESI
00700F4C  B9 04 00 00 00            MOV ECX,0x4
00700F51  0F 8E 10 02 00 00         JLE 0x00701167
00700F57  33 C9                     XOR ECX,ECX
00700F59  4E                        DEC ESI
00700F5A  EB 0B                     JMP 0x00700f67
switchD_00700ed8::caseD_4:
00700F5C  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00700F5F  33 C9                     XOR ECX,ECX
00700F61  4E                        DEC ESI
00700F62  EB 03                     JMP 0x00700f67
LAB_00700f64:
00700F64  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
switchD_00700ed8::default:
00700F67  85 F6                     TEST ESI,ESI
00700F69  0F 8E F8 01 00 00         JLE 0x00701167
00700F6F  4E                        DEC ESI
00700F70  B9 01 00 00 00            MOV ECX,0x1
00700F75  85 F6                     TEST ESI,ESI
00700F77  0F 8E EA 01 00 00         JLE 0x00701167
00700F7D  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00700F80  81 E3 80 00 00 00         AND EBX,0x80
LAB_00700f86:
00700F86  85 DB                     TEST EBX,EBX
00700F88  74 0F                     JZ 0x00700f99
00700F8A  33 C9                     XOR ECX,ECX
00700F8C  66 8B 0F                  MOV CX,word ptr [EDI]
00700F8F  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
00700F92  77 05                     JA 0x00700f99
00700F94  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
00700F97  88 0A                     MOV byte ptr [EDX],CL
LAB_00700f99:
00700F99  83 C7 02                  ADD EDI,0x2
00700F9C  42                        INC EDX
00700F9D  4E                        DEC ESI
00700F9E  B9 02 00 00 00            MOV ECX,0x2
00700FA3  85 F6                     TEST ESI,ESI
00700FA5  7E 3C                     JLE 0x00700fe3
00700FA7  4E                        DEC ESI
00700FA8  B9 03 00 00 00            MOV ECX,0x3
00700FAD  85 F6                     TEST ESI,ESI
00700FAF  7E 32                     JLE 0x00700fe3
00700FB1  85 DB                     TEST EBX,EBX
00700FB3  74 0F                     JZ 0x00700fc4
00700FB5  33 C9                     XOR ECX,ECX
00700FB7  66 8B 0F                  MOV CX,word ptr [EDI]
00700FBA  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
00700FBD  77 05                     JA 0x00700fc4
00700FBF  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
00700FC2  88 0A                     MOV byte ptr [EDX],CL
LAB_00700fc4:
00700FC4  83 C7 02                  ADD EDI,0x2
00700FC7  42                        INC EDX
00700FC8  4E                        DEC ESI
00700FC9  B9 04 00 00 00            MOV ECX,0x4
00700FCE  85 F6                     TEST ESI,ESI
00700FD0  7E 11                     JLE 0x00700fe3
00700FD2  33 C9                     XOR ECX,ECX
00700FD4  4E                        DEC ESI
00700FD5  85 F6                     TEST ESI,ESI
00700FD7  7E 0A                     JLE 0x00700fe3
00700FD9  4E                        DEC ESI
00700FDA  B9 01 00 00 00            MOV ECX,0x1
00700FDF  85 F6                     TEST ESI,ESI
00700FE1  7F A3                     JG 0x00700f86
LAB_00700fe3:
00700FE3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00700FE6  E9 7C 01 00 00            JMP 0x00701167
LAB_00700feb:
00700FEB  85 C9                     TEST ECX,ECX
00700FED  0F 8E B7 00 00 00         JLE 0x007010aa
00700FF3  8D 79 FF                  LEA EDI,[ECX + -0x1]
00700FF6  83 FF 03                  CMP EDI,0x3
00700FF9  0F 87 AB 00 00 00         JA 0x007010aa
switchD_00700fff::switchD:
00700FFF  FF 24 BD DC 12 70 00      JMP dword ptr [EDI*0x4 + 0x7012dc]
switchD_00700fff::caseD_1:
00701006  F6 45 F8 80               TEST byte ptr [EBP + -0x8],0x80
0070100A  74 18                     JZ 0x00701024
0070100C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070100F  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00701012  33 C9                     XOR ECX,ECX
00701014  66 8B 0B                  MOV CX,word ptr [EBX]
00701017  3B F9                     CMP EDI,ECX
00701019  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
0070101C  77 0C                     JA 0x0070102a
0070101E  8A 0F                     MOV CL,byte ptr [EDI]
00701020  88 0A                     MOV byte ptr [EDX],CL
00701022  EB 06                     JMP 0x0070102a
LAB_00701024:
00701024  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00701027  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0070102a:
0070102A  83 C3 02                  ADD EBX,0x2
0070102D  42                        INC EDX
0070102E  47                        INC EDI
0070102F  4E                        DEC ESI
00701030  85 F6                     TEST ESI,ESI
00701032  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00701035  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00701038  B9 02 00 00 00            MOV ECX,0x2
0070103D  0F 8E 27 01 00 00         JLE 0x0070116a
00701043  EB 06                     JMP 0x0070104b
switchD_00700fff::caseD_2:
00701045  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00701048  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0070104b:
0070104B  47                        INC EDI
0070104C  4E                        DEC ESI
0070104D  85 F6                     TEST ESI,ESI
0070104F  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00701052  B9 03 00 00 00            MOV ECX,0x3
00701057  0F 8E 0D 01 00 00         JLE 0x0070116a
0070105D  EB 06                     JMP 0x00701065
switchD_00700fff::caseD_3:
0070105F  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00701062  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00701065:
00701065  F6 45 F8 80               TEST byte ptr [EBP + -0x8],0x80
00701069  74 0E                     JZ 0x00701079
0070106B  33 C9                     XOR ECX,ECX
0070106D  66 8B 0B                  MOV CX,word ptr [EBX]
00701070  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
00701073  77 04                     JA 0x00701079
00701075  8A 0F                     MOV CL,byte ptr [EDI]
00701077  88 0A                     MOV byte ptr [EDX],CL
LAB_00701079:
00701079  83 C3 02                  ADD EBX,0x2
0070107C  42                        INC EDX
0070107D  47                        INC EDI
0070107E  4E                        DEC ESI
0070107F  85 F6                     TEST ESI,ESI
00701081  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00701084  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00701087  B9 04 00 00 00            MOV ECX,0x4
0070108C  0F 8E D8 00 00 00         JLE 0x0070116a
00701092  33 C9                     XOR ECX,ECX
00701094  47                        INC EDI
00701095  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00701098  4E                        DEC ESI
00701099  EB 15                     JMP 0x007010b0
switchD_00700fff::caseD_4:
0070109B  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
0070109E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007010A1  33 C9                     XOR ECX,ECX
007010A3  47                        INC EDI
007010A4  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
007010A7  4E                        DEC ESI
007010A8  EB 06                     JMP 0x007010b0
LAB_007010aa:
007010AA  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
007010AD  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
switchD_00700fff::default:
007010B0  85 F6                     TEST ESI,ESI
007010B2  0F 8E B2 00 00 00         JLE 0x0070116a
007010B8  47                        INC EDI
007010B9  4E                        DEC ESI
007010BA  85 F6                     TEST ESI,ESI
007010BC  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
007010BF  B9 01 00 00 00            MOV ECX,0x1
007010C4  0F 8E A0 00 00 00         JLE 0x0070116a
007010CA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007010CD  81 E1 80 00 00 00         AND ECX,0x80
007010D3  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
LAB_007010d6:
007010D6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007010D9  85 C9                     TEST ECX,ECX
007010DB  74 0E                     JZ 0x007010eb
007010DD  33 C9                     XOR ECX,ECX
007010DF  66 8B 0B                  MOV CX,word ptr [EBX]
007010E2  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
007010E5  77 04                     JA 0x007010eb
007010E7  8A 0F                     MOV CL,byte ptr [EDI]
007010E9  88 0A                     MOV byte ptr [EDX],CL
LAB_007010eb:
007010EB  83 C3 02                  ADD EBX,0x2
007010EE  42                        INC EDX
007010EF  47                        INC EDI
007010F0  4E                        DEC ESI
007010F1  85 F6                     TEST ESI,ESI
007010F3  B9 02 00 00 00            MOV ECX,0x2
007010F8  7E 42                     JLE 0x0070113c
007010FA  47                        INC EDI
007010FB  4E                        DEC ESI
007010FC  85 F6                     TEST ESI,ESI
007010FE  B9 03 00 00 00            MOV ECX,0x3
00701103  7E 37                     JLE 0x0070113c
00701105  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00701108  85 C9                     TEST ECX,ECX
0070110A  74 0E                     JZ 0x0070111a
0070110C  33 C9                     XOR ECX,ECX
0070110E  66 8B 0B                  MOV CX,word ptr [EBX]
00701111  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
00701114  77 04                     JA 0x0070111a
00701116  8A 0F                     MOV CL,byte ptr [EDI]
00701118  88 0A                     MOV byte ptr [EDX],CL
LAB_0070111a:
0070111A  83 C3 02                  ADD EBX,0x2
0070111D  42                        INC EDX
0070111E  47                        INC EDI
0070111F  4E                        DEC ESI
00701120  85 F6                     TEST ESI,ESI
00701122  B9 04 00 00 00            MOV ECX,0x4
00701127  7E 13                     JLE 0x0070113c
00701129  47                        INC EDI
0070112A  33 C9                     XOR ECX,ECX
0070112C  4E                        DEC ESI
0070112D  85 F6                     TEST ESI,ESI
0070112F  7E 0B                     JLE 0x0070113c
00701131  47                        INC EDI
00701132  4E                        DEC ESI
00701133  85 F6                     TEST ESI,ESI
00701135  B9 01 00 00 00            MOV ECX,0x1
0070113A  7F 9A                     JG 0x007010d6
LAB_0070113c:
0070113C  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
0070113F  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00701142  EB 26                     JMP 0x0070116a
LAB_00701144:
00701144  4E                        DEC ESI
00701145  78 20                     JS 0x00701167
00701147  46                        INC ESI
LAB_00701148:
00701148  8B D9                     MOV EBX,ECX
0070114A  83 E3 01                  AND EBX,0x1
0070114D  80 FB 01                  CMP BL,0x1
00701150  75 0A                     JNZ 0x0070115c
00701152  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00701155  42                        INC EDX
00701156  83 C7 02                  ADD EDI,0x2
00701159  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0070115c:
0070115C  41                        INC ECX
0070115D  83 F9 04                  CMP ECX,0x4
00701160  7E 02                     JLE 0x00701164
00701162  33 C9                     XOR ECX,ECX
LAB_00701164:
00701164  4E                        DEC ESI
00701165  75 E1                     JNZ 0x00701148
LAB_00701167:
00701167  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_0070116a:
0070116A  85 C0                     TEST EAX,EAX
0070116C  7F 3E                     JG 0x007011ac
0070116E  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
00701171  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00701174  3B F3                     CMP ESI,EBX
00701176  7D 34                     JGE 0x007011ac
00701178  33 DB                     XOR EBX,EBX
0070117A  8A 1F                     MOV BL,byte ptr [EDI]
0070117C  8B C3                     MOV EAX,EBX
0070117E  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00701181  24 80                     AND AL,0x80
00701183  47                        INC EDI
00701184  84 C0                     TEST AL,AL
00701186  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
00701189  8B C3                     MOV EAX,EBX
0070118B  74 17                     JZ 0x007011a4
0070118D  83 E0 3F                  AND EAX,0x3f
00701190  F6 C3 40                  TEST BL,0x40
00701193  74 14                     JZ 0x007011a9
00701195  8B F7                     MOV ESI,EDI
00701197  33 DB                     XOR EBX,EBX
00701199  47                        INC EDI
0070119A  8A 1E                     MOV BL,byte ptr [ESI]
0070119C  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
0070119F  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
007011A2  EB 08                     JMP 0x007011ac
LAB_007011a4:
007011A4  83 E0 7F                  AND EAX,0x7f
007011A7  EB 03                     JMP 0x007011ac
LAB_007011a9:
007011A9  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_007011ac:
007011AC  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
007011AF  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
007011B2  3B F3                     CMP ESI,EBX
007011B4  7D 23                     JGE 0x007011d9
007011B6  2B DE                     SUB EBX,ESI
007011B8  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
007011BB  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
007011BE  33 DB                     XOR EBX,EBX
007011C0  8A 1E                     MOV BL,byte ptr [ESI]
007011C2  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
007011C5  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
007011C8  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
007011CB  33 F6                     XOR ESI,ESI
007011CD  85 DB                     TEST EBX,EBX
007011CF  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
007011D2  7E 07                     JLE 0x007011db
007011D4  E9 22 F9 FF FF            JMP 0x00700afb
LAB_007011d9:
007011D9  2B F3                     SUB ESI,EBX
LAB_007011db:
007011DB  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
007011DE  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
007011E1  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
007011E4  2B DA                     SUB EBX,EDX
007011E6  2B D9                     SUB EBX,ECX
007011E8  3B F3                     CMP ESI,EBX
007011EA  7D 35                     JGE 0x00701221
LAB_007011ec:
007011EC  2B DE                     SUB EBX,ESI
007011EE  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
007011F1  33 C9                     XOR ECX,ECX
007011F3  8A 0E                     MOV CL,byte ptr [ESI]
007011F5  46                        INC ESI
007011F6  F6 C1 80                  TEST CL,0x80
007011F9  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
007011FC  74 1A                     JZ 0x00701218
007011FE  8B F1                     MOV ESI,ECX
00701200  83 E6 3F                  AND ESI,0x3f
00701203  F6 C1 40                  TEST CL,0x40
00701206  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
00701209  74 06                     JZ 0x00701211
0070120B  41                        INC ECX
0070120C  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
0070120F  EB 0C                     JMP 0x0070121d
LAB_00701211:
00701211  03 CE                     ADD ECX,ESI
00701213  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
00701216  EB 05                     JMP 0x0070121d
LAB_00701218:
00701218  83 E1 7F                  AND ECX,0x7f
0070121B  8B F1                     MOV ESI,ECX
LAB_0070121d:
0070121D  3B F3                     CMP ESI,EBX
0070121F  7C CB                     JL 0x007011ec
LAB_00701221:
00701221  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00701224  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00701227  2B D9                     SUB EBX,ECX
00701229  2B DA                     SUB EBX,EDX
0070122B  3B C3                     CMP EAX,EBX
0070122D  7D 32                     JGE 0x00701261
LAB_0070122f:
0070122F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00701232  2B D8                     SUB EBX,EAX
00701234  81 E1 C0 00 00 00         AND ECX,0xc0
0070123A  80 F9 80                  CMP CL,0x80
0070123D  75 02                     JNZ 0x00701241
0070123F  03 F8                     ADD EDI,EAX
LAB_00701241:
00701241  33 C9                     XOR ECX,ECX
00701243  8A 0F                     MOV CL,byte ptr [EDI]
00701245  8B D1                     MOV EDX,ECX
00701247  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0070124A  80 E2 80                  AND DL,0x80
0070124D  47                        INC EDI
0070124E  84 D2                     TEST DL,DL
00701250  8B C1                     MOV EAX,ECX
00701252  74 09                     JZ 0x0070125d
00701254  83 E0 3F                  AND EAX,0x3f
00701257  F6 C1 40                  TEST CL,0x40
0070125A  74 01                     JZ 0x0070125d
0070125C  47                        INC EDI
LAB_0070125d:
0070125D  3B C3                     CMP EAX,EBX
0070125F  7C CE                     JL 0x0070122f
LAB_00701261:
00701261  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00701264  25 C0 00 00 00            AND EAX,0xc0
00701269  3C 80                     CMP AL,0x80
0070126B  75 02                     JNZ 0x0070126f
0070126D  03 FB                     ADD EDI,EBX
LAB_0070126f:
0070126F  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
LAB_00701272:
00701272  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00701275  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00701278  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0070127B  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0070127E  03 D8                     ADD EBX,EAX
00701280  03 F1                     ADD ESI,ECX
00701282  42                        INC EDX
00701283  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00701286  83 FA 04                  CMP EDX,0x4
00701289  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
0070128C  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
0070128F  7E 05                     JLE 0x00701296
00701291  33 D2                     XOR EDX,EDX
00701293  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_00701296:
00701296  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00701299  48                        DEC EAX
0070129A  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
0070129D  0F 89 AA F6 FF FF         JNS 0x0070094d
007012A3  5F                        POP EDI
007012A4  5E                        POP ESI
007012A5  5B                        POP EBX
LAB_007012a6:
007012A6  8B E5                     MOV ESP,EBP
007012A8  5D                        POP EBP
007012A9  C2 3C 00                  RET 0x3c
