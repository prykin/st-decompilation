FUN_00412b80:
00412B80  55                        PUSH EBP
00412B81  8B EC                     MOV EBP,ESP
00412B83  83 EC 1C                  SUB ESP,0x1c
00412B86  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00412B89  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00412B8C  53                        PUSH EBX
00412B8D  56                        PUSH ESI
00412B8E  8D 0C 85 02 00 00 00      LEA ECX,[EAX*0x4 + 0x2]
00412B95  8D 04 95 02 00 00 00      LEA EAX,[EDX*0x4 + 0x2]
00412B9C  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00412B9F  A1 30 4D 7F 00            MOV EAX,[0x007f4d30]
00412BA4  0F AF 05 2C 4D 7F 00      IMUL EAX,dword ptr [0x007f4d2c]
00412BAB  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00412BAE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00412BB1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00412BB4  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
00412BB9  33 F6                     XOR ESI,ESI
00412BBB  8D 14 8D 02 00 00 00      LEA EDX,[ECX*0x4 + 0x2]
00412BC2  3B C6                     CMP EAX,ESI
00412BC4  57                        PUSH EDI
00412BC5  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00412BC8  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00412BCB  0F 8E 72 01 00 00         JLE 0x00412d43
LAB_00412bd1:
00412BD1  8B 3D 48 4D 7F 00         MOV EDI,dword ptr [0x007f4d48]
00412BD7  8B 15 28 4D 7F 00         MOV EDX,dword ptr [0x007f4d28]
00412BDD  8B 1D 38 4D 7F 00         MOV EBX,dword ptr [0x007f4d38]
00412BE3  8B 44 3E 10               MOV EAX,dword ptr [ESI + EDI*0x1 + 0x10]
00412BE7  8B 4C 3E 0C               MOV ECX,dword ptr [ESI + EDI*0x1 + 0xc]
00412BEB  0F AF C2                  IMUL EAX,EDX
00412BEE  0F AF CB                  IMUL ECX,EBX
00412BF1  8D 8C 08 00 80 00 00      LEA ECX,[EAX + ECX*0x1 + 0x8000]
00412BF8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00412BFB  C1 F9 10                  SAR ECX,0x10
00412BFE  03 C8                     ADD ECX,EAX
00412C00  C1 F9 02                  SAR ECX,0x2
00412C03  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00412C06  8B 44 3E 10               MOV EAX,dword ptr [ESI + EDI*0x1 + 0x10]
00412C0A  0F AF C3                  IMUL EAX,EBX
00412C0D  8B 5C 3E 0C               MOV EBX,dword ptr [ESI + EDI*0x1 + 0xc]
00412C11  0F AF DA                  IMUL EBX,EDX
00412C14  2B C3                     SUB EAX,EBX
00412C16  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00412C19  05 00 80 00 00            ADD EAX,0x8000
00412C1E  C1 F8 10                  SAR EAX,0x10
00412C21  03 C3                     ADD EAX,EBX
00412C23  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00412C26  C1 F8 02                  SAR EAX,0x2
00412C29  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00412C2C  8B 54 3E 14               MOV EDX,dword ptr [ESI + EDI*0x1 + 0x14]
00412C30  03 D3                     ADD EDX,EBX
00412C32  C1 FA 02                  SAR EDX,0x2
00412C35  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00412C38  79 04                     JNS 0x00412c3e
00412C3A  33 D2                     XOR EDX,EDX
00412C3C  EB 0D                     JMP 0x00412c4b
LAB_00412c3e:
00412C3E  8B 1D 34 4D 7F 00         MOV EBX,dword ptr [0x007f4d34]
00412C44  3B D3                     CMP EDX,EBX
00412C46  7C 06                     JL 0x00412c4e
00412C48  8D 53 FF                  LEA EDX,[EBX + -0x1]
LAB_00412c4b:
00412C4B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00412c4e:
00412C4E  85 C9                     TEST ECX,ECX
00412C50  7C 4E                     JL 0x00412ca0
00412C52  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
00412C58  3B CB                     CMP ECX,EBX
00412C5A  7D 44                     JGE 0x00412ca0
00412C5C  85 C0                     TEST EAX,EAX
00412C5E  7C 40                     JL 0x00412ca0
00412C60  3B 05 30 4D 7F 00         CMP EAX,dword ptr [0x007f4d30]
00412C66  7D 38                     JGE 0x00412ca0
00412C68  0F AF 55 F0               IMUL EDX,dword ptr [EBP + -0x10]
00412C6C  0F AF D8                  IMUL EBX,EAX
00412C6F  03 CB                     ADD ECX,EBX
00412C71  03 CA                     ADD ECX,EDX
00412C73  8B 15 F0 4C 7F 00         MOV EDX,dword ptr [0x007f4cf0]
00412C79  66 83 3C 4A 00            CMP word ptr [EDX + ECX*0x2],0x0
00412C7E  75 20                     JNZ 0x00412ca0
00412C80  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00412C83  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00412C86  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
00412C8C  80 F2 07                  XOR DL,0x7
00412C8F  33 C0                     XOR EAX,EAX
00412C91  0F A3 11                  BT [ECX],EDX
00412C94  D0 D0                     RCL AL,0x1
00412C96  85 C0                     TEST EAX,EAX
00412C98  74 3E                     JZ 0x00412cd8
00412C9A  8B 3D 48 4D 7F 00         MOV EDI,dword ptr [0x007f4d48]
LAB_00412ca0:
00412CA0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00412CA3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00412CA6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00412CA9  C1 F8 02                  SAR EAX,0x2
00412CAC  C1 F9 02                  SAR ECX,0x2
00412CAF  50                        PUSH EAX
00412CB0  8B 44 3E 08               MOV EAX,dword ptr [ESI + EDI*0x1 + 0x8]
00412CB4  C1 FA 02                  SAR EDX,0x2
00412CB7  51                        PUSH ECX
00412CB8  8B 4C 3E 04               MOV ECX,dword ptr [ESI + EDI*0x1 + 0x4]
00412CBC  52                        PUSH EDX
00412CBD  8B 14 3E                  MOV EDX,dword ptr [ESI + EDI*0x1]
00412CC0  50                        PUSH EAX
00412CC1  51                        PUSH ECX
00412CC2  8D 45 FC                  LEA EAX,[EBP + -0x4]
00412CC5  52                        PUSH EDX
00412CC6  8D 4D F4                  LEA ECX,[EBP + -0xc]
00412CC9  50                        PUSH EAX
00412CCA  8D 55 F8                  LEA EDX,[EBP + -0x8]
00412CCD  51                        PUSH ECX
00412CCE  52                        PUSH EDX
00412CCF  E8 9C C5 FF FF            CALL 0x0040f270
00412CD4  85 C0                     TEST EAX,EAX
00412CD6  75 76                     JNZ 0x00412d4e
LAB_00412cd8:
00412CD8  A1 2C 4D 7F 00            MOV EAX,[0x007f4d2c]
00412CDD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00412CE0  0F AF 45 F4               IMUL EAX,dword ptr [EBP + -0xc]
00412CE4  0F AF 4D F0               IMUL ECX,dword ptr [EBP + -0x10]
00412CE8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00412CEB  03 D0                     ADD EDX,EAX
00412CED  A1 FC 4C 7F 00            MOV EAX,[0x007f4cfc]
00412CF2  03 CA                     ADD ECX,EDX
00412CF4  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00412CF7  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00412CFA  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00412CFD  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00412D00  80 F2 07                  XOR DL,0x7
00412D03  0F AB 11                  BTS [ECX],EDX
00412D06  8B 0D 48 4D 7F 00         MOV ECX,dword ptr [0x007f4d48]
00412D0C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00412D0F  89 54 0E 0C               MOV dword ptr [ESI + ECX*0x1 + 0xc],EDX
00412D13  A1 48 4D 7F 00            MOV EAX,[0x007f4d48]
00412D18  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00412D1B  89 4C 06 10               MOV dword ptr [ESI + EAX*0x1 + 0x10],ECX
00412D1F  A1 48 4D 7F 00            MOV EAX,[0x007f4d48]
00412D24  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00412D27  89 54 06 14               MOV dword ptr [ESI + EAX*0x1 + 0x14],EDX
00412D2B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00412D2E  8B 0D 20 4D 7F 00         MOV ECX,dword ptr [0x007f4d20]
00412D34  40                        INC EAX
00412D35  83 C6 1C                  ADD ESI,0x1c
00412D38  3B C1                     CMP EAX,ECX
00412D3A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00412D3D  0F 8C 8E FE FF FF         JL 0x00412bd1
LAB_00412d43:
00412D43  5F                        POP EDI
00412D44  5E                        POP ESI
00412D45  33 C0                     XOR EAX,EAX
00412D47  5B                        POP EBX
00412D48  8B E5                     MOV ESP,EBP
00412D4A  5D                        POP EBP
00412D4B  C2 0C 00                  RET 0xc
LAB_00412d4e:
00412D4E  5F                        POP EDI
00412D4F  5E                        POP ESI
00412D50  B8 FC FF FF FF            MOV EAX,0xfffffffc
00412D55  5B                        POP EBX
00412D56  8B E5                     MOV ESP,EBP
00412D58  5D                        POP EBP
00412D59  C2 0C 00                  RET 0xc
