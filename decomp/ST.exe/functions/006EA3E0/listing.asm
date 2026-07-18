FUN_006ea3e0:
006EA3E0  55                        PUSH EBP
006EA3E1  8B EC                     MOV EBP,ESP
006EA3E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EA3E6  53                        PUSH EBX
006EA3E7  8B 99 10 03 00 00         MOV EBX,dword ptr [ECX + 0x310]
006EA3ED  56                        PUSH ESI
006EA3EE  3B D3                     CMP EDX,EBX
006EA3F0  57                        PUSH EDI
006EA3F1  73 55                     JNC 0x006ea448
006EA3F3  8B B1 1C 03 00 00         MOV ESI,dword ptr [ECX + 0x31c]
006EA3F9  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EA3FC  C1 E0 03                  SHL EAX,0x3
006EA3FF  2B C2                     SUB EAX,EDX
006EA401  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA404  8D 3C 86                  LEA EDI,[ESI + EAX*0x4]
006EA407  8B 04 86                  MOV EAX,dword ptr [ESI + EAX*0x4]
006EA40A  F6 C4 80                  TEST AH,0x80
006EA40D  74 39                     JZ 0x006ea448
006EA40F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EA412  83 F9 FF                  CMP ECX,-0x1
006EA415  74 1B                     JZ 0x006ea432
006EA417  85 C9                     TEST ECX,ECX
006EA419  7C 2D                     JL 0x006ea448
006EA41B  3B CB                     CMP ECX,EBX
006EA41D  7D 29                     JGE 0x006ea448
006EA41F  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EA422  C1 E0 03                  SHL EAX,0x3
006EA425  2B C1                     SUB EAX,ECX
006EA427  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA42A  8B 1C 86                  MOV EBX,dword ptr [ESI + EAX*0x4]
006EA42D  F6 C7 80                  TEST BH,0x80
006EA430  74 16                     JZ 0x006ea448
LAB_006ea432:
006EA432  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006EA435  89 4F 1C                  MOV dword ptr [EDI + 0x1c],ECX
006EA438  83 E2 9F                  AND EDX,0xffffff9f
006EA43B  83 CA 10                  OR EDX,0x10
006EA43E  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
006EA441  5F                        POP EDI
006EA442  5E                        POP ESI
006EA443  5B                        POP EBX
006EA444  5D                        POP EBP
006EA445  C2 08 00                  RET 0x8
LAB_006ea448:
006EA448  83 FA FF                  CMP EDX,-0x1
006EA44B  74 0A                     JZ 0x006ea457
006EA44D  68 60 EE 7E 00            PUSH 0x7eee60
006EA452  E8 F9 E7 FF FF            CALL 0x006e8c50
LAB_006ea457:
006EA457  5F                        POP EDI
006EA458  5E                        POP ESI
006EA459  5B                        POP EBX
006EA45A  5D                        POP EBP
006EA45B  C2 08 00                  RET 0x8
