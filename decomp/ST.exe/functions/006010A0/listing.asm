FUN_006010a0:
006010A0  55                        PUSH EBP
006010A1  8B EC                     MOV EBP,ESP
006010A3  83 EC 14                  SUB ESP,0x14
006010A6  53                        PUSH EBX
006010A7  8B D9                     MOV EBX,ECX
006010A9  56                        PUSH ESI
006010AA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006010AD  57                        PUSH EDI
006010AE  B9 0F 00 00 00            MOV ECX,0xf
006010B3  8D BB 06 02 00 00         LEA EDI,[EBX + 0x206]
006010B9  F3 A5                     MOVSD.REP ES:EDI,ESI
006010BB  A4                        MOVSB ES:EDI,ESI
006010BC  8B 83 33 02 00 00         MOV EAX,dword ptr [EBX + 0x233]
006010C2  33 F6                     XOR ESI,ESI
006010C4  85 C0                     TEST EAX,EAX
006010C6  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006010C9  0F 84 08 01 00 00         JZ 0x006011d7
006010CF  8B CB                     MOV ECX,EBX
006010D1  E8 A9 11 E0 FF            CALL 0x0040227f
006010D6  85 C0                     TEST EAX,EAX
006010D8  0F 8C F9 00 00 00         JL 0x006011d7
006010DE  8B 83 26 02 00 00         MOV EAX,dword ptr [EBX + 0x226]
006010E4  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006010E7  85 C0                     TEST EAX,EAX
006010E9  0F 8E E8 00 00 00         JLE 0x006011d7
006010EF  33 C0                     XOR EAX,EAX
006010F1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006010f4:
006010F4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006010F7  8B 54 31 3D               MOV EDX,dword ptr [ECX + ESI*0x1 + 0x3d]
006010FB  8D 74 31 41               LEA ESI,[ECX + ESI*0x1 + 0x41]
006010FF  8B 8B 33 02 00 00         MOV ECX,dword ptr [EBX + 0x233]
00601105  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00601108  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0060110B  8B 54 08 42               MOV EDX,dword ptr [EAX + ECX*0x1 + 0x42]
0060110F  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
00601112  B9 14 00 00 00            MOV ECX,0x14
00601117  F3 A5                     MOVSD.REP ES:EDI,ESI
00601119  66 A5                     MOVSW ES:EDI,ESI
0060111B  8B 8B 33 02 00 00         MOV ECX,dword ptr [EBX + 0x233]
00601121  89 54 08 42               MOV dword ptr [EAX + ECX*0x1 + 0x42],EDX
00601125  8B 93 33 02 00 00         MOV EDX,dword ptr [EBX + 0x233]
0060112B  8B 74 10 39               MOV ESI,dword ptr [EAX + EDX*0x1 + 0x39]
0060112F  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
00601132  83 FE 03                  CMP ESI,0x3
00601135  74 50                     JZ 0x00601187
00601137  83 FE 04                  CMP ESI,0x4
0060113A  74 4B                     JZ 0x00601187
0060113C  8B 49 46                  MOV ECX,dword ptr [ECX + 0x46]
0060113F  85 C9                     TEST ECX,ECX
00601141  74 6B                     JZ 0x006011ae
00601143  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00601146  D1 E0                     SHL EAX,0x1
00601148  50                        PUSH EAX
00601149  E8 22 9B 0A 00            CALL 0x006aac70
0060114E  8B 93 33 02 00 00         MOV EDX,dword ptr [EBX + 0x233]
00601154  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00601157  89 44 11 4E               MOV dword ptr [ECX + EDX*0x1 + 0x4e],EAX
0060115B  8B 83 33 02 00 00         MOV EAX,dword ptr [EBX + 0x233]
00601161  03 C1                     ADD EAX,ECX
00601163  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00601166  8B 48 46                  MOV ECX,dword ptr [EAX + 0x46]
00601169  8B 78 4E                  MOV EDI,dword ptr [EAX + 0x4e]
0060116C  8D 72 52                  LEA ESI,[EDX + 0x52]
0060116F  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00601172  D1 E1                     SHL ECX,0x1
00601174  8B C1                     MOV EAX,ECX
00601176  C1 E9 02                  SHR ECX,0x2
00601179  F3 A5                     MOVSD.REP ES:EDI,ESI
0060117B  8B C8                     MOV ECX,EAX
0060117D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00601180  83 E1 03                  AND ECX,0x3
00601183  F3 A4                     MOVSB.REP ES:EDI,ESI
00601185  EB 27                     JMP 0x006011ae
LAB_00601187:
00601187  33 D2                     XOR EDX,EDX
00601189  89 51 4E                  MOV dword ptr [ECX + 0x4e],EDX
0060118C  8B 8B 33 02 00 00         MOV ECX,dword ptr [EBX + 0x233]
00601192  89 54 08 46               MOV dword ptr [EAX + ECX*0x1 + 0x46],EDX
00601196  8B 8B 33 02 00 00         MOV ECX,dword ptr [EBX + 0x233]
0060119C  C7 44 08 39 05 00 00 00   MOV dword ptr [EAX + ECX*0x1 + 0x39],0x5
006011A4  8B 8B 33 02 00 00         MOV ECX,dword ptr [EBX + 0x233]
006011AA  89 54 08 42               MOV dword ptr [EAX + ECX*0x1 + 0x42],EDX
LAB_006011ae:
006011AE  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006011B1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006011B4  03 CA                     ADD ECX,EDX
006011B6  8B 93 26 02 00 00         MOV EDX,dword ptr [EBX + 0x226]
006011BC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006011BF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006011C2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006011C5  41                        INC ECX
006011C6  83 C0 52                  ADD EAX,0x52
006011C9  3B CA                     CMP ECX,EDX
006011CB  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006011CE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006011D1  0F 8C 1D FF FF FF         JL 0x006010f4
LAB_006011d7:
006011D7  8B 83 37 02 00 00         MOV EAX,dword ptr [EBX + 0x237]
006011DD  85 C0                     TEST EAX,EAX
006011DF  74 62                     JZ 0x00601243
006011E1  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006011E4  C1 E0 03                  SHL EAX,0x3
006011E7  50                        PUSH EAX
006011E8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006011EB  E8 80 9A 0A 00            CALL 0x006aac70
006011F0  8B 8B 37 02 00 00         MOV ECX,dword ptr [EBX + 0x237]
006011F6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006011F9  89 83 3B 02 00 00         MOV dword ptr [EBX + 0x23b],EAX
006011FF  8B F8                     MOV EDI,EAX
00601201  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00601204  8D 74 16 41               LEA ESI,[ESI + EDX*0x1 + 0x41]
00601208  C1 E1 03                  SHL ECX,0x3
0060120B  8B C1                     MOV EAX,ECX
0060120D  C1 E9 02                  SHR ECX,0x2
00601210  F3 A5                     MOVSD.REP ES:EDI,ESI
00601212  8B C8                     MOV ECX,EAX
00601214  83 E1 03                  AND ECX,0x3
00601217  F3 A4                     MOVSB.REP ES:EDI,ESI
00601219  8B 83 37 02 00 00         MOV EAX,dword ptr [EBX + 0x237]
0060121F  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00601222  C1 E0 02                  SHL EAX,0x2
00601225  50                        PUSH EAX
00601226  03 F0                     ADD ESI,EAX
00601228  E8 43 9A 0A 00            CALL 0x006aac70
0060122D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00601230  89 83 3F 02 00 00         MOV dword ptr [EBX + 0x23f],EAX
00601236  5F                        POP EDI
00601237  8D 44 31 41               LEA EAX,[ECX + ESI*0x1 + 0x41]
0060123B  5E                        POP ESI
0060123C  5B                        POP EBX
0060123D  8B E5                     MOV ESP,EBP
0060123F  5D                        POP EBP
00601240  C2 04 00                  RET 0x4
LAB_00601243:
00601243  33 C0                     XOR EAX,EAX
00601245  5F                        POP EDI
00601246  8D 44 06 41               LEA EAX,[ESI + EAX*0x1 + 0x41]
0060124A  5E                        POP ESI
0060124B  5B                        POP EBX
0060124C  8B E5                     MOV ESP,EBP
0060124E  5D                        POP EBP
0060124F  C2 04 00                  RET 0x4
