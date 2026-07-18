FUN_006b3930:
006B3930  55                        PUSH EBP
006B3931  8B EC                     MOV EBP,ESP
006B3933  83 EC 20                  SUB ESP,0x20
006B3936  53                        PUSH EBX
006B3937  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B393A  56                        PUSH ESI
006B393B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B393E  33 C0                     XOR EAX,EAX
006B3940  57                        PUSH EDI
006B3941  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
006B3944  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
006B3947  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006B394A  89 03                     MOV dword ptr [EBX],EAX
006B394C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B394F  8B 8E A0 01 00 00         MOV ECX,dword ptr [ESI + 0x1a0]
006B3955  3B C1                     CMP EAX,ECX
006B3957  0F 83 D4 00 00 00         JNC 0x006b3a31
006B395D  8B 8E B0 01 00 00         MOV ECX,dword ptr [ESI + 0x1b0]
006B3963  8B 3C 81                  MOV EDI,dword ptr [ECX + EAX*0x4]
006B3966  8B 07                     MOV EAX,dword ptr [EDI]
006B3968  A8 03                     TEST AL,0x3
006B396A  0F 84 C1 00 00 00         JZ 0x006b3a31
006B3970  A8 02                     TEST AL,0x2
006B3972  74 0B                     JZ 0x006b397f
006B3974  57                        PUSH EDI
006B3975  E8 D6 BF 01 00            CALL 0x006cf950
006B397A  8D 57 18                  LEA EDX,[EDI + 0x18]
006B397D  EB 03                     JMP 0x006b3982
LAB_006b397f:
006B397F  8D 57 04                  LEA EDX,[EDI + 0x4]
LAB_006b3982:
006B3982  8B 02                     MOV EAX,dword ptr [EDX]
006B3984  57                        PUSH EDI
006B3985  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006B3988  56                        PUSH ESI
006B3989  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
006B398C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006B398F  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006B3992  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006B3995  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
006B3998  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006B399B  E8 70 B4 01 00            CALL 0x006cee10
006B39A0  8B D0                     MOV EDX,EAX
006B39A2  8B BC C6 1C 01 00 00      MOV EDI,dword ptr [ESI + EAX*0x8 + 0x11c]
006B39A9  C1 E2 04                  SHL EDX,0x4
006B39AC  8D 0C 32                  LEA ECX,[EDX + ESI*0x1]
006B39AF  8B 54 32 14               MOV EDX,dword ptr [EDX + ESI*0x1 + 0x14]
006B39B3  2B D7                     SUB EDX,EDI
006B39B5  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006B39B8  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
006B39BB  2B 94 C6 20 01 00 00      SUB EDX,dword ptr [ESI + EAX*0x8 + 0x120]
006B39C2  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006B39C5  8B 49 1C                  MOV ECX,dword ptr [ECX + 0x1c]
006B39C8  8B 94 C6 1C 01 00 00      MOV EDX,dword ptr [ESI + EAX*0x8 + 0x11c]
006B39CF  2B CA                     SUB ECX,EDX
006B39D1  8D 50 02                  LEA EDX,[EAX + 0x2]
006B39D4  C1 E2 04                  SHL EDX,0x4
006B39D7  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006B39DA  8B 0C 32                  MOV ECX,dword ptr [EDX + ESI*0x1]
006B39DD  8B 94 C6 20 01 00 00      MOV EDX,dword ptr [ESI + EAX*0x8 + 0x120]
006B39E4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B39E7  2B CA                     SUB ECX,EDX
006B39E9  85 C0                     TEST EAX,EAX
006B39EB  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006B39EE  7D 0D                     JGE 0x006b39fd
006B39F0  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006B39F3  03 D0                     ADD EDX,EAX
006B39F5  F7 D8                     NEG EAX
006B39F7  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006B39FA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006b39fd:
006B39FD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B3A00  85 C0                     TEST EAX,EAX
006B3A02  7D 0D                     JGE 0x006b3a11
006B3A04  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006B3A07  03 D0                     ADD EDX,EAX
006B3A09  F7 D8                     NEG EAX
006B3A0B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006B3A0E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006b3a11:
006B3A11  8D 55 E0                  LEA EDX,[EBP + -0x20]
006B3A14  8D 45 F0                  LEA EAX,[EBP + -0x10]
006B3A17  52                        PUSH EDX
006B3A18  50                        PUSH EAX
006B3A19  53                        PUSH EBX
006B3A1A  E8 91 C4 01 00            CALL 0x006cfeb0
006B3A1F  83 C4 0C                  ADD ESP,0xc
006B3A22  F7 D8                     NEG EAX
006B3A24  1B C0                     SBB EAX,EAX
006B3A26  5F                        POP EDI
006B3A27  5E                        POP ESI
006B3A28  5B                        POP EBX
006B3A29  F7 D8                     NEG EAX
006B3A2B  8B E5                     MOV ESP,EBP
006B3A2D  5D                        POP EBP
006B3A2E  C2 0C 00                  RET 0xc
LAB_006b3a31:
006B3A31  5F                        POP EDI
006B3A32  5E                        POP ESI
006B3A33  33 C0                     XOR EAX,EAX
006B3A35  5B                        POP EBX
006B3A36  8B E5                     MOV ESP,EBP
006B3A38  5D                        POP EBP
006B3A39  C2 0C 00                  RET 0xc
