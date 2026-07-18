AiEventClassTy::InitData:
0064CD80  55                        PUSH EBP
0064CD81  8B EC                     MOV EBP,ESP
0064CD83  83 EC 48                  SUB ESP,0x48
0064CD86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064CD8B  53                        PUSH EBX
0064CD8C  56                        PUSH ESI
0064CD8D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0064CD90  57                        PUSH EDI
0064CD91  8D 55 BC                  LEA EDX,[EBP + -0x44]
0064CD94  8D 4D B8                  LEA ECX,[EBP + -0x48]
0064CD97  6A 00                     PUSH 0x0
0064CD99  52                        PUSH EDX
0064CD9A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0064CD9D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064CDA3  E8 48 0A 0E 00            CALL 0x0072d7f0
0064CDA8  8B F0                     MOV ESI,EAX
0064CDAA  83 C4 08                  ADD ESP,0x8
0064CDAD  85 F6                     TEST ESI,ESI
0064CDAF  0F 85 7E 01 00 00         JNZ 0x0064cf33
0064CDB5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0064CDB8  85 DB                     TEST EBX,EBX
0064CDBA  74 08                     JZ 0x0064cdc4
0064CDBC  8D BB 8C 00 00 00         LEA EDI,[EBX + 0x8c]
0064CDC2  EB 02                     JMP 0x0064cdc6
LAB_0064cdc4:
0064CDC4  33 FF                     XOR EDI,EDI
LAB_0064cdc6:
0064CDC6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0064CDC9  B9 27 01 00 00            MOV ECX,0x127
0064CDCE  F3 A5                     MOVSD.REP ES:EDI,ESI
0064CDD0  66 A5                     MOVSW ES:EDI,ESI
0064CDD2  6A 05                     PUSH 0x5
0064CDD4  6A 05                     PUSH 0x5
0064CDD6  A4                        MOVSB ES:EDI,ESI
0064CDD7  6A 00                     PUSH 0x0
0064CDD9  C6 83 91 00 00 00 01      MOV byte ptr [EBX + 0x91],0x1
0064CDE0  E8 0B 87 06 00            CALL 0x006b54f0
0064CDE5  89 83 B3 05 00 00         MOV dword ptr [EBX + 0x5b3],EAX
0064CDEB  33 F6                     XOR ESI,ESI
LAB_0064cded:
0064CDED  8B 83 B3 05 00 00         MOV EAX,dword ptr [EBX + 0x5b3]
0064CDF3  68 A0 16 80 00            PUSH 0x8016a0
0064CDF8  56                        PUSH ESI
0064CDF9  50                        PUSH EAX
0064CDFA  E8 21 92 06 00            CALL 0x006b6020
0064CDFF  46                        INC ESI
0064CE00  83 FE 04                  CMP ESI,0x4
0064CE03  7C E8                     JL 0x0064cded
0064CE05  8A 83 8C 00 00 00         MOV AL,byte ptr [EBX + 0x8c]
0064CE0B  84 C0                     TEST AL,AL
0064CE0D  75 2E                     JNZ 0x0064ce3d
0064CE0F  8B 0D 54 87 80 00         MOV ECX,dword ptr [0x00808754]
0064CE15  8B 13                     MOV EDX,dword ptr [EBX]
0064CE17  89 8B 88 00 00 00         MOV dword ptr [EBX + 0x88],ECX
0064CE1D  8B CB                     MOV ECX,EBX
0064CE1F  FF 52 18                  CALL dword ptr [EDX + 0x18]
0064CE22  8D 44 00 02               LEA EAX,[EAX + EAX*0x1 + 0x2]
0064CE26  83 F8 19                  CMP EAX,0x19
0064CE29  89 83 D2 00 00 00         MOV dword ptr [EBX + 0xd2],EAX
0064CE2F  72 18                     JC 0x0064ce49
0064CE31  C7 83 D2 00 00 00 03 00 00 00  MOV dword ptr [EBX + 0xd2],0x3
0064CE3B  EB 0C                     JMP 0x0064ce49
LAB_0064ce3d:
0064CE3D  8B 83 DA 00 00 00         MOV EAX,dword ptr [EBX + 0xda]
0064CE43  89 83 88 00 00 00         MOV dword ptr [EBX + 0x88],EAX
LAB_0064ce49:
0064CE49  8B 8B 06 05 00 00         MOV ECX,dword ptr [EBX + 0x506]
0064CE4F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0064CE52  8D B3 FA 04 00 00         LEA ESI,[EBX + 0x4fa]
0064CE58  85 F6                     TEST ESI,ESI
0064CE5A  8D BC 11 9E 04 00 00      LEA EDI,[ECX + EDX*0x1 + 0x49e]
0064CE61  74 07                     JZ 0x0064ce6a
0064CE63  8B 06                     MOV EAX,dword ptr [ESI]
0064CE65  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0064CE68  EB 02                     JMP 0x0064ce6c
LAB_0064ce6a:
0064CE6A  33 C0                     XOR EAX,EAX
LAB_0064ce6c:
0064CE6C  50                        PUSH EAX
0064CE6D  E8 9E DD 05 00            CALL 0x006aac10
0064CE72  85 F6                     TEST ESI,ESI
0064CE74  89 83 02 05 00 00         MOV dword ptr [EBX + 0x502],EAX
0064CE7A  74 07                     JZ 0x0064ce83
0064CE7C  8B 36                     MOV ESI,dword ptr [ESI]
0064CE7E  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
0064CE81  EB 02                     JMP 0x0064ce85
LAB_0064ce83:
0064CE83  33 C9                     XOR ECX,ECX
LAB_0064ce85:
0064CE85  8B F7                     MOV ESI,EDI
0064CE87  8B F8                     MOV EDI,EAX
0064CE89  8B C1                     MOV EAX,ECX
0064CE8B  C1 E9 02                  SHR ECX,0x2
0064CE8E  F3 A5                     MOVSD.REP ES:EDI,ESI
0064CE90  8B C8                     MOV ECX,EAX
0064CE92  83 E1 03                  AND ECX,0x3
0064CE95  F3 A4                     MOVSB.REP ES:EDI,ESI
0064CE97  8B 8B F2 04 00 00         MOV ECX,dword ptr [EBX + 0x4f2]
0064CE9D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0064CEA0  8D 84 31 9E 04 00 00      LEA EAX,[ECX + ESI*0x1 + 0x49e]
0064CEA7  50                        PUSH EAX
0064CEA8  6A 00                     PUSH 0x0
0064CEAA  E8 B1 31 06 00            CALL 0x006b0060
0064CEAF  8B 93 E6 04 00 00         MOV EDX,dword ptr [EBX + 0x4e6]
0064CEB5  89 83 EE 04 00 00         MOV dword ptr [EBX + 0x4ee],EAX
0064CEBB  8D 84 32 9E 04 00 00      LEA EAX,[EDX + ESI*0x1 + 0x49e]
0064CEC2  50                        PUSH EAX
0064CEC3  6A 00                     PUSH 0x0
0064CEC5  E8 B6 B7 07 00            CALL 0x006c8680
0064CECA  89 83 E2 04 00 00         MOV dword ptr [EBX + 0x4e2],EAX
0064CED0  8B 83 EE 04 00 00         MOV EAX,dword ptr [EBX + 0x4ee]
0064CED6  33 FF                     XOR EDI,EDI
0064CED8  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0064CEDB  85 C9                     TEST ECX,ECX
0064CEDD  7E 40                     JLE 0x0064cf1f
0064CEDF  3B F9                     CMP EDI,ECX
LAB_0064cee1:
0064CEE1  73 0D                     JNC 0x0064cef0
0064CEE3  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0064CEE6  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0064CEE9  0F AF F7                  IMUL ESI,EDI
0064CEEC  03 F1                     ADD ESI,ECX
0064CEEE  EB 02                     JMP 0x0064cef2
LAB_0064cef0:
0064CEF0  33 F6                     XOR ESI,ESI
LAB_0064cef2:
0064CEF2  8B 46 0F                  MOV EAX,dword ptr [ESI + 0xf]
0064CEF5  85 C0                     TEST EAX,EAX
0064CEF7  74 18                     JZ 0x0064cf11
0064CEF9  8B 46 13                  MOV EAX,dword ptr [ESI + 0x13]
0064CEFC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064CEFF  8D 84 08 9E 04 00 00      LEA EAX,[EAX + ECX*0x1 + 0x49e]
0064CF06  50                        PUSH EAX
0064CF07  6A 00                     PUSH 0x0
0064CF09  E8 52 31 06 00            CALL 0x006b0060
0064CF0E  89 46 0F                  MOV dword ptr [ESI + 0xf],EAX
LAB_0064cf11:
0064CF11  8B 83 EE 04 00 00         MOV EAX,dword ptr [EBX + 0x4ee]
0064CF17  47                        INC EDI
0064CF18  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0064CF1B  3B F9                     CMP EDI,ECX
0064CF1D  7C C2                     JL 0x0064cee1
LAB_0064cf1f:
0064CF1F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0064CF22  33 C0                     XOR EAX,EAX
0064CF24  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064CF2A  5F                        POP EDI
0064CF2B  5E                        POP ESI
0064CF2C  5B                        POP EBX
0064CF2D  8B E5                     MOV ESP,EBP
0064CF2F  5D                        POP EBP
0064CF30  C2 04 00                  RET 0x4
LAB_0064cf33:
0064CF33  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0064CF36  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064CF39  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064CF3E  E8 D1 5E DB FF            CALL 0x00402e14
0064CF43  68 58 2A 7D 00            PUSH 0x7d2a58
0064CF48  68 CC 4C 7A 00            PUSH 0x7a4ccc
0064CF4D  56                        PUSH ESI
0064CF4E  6A 00                     PUSH 0x0
0064CF50  6A 50                     PUSH 0x50
0064CF52  68 34 2A 7D 00            PUSH 0x7d2a34
0064CF57  E8 74 05 06 00            CALL 0x006ad4d0
0064CF5C  83 C4 18                  ADD ESP,0x18
0064CF5F  85 C0                     TEST EAX,EAX
0064CF61  74 01                     JZ 0x0064cf64
0064CF63  CC                        INT3
LAB_0064cf64:
0064CF64  6A 51                     PUSH 0x51
0064CF66  68 34 2A 7D 00            PUSH 0x7d2a34
0064CF6B  6A 00                     PUSH 0x0
0064CF6D  56                        PUSH ESI
0064CF6E  E8 CD 8E 05 00            CALL 0x006a5e40
0064CF73  8B C6                     MOV EAX,ESI
0064CF75  5F                        POP EDI
0064CF76  5E                        POP ESI
0064CF77  5B                        POP EBX
0064CF78  8B E5                     MOV ESP,EBP
0064CF7A  5D                        POP EBP
0064CF7B  C2 04 00                  RET 0x4
