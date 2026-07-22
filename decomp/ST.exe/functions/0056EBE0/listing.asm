STAppC::sub_0056EBE0:
0056EBE0  55                        PUSH EBP
0056EBE1  8B EC                     MOV EBP,ESP
0056EBE3  83 EC 10                  SUB ESP,0x10
0056EBE6  53                        PUSH EBX
0056EBE7  8B D9                     MOV EBX,ECX
0056EBE9  56                        PUSH ESI
0056EBEA  57                        PUSH EDI
0056EBEB  8B 83 AB 4E 00 00         MOV EAX,dword ptr [EBX + 0x4eab]
0056EBF1  85 C0                     TEST EAX,EAX
0056EBF3  74 06                     JZ 0x0056ebfb
0056EBF5  50                        PUSH EAX
0056EBF6  E8 75 69 14 00            CALL 0x006b5570
LAB_0056ebfb:
0056EBFB  8B 83 A7 4E 00 00         MOV EAX,dword ptr [EBX + 0x4ea7]
0056EC01  85 C0                     TEST EAX,EAX
0056EC03  74 06                     JZ 0x0056ec0b
0056EC05  50                        PUSH EAX
0056EC06  E8 65 69 14 00            CALL 0x006b5570
LAB_0056ec0b:
0056EC0B  8B 83 E6 4E 00 00         MOV EAX,dword ptr [EBX + 0x4ee6]
0056EC11  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0056EC14  85 C9                     TEST ECX,ECX
0056EC16  76 5A                     JBE 0x0056ec72
0056EC18  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0056EC1B  85 D2                     TEST EDX,EDX
0056EC1D  74 53                     JZ 0x0056ec72
0056EC1F  8B 82 90 00 00 00         MOV EAX,dword ptr [EDX + 0x90]
0056EC25  8D 7A 4C                  LEA EDI,[EDX + 0x4c]
0056EC28  89 83 3C 23 00 00         MOV dword ptr [EBX + 0x233c],EAX
0056EC2E  83 C9 FF                  OR ECX,0xffffffff
0056EC31  33 C0                     XOR EAX,EAX
0056EC33  8D B3 40 23 00 00         LEA ESI,[EBX + 0x2340]
0056EC39  F2 AE                     SCASB.REPNE ES:EDI
0056EC3B  F7 D1                     NOT ECX
0056EC3D  2B F9                     SUB EDI,ECX
0056EC3F  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0056EC42  8B C1                     MOV EAX,ECX
0056EC44  8B F7                     MOV ESI,EDI
0056EC46  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0056EC49  83 C2 70                  ADD EDX,0x70
0056EC4C  C1 E9 02                  SHR ECX,0x2
0056EC4F  F3 A5                     MOVSD.REP ES:EDI,ESI
0056EC51  8B C8                     MOV ECX,EAX
0056EC53  6A 00                     PUSH 0x0
0056EC55  83 E1 03                  AND ECX,0x3
0056EC58  52                        PUSH EDX
0056EC59  F3 A4                     MOVSB.REP ES:EDI,ESI
0056EC5B  8B 0D 5C 67 80 00         MOV ECX,dword ptr [0x0080675c]
0056EC61  51                        PUSH ECX
0056EC62  E8 A9 BD 1A 00            CALL 0x0071aa10
0056EC67  83 C4 0C                  ADD ESP,0xc
0056EC6A  89 83 AB 4E 00 00         MOV dword ptr [EBX + 0x4eab],EAX
0056EC70  EB 19                     JMP 0x0056ec8b
LAB_0056ec72:
0056EC72  B9 08 00 00 00            MOV ECX,0x8
0056EC77  33 C0                     XOR EAX,EAX
0056EC79  8D BB 40 23 00 00         LEA EDI,[EBX + 0x2340]
0056EC7F  C7 83 3C 23 00 00 01 00 00 00  MOV dword ptr [EBX + 0x233c],0x1
0056EC89  F3 AB                     STOSD.REP ES:EDI
LAB_0056ec8b:
0056EC8B  8B 15 74 B0 79 00         MOV EDX,dword ptr [0x0079b074]
0056EC91  A1 5C 67 80 00            MOV EAX,[0x0080675c]
0056EC96  6A 00                     PUSH 0x0
0056EC98  52                        PUSH EDX
0056EC99  50                        PUSH EAX
0056EC9A  E8 71 BD 1A 00            CALL 0x0071aa10
0056EC9F  83 C4 0C                  ADD ESP,0xc
0056ECA2  89 83 A7 4E 00 00         MOV dword ptr [EBX + 0x4ea7],EAX
0056ECA8  85 C0                     TEST EAX,EAX
0056ECAA  75 10                     JNZ 0x0056ecbc
0056ECAC  6A 0A                     PUSH 0xa
0056ECAE  6A 0A                     PUSH 0xa
0056ECB0  50                        PUSH EAX
0056ECB1  E8 3A 68 14 00            CALL 0x006b54f0
0056ECB6  89 83 A7 4E 00 00         MOV dword ptr [EBX + 0x4ea7],EAX
LAB_0056ecbc:
0056ECBC  8B 83 AB 4E 00 00         MOV EAX,dword ptr [EBX + 0x4eab]
0056ECC2  85 C0                     TEST EAX,EAX
0056ECC4  75 11                     JNZ 0x0056ecd7
0056ECC6  6A 0A                     PUSH 0xa
0056ECC8  6A 0A                     PUSH 0xa
0056ECCA  6A 00                     PUSH 0x0
0056ECCC  E8 1F 68 14 00            CALL 0x006b54f0
0056ECD1  89 83 AB 4E 00 00         MOV dword ptr [EBX + 0x4eab],EAX
LAB_0056ecd7:
0056ECD7  8B 8B 3C 23 00 00         MOV ECX,dword ptr [EBX + 0x233c]
0056ECDD  8B 15 5C 67 80 00         MOV EDX,dword ptr [0x0080675c]
0056ECE3  51                        PUSH ECX
0056ECE4  6A 01                     PUSH 0x1
0056ECE6  52                        PUSH EDX
0056ECE7  E8 58 52 E9 FF            CALL 0x00403f44
0056ECEC  8B 0D 5C 67 80 00         MOV ECX,dword ptr [0x0080675c]
0056ECF2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0056ECF5  8B 83 3C 23 00 00         MOV EAX,dword ptr [EBX + 0x233c]
0056ECFB  50                        PUSH EAX
0056ECFC  6A 02                     PUSH 0x2
0056ECFE  51                        PUSH ECX
0056ECFF  E8 40 52 E9 FF            CALL 0x00403f44
0056ED04  8B 93 3C 23 00 00         MOV EDX,dword ptr [EBX + 0x233c]
0056ED0A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0056ED0D  A1 5C 67 80 00            MOV EAX,[0x0080675c]
0056ED12  52                        PUSH EDX
0056ED13  6A 03                     PUSH 0x3
0056ED15  50                        PUSH EAX
0056ED16  E8 29 52 E9 FF            CALL 0x00403f44
0056ED1B  83 C4 24                  ADD ESP,0x24
0056ED1E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0056ED21  81 C3 A7 11 00 00         ADD EBX,0x11a7
0056ED27  C7 45 FC 08 00 00 00      MOV dword ptr [EBP + -0x4],0x8
LAB_0056ed2e:
0056ED2E  BF A0 16 80 00            MOV EDI,0x8016a0
0056ED33  83 C9 FF                  OR ECX,0xffffffff
0056ED36  33 C0                     XOR EAX,EAX
0056ED38  8D 53 01                  LEA EDX,[EBX + 0x1]
0056ED3B  F2 AE                     SCASB.REPNE ES:EDI
0056ED3D  F7 D1                     NOT ECX
0056ED3F  2B F9                     SUB EDI,ECX
0056ED41  8B C1                     MOV EAX,ECX
0056ED43  8B F7                     MOV ESI,EDI
0056ED45  8B FA                     MOV EDI,EDX
0056ED47  C1 E9 02                  SHR ECX,0x2
0056ED4A  F3 A5                     MOVSD.REP ES:EDI,ESI
0056ED4C  8B C8                     MOV ECX,EAX
0056ED4E  83 E1 03                  AND ECX,0x3
0056ED51  F3 A4                     MOVSB.REP ES:EDI,ESI
0056ED53  80 7B 22 FF               CMP byte ptr [EBX + 0x22],0xff
0056ED57  74 5B                     JZ 0x0056edb4
0056ED59  80 3B 01                  CMP byte ptr [EBX],0x1
0056ED5C  75 56                     JNZ 0x0056edb4
0056ED5E  33 C0                     XOR EAX,EAX
0056ED60  8A 43 21                  MOV AL,byte ptr [EBX + 0x21]
0056ED63  48                        DEC EAX
0056ED64  74 0D                     JZ 0x0056ed73
0056ED66  48                        DEC EAX
0056ED67  74 05                     JZ 0x0056ed6e
0056ED69  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0056ED6C  EB 08                     JMP 0x0056ed76
LAB_0056ed6e:
0056ED6E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0056ED71  EB 03                     JMP 0x0056ed76
LAB_0056ed73:
0056ED73  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0056ed76:
0056ED76  85 C0                     TEST EAX,EAX
0056ED78  74 18                     JZ 0x0056ed92
0056ED7A  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0056ED7D  85 C9                     TEST ECX,ECX
0056ED7F  74 11                     JZ 0x0056ed92
0056ED81  76 08                     JBE 0x0056ed8b
0056ED83  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
0056ED86  8D 78 4C                  LEA EDI,[EAX + 0x4c]
0056ED89  EB 0C                     JMP 0x0056ed97
LAB_0056ed8b:
0056ED8B  33 C0                     XOR EAX,EAX
0056ED8D  8D 78 4C                  LEA EDI,[EAX + 0x4c]
0056ED90  EB 05                     JMP 0x0056ed97
LAB_0056ed92:
0056ED92  BF A0 16 80 00            MOV EDI,0x8016a0
LAB_0056ed97:
0056ED97  83 C9 FF                  OR ECX,0xffffffff
0056ED9A  33 C0                     XOR EAX,EAX
0056ED9C  F2 AE                     SCASB.REPNE ES:EDI
0056ED9E  F7 D1                     NOT ECX
0056EDA0  2B F9                     SUB EDI,ECX
0056EDA2  8B C1                     MOV EAX,ECX
0056EDA4  8B F7                     MOV ESI,EDI
0056EDA6  8B FA                     MOV EDI,EDX
0056EDA8  C1 E9 02                  SHR ECX,0x2
0056EDAB  F3 A5                     MOVSD.REP ES:EDI,ESI
0056EDAD  8B C8                     MOV ECX,EAX
0056EDAF  83 E1 03                  AND ECX,0x3
0056EDB2  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0056edb4:
0056EDB4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056EDB7  83 C3 51                  ADD EBX,0x51
0056EDBA  48                        DEC EAX
0056EDBB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0056EDBE  0F 85 6A FF FF FF         JNZ 0x0056ed2e
0056EDC4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0056EDC7  5F                        POP EDI
0056EDC8  5E                        POP ESI
0056EDC9  5B                        POP EBX
0056EDCA  85 C0                     TEST EAX,EAX
0056EDCC  74 06                     JZ 0x0056edd4
0056EDCE  50                        PUSH EAX
0056EDCF  E8 3C F3 13 00            CALL 0x006ae110
LAB_0056edd4:
0056EDD4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0056EDD7  85 C0                     TEST EAX,EAX
0056EDD9  74 06                     JZ 0x0056ede1
0056EDDB  50                        PUSH EAX
0056EDDC  E8 2F F3 13 00            CALL 0x006ae110
LAB_0056ede1:
0056EDE1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0056EDE4  85 C0                     TEST EAX,EAX
0056EDE6  74 06                     JZ 0x0056edee
0056EDE8  50                        PUSH EAX
0056EDE9  E8 22 F3 13 00            CALL 0x006ae110
LAB_0056edee:
0056EDEE  8B E5                     MOV ESP,EBP
0056EDF0  5D                        POP EBP
0056EDF1  C3                        RET
