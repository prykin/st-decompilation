FUN_0043ec20:
0043EC20  55                        PUSH EBP
0043EC21  8B EC                     MOV EBP,ESP
0043EC23  83 EC 10                  SUB ESP,0x10
0043EC26  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
0043EC2A  0F BF 4D 1C               MOVSX ECX,word ptr [EBP + 0x1c]
0043EC2E  53                        PUSH EBX
0043EC2F  56                        PUSH ESI
0043EC30  0F BF 75 20               MOVSX ESI,word ptr [EBP + 0x20]
0043EC34  8D 54 01 FF               LEA EDX,[ECX + EAX*0x1 + -0x1]
0043EC38  57                        PUSH EDI
0043EC39  0F BF 4D 14               MOVSX ECX,word ptr [EBP + 0x14]
0043EC3D  0F BF 7D 24               MOVSX EDI,word ptr [EBP + 0x24]
0043EC41  8D 5C 0E FF               LEA EBX,[ESI + ECX*0x1 + -0x1]
0043EC45  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0043EC48  0F BF 75 18               MOVSX ESI,word ptr [EBP + 0x18]
0043EC4C  85 C0                     TEST EAX,EAX
0043EC4E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0043EC51  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0043EC54  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
0043EC57  8D 7C 37 FF               LEA EDI,[EDI + ESI*0x1 + -0x1]
0043EC5B  7D 07                     JGE 0x0043ec64
0043EC5D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_0043ec64:
0043EC64  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0043EC6B  48                        DEC EAX
0043EC6C  3B D0                     CMP EDX,EAX
0043EC6E  7E 03                     JLE 0x0043ec73
0043EC70  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0043ec73:
0043EC73  85 C9                     TEST ECX,ECX
0043EC75  7D 07                     JGE 0x0043ec7e
0043EC77  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
LAB_0043ec7e:
0043EC7E  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0043EC85  48                        DEC EAX
0043EC86  3B D8                     CMP EBX,EAX
0043EC88  7E 03                     JLE 0x0043ec8d
0043EC8A  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_0043ec8d:
0043EC8D  85 F6                     TEST ESI,ESI
0043EC8F  7D 02                     JGE 0x0043ec93
0043EC91  33 F6                     XOR ESI,ESI
LAB_0043ec93:
0043EC93  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
0043EC9A  48                        DEC EAX
0043EC9B  3B F8                     CMP EDI,EAX
0043EC9D  7E 02                     JLE 0x0043eca1
0043EC9F  8B F8                     MOV EDI,EAX
LAB_0043eca1:
0043ECA1  6A 01                     PUSH 0x1
0043ECA3  6A 02                     PUSH 0x2
0043ECA5  6A 00                     PUSH 0x0
0043ECA7  6A 00                     PUSH 0x0
0043ECA9  E8 E2 F5 26 00            CALL 0x006ae290
0043ECAE  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0043ECB5  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0043ECBC  0F AF 55 10               IMUL EDX,dword ptr [EBP + 0x10]
0043ECC0  8B D8                     MOV EBX,EAX
0043ECC2  8D 46 FF                  LEA EAX,[ESI + -0x1]
0043ECC5  0F AF C1                  IMUL EAX,ECX
0043ECC8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0043ECCB  03 C8                     ADD ECX,EAX
0043ECCD  03 D1                     ADD EDX,ECX
0043ECCF  3B F7                     CMP ESI,EDI
0043ECD1  0F 8F 15 01 00 00         JG 0x0043edec
0043ECD7  2B FE                     SUB EDI,ESI
0043ECD9  47                        INC EDI
0043ECDA  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
LAB_0043ecdd:
0043ECDD  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0043ECE4  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0043ECE7  03 D0                     ADD EDX,EAX
0043ECE9  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0043ECF0  8B CA                     MOV ECX,EDX
0043ECF2  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0043ECF5  2B C8                     SUB ECX,EAX
0043ECF7  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0043ECFA  3B F0                     CMP ESI,EAX
0043ECFC  0F 8F DD 00 00 00         JG 0x0043eddf
0043ED02  8B F8                     MOV EDI,EAX
0043ED04  2B FE                     SUB EDI,ESI
0043ED06  47                        INC EDI
0043ED07  89 7D 20                  MOV dword ptr [EBP + 0x20],EDI
LAB_0043ed0a:
0043ED0A  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0043ED11  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0043ED14  03 C8                     ADD ECX,EAX
0043ED16  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043ED19  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
0043ED1C  3B F0                     CMP ESI,EAX
0043ED1E  0F 8F B1 00 00 00         JG 0x0043edd5
0043ED24  2B C6                     SUB EAX,ESI
0043ED26  8D 3C CD F8 FF FF FF      LEA EDI,[ECX*0x8 + 0xfffffff8]
0043ED2D  40                        INC EAX
0043ED2E  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_0043ed31:
0043ED31  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0043ED37  83 C7 08                  ADD EDI,0x8
0043ED3A  8B 34 0F                  MOV ESI,dword ptr [EDI + ECX*0x1]
0043ED3D  85 F6                     TEST ESI,ESI
0043ED3F  74 7E                     JZ 0x0043edbf
0043ED41  0F BE 55 08               MOVSX EDX,byte ptr [EBP + 0x8]
0043ED45  39 56 24                  CMP dword ptr [ESI + 0x24],EDX
0043ED48  75 75                     JNZ 0x0043edbf
0043ED4A  85 F6                     TEST ESI,ESI
0043ED4C  74 71                     JZ 0x0043edbf
0043ED4E  8B 06                     MOV EAX,dword ptr [ESI]
0043ED50  8B CE                     MOV ECX,ESI
0043ED52  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0043ED55  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
0043ED58  75 65                     JNZ 0x0043edbf
0043ED5A  8B 16                     MOV EDX,dword ptr [ESI]
0043ED5C  8B CE                     MOV ECX,ESI
0043ED5E  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0043ED64  85 C0                     TEST EAX,EAX
0043ED66  74 57                     JZ 0x0043edbf
0043ED68  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0043ED6B  85 C9                     TEST ECX,ECX
0043ED6D  74 31                     JZ 0x0043eda0
0043ED6F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043ED72  83 C0 C8                  ADD EAX,-0x38
0043ED75  83 F8 26                  CMP EAX,0x26
0043ED78  77 45                     JA 0x0043edbf
0043ED7A  33 D2                     XOR EDX,EDX
0043ED7C  8A 90 18 EE 43 00         MOV DL,byte ptr [EAX + 0x43ee18]
switchD_0043ed82::switchD:
0043ED82  FF 24 95 10 EE 43 00      JMP dword ptr [EDX*0x4 + 0x43ee10]
switchD_0043ed82::caseD_38:
0043ED89  83 F9 01                  CMP ECX,0x1
0043ED8C  75 31                     JNZ 0x0043edbf
0043ED8E  8B 06                     MOV EAX,dword ptr [ESI]
0043ED90  8D 4D F0                  LEA ECX,[EBP + -0x10]
0043ED93  51                        PUSH ECX
0043ED94  8B CE                     MOV ECX,ESI
0043ED96  FF 90 88 00 00 00         CALL dword ptr [EAX + 0x88]
0043ED9C  85 C0                     TEST EAX,EAX
0043ED9E  7E 1F                     JLE 0x0043edbf
LAB_0043eda0:
0043EDA0  80 7D 2C FF               CMP byte ptr [EBP + 0x2c],0xff
0043EDA4  74 0F                     JZ 0x0043edb5
0043EDA6  8B 16                     MOV EDX,dword ptr [ESI]
0043EDA8  8B CE                     MOV ECX,ESI
0043EDAA  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
0043EDAD  0F BE 4D 2C               MOVSX ECX,byte ptr [EBP + 0x2c]
0043EDB1  3B C1                     CMP EAX,ECX
0043EDB3  75 0A                     JNZ 0x0043edbf
LAB_0043edb5:
0043EDB5  83 C6 32                  ADD ESI,0x32
0043EDB8  56                        PUSH ESI
0043EDB9  53                        PUSH EBX
0043EDBA  E8 01 F4 26 00            CALL 0x006ae1c0
switchD_0043ed82::caseD_3a:
0043EDBF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0043EDC2  48                        DEC EAX
0043EDC3  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0043EDC6  0F 85 65 FF FF FF         JNZ 0x0043ed31
0043EDCC  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
0043EDCF  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0043EDD2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_0043edd5:
0043EDD5  4F                        DEC EDI
0043EDD6  89 7D 20                  MOV dword ptr [EBP + 0x20],EDI
0043EDD9  0F 85 2B FF FF FF         JNZ 0x0043ed0a
LAB_0043eddf:
0043EDDF  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0043EDE2  48                        DEC EAX
0043EDE3  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0043EDE6  0F 85 F1 FE FF FF         JNZ 0x0043ecdd
LAB_0043edec:
0043EDEC  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0043EDEF  85 C0                     TEST EAX,EAX
0043EDF1  75 11                     JNZ 0x0043ee04
0043EDF3  53                        PUSH EBX
0043EDF4  E8 17 F3 26 00            CALL 0x006ae110
0043EDF9  5F                        POP EDI
0043EDFA  5E                        POP ESI
0043EDFB  33 C0                     XOR EAX,EAX
0043EDFD  5B                        POP EBX
0043EDFE  8B E5                     MOV ESP,EBP
0043EE00  5D                        POP EBP
0043EE01  C2 28 00                  RET 0x28
LAB_0043ee04:
0043EE04  5F                        POP EDI
0043EE05  8B C3                     MOV EAX,EBX
0043EE07  5E                        POP ESI
0043EE08  5B                        POP EBX
0043EE09  8B E5                     MOV ESP,EBP
0043EE0B  5D                        POP EBP
0043EE0C  C2 28 00                  RET 0x28
