FUN_006ea050:
006EA050  55                        PUSH EBP
006EA051  8B EC                     MOV EBP,ESP
006EA053  83 EC 08                  SUB ESP,0x8
006EA056  53                        PUSH EBX
006EA057  56                        PUSH ESI
006EA058  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006EA05B  57                        PUSH EDI
006EA05C  8B F9                     MOV EDI,ECX
006EA05E  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006EA061  3B B7 10 03 00 00         CMP ESI,dword ptr [EDI + 0x310]
006EA067  0F 83 02 01 00 00         JNC 0x006ea16f
006EA06D  8B 8F 1C 03 00 00         MOV ECX,dword ptr [EDI + 0x31c]
006EA073  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
006EA076  C1 E0 03                  SHL EAX,0x3
006EA079  2B C6                     SUB EAX,ESI
006EA07B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA07E  8D 1C 81                  LEA EBX,[ECX + EAX*0x4]
006EA081  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006EA084  F6 C4 80                  TEST AH,0x80
006EA087  0F 84 E2 00 00 00         JZ 0x006ea16f
006EA08D  F6 C4 01                  TEST AH,0x1
006EA090  74 0C                     JZ 0x006ea09e
006EA092  8D 93 A8 00 00 00         LEA EDX,[EBX + 0xa8]
006EA098  52                        PUSH EDX
006EA099  E8 C2 0F FC FF            CALL 0x006ab060
LAB_006ea09e:
006EA09E  F6 43 04 01               TEST byte ptr [EBX + 0x4],0x1
006EA0A2  75 58                     JNZ 0x006ea0fc
006EA0A4  8B 83 94 00 00 00         MOV EAX,dword ptr [EBX + 0x94]
006EA0AA  C1 E0 03                  SHL EAX,0x3
006EA0AD  50                        PUSH EAX
006EA0AE  E8 BD 0B FC FF            CALL 0x006aac70
006EA0B3  85 C0                     TEST EAX,EAX
006EA0B5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006EA0B8  0F 84 C0 00 00 00         JZ 0x006ea17e
006EA0BE  8B 8B 94 00 00 00         MOV ECX,dword ptr [EBX + 0x94]
006EA0C4  8B B3 A0 00 00 00         MOV ESI,dword ptr [EBX + 0xa0]
006EA0CA  C1 E1 03                  SHL ECX,0x3
006EA0CD  8D 93 A0 00 00 00         LEA EDX,[EBX + 0xa0]
006EA0D3  8B F8                     MOV EDI,EAX
006EA0D5  8B C1                     MOV EAX,ECX
006EA0D7  52                        PUSH EDX
006EA0D8  C1 E9 02                  SHR ECX,0x2
006EA0DB  F3 A5                     MOVSD.REP ES:EDI,ESI
006EA0DD  8B C8                     MOV ECX,EAX
006EA0DF  83 E1 03                  AND ECX,0x3
006EA0E2  F3 A4                     MOVSB.REP ES:EDI,ESI
006EA0E4  83 4B 04 01               OR dword ptr [EBX + 0x4],0x1
006EA0E8  E8 73 0F FC FF            CALL 0x006ab060
006EA0ED  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006EA0F0  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006EA0F3  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006EA0F6  89 8B A0 00 00 00         MOV dword ptr [EBX + 0xa0],ECX
LAB_006ea0fc:
006EA0FC  8B 13                     MOV EDX,dword ptr [EBX]
006EA0FE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006EA101  80 E6 FE                  AND DH,0xfe
006EA104  33 C9                     XOR ECX,ECX
006EA106  80 CE 02                  OR DH,0x2
006EA109  85 C0                     TEST EAX,EAX
006EA10B  0F 9E C1                  SETLE CL
006EA10E  49                        DEC ECX
006EA10F  89 13                     MOV dword ptr [EBX],EDX
006EA111  23 C8                     AND ECX,EAX
006EA113  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006EA116  85 C0                     TEST EAX,EAX
006EA118  66 89 8B A8 00 00 00      MOV word ptr [EBX + 0xa8],CX
006EA11F  7F 05                     JG 0x006ea126
006EA121  B8 01 00 00 00            MOV EAX,0x1
LAB_006ea126:
006EA126  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006EA129  66 89 83 AA 00 00 00      MOV word ptr [EBX + 0xaa],AX
006EA130  85 C9                     TEST ECX,ECX
006EA132  7C 4A                     JL 0x006ea17e
006EA134  3B 8F 10 03 00 00         CMP ECX,dword ptr [EDI + 0x310]
006EA13A  73 38                     JNC 0x006ea174
006EA13C  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EA13F  C1 E0 03                  SHL EAX,0x3
006EA142  2B C1                     SUB EAX,ECX
006EA144  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EA147  8B 87 1C 03 00 00         MOV EAX,dword ptr [EDI + 0x31c]
006EA14D  F6 44 90 01 80            TEST byte ptr [EAX + EDX*0x4 + 0x1],0x80
006EA152  74 20                     JZ 0x006ea174
006EA154  51                        PUSH ECX
006EA155  56                        PUSH ESI
006EA156  8B CF                     MOV ECX,EDI
006EA158  E8 03 03 00 00            CALL 0x006ea460
006EA15D  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006EA160  5F                        POP EDI
006EA161  80 CC 01                  OR AH,0x1
006EA164  5E                        POP ESI
006EA165  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006EA168  5B                        POP EBX
006EA169  8B E5                     MOV ESP,EBP
006EA16B  5D                        POP EBP
006EA16C  C2 10 00                  RET 0x10
LAB_006ea16f:
006EA16F  83 FE FF                  CMP ESI,-0x1
006EA172  74 0A                     JZ 0x006ea17e
LAB_006ea174:
006EA174  68 0C EE 7E 00            PUSH 0x7eee0c
006EA179  E8 D2 EA FF FF            CALL 0x006e8c50
LAB_006ea17e:
006EA17E  5F                        POP EDI
006EA17F  5E                        POP ESI
006EA180  5B                        POP EBX
006EA181  8B E5                     MOV ESP,EBP
006EA183  5D                        POP EBP
006EA184  C2 10 00                  RET 0x10
