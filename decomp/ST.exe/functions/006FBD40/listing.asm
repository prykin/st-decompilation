FUN_006fbd40:
006FBD40  55                        PUSH EBP
006FBD41  8B EC                     MOV EBP,ESP
006FBD43  83 EC 14                  SUB ESP,0x14
006FBD46  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006FBD49  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FBD4C  C1 F8 03                  SAR EAX,0x3
006FBD4F  03 C8                     ADD ECX,EAX
006FBD51  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FBD54  53                        PUSH EBX
006FBD55  48                        DEC EAX
006FBD56  56                        PUSH ESI
006FBD57  57                        PUSH EDI
006FBD58  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006FBD62  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006FBD65  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FBD68  0F 88 4E 05 00 00         JS 0x006fc2bc
LAB_006fbd6e:
006FBD6E  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FBD71  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FBD74  83 F8 01                  CMP EAX,0x1
006FBD77  75 4A                     JNZ 0x006fbdc3
006FBD79  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FBD7C  48                        DEC EAX
006FBD7D  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FBD80  0F 88 36 05 00 00         JS 0x006fc2bc
006FBD86  33 C0                     XOR EAX,EAX
006FBD88  8A 02                     MOV AL,byte ptr [EDX]
006FBD8A  42                        INC EDX
006FBD8B  85 C0                     TEST EAX,EAX
006FBD8D  74 2D                     JZ 0x006fbdbc
006FBD8F  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
LAB_006fbd92:
006FBD92  A8 80                     TEST AL,0x80
006FBD94  74 16                     JZ 0x006fbdac
006FBD96  A8 40                     TEST AL,0x40
006FBD98  74 06                     JZ 0x006fbda0
006FBD9A  42                        INC EDX
006FBD9B  83 E0 3F                  AND EAX,0x3f
006FBD9E  EB 0F                     JMP 0x006fbdaf
LAB_006fbda0:
006FBDA0  8B F0                     MOV ESI,EAX
006FBDA2  83 E6 3F                  AND ESI,0x3f
006FBDA5  03 D6                     ADD EDX,ESI
006FBDA7  83 E0 3F                  AND EAX,0x3f
006FBDAA  EB 03                     JMP 0x006fbdaf
LAB_006fbdac:
006FBDAC  83 E0 7F                  AND EAX,0x7f
LAB_006fbdaf:
006FBDAF  2B C8                     SUB ECX,EAX
006FBDB1  85 C9                     TEST ECX,ECX
006FBDB3  7E 07                     JLE 0x006fbdbc
006FBDB5  33 C0                     XOR EAX,EAX
006FBDB7  8A 02                     MOV AL,byte ptr [EDX]
006FBDB9  42                        INC EDX
006FBDBA  EB D6                     JMP 0x006fbd92
LAB_006fbdbc:
006FBDBC  C7 45 34 02 00 00 00      MOV dword ptr [EBP + 0x34],0x2
LAB_006fbdc3:
006FBDC3  33 DB                     XOR EBX,EBX
006FBDC5  8A 1A                     MOV BL,byte ptr [EDX]
006FBDC7  42                        INC EDX
006FBDC8  85 DB                     TEST EBX,EBX
006FBDCA  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FBDCD  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006FBDD0  0F 84 A5 04 00 00         JZ 0x006fc27b
006FBDD6  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FBDD9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006FBDDC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006FBDDF  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006FBDE2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FBDE5  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006FBDE8  83 E1 07                  AND ECX,0x7
006FBDEB  BA 80 00 00 00            MOV EDX,0x80
006FBDF0  D3 FA                     SAR EDX,CL
006FBDF2  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006FBDF5  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FBDF8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006fbdfb:
006FBDFB  F6 C3 80                  TEST BL,0x80
006FBDFE  8B C3                     MOV EAX,EBX
006FBE00  74 36                     JZ 0x006fbe38
006FBE02  83 E0 3F                  AND EAX,0x3f
006FBE05  3B C6                     CMP EAX,ESI
006FBE07  7F 45                     JG 0x006fbe4e
006FBE09  F6 C3 40                  TEST BL,0x40
006FBE0C  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FBE0F  74 13                     JZ 0x006fbe24
006FBE11  43                        INC EBX
006FBE12  2B F0                     SUB ESI,EAX
006FBE14  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FBE17  33 DB                     XOR EBX,EBX
006FBE19  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FBE1C  8A 18                     MOV BL,byte ptr [EAX]
006FBE1E  40                        INC EAX
006FBE1F  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FBE22  EB D7                     JMP 0x006fbdfb
LAB_006fbe24:
006FBE24  03 D8                     ADD EBX,EAX
006FBE26  2B F0                     SUB ESI,EAX
006FBE28  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FBE2B  33 DB                     XOR EBX,EBX
006FBE2D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FBE30  8A 18                     MOV BL,byte ptr [EAX]
006FBE32  40                        INC EAX
006FBE33  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FBE36  EB C3                     JMP 0x006fbdfb
LAB_006fbe38:
006FBE38  83 E0 7F                  AND EAX,0x7f
006FBE3B  3B C6                     CMP EAX,ESI
006FBE3D  7F 0F                     JG 0x006fbe4e
006FBE3F  2B F0                     SUB ESI,EAX
006FBE41  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FBE44  33 DB                     XOR EBX,EBX
006FBE46  8A 18                     MOV BL,byte ptr [EAX]
006FBE48  40                        INC EAX
006FBE49  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FBE4C  EB AD                     JMP 0x006fbdfb
LAB_006fbe4e:
006FBE4E  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FBE51  81 E3 C0 00 00 00         AND EBX,0xc0
006FBE57  2B C6                     SUB EAX,ESI
006FBE59  80 FB 80                  CMP BL,0x80
006FBE5C  75 03                     JNZ 0x006fbe61
006FBE5E  01 75 1C                  ADD dword ptr [EBP + 0x1c],ESI
LAB_006fbe61:
006FBE61  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FBE64  3B C6                     CMP EAX,ESI
006FBE66  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FBE69  0F 8F B9 02 00 00         JG 0x006fc128
006FBE6F  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006FBE72  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006FBE75  81 E6 80 00 00 00         AND ESI,0x80
LAB_006fbe7b:
006FBE7B  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FBE7E  2B F8                     SUB EDI,EAX
006FBE80  85 F6                     TEST ESI,ESI
006FBE82  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FBE85  0F 84 48 02 00 00         JZ 0x006fc0d3
006FBE8B  F6 C3 40                  TEST BL,0x40
006FBE8E  0F 84 FB 00 00 00         JZ 0x006fbf8f
006FBE94  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FBE97  33 DB                     XOR EBX,EBX
006FBE99  8B FE                     MOV EDI,ESI
006FBE9B  8A 1E                     MOV BL,byte ptr [ESI]
006FBE9D  47                        INC EDI
006FBE9E  85 C9                     TEST ECX,ECX
006FBEA0  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FBEA3  7E 55                     JLE 0x006fbefa
006FBEA5  83 F9 01                  CMP ECX,0x1
006FBEA8  75 06                     JNZ 0x006fbeb0
006FBEAA  B9 02 00 00 00            MOV ECX,0x2
006FBEAF  48                        DEC EAX
LAB_006fbeb0:
006FBEB0  85 C0                     TEST EAX,EAX
006FBEB2  0F 8E 4E 02 00 00         JLE 0x006fc106
006FBEB8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FBEBB  84 11                     TEST byte ptr [ECX],DL
006FBEBD  75 16                     JNZ 0x006fbed5
006FBEBF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FBEC2  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006FBEC5  33 C9                     XOR ECX,ECX
006FBEC7  66 8B 0E                  MOV CX,word ptr [ESI]
006FBECA  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FBECD  3B F1                     CMP ESI,ECX
006FBECF  77 07                     JA 0x006fbed8
006FBED1  88 1F                     MOV byte ptr [EDI],BL
006FBED3  EB 03                     JMP 0x006fbed8
LAB_006fbed5:
006FBED5  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_006fbed8:
006FBED8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FBEDB  83 C1 02                  ADD ECX,0x2
006FBEDE  47                        INC EDI
006FBEDF  D1 EA                     SHR EDX,0x1
006FBEE1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FBEE4  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FBEE7  75 0C                     JNZ 0x006fbef5
006FBEE9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FBEEC  BA 80 00 00 00            MOV EDX,0x80
006FBEF1  41                        INC ECX
006FBEF2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fbef5:
006FBEF5  33 C9                     XOR ECX,ECX
006FBEF7  48                        DEC EAX
006FBEF8  EB 03                     JMP 0x006fbefd
LAB_006fbefa:
006FBEFA  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_006fbefd:
006FBEFD  85 C0                     TEST EAX,EAX
006FBEFF  0F 8E 82 00 00 00         JLE 0x006fbf87
LAB_006fbf05:
006FBF05  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FBF08  84 11                     TEST byte ptr [ECX],DL
006FBF0A  75 11                     JNZ 0x006fbf1d
006FBF0C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FBF0F  33 C9                     XOR ECX,ECX
006FBF11  66 8B 0E                  MOV CX,word ptr [ESI]
006FBF14  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FBF17  3B F1                     CMP ESI,ECX
006FBF19  77 02                     JA 0x006fbf1d
006FBF1B  88 1F                     MOV byte ptr [EDI],BL
LAB_006fbf1d:
006FBF1D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FBF20  83 C1 02                  ADD ECX,0x2
006FBF23  47                        INC EDI
006FBF24  D1 EA                     SHR EDX,0x1
006FBF26  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FBF29  75 0C                     JNZ 0x006fbf37
006FBF2B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FBF2E  BA 80 00 00 00            MOV EDX,0x80
006FBF33  41                        INC ECX
006FBF34  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fbf37:
006FBF37  48                        DEC EAX
006FBF38  B9 01 00 00 00            MOV ECX,0x1
006FBF3D  85 C0                     TEST EAX,EAX
006FBF3F  7E 43                     JLE 0x006fbf84
006FBF41  48                        DEC EAX
006FBF42  B9 02 00 00 00            MOV ECX,0x2
006FBF47  85 C0                     TEST EAX,EAX
006FBF49  7E 39                     JLE 0x006fbf84
006FBF4B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FBF4E  84 11                     TEST byte ptr [ECX],DL
006FBF50  75 11                     JNZ 0x006fbf63
006FBF52  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FBF55  33 C9                     XOR ECX,ECX
006FBF57  66 8B 0E                  MOV CX,word ptr [ESI]
006FBF5A  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FBF5D  3B F1                     CMP ESI,ECX
006FBF5F  77 02                     JA 0x006fbf63
006FBF61  88 1F                     MOV byte ptr [EDI],BL
LAB_006fbf63:
006FBF63  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FBF66  83 C1 02                  ADD ECX,0x2
006FBF69  47                        INC EDI
006FBF6A  D1 EA                     SHR EDX,0x1
006FBF6C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FBF6F  75 0C                     JNZ 0x006fbf7d
006FBF71  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FBF74  BA 80 00 00 00            MOV EDX,0x80
006FBF79  41                        INC ECX
006FBF7A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fbf7d:
006FBF7D  33 C9                     XOR ECX,ECX
006FBF7F  48                        DEC EAX
006FBF80  85 C0                     TEST EAX,EAX
006FBF82  7F 81                     JG 0x006fbf05
LAB_006fbf84:
006FBF84  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_006fbf87:
006FBF87  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006FBF8A  E9 1C 01 00 00            JMP 0x006fc0ab
LAB_006fbf8f:
006FBF8F  85 C9                     TEST ECX,ECX
006FBF91  7E 68                     JLE 0x006fbffb
006FBF93  83 F9 01                  CMP ECX,0x1
006FBF96  75 0D                     JNZ 0x006fbfa5
006FBF98  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FBF9B  B9 02 00 00 00            MOV ECX,0x2
006FBFA0  47                        INC EDI
006FBFA1  48                        DEC EAX
006FBFA2  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_006fbfa5:
006FBFA5  85 C0                     TEST EAX,EAX
006FBFA7  0F 8E 61 01 00 00         JLE 0x006fc10e
006FBFAD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FBFB0  84 11                     TEST byte ptr [ECX],DL
006FBFB2  75 1B                     JNZ 0x006fbfcf
006FBFB4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FBFB7  33 C9                     XOR ECX,ECX
006FBFB9  66 8B 0E                  MOV CX,word ptr [ESI]
006FBFBC  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FBFBF  3B F1                     CMP ESI,ECX
006FBFC1  77 0C                     JA 0x006fbfcf
006FBFC3  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FBFC6  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006FBFC9  8A 09                     MOV CL,byte ptr [ECX]
006FBFCB  88 0F                     MOV byte ptr [EDI],CL
006FBFCD  EB 03                     JMP 0x006fbfd2
LAB_006fbfcf:
006FBFCF  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_006fbfd2:
006FBFD2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FBFD5  83 C1 02                  ADD ECX,0x2
006FBFD8  47                        INC EDI
006FBFD9  D1 EA                     SHR EDX,0x1
006FBFDB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FBFDE  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006FBFE1  75 0C                     JNZ 0x006fbfef
006FBFE3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FBFE6  BA 80 00 00 00            MOV EDX,0x80
006FBFEB  41                        INC ECX
006FBFEC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fbfef:
006FBFEF  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FBFF2  41                        INC ECX
006FBFF3  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FBFF6  33 C9                     XOR ECX,ECX
006FBFF8  48                        DEC EAX
006FBFF9  EB 03                     JMP 0x006fbffe
LAB_006fbffb:
006FBFFB  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_006fbffe:
006FBFFE  85 C0                     TEST EAX,EAX
006FC000  0F 8E A5 00 00 00         JLE 0x006fc0ab
LAB_006fc006:
006FC006  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC009  84 11                     TEST byte ptr [ECX],DL
006FC00B  75 16                     JNZ 0x006fc023
006FC00D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FC010  33 C9                     XOR ECX,ECX
006FC012  66 8B 0E                  MOV CX,word ptr [ESI]
006FC015  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FC018  3B F1                     CMP ESI,ECX
006FC01A  77 07                     JA 0x006fc023
006FC01C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC01F  8A 09                     MOV CL,byte ptr [ECX]
006FC021  88 0F                     MOV byte ptr [EDI],CL
LAB_006fc023:
006FC023  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FC026  83 C1 02                  ADD ECX,0x2
006FC029  47                        INC EDI
006FC02A  D1 EA                     SHR EDX,0x1
006FC02C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FC02F  75 0C                     JNZ 0x006fc03d
006FC031  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC034  BA 80 00 00 00            MOV EDX,0x80
006FC039  41                        INC ECX
006FC03A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc03d:
006FC03D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC040  41                        INC ECX
006FC041  48                        DEC EAX
006FC042  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FC045  B9 01 00 00 00            MOV ECX,0x1
006FC04A  85 C0                     TEST EAX,EAX
006FC04C  7E 5A                     JLE 0x006fc0a8
006FC04E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC051  41                        INC ECX
006FC052  48                        DEC EAX
006FC053  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FC056  B9 02 00 00 00            MOV ECX,0x2
006FC05B  85 C0                     TEST EAX,EAX
006FC05D  7E 49                     JLE 0x006fc0a8
006FC05F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC062  84 11                     TEST byte ptr [ECX],DL
006FC064  75 16                     JNZ 0x006fc07c
006FC066  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FC069  33 C9                     XOR ECX,ECX
006FC06B  66 8B 0E                  MOV CX,word ptr [ESI]
006FC06E  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FC071  3B F1                     CMP ESI,ECX
006FC073  77 07                     JA 0x006fc07c
006FC075  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC078  8A 09                     MOV CL,byte ptr [ECX]
006FC07A  88 0F                     MOV byte ptr [EDI],CL
LAB_006fc07c:
006FC07C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FC07F  83 C1 02                  ADD ECX,0x2
006FC082  47                        INC EDI
006FC083  D1 EA                     SHR EDX,0x1
006FC085  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FC088  75 0C                     JNZ 0x006fc096
006FC08A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC08D  BA 80 00 00 00            MOV EDX,0x80
006FC092  41                        INC ECX
006FC093  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc096:
006FC096  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC099  41                        INC ECX
006FC09A  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FC09D  33 C9                     XOR ECX,ECX
006FC09F  48                        DEC EAX
006FC0A0  85 C0                     TEST EAX,EAX
006FC0A2  0F 8F 5E FF FF FF         JG 0x006fc006
LAB_006fc0a8:
006FC0A8  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_006fc0ab:
006FC0AB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006FC0AE  85 C0                     TEST EAX,EAX
006FC0B0  7E 72                     JLE 0x006fc124
006FC0B2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FC0B5  33 DB                     XOR EBX,EBX
006FC0B7  8A 18                     MOV BL,byte ptr [EAX]
006FC0B9  8B F3                     MOV ESI,EBX
006FC0BB  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FC0BE  81 E6 80 00 00 00         AND ESI,0x80
006FC0C4  40                        INC EAX
006FC0C5  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FC0C8  8B C3                     MOV EAX,EBX
006FC0CA  85 F6                     TEST ESI,ESI
006FC0CC  74 45                     JZ 0x006fc113
006FC0CE  83 E0 3F                  AND EAX,0x3f
006FC0D1  EB 43                     JMP 0x006fc116
LAB_006fc0d3:
006FC0D3  48                        DEC EAX
006FC0D4  78 38                     JS 0x006fc10e
006FC0D6  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006FC0D9  40                        INC EAX
LAB_006fc0da:
006FC0DA  83 F9 01                  CMP ECX,0x1
006FC0DD  74 1A                     JZ 0x006fc0f9
006FC0DF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FC0E2  47                        INC EDI
006FC0E3  83 C6 02                  ADD ESI,0x2
006FC0E6  D1 EA                     SHR EDX,0x1
006FC0E8  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FC0EB  75 0C                     JNZ 0x006fc0f9
006FC0ED  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FC0F0  BA 80 00 00 00            MOV EDX,0x80
006FC0F5  46                        INC ESI
006FC0F6  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_006fc0f9:
006FC0F9  41                        INC ECX
006FC0FA  83 F9 02                  CMP ECX,0x2
006FC0FD  7E 02                     JLE 0x006fc101
006FC0FF  33 C9                     XOR ECX,ECX
LAB_006fc101:
006FC101  48                        DEC EAX
006FC102  75 D6                     JNZ 0x006fc0da
006FC104  EB A2                     JMP 0x006fc0a8
LAB_006fc106:
006FC106  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006FC109  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006FC10C  EB 9D                     JMP 0x006fc0ab
LAB_006fc10e:
006FC10E  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006FC111  EB 98                     JMP 0x006fc0ab
LAB_006fc113:
006FC113  83 E0 7F                  AND EAX,0x7f
LAB_006fc116:
006FC116  3B 45 F4                  CMP EAX,dword ptr [EBP + -0xc]
006FC119  0F 8E 5C FD FF FF         JLE 0x006fbe7b
006FC11F  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006FC122  EB 07                     JMP 0x006fc12b
LAB_006fc124:
006FC124  33 C0                     XOR EAX,EAX
006FC126  EB 03                     JMP 0x006fc12b
LAB_006fc128:
006FC128  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_006fc12b:
006FC12B  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006FC12E  2B C6                     SUB EAX,ESI
006FC130  85 F6                     TEST ESI,ESI
006FC132  0F 8E F2 00 00 00         JLE 0x006fc22a
006FC138  F6 C3 80                  TEST BL,0x80
006FC13B  0F 84 E9 00 00 00         JZ 0x006fc22a
006FC141  F6 C3 40                  TEST BL,0x40
006FC144  0F 84 7B 01 00 00         JZ 0x006fc2c5
006FC14A  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FC14D  33 DB                     XOR EBX,EBX
006FC14F  8A 1E                     MOV BL,byte ptr [ESI]
006FC151  46                        INC ESI
006FC152  85 C9                     TEST ECX,ECX
006FC154  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FC157  7E 48                     JLE 0x006fc1a1
006FC159  83 F9 01                  CMP ECX,0x1
006FC15C  75 03                     JNZ 0x006fc161
006FC15E  FF 4D F4                  DEC dword ptr [EBP + -0xc]
LAB_006fc161:
006FC161  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FC164  85 C9                     TEST ECX,ECX
006FC166  0F 8E BB 00 00 00         JLE 0x006fc227
006FC16C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC16F  84 11                     TEST byte ptr [ECX],DL
006FC171  75 11                     JNZ 0x006fc184
006FC173  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FC176  33 C9                     XOR ECX,ECX
006FC178  66 8B 0E                  MOV CX,word ptr [ESI]
006FC17B  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FC17E  3B F1                     CMP ESI,ECX
006FC180  77 02                     JA 0x006fc184
006FC182  88 1F                     MOV byte ptr [EDI],BL
LAB_006fc184:
006FC184  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FC187  83 C1 02                  ADD ECX,0x2
006FC18A  47                        INC EDI
006FC18B  D1 EA                     SHR EDX,0x1
006FC18D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FC190  75 0C                     JNZ 0x006fc19e
006FC192  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC195  BA 80 00 00 00            MOV EDX,0x80
006FC19A  41                        INC ECX
006FC19B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc19e:
006FC19E  FF 4D F4                  DEC dword ptr [EBP + -0xc]
LAB_006fc1a1:
006FC1A1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FC1A4  85 C9                     TEST ECX,ECX
006FC1A6  7E 7F                     JLE 0x006fc227
LAB_006fc1a8:
006FC1A8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC1AB  84 11                     TEST byte ptr [ECX],DL
006FC1AD  75 11                     JNZ 0x006fc1c0
006FC1AF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FC1B2  33 C9                     XOR ECX,ECX
006FC1B4  66 8B 0E                  MOV CX,word ptr [ESI]
006FC1B7  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FC1BA  3B F1                     CMP ESI,ECX
006FC1BC  77 02                     JA 0x006fc1c0
006FC1BE  88 1F                     MOV byte ptr [EDI],BL
LAB_006fc1c0:
006FC1C0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FC1C3  83 C1 02                  ADD ECX,0x2
006FC1C6  47                        INC EDI
006FC1C7  D1 EA                     SHR EDX,0x1
006FC1C9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FC1CC  75 0C                     JNZ 0x006fc1da
006FC1CE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC1D1  BA 80 00 00 00            MOV EDX,0x80
006FC1D6  41                        INC ECX
006FC1D7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc1da:
006FC1DA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FC1DD  49                        DEC ECX
006FC1DE  85 C9                     TEST ECX,ECX
006FC1E0  7E 45                     JLE 0x006fc227
006FC1E2  49                        DEC ECX
006FC1E3  85 C9                     TEST ECX,ECX
006FC1E5  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006FC1E8  7E 3D                     JLE 0x006fc227
006FC1EA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC1ED  84 11                     TEST byte ptr [ECX],DL
006FC1EF  75 11                     JNZ 0x006fc202
006FC1F1  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FC1F4  33 C9                     XOR ECX,ECX
006FC1F6  66 8B 0E                  MOV CX,word ptr [ESI]
006FC1F9  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FC1FC  3B F1                     CMP ESI,ECX
006FC1FE  77 02                     JA 0x006fc202
006FC200  88 1F                     MOV byte ptr [EDI],BL
LAB_006fc202:
006FC202  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FC205  83 C1 02                  ADD ECX,0x2
006FC208  47                        INC EDI
006FC209  D1 EA                     SHR EDX,0x1
006FC20B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FC20E  75 0C                     JNZ 0x006fc21c
006FC210  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC213  BA 80 00 00 00            MOV EDX,0x80
006FC218  41                        INC ECX
006FC219  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc21c:
006FC21C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FC21F  49                        DEC ECX
006FC220  85 C9                     TEST ECX,ECX
006FC222  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006FC225  7F 81                     JG 0x006fc1a8
LAB_006fc227:
006FC227  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_006fc22a:
006FC22A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006FC22D  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006FC230  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FC233  2B CF                     SUB ECX,EDI
006FC235  2B CE                     SUB ECX,ESI
006FC237  3B C1                     CMP EAX,ECX
006FC239  7D 32                     JGE 0x006fc26d
006FC23B  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
LAB_006fc23e:
006FC23E  81 E3 C0 00 00 00         AND EBX,0xc0
006FC244  2B C8                     SUB ECX,EAX
006FC246  80 FB 80                  CMP BL,0x80
006FC249  75 02                     JNZ 0x006fc24d
006FC24B  03 F0                     ADD ESI,EAX
LAB_006fc24d:
006FC24D  33 DB                     XOR EBX,EBX
006FC24F  8A 1E                     MOV BL,byte ptr [ESI]
006FC251  8B D3                     MOV EDX,EBX
006FC253  8B C3                     MOV EAX,EBX
006FC255  80 E2 80                  AND DL,0x80
006FC258  46                        INC ESI
006FC259  84 D2                     TEST DL,DL
006FC25B  74 09                     JZ 0x006fc266
006FC25D  83 E0 3F                  AND EAX,0x3f
006FC260  F6 C3 40                  TEST BL,0x40
006FC263  74 01                     JZ 0x006fc266
006FC265  46                        INC ESI
LAB_006fc266:
006FC266  3B C1                     CMP EAX,ECX
006FC268  7C D4                     JL 0x006fc23e
006FC26A  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fc26d:
006FC26D  81 E3 C0 00 00 00         AND EBX,0xc0
006FC273  80 FB 80                  CMP BL,0x80
006FC276  75 03                     JNZ 0x006fc27b
006FC278  01 4D 1C                  ADD dword ptr [EBP + 0x1c],ECX
LAB_006fc27b:
006FC27B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006FC27E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006FC281  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006FC284  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006FC287  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
006FC28A  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FC28D  03 D8                     ADD EBX,EAX
006FC28F  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FC292  03 F9                     ADD EDI,ECX
006FC294  03 F2                     ADD ESI,EDX
006FC296  40                        INC EAX
006FC297  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006FC29A  83 F8 02                  CMP EAX,0x2
006FC29D  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006FC2A0  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
006FC2A3  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
006FC2A6  7E 07                     JLE 0x006fc2af
006FC2A8  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_006fc2af:
006FC2AF  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FC2B2  48                        DEC EAX
006FC2B3  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FC2B6  0F 89 B2 FA FF FF         JNS 0x006fbd6e
LAB_006fc2bc:
006FC2BC  5F                        POP EDI
006FC2BD  5E                        POP ESI
006FC2BE  5B                        POP EBX
006FC2BF  8B E5                     MOV ESP,EBP
006FC2C1  5D                        POP EBP
006FC2C2  C2 3C 00                  RET 0x3c
LAB_006fc2c5:
006FC2C5  85 C9                     TEST ECX,ECX
006FC2C7  7E 5D                     JLE 0x006fc326
006FC2C9  83 F9 01                  CMP ECX,0x1
006FC2CC  75 0B                     JNZ 0x006fc2d9
006FC2CE  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC2D1  41                        INC ECX
006FC2D2  4E                        DEC ESI
006FC2D3  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FC2D6  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006fc2d9:
006FC2D9  85 F6                     TEST ESI,ESI
006FC2DB  0F 8E 49 FF FF FF         JLE 0x006fc22a
006FC2E1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC2E4  84 11                     TEST byte ptr [ECX],DL
006FC2E6  75 19                     JNZ 0x006fc301
006FC2E8  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FC2EB  33 C9                     XOR ECX,ECX
006FC2ED  66 8B 0E                  MOV CX,word ptr [ESI]
006FC2F0  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FC2F3  3B F1                     CMP ESI,ECX
006FC2F5  77 07                     JA 0x006fc2fe
006FC2F7  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC2FA  8A 09                     MOV CL,byte ptr [ECX]
006FC2FC  88 0F                     MOV byte ptr [EDI],CL
LAB_006fc2fe:
006FC2FE  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_006fc301:
006FC301  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FC304  83 C1 02                  ADD ECX,0x2
006FC307  47                        INC EDI
006FC308  D1 EA                     SHR EDX,0x1
006FC30A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FC30D  75 0C                     JNZ 0x006fc31b
006FC30F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC312  BA 80 00 00 00            MOV EDX,0x80
006FC317  41                        INC ECX
006FC318  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc31b:
006FC31B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC31E  41                        INC ECX
006FC31F  4E                        DEC ESI
006FC320  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FC323  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_006fc326:
006FC326  85 F6                     TEST ESI,ESI
006FC328  0F 8E FC FE FF FF         JLE 0x006fc22a
LAB_006fc32e:
006FC32E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC331  84 11                     TEST byte ptr [ECX],DL
006FC333  75 19                     JNZ 0x006fc34e
006FC335  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FC338  33 C9                     XOR ECX,ECX
006FC33A  66 8B 0E                  MOV CX,word ptr [ESI]
006FC33D  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FC340  3B F1                     CMP ESI,ECX
006FC342  77 07                     JA 0x006fc34b
006FC344  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC347  8A 09                     MOV CL,byte ptr [ECX]
006FC349  88 0F                     MOV byte ptr [EDI],CL
LAB_006fc34b:
006FC34B  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_006fc34e:
006FC34E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FC351  83 C1 02                  ADD ECX,0x2
006FC354  47                        INC EDI
006FC355  D1 EA                     SHR EDX,0x1
006FC357  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FC35A  75 0C                     JNZ 0x006fc368
006FC35C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC35F  BA 80 00 00 00            MOV EDX,0x80
006FC364  41                        INC ECX
006FC365  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc368:
006FC368  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC36B  41                        INC ECX
006FC36C  4E                        DEC ESI
006FC36D  85 F6                     TEST ESI,ESI
006FC36F  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FC372  0F 8E B2 FE FF FF         JLE 0x006fc22a
006FC378  41                        INC ECX
006FC379  4E                        DEC ESI
006FC37A  85 F6                     TEST ESI,ESI
006FC37C  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FC37F  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FC382  0F 8E A2 FE FF FF         JLE 0x006fc22a
006FC388  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC38B  84 11                     TEST byte ptr [ECX],DL
006FC38D  75 19                     JNZ 0x006fc3a8
006FC38F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FC392  33 C9                     XOR ECX,ECX
006FC394  66 8B 0E                  MOV CX,word ptr [ESI]
006FC397  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FC39A  3B F1                     CMP ESI,ECX
006FC39C  77 07                     JA 0x006fc3a5
006FC39E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC3A1  8A 09                     MOV CL,byte ptr [ECX]
006FC3A3  88 0F                     MOV byte ptr [EDI],CL
LAB_006fc3a5:
006FC3A5  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_006fc3a8:
006FC3A8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006FC3AB  83 C1 02                  ADD ECX,0x2
006FC3AE  47                        INC EDI
006FC3AF  D1 EA                     SHR EDX,0x1
006FC3B1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006FC3B4  75 0C                     JNZ 0x006fc3c2
006FC3B6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FC3B9  BA 80 00 00 00            MOV EDX,0x80
006FC3BE  41                        INC ECX
006FC3BF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006fc3c2:
006FC3C2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FC3C5  41                        INC ECX
006FC3C6  4E                        DEC ESI
006FC3C7  85 F6                     TEST ESI,ESI
006FC3C9  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FC3CC  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006FC3CF  0F 8F 59 FF FF FF         JG 0x006fc32e
006FC3D5  E9 50 FE FF FF            JMP 0x006fc22a
