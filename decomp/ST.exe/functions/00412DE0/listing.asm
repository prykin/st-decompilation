FUN_00412de0:
00412DE0  55                        PUSH EBP
00412DE1  8B EC                     MOV EBP,ESP
00412DE3  83 EC 1C                  SUB ESP,0x1c
00412DE6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00412DE9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00412DEC  53                        PUSH EBX
00412DED  56                        PUSH ESI
00412DEE  8D 0C 85 02 00 00 00      LEA ECX,[EAX*0x4 + 0x2]
00412DF5  8D 04 95 02 00 00 00      LEA EAX,[EDX*0x4 + 0x2]
00412DFC  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00412DFF  A1 30 4D 7F 00            MOV EAX,[0x007f4d30]
00412E04  0F AF 05 2C 4D 7F 00      IMUL EAX,dword ptr [0x007f4d2c]
00412E0B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00412E0E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00412E11  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00412E14  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
00412E19  33 F6                     XOR ESI,ESI
00412E1B  8D 14 8D 02 00 00 00      LEA EDX,[ECX*0x4 + 0x2]
00412E22  3B C6                     CMP EAX,ESI
00412E24  57                        PUSH EDI
00412E25  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00412E28  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00412E2B  0F 8E 77 01 00 00         JLE 0x00412fa8
LAB_00412e31:
00412E31  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
00412E37  A1 38 4D 7F 00            MOV EAX,[0x007f4d38]
00412E3C  8B 3D 28 4D 7F 00         MOV EDI,dword ptr [0x007f4d28]
00412E42  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00412E45  8B 0C 16                  MOV ECX,dword ptr [ESI + EDX*0x1]
00412E48  0F AF 7C 16 04            IMUL EDI,dword ptr [ESI + EDX*0x1 + 0x4]
00412E4D  0F AF C8                  IMUL ECX,EAX
00412E50  8D 8C 39 00 80 00 00      LEA ECX,[ECX + EDI*0x1 + 0x8000]
00412E57  C1 F9 10                  SAR ECX,0x10
00412E5A  03 CB                     ADD ECX,EBX
00412E5C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00412E5F  C1 F9 02                  SAR ECX,0x2
00412E62  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00412E65  8B 3C 16                  MOV EDI,dword ptr [ESI + EDX*0x1]
00412E68  0F AF 3D 28 4D 7F 00      IMUL EDI,dword ptr [0x007f4d28]
00412E6F  0F AF 44 16 04            IMUL EAX,dword ptr [ESI + EDX*0x1 + 0x4]
00412E74  2B C7                     SUB EAX,EDI
00412E76  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00412E79  05 00 80 00 00            ADD EAX,0x8000
00412E7E  C1 F8 10                  SAR EAX,0x10
00412E81  03 C3                     ADD EAX,EBX
00412E83  C1 F8 02                  SAR EAX,0x2
00412E86  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00412E89  8B 54 16 08               MOV EDX,dword ptr [ESI + EDX*0x1 + 0x8]
00412E8D  03 D7                     ADD EDX,EDI
00412E8F  C1 FA 02                  SAR EDX,0x2
00412E92  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00412E95  79 04                     JNS 0x00412e9b
00412E97  33 D2                     XOR EDX,EDX
00412E99  EB 0D                     JMP 0x00412ea8
LAB_00412e9b:
00412E9B  8B 3D 34 4D 7F 00         MOV EDI,dword ptr [0x007f4d34]
00412EA1  3B D7                     CMP EDX,EDI
00412EA3  7C 06                     JL 0x00412eab
00412EA5  8D 57 FF                  LEA EDX,[EDI + -0x1]
LAB_00412ea8:
00412EA8  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00412eab:
00412EAB  85 C9                     TEST ECX,ECX
00412EAD  7C 48                     JL 0x00412ef7
00412EAF  8B 3D 2C 4D 7F 00         MOV EDI,dword ptr [0x007f4d2c]
00412EB5  3B CF                     CMP ECX,EDI
00412EB7  7D 3E                     JGE 0x00412ef7
00412EB9  85 C0                     TEST EAX,EAX
00412EBB  7C 3A                     JL 0x00412ef7
00412EBD  3B 05 30 4D 7F 00         CMP EAX,dword ptr [0x007f4d30]
00412EC3  7D 32                     JGE 0x00412ef7
00412EC5  0F AF 55 F0               IMUL EDX,dword ptr [EBP + -0x10]
00412EC9  0F AF F8                  IMUL EDI,EAX
00412ECC  03 CF                     ADD ECX,EDI
00412ECE  03 CA                     ADD ECX,EDX
00412ED0  8B 15 F0 4C 7F 00         MOV EDX,dword ptr [0x007f4cf0]
00412ED6  66 83 3C 4A 00            CMP word ptr [EDX + ECX*0x2],0x0
00412EDB  75 1A                     JNZ 0x00412ef7
00412EDD  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00412EE0  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00412EE3  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
00412EE9  80 F2 07                  XOR DL,0x7
00412EEC  33 C0                     XOR EAX,EAX
00412EEE  0F A3 11                  BT [ECX],EDX
00412EF1  D0 D0                     RCL AL,0x1
00412EF3  85 C0                     TEST EAX,EAX
00412EF5  74 44                     JZ 0x00412f3b
LAB_00412ef7:
00412EF7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00412EFA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00412EFD  8B 15 1C 4D 7F 00         MOV EDX,dword ptr [0x007f4d1c]
00412F03  C1 F8 02                  SAR EAX,0x2
00412F06  C1 FB 02                  SAR EBX,0x2
00412F09  50                        PUSH EAX
00412F0A  A1 10 4D 7F 00            MOV EAX,[0x007f4d10]
00412F0F  C1 F9 02                  SAR ECX,0x2
00412F12  53                        PUSH EBX
00412F13  51                        PUSH ECX
00412F14  8B 0D 0C 4D 7F 00         MOV ECX,dword ptr [0x007f4d0c]
00412F1A  C1 FA 02                  SAR EDX,0x2
00412F1D  C1 F8 02                  SAR EAX,0x2
00412F20  52                        PUSH EDX
00412F21  50                        PUSH EAX
00412F22  C1 F9 02                  SAR ECX,0x2
00412F25  8D 55 FC                  LEA EDX,[EBP + -0x4]
00412F28  51                        PUSH ECX
00412F29  8D 45 F4                  LEA EAX,[EBP + -0xc]
00412F2C  52                        PUSH EDX
00412F2D  8D 4D F8                  LEA ECX,[EBP + -0x8]
00412F30  50                        PUSH EAX
00412F31  51                        PUSH ECX
00412F32  E8 39 C3 FF FF            CALL 0x0040f270
00412F37  85 C0                     TEST EAX,EAX
00412F39  75 78                     JNZ 0x00412fb3
LAB_00412f3b:
00412F3B  8B 15 2C 4D 7F 00         MOV EDX,dword ptr [0x007f4d2c]
00412F41  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00412F44  0F AF 55 F4               IMUL EDX,dword ptr [EBP + -0xc]
00412F48  0F AF 45 F0               IMUL EAX,dword ptr [EBP + -0x10]
00412F4C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00412F4F  03 CA                     ADD ECX,EDX
00412F51  8B 15 FC 4C 7F 00         MOV EDX,dword ptr [0x007f4cfc]
00412F57  03 C1                     ADD EAX,ECX
00412F59  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00412F5C  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00412F5F  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00412F62  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00412F65  80 F2 07                  XOR DL,0x7
00412F68  0F AB 11                  BTS [ECX],EDX
00412F6B  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
00412F70  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00412F73  89 0C 06                  MOV dword ptr [ESI + EAX*0x1],ECX
00412F76  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
00412F7C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00412F7F  89 44 16 04               MOV dword ptr [ESI + EDX*0x1 + 0x4],EAX
00412F83  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
00412F89  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00412F8C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00412F8F  89 4C 16 08               MOV dword ptr [ESI + EDX*0x1 + 0x8],ECX
00412F93  8B 0D 20 4D 7F 00         MOV ECX,dword ptr [0x007f4d20]
00412F99  40                        INC EAX
00412F9A  83 C6 14                  ADD ESI,0x14
00412F9D  3B C1                     CMP EAX,ECX
00412F9F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00412FA2  0F 8C 89 FE FF FF         JL 0x00412e31
LAB_00412fa8:
00412FA8  5F                        POP EDI
00412FA9  5E                        POP ESI
00412FAA  33 C0                     XOR EAX,EAX
00412FAC  5B                        POP EBX
00412FAD  8B E5                     MOV ESP,EBP
00412FAF  5D                        POP EBP
00412FB0  C2 0C 00                  RET 0xc
LAB_00412fb3:
00412FB3  5F                        POP EDI
00412FB4  5E                        POP ESI
00412FB5  B8 FC FF FF FF            MOV EAX,0xfffffffc
00412FBA  5B                        POP EBX
00412FBB  8B E5                     MOV ESP,EBP
00412FBD  5D                        POP EBP
00412FBE  C2 0C 00                  RET 0xc
