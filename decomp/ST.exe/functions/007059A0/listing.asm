FUN_007059a0:
007059A0  55                        PUSH EBP
007059A1  8B EC                     MOV EBP,ESP
007059A3  83 EC 0C                  SUB ESP,0xc
007059A6  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
007059A9  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
007059B3  48                        DEC EAX
007059B4  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
007059B7  0F 88 E4 03 00 00         JS 0x00705da1
007059BD  53                        PUSH EBX
007059BE  56                        PUSH ESI
007059BF  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
007059C2  57                        PUSH EDI
007059C3  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_007059c6:
007059C6  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
007059C9  F6 C3 01                  TEST BL,0x1
007059CC  75 4E                     JNZ 0x00705a1c
LAB_007059ce:
007059CE  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
007059D1  48                        DEC EAX
007059D2  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
007059D5  78 42                     JS 0x00705a19
007059D7  33 C0                     XOR EAX,EAX
007059D9  8A 06                     MOV AL,byte ptr [ESI]
007059DB  46                        INC ESI
007059DC  85 C0                     TEST EAX,EAX
007059DE  74 2C                     JZ 0x00705a0c
007059E0  8B CF                     MOV ECX,EDI
LAB_007059e2:
007059E2  A8 80                     TEST AL,0x80
007059E4  74 16                     JZ 0x007059fc
007059E6  A8 40                     TEST AL,0x40
007059E8  74 06                     JZ 0x007059f0
007059EA  46                        INC ESI
007059EB  83 E0 3F                  AND EAX,0x3f
007059EE  EB 0F                     JMP 0x007059ff
LAB_007059f0:
007059F0  8B D0                     MOV EDX,EAX
007059F2  83 E2 3F                  AND EDX,0x3f
007059F5  03 F2                     ADD ESI,EDX
007059F7  83 E0 3F                  AND EAX,0x3f
007059FA  EB 03                     JMP 0x007059ff
LAB_007059fc:
007059FC  83 E0 7F                  AND EAX,0x7f
LAB_007059ff:
007059FF  2B C8                     SUB ECX,EAX
00705A01  85 C9                     TEST ECX,ECX
00705A03  7E 07                     JLE 0x00705a0c
00705A05  33 C0                     XOR EAX,EAX
00705A07  8A 06                     MOV AL,byte ptr [ESI]
00705A09  46                        INC ESI
00705A0A  EB D6                     JMP 0x007059e2
LAB_00705a0c:
00705A0C  43                        INC EBX
00705A0D  83 FB 04                  CMP EBX,0x4
00705A10  7E 02                     JLE 0x00705a14
00705A12  33 DB                     XOR EBX,EBX
LAB_00705a14:
00705A14  F6 C3 01                  TEST BL,0x1
00705A17  74 B5                     JZ 0x007059ce
LAB_00705a19:
00705A19  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
LAB_00705a1c:
00705A1C  33 D2                     XOR EDX,EDX
00705A1E  8A 16                     MOV DL,byte ptr [ESI]
00705A20  46                        INC ESI
00705A21  85 D2                     TEST EDX,EDX
00705A23  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00705A26  0F 84 4A 03 00 00         JZ 0x00705d76
00705A2C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00705A2F  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00705A32  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00705A35  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00705A38  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
LAB_00705a3b:
00705A3B  F6 C2 80                  TEST DL,0x80
00705A3E  8B C2                     MOV EAX,EDX
00705A40  74 21                     JZ 0x00705a63
00705A42  83 E0 3F                  AND EAX,0x3f
00705A45  3B C3                     CMP EAX,EBX
00705A47  7F 2A                     JG 0x00705a73
00705A49  F6 C2 40                  TEST DL,0x40
00705A4C  74 0A                     JZ 0x00705a58
00705A4E  46                        INC ESI
00705A4F  33 D2                     XOR EDX,EDX
00705A51  2B D8                     SUB EBX,EAX
00705A53  8A 16                     MOV DL,byte ptr [ESI]
00705A55  46                        INC ESI
00705A56  EB E3                     JMP 0x00705a3b
LAB_00705a58:
00705A58  03 F0                     ADD ESI,EAX
00705A5A  33 D2                     XOR EDX,EDX
00705A5C  2B D8                     SUB EBX,EAX
00705A5E  8A 16                     MOV DL,byte ptr [ESI]
00705A60  46                        INC ESI
00705A61  EB D8                     JMP 0x00705a3b
LAB_00705a63:
00705A63  83 E0 7F                  AND EAX,0x7f
00705A66  3B C3                     CMP EAX,EBX
00705A68  7F 09                     JG 0x00705a73
00705A6A  33 D2                     XOR EDX,EDX
00705A6C  2B D8                     SUB EBX,EAX
00705A6E  8A 16                     MOV DL,byte ptr [ESI]
00705A70  46                        INC ESI
00705A71  EB C8                     JMP 0x00705a3b
LAB_00705a73:
00705A73  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00705A76  2B C3                     SUB EAX,EBX
00705A78  8B DA                     MOV EBX,EDX
00705A7A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00705A7D  81 E3 C0 00 00 00         AND EBX,0xc0
00705A83  80 FB 80                  CMP BL,0x80
00705A86  75 03                     JNZ 0x00705a8b
00705A88  03 75 10                  ADD ESI,dword ptr [EBP + 0x10]
LAB_00705a8b:
00705A8B  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00705A8E  3B C3                     CMP EAX,EBX
00705A90  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00705A93  0F 8F EE 01 00 00         JG 0x00705c87
00705A99  8B DA                     MOV EBX,EDX
00705A9B  81 E3 80 00 00 00         AND EBX,0x80
00705AA1  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_00705aa4:
00705AA4  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00705AA7  2B D8                     SUB EBX,EAX
00705AA9  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00705AAC  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00705AAF  85 DB                     TEST EBX,EBX
00705AB1  0F 84 80 01 00 00         JZ 0x00705c37
00705AB7  F6 C2 40                  TEST DL,0x40
00705ABA  0F 84 B7 00 00 00         JZ 0x00705b77
00705AC0  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
00705AC3  33 D2                     XOR EDX,EDX
00705AC5  8A 16                     MOV DL,byte ptr [ESI]
00705AC7  8B FA                     MOV EDI,EDX
00705AC9  33 D2                     XOR EDX,EDX
00705ACB  46                        INC ESI
00705ACC  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
00705ACF  85 C9                     TEST ECX,ECX
00705AD1  7E 53                     JLE 0x00705b26
00705AD3  8D 79 FF                  LEA EDI,[ECX + -0x1]
00705AD6  83 FF 03                  CMP EDI,0x3
00705AD9  77 4B                     JA 0x00705b26
switchD_00705adb::switchD:
00705ADB  FF 24 BD 90 5E 70 00      JMP dword ptr [EDI*0x4 + 0x705e90]
switchD_00705adb::caseD_1:
00705AE2  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00705AE5  B9 02 00 00 00            MOV ECX,0x2
00705AEA  88 17                     MOV byte ptr [EDI],DL
00705AEC  47                        INC EDI
00705AED  48                        DEC EAX
00705AEE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00705AF1  85 C0                     TEST EAX,EAX
00705AF3  7E 7A                     JLE 0x00705b6f
00705AF5  EB 03                     JMP 0x00705afa
switchD_00705adb::caseD_2:
00705AF7  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00705afa:
00705AFA  48                        DEC EAX
00705AFB  B9 03 00 00 00            MOV ECX,0x3
00705B00  85 C0                     TEST EAX,EAX
00705B02  7E 6B                     JLE 0x00705b6f
00705B04  EB 03                     JMP 0x00705b09
switchD_00705adb::caseD_3:
00705B06  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00705b09:
00705B09  88 17                     MOV byte ptr [EDI],DL
00705B0B  47                        INC EDI
00705B0C  48                        DEC EAX
00705B0D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00705B10  85 C0                     TEST EAX,EAX
00705B12  B9 04 00 00 00            MOV ECX,0x4
00705B17  7E 56                     JLE 0x00705b6f
00705B19  33 C9                     XOR ECX,ECX
00705B1B  48                        DEC EAX
00705B1C  EB 0B                     JMP 0x00705b29
switchD_00705adb::caseD_4:
00705B1E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00705B21  33 C9                     XOR ECX,ECX
00705B23  48                        DEC EAX
00705B24  EB 03                     JMP 0x00705b29
LAB_00705b26:
00705B26  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
switchD_00705adb::default:
00705B29  85 C0                     TEST EAX,EAX
00705B2B  7E 42                     JLE 0x00705b6f
00705B2D  48                        DEC EAX
00705B2E  B9 01 00 00 00            MOV ECX,0x1
00705B33  85 C0                     TEST EAX,EAX
00705B35  7E 38                     JLE 0x00705b6f
LAB_00705b37:
00705B37  88 17                     MOV byte ptr [EDI],DL
00705B39  47                        INC EDI
00705B3A  48                        DEC EAX
00705B3B  B9 02 00 00 00            MOV ECX,0x2
00705B40  85 C0                     TEST EAX,EAX
00705B42  7E 28                     JLE 0x00705b6c
00705B44  48                        DEC EAX
00705B45  B9 03 00 00 00            MOV ECX,0x3
00705B4A  85 C0                     TEST EAX,EAX
00705B4C  7E 1E                     JLE 0x00705b6c
00705B4E  88 17                     MOV byte ptr [EDI],DL
00705B50  47                        INC EDI
00705B51  48                        DEC EAX
00705B52  B9 04 00 00 00            MOV ECX,0x4
00705B57  85 C0                     TEST EAX,EAX
00705B59  7E 11                     JLE 0x00705b6c
00705B5B  33 C9                     XOR ECX,ECX
00705B5D  48                        DEC EAX
00705B5E  85 C0                     TEST EAX,EAX
00705B60  7E 0A                     JLE 0x00705b6c
00705B62  48                        DEC EAX
00705B63  B9 01 00 00 00            MOV ECX,0x1
00705B68  85 C0                     TEST EAX,EAX
00705B6A  7F CB                     JG 0x00705b37
LAB_00705b6c:
00705B6C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_00705b6f:
00705B6F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00705B72  E9 DD 00 00 00            JMP 0x00705c54
LAB_00705b77:
00705B77  85 C9                     TEST ECX,ECX
00705B79  7E 5E                     JLE 0x00705bd9
00705B7B  8D 59 FF                  LEA EBX,[ECX + -0x1]
00705B7E  83 FB 03                  CMP EBX,0x3
00705B81  77 56                     JA 0x00705bd9
switchD_00705b83::switchD:
00705B83  FF 24 9D A0 5E 70 00      JMP dword ptr [EBX*0x4 + 0x705ea0]
switchD_00705b83::caseD_1:
00705B8A  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
00705B8D  33 C9                     XOR ECX,ECX
00705B8F  8A 0E                     MOV CL,byte ptr [ESI]
00705B91  47                        INC EDI
00705B92  46                        INC ESI
00705B93  48                        DEC EAX
00705B94  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00705B97  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00705B9A  88 4F FF                  MOV byte ptr [EDI + -0x1],CL
00705B9D  B9 02 00 00 00            MOV ECX,0x2
00705BA2  85 C0                     TEST EAX,EAX
00705BA4  0F 8E AA 00 00 00         JLE 0x00705c54
switchD_00705b83::caseD_2:
00705BAA  46                        INC ESI
00705BAB  48                        DEC EAX
00705BAC  85 C0                     TEST EAX,EAX
00705BAE  B9 03 00 00 00            MOV ECX,0x3
00705BB3  0F 8E 9B 00 00 00         JLE 0x00705c54
switchD_00705b83::caseD_3:
00705BB9  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
00705BBC  33 C9                     XOR ECX,ECX
00705BBE  8A 0E                     MOV CL,byte ptr [ESI]
00705BC0  47                        INC EDI
00705BC1  46                        INC ESI
00705BC2  48                        DEC EAX
00705BC3  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00705BC6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00705BC9  88 4F FF                  MOV byte ptr [EDI + -0x1],CL
00705BCC  B9 04 00 00 00            MOV ECX,0x4
00705BD1  85 C0                     TEST EAX,EAX
00705BD3  7E 7F                     JLE 0x00705c54
switchD_00705b83::caseD_4:
00705BD5  46                        INC ESI
00705BD6  33 C9                     XOR ECX,ECX
00705BD8  48                        DEC EAX
switchD_00705b83::default:
00705BD9  85 C0                     TEST EAX,EAX
00705BDB  7E 77                     JLE 0x00705c54
00705BDD  46                        INC ESI
00705BDE  48                        DEC EAX
00705BDF  85 C0                     TEST EAX,EAX
00705BE1  B9 01 00 00 00            MOV ECX,0x1
00705BE6  7E 6C                     JLE 0x00705c54
00705BE8  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
LAB_00705beb:
00705BEB  33 C9                     XOR ECX,ECX
00705BED  47                        INC EDI
00705BEE  8A 0E                     MOV CL,byte ptr [ESI]
00705BF0  46                        INC ESI
00705BF1  48                        DEC EAX
00705BF2  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00705BF5  88 4F FF                  MOV byte ptr [EDI + -0x1],CL
00705BF8  B9 02 00 00 00            MOV ECX,0x2
00705BFD  85 C0                     TEST EAX,EAX
00705BFF  7E 50                     JLE 0x00705c51
00705C01  46                        INC ESI
00705C02  48                        DEC EAX
00705C03  85 C0                     TEST EAX,EAX
00705C05  B9 03 00 00 00            MOV ECX,0x3
00705C0A  7E 45                     JLE 0x00705c51
00705C0C  33 C9                     XOR ECX,ECX
00705C0E  47                        INC EDI
00705C0F  8A 0E                     MOV CL,byte ptr [ESI]
00705C11  46                        INC ESI
00705C12  48                        DEC EAX
00705C13  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00705C16  88 4F FF                  MOV byte ptr [EDI + -0x1],CL
00705C19  B9 04 00 00 00            MOV ECX,0x4
00705C1E  85 C0                     TEST EAX,EAX
00705C20  7E 2F                     JLE 0x00705c51
00705C22  46                        INC ESI
00705C23  33 C9                     XOR ECX,ECX
00705C25  48                        DEC EAX
00705C26  85 C0                     TEST EAX,EAX
00705C28  7E 27                     JLE 0x00705c51
00705C2A  46                        INC ESI
00705C2B  48                        DEC EAX
00705C2C  85 C0                     TEST EAX,EAX
00705C2E  B9 01 00 00 00            MOV ECX,0x1
00705C33  7F B6                     JG 0x00705beb
00705C35  EB 1A                     JMP 0x00705c51
LAB_00705c37:
00705C37  48                        DEC EAX
00705C38  78 1A                     JS 0x00705c54
00705C3A  40                        INC EAX
LAB_00705c3b:
00705C3B  8B D9                     MOV EBX,ECX
00705C3D  83 E3 01                  AND EBX,0x1
00705C40  80 FB 01                  CMP BL,0x1
00705C43  75 01                     JNZ 0x00705c46
00705C45  47                        INC EDI
LAB_00705c46:
00705C46  41                        INC ECX
00705C47  83 F9 04                  CMP ECX,0x4
00705C4A  7E 02                     JLE 0x00705c4e
00705C4C  33 C9                     XOR ECX,ECX
LAB_00705c4e:
00705C4E  48                        DEC EAX
00705C4F  75 EA                     JNZ 0x00705c3b
LAB_00705c51:
00705C51  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_00705c54:
00705C54  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00705C57  85 DB                     TEST EBX,EBX
00705C59  7E 2A                     JLE 0x00705c85
00705C5B  33 D2                     XOR EDX,EDX
00705C5D  8A 16                     MOV DL,byte ptr [ESI]
00705C5F  8B C2                     MOV EAX,EDX
00705C61  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00705C64  25 80 00 00 00            AND EAX,0x80
00705C69  46                        INC ESI
00705C6A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00705C6D  85 C0                     TEST EAX,EAX
00705C6F  8B C2                     MOV EAX,EDX
00705C71  74 05                     JZ 0x00705c78
00705C73  83 E0 3F                  AND EAX,0x3f
00705C76  EB 03                     JMP 0x00705c7b
LAB_00705c78:
00705C78  83 E0 7F                  AND EAX,0x7f
LAB_00705c7b:
00705C7B  3B C3                     CMP EAX,EBX
00705C7D  0F 8E 21 FE FF FF         JLE 0x00705aa4
00705C83  EB 02                     JMP 0x00705c87
LAB_00705c85:
00705C85  33 C0                     XOR EAX,EAX
LAB_00705c87:
00705C87  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00705C8A  2B C3                     SUB EAX,EBX
00705C8C  85 DB                     TEST EBX,EBX
00705C8E  0F 8E 94 00 00 00         JLE 0x00705d28
00705C94  F6 C2 80                  TEST DL,0x80
00705C97  0F 84 8B 00 00 00         JZ 0x00705d28
00705C9D  F6 C2 40                  TEST DL,0x40
00705CA0  0F 84 01 01 00 00         JZ 0x00705da7
00705CA6  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
00705CA9  33 D2                     XOR EDX,EDX
00705CAB  8A 16                     MOV DL,byte ptr [ESI]
00705CAD  8B FA                     MOV EDI,EDX
00705CAF  33 D2                     XOR EDX,EDX
00705CB1  46                        INC ESI
00705CB2  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
00705CB5  85 C9                     TEST ECX,ECX
00705CB7  7E 44                     JLE 0x00705cfd
00705CB9  49                        DEC ECX
00705CBA  83 F9 03                  CMP ECX,0x3
00705CBD  77 3E                     JA 0x00705cfd
switchD_00705cbf::switchD:
00705CBF  FF 24 8D B0 5E 70 00      JMP dword ptr [ECX*0x4 + 0x705eb0]
switchD_00705cbf::caseD_1:
00705CC6  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00705CC9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00705CCC  88 17                     MOV byte ptr [EDI],DL
00705CCE  47                        INC EDI
00705CCF  49                        DEC ECX
00705CD0  85 C9                     TEST ECX,ECX
00705CD2  7E 51                     JLE 0x00705d25
00705CD4  EB 06                     JMP 0x00705cdc
switchD_00705cbf::caseD_2:
00705CD6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00705CD9  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00705cdc:
00705CDC  49                        DEC ECX
00705CDD  85 C9                     TEST ECX,ECX
00705CDF  7E 44                     JLE 0x00705d25
00705CE1  EB 06                     JMP 0x00705ce9
switchD_00705cbf::caseD_3:
00705CE3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00705CE6  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00705ce9:
00705CE9  88 17                     MOV byte ptr [EDI],DL
00705CEB  47                        INC EDI
00705CEC  49                        DEC ECX
00705CED  85 C9                     TEST ECX,ECX
00705CEF  7E 34                     JLE 0x00705d25
00705CF1  49                        DEC ECX
00705CF2  EB 0F                     JMP 0x00705d03
switchD_00705cbf::caseD_4:
00705CF4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00705CF7  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00705CFA  49                        DEC ECX
00705CFB  EB 06                     JMP 0x00705d03
LAB_00705cfd:
00705CFD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00705D00  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
switchD_00705cbf::default:
00705D03  85 C9                     TEST ECX,ECX
00705D05  7E 1E                     JLE 0x00705d25
00705D07  49                        DEC ECX
00705D08  85 C9                     TEST ECX,ECX
00705D0A  7E 19                     JLE 0x00705d25
LAB_00705d0c:
00705D0C  88 17                     MOV byte ptr [EDI],DL
00705D0E  83 E9 02                  SUB ECX,0x2
00705D11  47                        INC EDI
00705D12  85 C9                     TEST ECX,ECX
00705D14  7E 0F                     JLE 0x00705d25
00705D16  88 17                     MOV byte ptr [EDI],DL
00705D18  83 E9 02                  SUB ECX,0x2
00705D1B  47                        INC EDI
00705D1C  85 C9                     TEST ECX,ECX
00705D1E  7E 05                     JLE 0x00705d25
00705D20  49                        DEC ECX
00705D21  85 C9                     TEST ECX,ECX
00705D23  7F E7                     JG 0x00705d0c
LAB_00705d25:
00705D25  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00705d28:
00705D28  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00705D2B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00705D2E  8B CF                     MOV ECX,EDI
00705D30  2B CB                     SUB ECX,EBX
00705D32  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
00705D35  2B CB                     SUB ECX,EBX
00705D37  3B C1                     CMP EAX,ECX
00705D39  7D 2B                     JGE 0x00705d66
LAB_00705d3b:
00705D3B  81 E2 C0 00 00 00         AND EDX,0xc0
00705D41  2B C8                     SUB ECX,EAX
00705D43  80 FA 80                  CMP DL,0x80
00705D46  75 02                     JNZ 0x00705d4a
00705D48  03 F0                     ADD ESI,EAX
LAB_00705d4a:
00705D4A  33 D2                     XOR EDX,EDX
00705D4C  8A 16                     MOV DL,byte ptr [ESI]
00705D4E  8B C2                     MOV EAX,EDX
00705D50  24 80                     AND AL,0x80
00705D52  46                        INC ESI
00705D53  84 C0                     TEST AL,AL
00705D55  8B C2                     MOV EAX,EDX
00705D57  74 09                     JZ 0x00705d62
00705D59  83 E0 3F                  AND EAX,0x3f
00705D5C  F6 C2 40                  TEST DL,0x40
00705D5F  74 01                     JZ 0x00705d62
00705D61  46                        INC ESI
LAB_00705d62:
00705D62  3B C1                     CMP EAX,ECX
00705D64  7C D5                     JL 0x00705d3b
LAB_00705d66:
00705D66  81 E2 C0 00 00 00         AND EDX,0xc0
00705D6C  80 FA 80                  CMP DL,0x80
00705D6F  75 02                     JNZ 0x00705d73
00705D71  03 F1                     ADD ESI,ECX
LAB_00705d73:
00705D73  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
LAB_00705d76:
00705D76  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00705D79  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00705D7C  03 D1                     ADD EDX,ECX
00705D7E  43                        INC EBX
00705D7F  83 FB 04                  CMP EBX,0x4
00705D82  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00705D85  89 5D 28                  MOV dword ptr [EBP + 0x28],EBX
00705D88  7E 07                     JLE 0x00705d91
00705D8A  C7 45 28 00 00 00 00      MOV dword ptr [EBP + 0x28],0x0
LAB_00705d91:
00705D91  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00705D94  48                        DEC EAX
00705D95  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
00705D98  0F 89 28 FC FF FF         JNS 0x007059c6
00705D9E  5F                        POP EDI
00705D9F  5E                        POP ESI
00705DA0  5B                        POP EBX
LAB_00705da1:
00705DA1  8B E5                     MOV ESP,EBP
00705DA3  5D                        POP EBP
00705DA4  C2 28 00                  RET 0x28
LAB_00705da7:
00705DA7  85 C9                     TEST ECX,ECX
00705DA9  7E 74                     JLE 0x00705e1f
00705DAB  49                        DEC ECX
00705DAC  83 F9 03                  CMP ECX,0x3
00705DAF  77 6E                     JA 0x00705e1f
switchD_00705db1::switchD:
00705DB1  FF 24 8D C0 5E 70 00      JMP dword ptr [ECX*0x4 + 0x705ec0]
switchD_00705db1::caseD_1:
00705DB8  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
00705DBB  33 C9                     XOR ECX,ECX
00705DBD  8A 0E                     MOV CL,byte ptr [ESI]
00705DBF  47                        INC EDI
00705DC0  46                        INC ESI
00705DC1  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00705DC4  88 4F FF                  MOV byte ptr [EDI + -0x1],CL
00705DC7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00705DCA  49                        DEC ECX
00705DCB  85 C9                     TEST ECX,ECX
00705DCD  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00705DD0  0F 8E 52 FF FF FF         JLE 0x00705d28
00705DD6  EB 03                     JMP 0x00705ddb
switchD_00705db1::caseD_2:
00705DD8  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
LAB_00705ddb:
00705DDB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00705DDE  46                        INC ESI
00705DDF  49                        DEC ECX
00705DE0  85 C9                     TEST ECX,ECX
00705DE2  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00705DE5  0F 8E 3D FF FF FF         JLE 0x00705d28
00705DEB  EB 03                     JMP 0x00705df0
switchD_00705db1::caseD_3:
00705DED  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
LAB_00705df0:
00705DF0  33 C9                     XOR ECX,ECX
00705DF2  47                        INC EDI
00705DF3  8A 0E                     MOV CL,byte ptr [ESI]
00705DF5  46                        INC ESI
00705DF6  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00705DF9  88 4F FF                  MOV byte ptr [EDI + -0x1],CL
00705DFC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00705DFF  49                        DEC ECX
00705E00  85 C9                     TEST ECX,ECX
00705E02  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00705E05  0F 8E 1D FF FF FF         JLE 0x00705d28
00705E0B  46                        INC ESI
00705E0C  49                        DEC ECX
00705E0D  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00705E10  EB 10                     JMP 0x00705e22
switchD_00705db1::caseD_4:
00705E12  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00705E15  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
00705E18  46                        INC ESI
00705E19  49                        DEC ECX
00705E1A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00705E1D  EB 03                     JMP 0x00705e22
LAB_00705e1f:
00705E1F  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
switchD_00705db1::default:
00705E22  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00705E25  85 C9                     TEST ECX,ECX
00705E27  0F 8E FB FE FF FF         JLE 0x00705d28
00705E2D  46                        INC ESI
00705E2E  49                        DEC ECX
00705E2F  85 C9                     TEST ECX,ECX
00705E31  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00705E34  0F 8E EE FE FF FF         JLE 0x00705d28
LAB_00705e3a:
00705E3A  33 C9                     XOR ECX,ECX
00705E3C  47                        INC EDI
00705E3D  8A 0E                     MOV CL,byte ptr [ESI]
00705E3F  46                        INC ESI
00705E40  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00705E43  88 4F FF                  MOV byte ptr [EDI + -0x1],CL
00705E46  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00705E49  49                        DEC ECX
00705E4A  85 C9                     TEST ECX,ECX
00705E4C  0F 8E D6 FE FF FF         JLE 0x00705d28
00705E52  46                        INC ESI
00705E53  49                        DEC ECX
00705E54  85 C9                     TEST ECX,ECX
00705E56  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00705E59  0F 8E C9 FE FF FF         JLE 0x00705d28
00705E5F  33 C9                     XOR ECX,ECX
00705E61  47                        INC EDI
00705E62  8A 0E                     MOV CL,byte ptr [ESI]
00705E64  46                        INC ESI
00705E65  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
00705E68  88 4F FF                  MOV byte ptr [EDI + -0x1],CL
00705E6B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00705E6E  49                        DEC ECX
00705E6F  85 C9                     TEST ECX,ECX
00705E71  0F 8E B1 FE FF FF         JLE 0x00705d28
00705E77  46                        INC ESI
00705E78  49                        DEC ECX
00705E79  85 C9                     TEST ECX,ECX
00705E7B  0F 8E A7 FE FF FF         JLE 0x00705d28
00705E81  46                        INC ESI
00705E82  49                        DEC ECX
00705E83  85 C9                     TEST ECX,ECX
00705E85  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00705E88  7F B0                     JG 0x00705e3a
00705E8A  E9 99 FE FF FF            JMP 0x00705d28
