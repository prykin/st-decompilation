FUN_00614c80:
00614C80  55                        PUSH EBP
00614C81  8B EC                     MOV EBP,ESP
00614C83  83 EC 20                  SUB ESP,0x20
00614C86  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00614C89  53                        PUSH EBX
00614C8A  56                        PUSH ESI
00614C8B  57                        PUSH EDI
00614C8C  33 FF                     XOR EDI,EDI
00614C8E  8B D9                     MOV EBX,ECX
00614C90  3B C7                     CMP EAX,EDI
00614C92  7E 24                     JLE 0x00614cb8
00614C94  8B 93 DD 02 00 00         MOV EDX,dword ptr [EBX + 0x2dd]
00614C9A  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00614CA1  2B C8                     SUB ECX,EAX
00614CA3  0F BF 74 8A E6            MOVSX ESI,word ptr [EDX + ECX*0x4 + -0x1a]
00614CA8  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
00614CAB  0F BF 51 E4               MOVSX EDX,word ptr [ECX + -0x1c]
00614CAF  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00614CB2  0F BF 49 E8               MOVSX ECX,word ptr [ECX + -0x18]
00614CB6  EB 0C                     JMP 0x00614cc4
LAB_00614cb8:
00614CB8  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
00614CBB  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00614CBE  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00614CC1  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
LAB_00614cc4:
00614CC4  8D 34 C5 00 00 00 00      LEA ESI,[EAX*0x8 + 0x0]
00614CCB  2B F0                     SUB ESI,EAX
00614CCD  8D 45 24                  LEA EAX,[EBP + 0x24]
00614CD0  50                        PUSH EAX
00614CD1  8D 45 2C                  LEA EAX,[EBP + 0x2c]
00614CD4  50                        PUSH EAX
00614CD5  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00614CD8  50                        PUSH EAX
00614CD9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00614CDC  50                        PUSH EAX
00614CDD  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00614CE0  50                        PUSH EAX
00614CE1  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00614CE4  50                        PUSH EAX
00614CE5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00614CE8  50                        PUSH EAX
00614CE9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00614CEC  50                        PUSH EAX
00614CED  51                        PUSH ECX
00614CEE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00614CF1  C1 E6 02                  SHL ESI,0x2
00614CF4  51                        PUSH ECX
00614CF5  8B 8B DD 02 00 00         MOV ECX,dword ptr [EBX + 0x2dd]
00614CFB  52                        PUSH EDX
00614CFC  8B D6                     MOV EDX,ESI
00614CFE  03 D1                     ADD EDX,ECX
00614D00  57                        PUSH EDI
00614D01  52                        PUSH EDX
00614D02  57                        PUSH EDI
00614D03  57                        PUSH EDI
00614D04  8B CB                     MOV ECX,EBX
00614D06  E8 F4 E1 DE FF            CALL 0x00402eff
00614D0B  8B 8B DD 02 00 00         MOV ECX,dword ptr [EBX + 0x2dd]
00614D11  89 44 0E 18               MOV dword ptr [ESI + ECX*0x1 + 0x18],EAX
00614D15  8B 93 DD 02 00 00         MOV EDX,dword ptr [EBX + 0x2dd]
00614D1B  83 7C 16 18 08            CMP dword ptr [ESI + EDX*0x1 + 0x18],0x8
00614D20  0F 85 2A 01 00 00         JNZ 0x00614e50
00614D26  8B B3 88 02 00 00         MOV ESI,dword ptr [EBX + 0x288]
00614D2C  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00614D2F  3B F7                     CMP ESI,EDI
00614D31  74 0C                     JZ 0x00614d3f
00614D33  8B C1                     MOV EAX,ECX
00614D35  99                        CDQ
00614D36  F7 FE                     IDIV ESI
00614D38  8B F0                     MOV ESI,EAX
00614D3A  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
00614D3D  EB 05                     JMP 0x00614d44
LAB_00614d3f:
00614D3F  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
00614D42  8B F1                     MOV ESI,ECX
LAB_00614d44:
00614D44  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
00614D47  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00614D4C  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
00614D4F  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00614D52  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00614D55  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00614D58  D1 E2                     SHL EDX,0x1
00614D5A  F7 EA                     IMUL EDX
00614D5C  C1 FA 05                  SAR EDX,0x5
00614D5F  8B C2                     MOV EAX,EDX
00614D61  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00614D64  C1 E8 1F                  SHR EAX,0x1f
00614D67  03 D0                     ADD EDX,EAX
00614D69  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
00614D70  2B C1                     SUB EAX,ECX
00614D72  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00614D75  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00614D78  8D 3C B5 00 00 00 00      LEA EDI,[ESI*0x4 + 0x0]
00614D7F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00614D82  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00614D87  D1 E2                     SHL EDX,0x1
00614D89  F7 EA                     IMUL EDX
00614D8B  C1 FA 05                  SAR EDX,0x5
00614D8E  8B C2                     MOV EAX,EDX
00614D90  57                        PUSH EDI
00614D91  C1 E8 1F                  SHR EAX,0x1f
00614D94  03 D0                     ADD EDX,EAX
00614D96  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00614D99  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00614D9C  E8 CF 5E 09 00            CALL 0x006aac70
00614DA1  56                        PUSH ESI
00614DA2  50                        PUSH EAX
00614DA3  8D 4D F0                  LEA ECX,[EBP + -0x10]
00614DA6  6A 04                     PUSH 0x4
00614DA8  8D 55 E0                  LEA EDX,[EBP + -0x20]
00614DAB  51                        PUSH ECX
00614DAC  52                        PUSH EDX
00614DAD  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00614DB0  E8 87 0D DF FF            CALL 0x00405b3c
00614DB5  85 C0                     TEST EAX,EAX
00614DB7  0F 85 83 00 00 00         JNZ 0x00614e40
00614DBD  8B 93 E5 02 00 00         MOV EDX,dword ptr [EBX + 0x2e5]
00614DC3  8D 83 E5 02 00 00         LEA EAX,[EBX + 0x2e5]
00614DC9  85 D2                     TEST EDX,EDX
00614DCB  74 5C                     JZ 0x00614e29
00614DCD  39 B3 E1 02 00 00         CMP dword ptr [EBX + 0x2e1],ESI
00614DD3  7C 33                     JL 0x00614e08
00614DD5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00614DD8  8B CF                     MOV ECX,EDI
00614DDA  8B C1                     MOV EAX,ECX
00614DDC  8B FA                     MOV EDI,EDX
00614DDE  C1 E9 02                  SHR ECX,0x2
00614DE1  F3 A5                     MOVSD.REP ES:EDI,ESI
00614DE3  8B C8                     MOV ECX,EAX
00614DE5  8D 55 08                  LEA EDX,[EBP + 0x8]
00614DE8  83 E1 03                  AND ECX,0x3
00614DEB  52                        PUSH EDX
00614DEC  F3 A4                     MOVSB.REP ES:EDI,ESI
00614DEE  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
00614DF1  89 8B E1 02 00 00         MOV dword ptr [EBX + 0x2e1],ECX
00614DF7  E8 64 62 09 00            CALL 0x006ab060
00614DFC  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00614DFF  5F                        POP EDI
00614E00  5E                        POP ESI
00614E01  5B                        POP EBX
00614E02  8B E5                     MOV ESP,EBP
00614E04  5D                        POP EBP
00614E05  C2 28 00                  RET 0x28
LAB_00614e08:
00614E08  50                        PUSH EAX
00614E09  E8 52 62 09 00            CALL 0x006ab060
00614E0E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00614E11  89 B3 E1 02 00 00         MOV dword ptr [EBX + 0x2e1],ESI
00614E17  5F                        POP EDI
00614E18  89 83 E5 02 00 00         MOV dword ptr [EBX + 0x2e5],EAX
00614E1E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00614E21  5E                        POP ESI
00614E22  5B                        POP EBX
00614E23  8B E5                     MOV ESP,EBP
00614E25  5D                        POP EBP
00614E26  C2 28 00                  RET 0x28
LAB_00614e29:
00614E29  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00614E2C  89 B3 E1 02 00 00         MOV dword ptr [EBX + 0x2e1],ESI
00614E32  5F                        POP EDI
00614E33  89 08                     MOV dword ptr [EAX],ECX
00614E35  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00614E38  5E                        POP ESI
00614E39  5B                        POP EBX
00614E3A  8B E5                     MOV ESP,EBP
00614E3C  5D                        POP EBP
00614E3D  C2 28 00                  RET 0x28
LAB_00614e40:
00614E40  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00614E43  85 C0                     TEST EAX,EAX
00614E45  74 09                     JZ 0x00614e50
00614E47  8D 55 08                  LEA EDX,[EBP + 0x8]
00614E4A  52                        PUSH EDX
00614E4B  E8 10 62 09 00            CALL 0x006ab060
LAB_00614e50:
00614E50  5F                        POP EDI
00614E51  5E                        POP ESI
00614E52  33 C0                     XOR EAX,EAX
00614E54  5B                        POP EBX
00614E55  8B E5                     MOV ESP,EBP
00614E57  5D                        POP EBP
00614E58  C2 28 00                  RET 0x28
