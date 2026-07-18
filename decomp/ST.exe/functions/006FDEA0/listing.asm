FUN_006fdea0:
006FDEA0  55                        PUSH EBP
006FDEA1  8B EC                     MOV EBP,ESP
006FDEA3  83 EC 18                  SUB ESP,0x18
006FDEA6  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006FDEA9  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FDEAC  C1 F8 03                  SAR EAX,0x3
006FDEAF  03 C8                     ADD ECX,EAX
006FDEB1  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FDEB4  53                        PUSH EBX
006FDEB5  48                        DEC EAX
006FDEB6  56                        PUSH ESI
006FDEB7  57                        PUSH EDI
006FDEB8  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006FDEC2  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006FDEC5  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FDEC8  0F 88 5B 05 00 00         JS 0x006fe429
LAB_006fdece:
006FDECE  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FDED1  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FDED4  83 F8 01                  CMP EAX,0x1
006FDED7  75 4A                     JNZ 0x006fdf23
006FDED9  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FDEDC  48                        DEC EAX
006FDEDD  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FDEE0  0F 88 43 05 00 00         JS 0x006fe429
006FDEE6  33 C0                     XOR EAX,EAX
006FDEE8  8A 02                     MOV AL,byte ptr [EDX]
006FDEEA  42                        INC EDX
006FDEEB  85 C0                     TEST EAX,EAX
006FDEED  74 2D                     JZ 0x006fdf1c
006FDEEF  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
LAB_006fdef2:
006FDEF2  A8 80                     TEST AL,0x80
006FDEF4  74 16                     JZ 0x006fdf0c
006FDEF6  A8 40                     TEST AL,0x40
006FDEF8  74 06                     JZ 0x006fdf00
006FDEFA  42                        INC EDX
006FDEFB  83 E0 3F                  AND EAX,0x3f
006FDEFE  EB 0F                     JMP 0x006fdf0f
LAB_006fdf00:
006FDF00  8B F0                     MOV ESI,EAX
006FDF02  83 E6 3F                  AND ESI,0x3f
006FDF05  03 D6                     ADD EDX,ESI
006FDF07  83 E0 3F                  AND EAX,0x3f
006FDF0A  EB 03                     JMP 0x006fdf0f
LAB_006fdf0c:
006FDF0C  83 E0 7F                  AND EAX,0x7f
LAB_006fdf0f:
006FDF0F  2B C8                     SUB ECX,EAX
006FDF11  85 C9                     TEST ECX,ECX
006FDF13  7E 07                     JLE 0x006fdf1c
006FDF15  33 C0                     XOR EAX,EAX
006FDF17  8A 02                     MOV AL,byte ptr [EDX]
006FDF19  42                        INC EDX
006FDF1A  EB D6                     JMP 0x006fdef2
LAB_006fdf1c:
006FDF1C  C7 45 34 02 00 00 00      MOV dword ptr [EBP + 0x34],0x2
LAB_006fdf23:
006FDF23  33 DB                     XOR EBX,EBX
006FDF25  8A 1A                     MOV BL,byte ptr [EDX]
006FDF27  42                        INC EDX
006FDF28  85 DB                     TEST EBX,EBX
006FDF2A  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FDF2D  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006FDF30  0F 84 B2 04 00 00         JZ 0x006fe3e8
006FDF36  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FDF39  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006FDF3C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FDF3F  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006FDF42  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006FDF45  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FDF48  83 E1 07                  AND ECX,0x7
006FDF4B  BA 80 00 00 00            MOV EDX,0x80
006FDF50  D3 FA                     SAR EDX,CL
006FDF52  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006FDF55  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006FDF58  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006FDF5B  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
LAB_006fdf5e:
006FDF5E  F6 C3 80                  TEST BL,0x80
006FDF61  8B C3                     MOV EAX,EBX
006FDF63  74 21                     JZ 0x006fdf86
006FDF65  83 E0 3F                  AND EAX,0x3f
006FDF68  3B C6                     CMP EAX,ESI
006FDF6A  7F 2A                     JG 0x006fdf96
006FDF6C  F6 C3 40                  TEST BL,0x40
006FDF6F  74 0A                     JZ 0x006fdf7b
006FDF71  47                        INC EDI
006FDF72  33 DB                     XOR EBX,EBX
006FDF74  2B F0                     SUB ESI,EAX
006FDF76  8A 1F                     MOV BL,byte ptr [EDI]
006FDF78  47                        INC EDI
006FDF79  EB E3                     JMP 0x006fdf5e
LAB_006fdf7b:
006FDF7B  03 F8                     ADD EDI,EAX
006FDF7D  33 DB                     XOR EBX,EBX
006FDF7F  2B F0                     SUB ESI,EAX
006FDF81  8A 1F                     MOV BL,byte ptr [EDI]
006FDF83  47                        INC EDI
006FDF84  EB D8                     JMP 0x006fdf5e
LAB_006fdf86:
006FDF86  83 E0 7F                  AND EAX,0x7f
006FDF89  3B C6                     CMP EAX,ESI
006FDF8B  7F 09                     JG 0x006fdf96
006FDF8D  33 DB                     XOR EBX,EBX
006FDF8F  2B F0                     SUB ESI,EAX
006FDF91  8A 1F                     MOV BL,byte ptr [EDI]
006FDF93  47                        INC EDI
006FDF94  EB C8                     JMP 0x006fdf5e
LAB_006fdf96:
006FDF96  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FDF99  81 E3 C0 00 00 00         AND EBX,0xc0
006FDF9F  2B C6                     SUB EAX,ESI
006FDFA1  80 FB 80                  CMP BL,0x80
006FDFA4  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FDFA7  75 05                     JNZ 0x006fdfae
006FDFA9  03 FE                     ADD EDI,ESI
006FDFAB  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_006fdfae:
006FDFAE  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FDFB1  8B FE                     MOV EDI,ESI
006FDFB3  3B C6                     CMP EAX,ESI
006FDFB5  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FDFB8  0F 8F C3 02 00 00         JG 0x006fe281
006FDFBE  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006FDFC1  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006FDFC4  81 E6 80 00 00 00         AND ESI,0x80
LAB_006fdfca:
006FDFCA  2B F8                     SUB EDI,EAX
006FDFCC  85 F6                     TEST ESI,ESI
006FDFCE  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FDFD1  0F 84 3D 02 00 00         JZ 0x006fe214
006FDFD7  F6 C3 40                  TEST BL,0x40
006FDFDA  0F 84 02 01 00 00         JZ 0x006fe0e2
006FDFE0  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FDFE3  8B 7D 44                  MOV EDI,dword ptr [EBP + 0x44]
006FDFE6  33 DB                     XOR EBX,EBX
006FDFE8  8A 1E                     MOV BL,byte ptr [ESI]
006FDFEA  8B F3                     MOV ESI,EBX
006FDFEC  33 DB                     XOR EBX,EBX
006FDFEE  8A 1C 3E                  MOV BL,byte ptr [ESI + EDI*0x1]
006FDFF1  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FDFF4  47                        INC EDI
006FDFF5  85 C9                     TEST ECX,ECX
006FDFF7  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FDFFA  7E 58                     JLE 0x006fe054
006FDFFC  83 F9 01                  CMP ECX,0x1
006FDFFF  75 06                     JNZ 0x006fe007
006FE001  B9 02 00 00 00            MOV ECX,0x2
006FE006  48                        DEC EAX
LAB_006fe007:
006FE007  85 C0                     TEST EAX,EAX
006FE009  0F 8E CB 00 00 00         JLE 0x006fe0da
006FE00F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE012  84 11                     TEST byte ptr [ECX],DL
006FE014  75 16                     JNZ 0x006fe02c
006FE016  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FE019  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006FE01C  33 C9                     XOR ECX,ECX
006FE01E  66 8B 0E                  MOV CX,word ptr [ESI]
006FE021  3B F9                     CMP EDI,ECX
006FE023  77 0A                     JA 0x006fe02f
006FE025  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FE028  88 19                     MOV byte ptr [ECX],BL
006FE02A  EB 03                     JMP 0x006fe02f
LAB_006fe02c:
006FE02C  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
LAB_006fe02f:
006FE02F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FE032  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE035  83 C1 02                  ADD ECX,0x2
006FE038  46                        INC ESI
006FE039  D1 EA                     SHR EDX,0x1
006FE03B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006FE03E  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006FE041  75 0C                     JNZ 0x006fe04f
006FE043  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE046  BA 80 00 00 00            MOV EDX,0x80
006FE04B  41                        INC ECX
006FE04C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006fe04f:
006FE04F  33 C9                     XOR ECX,ECX
006FE051  48                        DEC EAX
006FE052  EB 03                     JMP 0x006fe057
LAB_006fe054:
006FE054  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
LAB_006fe057:
006FE057  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FE05A  85 C0                     TEST EAX,EAX
006FE05C  7E 7C                     JLE 0x006fe0da
LAB_006fe05e:
006FE05E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE061  84 11                     TEST byte ptr [ECX],DL
006FE063  75 0E                     JNZ 0x006fe073
006FE065  33 C9                     XOR ECX,ECX
006FE067  66 8B 0E                  MOV CX,word ptr [ESI]
006FE06A  3B F9                     CMP EDI,ECX
006FE06C  77 05                     JA 0x006fe073
006FE06E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FE071  88 19                     MOV byte ptr [ECX],BL
LAB_006fe073:
006FE073  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FE076  83 C6 02                  ADD ESI,0x2
006FE079  41                        INC ECX
006FE07A  D1 EA                     SHR EDX,0x1
006FE07C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FE07F  75 0C                     JNZ 0x006fe08d
006FE081  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE084  BA 80 00 00 00            MOV EDX,0x80
006FE089  41                        INC ECX
006FE08A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006fe08d:
006FE08D  48                        DEC EAX
006FE08E  B9 01 00 00 00            MOV ECX,0x1
006FE093  85 C0                     TEST EAX,EAX
006FE095  7E 40                     JLE 0x006fe0d7
006FE097  48                        DEC EAX
006FE098  B9 02 00 00 00            MOV ECX,0x2
006FE09D  85 C0                     TEST EAX,EAX
006FE09F  7E 36                     JLE 0x006fe0d7
006FE0A1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE0A4  84 11                     TEST byte ptr [ECX],DL
006FE0A6  75 0E                     JNZ 0x006fe0b6
006FE0A8  33 C9                     XOR ECX,ECX
006FE0AA  66 8B 0E                  MOV CX,word ptr [ESI]
006FE0AD  3B F9                     CMP EDI,ECX
006FE0AF  77 05                     JA 0x006fe0b6
006FE0B1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FE0B4  88 19                     MOV byte ptr [ECX],BL
LAB_006fe0b6:
006FE0B6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FE0B9  83 C6 02                  ADD ESI,0x2
006FE0BC  41                        INC ECX
006FE0BD  D1 EA                     SHR EDX,0x1
006FE0BF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FE0C2  75 0C                     JNZ 0x006fe0d0
006FE0C4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE0C7  BA 80 00 00 00            MOV EDX,0x80
006FE0CC  41                        INC ECX
006FE0CD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006fe0d0:
006FE0D0  33 C9                     XOR ECX,ECX
006FE0D2  48                        DEC EAX
006FE0D3  85 C0                     TEST EAX,EAX
006FE0D5  7F 87                     JG 0x006fe05e
LAB_006fe0d7:
006FE0D7  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006fe0da:
006FE0DA  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006FE0DD  E9 66 01 00 00            JMP 0x006fe248
LAB_006fe0e2:
006FE0E2  85 C9                     TEST ECX,ECX
006FE0E4  7E 6C                     JLE 0x006fe152
006FE0E6  83 F9 01                  CMP ECX,0x1
006FE0E9  75 0D                     JNZ 0x006fe0f8
006FE0EB  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FE0EE  B9 02 00 00 00            MOV ECX,0x2
006FE0F3  47                        INC EDI
006FE0F4  48                        DEC EAX
006FE0F5  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_006fe0f8:
006FE0F8  85 C0                     TEST EAX,EAX
006FE0FA  0F 8E 48 01 00 00         JLE 0x006fe248
006FE100  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE103  84 11                     TEST byte ptr [ECX],DL
006FE105  75 21                     JNZ 0x006fe128
006FE107  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FE10A  33 C9                     XOR ECX,ECX
006FE10C  66 8B 0E                  MOV CX,word ptr [ESI]
006FE10F  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FE112  3B F1                     CMP ESI,ECX
006FE114  77 12                     JA 0x006fe128
006FE116  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FE119  33 C9                     XOR ECX,ECX
006FE11B  8A 0E                     MOV CL,byte ptr [ESI]
006FE11D  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FE120  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FE123  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE126  88 0E                     MOV byte ptr [ESI],CL
LAB_006fe128:
006FE128  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FE12B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE12E  83 C7 02                  ADD EDI,0x2
006FE131  46                        INC ESI
006FE132  D1 EA                     SHR EDX,0x1
006FE134  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FE137  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006FE13A  75 0C                     JNZ 0x006fe148
006FE13C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE13F  BA 80 00 00 00            MOV EDX,0x80
006FE144  41                        INC ECX
006FE145  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006fe148:
006FE148  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FE14B  33 C9                     XOR ECX,ECX
006FE14D  47                        INC EDI
006FE14E  48                        DEC EAX
006FE14F  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_006fe152:
006FE152  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE155  85 C0                     TEST EAX,EAX
006FE157  0F 8E EB 00 00 00         JLE 0x006fe248
LAB_006fe15d:
006FE15D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE160  84 11                     TEST byte ptr [ECX],DL
006FE162  75 1E                     JNZ 0x006fe182
006FE164  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FE167  33 C9                     XOR ECX,ECX
006FE169  66 8B 0F                  MOV CX,word ptr [EDI]
006FE16C  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006FE16F  3B F9                     CMP EDI,ECX
006FE171  77 0F                     JA 0x006fe182
006FE173  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FE176  33 C9                     XOR ECX,ECX
006FE178  8A 0F                     MOV CL,byte ptr [EDI]
006FE17A  8B 7D 44                  MOV EDI,dword ptr [EBP + 0x44]
006FE17D  8A 0C 39                  MOV CL,byte ptr [ECX + EDI*0x1]
006FE180  88 0E                     MOV byte ptr [ESI],CL
LAB_006fe182:
006FE182  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FE185  83 C1 02                  ADD ECX,0x2
006FE188  46                        INC ESI
006FE189  D1 EA                     SHR EDX,0x1
006FE18B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006FE18E  75 0C                     JNZ 0x006fe19c
006FE190  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE193  BA 80 00 00 00            MOV EDX,0x80
006FE198  41                        INC ECX
006FE199  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006fe19c:
006FE19C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FE19F  41                        INC ECX
006FE1A0  48                        DEC EAX
006FE1A1  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FE1A4  B9 01 00 00 00            MOV ECX,0x1
006FE1A9  85 C0                     TEST EAX,EAX
006FE1AB  7E 62                     JLE 0x006fe20f
006FE1AD  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FE1B0  41                        INC ECX
006FE1B1  48                        DEC EAX
006FE1B2  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FE1B5  B9 02 00 00 00            MOV ECX,0x2
006FE1BA  85 C0                     TEST EAX,EAX
006FE1BC  7E 51                     JLE 0x006fe20f
006FE1BE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE1C1  84 11                     TEST byte ptr [ECX],DL
006FE1C3  75 1E                     JNZ 0x006fe1e3
006FE1C5  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FE1C8  33 C9                     XOR ECX,ECX
006FE1CA  66 8B 0F                  MOV CX,word ptr [EDI]
006FE1CD  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006FE1D0  3B F9                     CMP EDI,ECX
006FE1D2  77 0F                     JA 0x006fe1e3
006FE1D4  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FE1D7  33 C9                     XOR ECX,ECX
006FE1D9  8A 0F                     MOV CL,byte ptr [EDI]
006FE1DB  8B 7D 44                  MOV EDI,dword ptr [EBP + 0x44]
006FE1DE  8A 0C 39                  MOV CL,byte ptr [ECX + EDI*0x1]
006FE1E1  88 0E                     MOV byte ptr [ESI],CL
LAB_006fe1e3:
006FE1E3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FE1E6  83 C1 02                  ADD ECX,0x2
006FE1E9  46                        INC ESI
006FE1EA  D1 EA                     SHR EDX,0x1
006FE1EC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006FE1EF  75 0C                     JNZ 0x006fe1fd
006FE1F1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE1F4  BA 80 00 00 00            MOV EDX,0x80
006FE1F9  41                        INC ECX
006FE1FA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006fe1fd:
006FE1FD  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FE200  41                        INC ECX
006FE201  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FE204  33 C9                     XOR ECX,ECX
006FE206  48                        DEC EAX
006FE207  85 C0                     TEST EAX,EAX
006FE209  0F 8F 4E FF FF FF         JG 0x006fe15d
LAB_006fe20f:
006FE20F  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006FE212  EB 34                     JMP 0x006fe248
LAB_006fe214:
006FE214  48                        DEC EAX
006FE215  78 31                     JS 0x006fe248
006FE217  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FE21A  40                        INC EAX
LAB_006fe21b:
006FE21B  83 F9 01                  CMP ECX,0x1
006FE21E  74 1A                     JZ 0x006fe23a
006FE220  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006FE223  83 C6 02                  ADD ESI,0x2
006FE226  47                        INC EDI
006FE227  D1 EA                     SHR EDX,0x1
006FE229  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006FE22C  75 0C                     JNZ 0x006fe23a
006FE22E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006FE231  BA 80 00 00 00            MOV EDX,0x80
006FE236  47                        INC EDI
006FE237  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_006fe23a:
006FE23A  41                        INC ECX
006FE23B  83 F9 02                  CMP ECX,0x2
006FE23E  7E 02                     JLE 0x006fe242
006FE240  33 C9                     XOR ECX,ECX
LAB_006fe242:
006FE242  48                        DEC EAX
006FE243  75 D6                     JNZ 0x006fe21b
006FE245  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006fe248:
006FE248  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006FE24B  85 FF                     TEST EDI,EDI
006FE24D  7E 2E                     JLE 0x006fe27d
006FE24F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FE252  33 DB                     XOR EBX,EBX
006FE254  8A 18                     MOV BL,byte ptr [EAX]
006FE256  8B F3                     MOV ESI,EBX
006FE258  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FE25B  81 E6 80 00 00 00         AND ESI,0x80
006FE261  40                        INC EAX
006FE262  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FE265  8B C3                     MOV EAX,EBX
006FE267  85 F6                     TEST ESI,ESI
006FE269  74 05                     JZ 0x006fe270
006FE26B  83 E0 3F                  AND EAX,0x3f
006FE26E  EB 03                     JMP 0x006fe273
LAB_006fe270:
006FE270  83 E0 7F                  AND EAX,0x7f
LAB_006fe273:
006FE273  3B C7                     CMP EAX,EDI
006FE275  0F 8E 4F FD FF FF         JLE 0x006fdfca
006FE27B  EB 07                     JMP 0x006fe284
LAB_006fe27d:
006FE27D  33 C0                     XOR EAX,EAX
006FE27F  EB 03                     JMP 0x006fe284
LAB_006fe281:
006FE281  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_006fe284:
006FE284  2B C7                     SUB EAX,EDI
006FE286  85 FF                     TEST EDI,EDI
006FE288  0F 8E 07 01 00 00         JLE 0x006fe395
006FE28E  F6 C3 80                  TEST BL,0x80
006FE291  0F 84 FE 00 00 00         JZ 0x006fe395
006FE297  F6 C3 40                  TEST BL,0x40
006FE29A  0F 84 92 01 00 00         JZ 0x006fe432
006FE2A0  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FE2A3  8B 7D 44                  MOV EDI,dword ptr [EBP + 0x44]
006FE2A6  33 DB                     XOR EBX,EBX
006FE2A8  8A 1E                     MOV BL,byte ptr [ESI]
006FE2AA  8B F3                     MOV ESI,EBX
006FE2AC  33 DB                     XOR EBX,EBX
006FE2AE  8A 1C 3E                  MOV BL,byte ptr [ESI + EDI*0x1]
006FE2B1  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FE2B4  47                        INC EDI
006FE2B5  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006FE2B8  85 C9                     TEST ECX,ECX
006FE2BA  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FE2BD  7E 56                     JLE 0x006fe315
006FE2BF  83 F9 01                  CMP ECX,0x1
006FE2C2  75 03                     JNZ 0x006fe2c7
006FE2C4  FF 4D F0                  DEC dword ptr [EBP + -0x10]
LAB_006fe2c7:
006FE2C7  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FE2CA  85 C9                     TEST ECX,ECX
006FE2CC  0F 8E C0 00 00 00         JLE 0x006fe392
006FE2D2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE2D5  84 11                     TEST byte ptr [ECX],DL
006FE2D7  75 16                     JNZ 0x006fe2ef
006FE2D9  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FE2DC  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FE2DF  33 C9                     XOR ECX,ECX
006FE2E1  66 8B 0F                  MOV CX,word ptr [EDI]
006FE2E4  3B F1                     CMP ESI,ECX
006FE2E6  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE2E9  77 0A                     JA 0x006fe2f5
006FE2EB  88 1E                     MOV byte ptr [ESI],BL
006FE2ED  EB 06                     JMP 0x006fe2f5
LAB_006fe2ef:
006FE2EF  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE2F2  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006fe2f5:
006FE2F5  83 C7 02                  ADD EDI,0x2
006FE2F8  46                        INC ESI
006FE2F9  D1 EA                     SHR EDX,0x1
006FE2FB  75 0C                     JNZ 0x006fe309
006FE2FD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE300  BA 80 00 00 00            MOV EDX,0x80
006FE305  41                        INC ECX
006FE306  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006fe309:
006FE309  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FE30C  49                        DEC ECX
006FE30D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006FE310  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006FE313  EB 09                     JMP 0x006fe31e
LAB_006fe315:
006FE315  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006FE318  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE31B  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006fe31e:
006FE31E  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FE321  85 DB                     TEST EBX,EBX
006FE323  7E 6D                     JLE 0x006fe392
LAB_006fe325:
006FE325  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE328  84 13                     TEST byte ptr [EBX],DL
006FE32A  75 0E                     JNZ 0x006fe33a
006FE32C  33 DB                     XOR EBX,EBX
006FE32E  66 8B 1F                  MOV BX,word ptr [EDI]
006FE331  3B CB                     CMP ECX,EBX
006FE333  77 05                     JA 0x006fe33a
006FE335  8A 5D E8                  MOV BL,byte ptr [EBP + -0x18]
006FE338  88 1E                     MOV byte ptr [ESI],BL
LAB_006fe33a:
006FE33A  83 C7 02                  ADD EDI,0x2
006FE33D  46                        INC ESI
006FE33E  D1 EA                     SHR EDX,0x1
006FE340  75 0C                     JNZ 0x006fe34e
006FE342  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE345  BA 80 00 00 00            MOV EDX,0x80
006FE34A  43                        INC EBX
006FE34B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006fe34e:
006FE34E  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FE351  4B                        DEC EBX
006FE352  85 DB                     TEST EBX,EBX
006FE354  7E 3C                     JLE 0x006fe392
006FE356  4B                        DEC EBX
006FE357  85 DB                     TEST EBX,EBX
006FE359  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006FE35C  7E 34                     JLE 0x006fe392
006FE35E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE361  84 13                     TEST byte ptr [EBX],DL
006FE363  75 0E                     JNZ 0x006fe373
006FE365  33 DB                     XOR EBX,EBX
006FE367  66 8B 1F                  MOV BX,word ptr [EDI]
006FE36A  3B CB                     CMP ECX,EBX
006FE36C  77 05                     JA 0x006fe373
006FE36E  8A 5D E8                  MOV BL,byte ptr [EBP + -0x18]
006FE371  88 1E                     MOV byte ptr [ESI],BL
LAB_006fe373:
006FE373  83 C7 02                  ADD EDI,0x2
006FE376  46                        INC ESI
006FE377  D1 EA                     SHR EDX,0x1
006FE379  75 0C                     JNZ 0x006fe387
006FE37B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FE37E  BA 80 00 00 00            MOV EDX,0x80
006FE383  43                        INC EBX
006FE384  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006fe387:
006FE387  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FE38A  4B                        DEC EBX
006FE38B  85 DB                     TEST EBX,EBX
006FE38D  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006FE390  7F 93                     JG 0x006fe325
LAB_006fe392:
006FE392  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_006fe395:
006FE395  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006FE398  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006FE39B  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FE39E  2B CF                     SUB ECX,EDI
006FE3A0  2B CE                     SUB ECX,ESI
006FE3A2  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FE3A5  3B C1                     CMP EAX,ECX
006FE3A7  7D 2F                     JGE 0x006fe3d8
LAB_006fe3a9:
006FE3A9  81 E3 C0 00 00 00         AND EBX,0xc0
006FE3AF  2B C8                     SUB ECX,EAX
006FE3B1  80 FB 80                  CMP BL,0x80
006FE3B4  75 02                     JNZ 0x006fe3b8
006FE3B6  03 F0                     ADD ESI,EAX
LAB_006fe3b8:
006FE3B8  33 DB                     XOR EBX,EBX
006FE3BA  8A 1E                     MOV BL,byte ptr [ESI]
006FE3BC  8B D3                     MOV EDX,EBX
006FE3BE  8B C3                     MOV EAX,EBX
006FE3C0  80 E2 80                  AND DL,0x80
006FE3C3  46                        INC ESI
006FE3C4  84 D2                     TEST DL,DL
006FE3C6  74 09                     JZ 0x006fe3d1
006FE3C8  83 E0 3F                  AND EAX,0x3f
006FE3CB  F6 C3 40                  TEST BL,0x40
006FE3CE  74 01                     JZ 0x006fe3d1
006FE3D0  46                        INC ESI
LAB_006fe3d1:
006FE3D1  3B C1                     CMP EAX,ECX
006FE3D3  7C D4                     JL 0x006fe3a9
006FE3D5  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fe3d8:
006FE3D8  81 E3 C0 00 00 00         AND EBX,0xc0
006FE3DE  80 FB 80                  CMP BL,0x80
006FE3E1  75 05                     JNZ 0x006fe3e8
006FE3E3  03 F1                     ADD ESI,ECX
006FE3E5  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fe3e8:
006FE3E8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006FE3EB  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006FE3EE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006FE3F1  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006FE3F4  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
006FE3F7  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FE3FA  03 D8                     ADD EBX,EAX
006FE3FC  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FE3FF  03 F9                     ADD EDI,ECX
006FE401  03 F2                     ADD ESI,EDX
006FE403  40                        INC EAX
006FE404  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006FE407  83 F8 02                  CMP EAX,0x2
006FE40A  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006FE40D  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
006FE410  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
006FE413  7E 07                     JLE 0x006fe41c
006FE415  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_006fe41c:
006FE41C  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FE41F  48                        DEC EAX
006FE420  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FE423  0F 89 A5 FA FF FF         JNS 0x006fdece
LAB_006fe429:
006FE429  5F                        POP EDI
006FE42A  5E                        POP ESI
006FE42B  5B                        POP EBX
006FE42C  8B E5                     MOV ESP,EBP
006FE42E  5D                        POP EBP
006FE42F  C2 40 00                  RET 0x40
LAB_006fe432:
006FE432  85 C9                     TEST ECX,ECX
006FE434  7E 65                     JLE 0x006fe49b
006FE436  83 F9 01                  CMP ECX,0x1
006FE439  75 08                     JNZ 0x006fe443
006FE43B  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FE43E  46                        INC ESI
006FE43F  4F                        DEC EDI
006FE440  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fe443:
006FE443  85 FF                     TEST EDI,EDI
006FE445  0F 8E 4A FF FF FF         JLE 0x006fe395
006FE44B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE44E  84 11                     TEST byte ptr [ECX],DL
006FE450  75 21                     JNZ 0x006fe473
006FE452  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FE455  33 C9                     XOR ECX,ECX
006FE457  66 8B 0E                  MOV CX,word ptr [ESI]
006FE45A  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FE45D  3B F1                     CMP ESI,ECX
006FE45F  77 12                     JA 0x006fe473
006FE461  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FE464  33 C9                     XOR ECX,ECX
006FE466  8A 0E                     MOV CL,byte ptr [ESI]
006FE468  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FE46B  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FE46E  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE471  88 0E                     MOV byte ptr [ESI],CL
LAB_006fe473:
006FE473  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FE476  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE479  83 C1 02                  ADD ECX,0x2
006FE47C  46                        INC ESI
006FE47D  D1 EA                     SHR EDX,0x1
006FE47F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006FE482  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006FE485  75 0C                     JNZ 0x006fe493
006FE487  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE48A  BA 80 00 00 00            MOV EDX,0x80
006FE48F  41                        INC ECX
006FE490  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006fe493:
006FE493  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FE496  46                        INC ESI
006FE497  4F                        DEC EDI
006FE498  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fe49b:
006FE49B  85 FF                     TEST EDI,EDI
006FE49D  0F 8E F2 FE FF FF         JLE 0x006fe395
LAB_006fe4a3:
006FE4A3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE4A6  84 11                     TEST byte ptr [ECX],DL
006FE4A8  75 21                     JNZ 0x006fe4cb
006FE4AA  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FE4AD  33 C9                     XOR ECX,ECX
006FE4AF  66 8B 0E                  MOV CX,word ptr [ESI]
006FE4B2  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FE4B5  3B F1                     CMP ESI,ECX
006FE4B7  77 12                     JA 0x006fe4cb
006FE4B9  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FE4BC  33 C9                     XOR ECX,ECX
006FE4BE  8A 0E                     MOV CL,byte ptr [ESI]
006FE4C0  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FE4C3  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FE4C6  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE4C9  88 0E                     MOV byte ptr [ESI],CL
LAB_006fe4cb:
006FE4CB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FE4CE  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE4D1  83 C1 02                  ADD ECX,0x2
006FE4D4  46                        INC ESI
006FE4D5  D1 EA                     SHR EDX,0x1
006FE4D7  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006FE4DA  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006FE4DD  75 0C                     JNZ 0x006fe4eb
006FE4DF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE4E2  BA 80 00 00 00            MOV EDX,0x80
006FE4E7  41                        INC ECX
006FE4E8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006fe4eb:
006FE4EB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FE4EE  41                        INC ECX
006FE4EF  4F                        DEC EDI
006FE4F0  85 FF                     TEST EDI,EDI
006FE4F2  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FE4F5  0F 8E 9A FE FF FF         JLE 0x006fe395
006FE4FB  41                        INC ECX
006FE4FC  4F                        DEC EDI
006FE4FD  85 FF                     TEST EDI,EDI
006FE4FF  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FE502  0F 8E 8D FE FF FF         JLE 0x006fe395
006FE508  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE50B  84 11                     TEST byte ptr [ECX],DL
006FE50D  75 21                     JNZ 0x006fe530
006FE50F  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FE512  33 C9                     XOR ECX,ECX
006FE514  66 8B 0E                  MOV CX,word ptr [ESI]
006FE517  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FE51A  3B F1                     CMP ESI,ECX
006FE51C  77 12                     JA 0x006fe530
006FE51E  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FE521  33 C9                     XOR ECX,ECX
006FE523  8A 0E                     MOV CL,byte ptr [ESI]
006FE525  8B 75 44                  MOV ESI,dword ptr [EBP + 0x44]
006FE528  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FE52B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE52E  88 0E                     MOV byte ptr [ESI],CL
LAB_006fe530:
006FE530  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FE533  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FE536  83 C1 02                  ADD ECX,0x2
006FE539  46                        INC ESI
006FE53A  D1 EA                     SHR EDX,0x1
006FE53C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006FE53F  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006FE542  75 0C                     JNZ 0x006fe550
006FE544  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FE547  BA 80 00 00 00            MOV EDX,0x80
006FE54C  41                        INC ECX
006FE54D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006fe550:
006FE550  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FE553  41                        INC ECX
006FE554  4F                        DEC EDI
006FE555  85 FF                     TEST EDI,EDI
006FE557  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FE55A  0F 8F 43 FF FF FF         JG 0x006fe4a3
006FE560  E9 30 FE FF FF            JMP 0x006fe395
