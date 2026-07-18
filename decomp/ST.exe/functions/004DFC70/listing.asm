FUN_004dfc70:
004DFC70  55                        PUSH EBP
004DFC71  8B EC                     MOV EBP,ESP
004DFC73  83 EC 1C                  SUB ESP,0x1c
004DFC76  53                        PUSH EBX
004DFC77  56                        PUSH ESI
004DFC78  57                        PUSH EDI
004DFC79  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004DFC7C  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004DFC7F  33 F6                     XOR ESI,ESI
004DFC81  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
004DFC84  33 C0                     XOR EAX,EAX
004DFC86  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004DFC89  8D 14 CF                  LEA EDX,[EDI + ECX*0x8]
004DFC8C  8D 1C 57                  LEA EBX,[EDI + EDX*0x2]
004DFC8F  C1 E3 04                  SHL EBX,0x4
004DFC92  03 DF                     ADD EBX,EDI
004DFC94  D1 E3                     SHL EBX,0x1
004DFC96  8B 8B 29 4E 7F 00         MOV ECX,dword ptr [EBX + 0x7f4e29]
004DFC9C  3B CE                     CMP ECX,ESI
004DFC9E  0F 84 6D 01 00 00         JZ 0x004dfe11
004DFCA4  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004DFCA7  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004DFCAA  3B C6                     CMP EAX,ESI
004DFCAC  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
004DFCAF  0F 86 BE 00 00 00         JBE 0x004dfd73
LAB_004dfcb5:
004DFCB5  8D 45 08                  LEA EAX,[EBP + 0x8]
004DFCB8  8B D6                     MOV EDX,ESI
004DFCBA  50                        PUSH EAX
004DFCBB  E8 B0 CF 1C 00            CALL 0x006acc70
004DFCC0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DFCC3  85 C9                     TEST ECX,ECX
004DFCC5  0F 84 96 00 00 00         JZ 0x004dfd61
004DFCCB  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
004DFCCE  83 F8 14                  CMP EAX,0x14
004DFCD1  75 21                     JNZ 0x004dfcf4
004DFCD3  8D 55 EC                  LEA EDX,[EBP + -0x14]
004DFCD6  8D 45 FC                  LEA EAX,[EBP + -0x4]
004DFCD9  52                        PUSH EDX
004DFCDA  50                        PUSH EAX
004DFCDB  8B 01                     MOV EAX,dword ptr [ECX]
004DFCDD  8D 55 E4                  LEA EDX,[EBP + -0x1c]
004DFCE0  52                        PUSH EDX
004DFCE1  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004DFCE4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004DFCE7  50                        PUSH EAX
004DFCE8  E8 A8 3C F2 FF            CALL 0x00403995
004DFCED  83 F8 02                  CMP EAX,0x2
004DFCF0  75 6F                     JNZ 0x004dfd61
004DFCF2  EB 55                     JMP 0x004dfd49
LAB_004dfcf4:
004DFCF4  3D E8 03 00 00            CMP EAX,0x3e8
004DFCF9  75 66                     JNZ 0x004dfd61
004DFCFB  8B 11                     MOV EDX,dword ptr [ECX]
004DFCFD  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DFD00  8B 0C 85 B0 26 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x7926b0]
004DFD07  85 C9                     TEST ECX,ECX
004DFD09  74 56                     JZ 0x004dfd61
004DFD0B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DFD0E  8B 01                     MOV EAX,dword ptr [ECX]
004DFD10  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004DFD13  83 3C C5 98 3C 79 00 02   CMP dword ptr [EAX*0x8 + 0x793c98],0x2
004DFD1B  75 44                     JNZ 0x004dfd61
004DFD1D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DFD20  6A 00                     PUSH 0x0
004DFD22  8B 11                     MOV EDX,dword ptr [ECX]
004DFD24  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DFD27  83 E8 32                  SUB EAX,0x32
004DFD2A  50                        PUSH EAX
004DFD2B  57                        PUSH EDI
004DFD2C  E8 D8 45 F2 FF            CALL 0x00404309
004DFD31  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DFD34  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004DFD37  83 C4 0C                  ADD ESP,0xc
004DFD3A  8B 01                     MOV EAX,dword ptr [ECX]
004DFD3C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004DFD3F  8B 0C C5 A8 3E 79 00      MOV ECX,dword ptr [EAX*0x8 + 0x793ea8]
004DFD46  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_004dfd49:
004DFD49  B8 DC 05 00 00            MOV EAX,0x5dc
004DFD4E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004DFD51  99                        CDQ
004DFD52  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
004DFD55  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
004DFD5C  03 C8                     ADD ECX,EAX
004DFD5E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_004dfd61:
004DFD61  8B 8B 29 4E 7F 00         MOV ECX,dword ptr [EBX + 0x7f4e29]
004DFD67  46                        INC ESI
004DFD68  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004DFD6B  0F 82 44 FF FF FF         JC 0x004dfcb5
004DFD71  33 F6                     XOR ESI,ESI
LAB_004dfd73:
004DFD73  8B 8B F2 57 7F 00         MOV ECX,dword ptr [EBX + 0x7f57f2]
004DFD79  33 FF                     XOR EDI,EDI
004DFD7B  3B CE                     CMP ECX,ESI
004DFD7D  74 7D                     JZ 0x004dfdfc
004DFD7F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004DFD82  85 C0                     TEST EAX,EAX
004DFD84  76 3C                     JBE 0x004dfdc2
LAB_004dfd86:
004DFD86  8D 55 E8                  LEA EDX,[EBP + -0x18]
004DFD89  52                        PUSH EDX
004DFD8A  8B D6                     MOV EDX,ESI
004DFD8C  E8 DF CE 1C 00            CALL 0x006acc70
004DFD91  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004DFD94  E8 1F 2D F2 FF            CALL 0x00402ab8
004DFD99  8B C8                     MOV ECX,EAX
004DFD9B  B8 D3 4D 62 10            MOV EAX,0x10624dd3
004DFDA0  F7 E1                     MUL ECX
004DFDA2  8B CA                     MOV ECX,EDX
004DFDA4  C1 E9 05                  SHR ECX,0x5
004DFDA7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004DFDAA  74 0A                     JZ 0x004dfdb6
004DFDAC  B8 DC 05 00 00            MOV EAX,0x5dc
004DFDB1  99                        CDQ
004DFDB2  F7 F9                     IDIV ECX
004DFDB4  03 F8                     ADD EDI,EAX
LAB_004dfdb6:
004DFDB6  8B 8B F2 57 7F 00         MOV ECX,dword ptr [EBX + 0x7f57f2]
004DFDBC  46                        INC ESI
004DFDBD  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004DFDC0  72 C4                     JC 0x004dfd86
LAB_004dfdc2:
004DFDC2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004DFDC5  3B F8                     CMP EDI,EAX
004DFDC7  7D 46                     JGE 0x004dfe0f
004DFDC9  2B C7                     SUB EAX,EDI
004DFDCB  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004DFDCE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004DFDD1  C1 E0 02                  SHL EAX,0x2
004DFDD4  99                        CDQ
004DFDD5  F7 FF                     IDIV EDI
004DFDD7  8B C8                     MOV ECX,EAX
004DFDD9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004DFDDE  83 E9 64                  SUB ECX,0x64
004DFDE1  F7 E9                     IMUL ECX
004DFDE3  C1 FA 05                  SAR EDX,0x5
004DFDE6  8B C2                     MOV EAX,EDX
004DFDE8  C1 E8 1F                  SHR EAX,0x1f
004DFDEB  03 D0                     ADD EDX,EAX
004DFDED  8B C2                     MOV EAX,EDX
004DFDEF  85 C0                     TEST EAX,EAX
004DFDF1  7E 1C                     JLE 0x004dfe0f
004DFDF3  5F                        POP EDI
004DFDF4  5E                        POP ESI
004DFDF5  5B                        POP EBX
004DFDF6  8B E5                     MOV ESP,EBP
004DFDF8  5D                        POP EBP
004DFDF9  C2 04 00                  RET 0x4
LAB_004dfdfc:
004DFDFC  39 75 F4                  CMP dword ptr [EBP + -0xc],ESI
004DFDFF  74 0E                     JZ 0x004dfe0f
004DFE01  5F                        POP EDI
004DFE02  5E                        POP ESI
004DFE03  B8 01 00 00 00            MOV EAX,0x1
004DFE08  5B                        POP EBX
004DFE09  8B E5                     MOV ESP,EBP
004DFE0B  5D                        POP EBP
004DFE0C  C2 04 00                  RET 0x4
LAB_004dfe0f:
004DFE0F  33 C0                     XOR EAX,EAX
LAB_004dfe11:
004DFE11  5F                        POP EDI
004DFE12  5E                        POP ESI
004DFE13  5B                        POP EBX
004DFE14  8B E5                     MOV ESP,EBP
004DFE16  5D                        POP EBP
004DFE17  C2 04 00                  RET 0x4
