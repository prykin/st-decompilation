FUN_005e4180:
005E4180  55                        PUSH EBP
005E4181  8B EC                     MOV EBP,ESP
005E4183  81 EC C8 01 00 00         SUB ESP,0x1c8
005E4189  56                        PUSH ESI
005E418A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005E418D  57                        PUSH EDI
005E418E  B9 5F 00 00 00            MOV ECX,0x5f
005E4193  33 C0                     XOR EAX,EAX
005E4195  8D BD 38 FE FF FF         LEA EDI,[EBP + 0xfffffe38]
005E419B  F3 AB                     STOSD.REP ES:EDI
005E419D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005E41A0  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E41A5  8D 55 B8                  LEA EDX,[EBP + -0x48]
005E41A8  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005E41AB  6A 00                     PUSH 0x0
005E41AD  52                        PUSH EDX
005E41AE  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005E41B1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E41B7  E8 34 96 14 00            CALL 0x0072d7f0
005E41BC  8B F0                     MOV ESI,EAX
005E41BE  83 C4 08                  ADD ESP,0x8
005E41C1  85 F6                     TEST ESI,ESI
005E41C3  0F 85 97 00 00 00         JNZ 0x005e4260
005E41C9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005E41CC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005E41CF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005E41D2  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
005E41D5  89 8D 38 FE FF FF         MOV dword ptr [EBP + 0xfffffe38],ECX
005E41DB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005E41DE  89 85 3C FE FF FF         MOV dword ptr [EBP + 0xfffffe3c],EAX
005E41E4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005E41E7  89 8D 48 FE FF FF         MOV dword ptr [EBP + 0xfffffe48],ECX
005E41ED  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005E41F0  89 95 40 FE FF FF         MOV dword ptr [EBP + 0xfffffe40],EDX
005E41F6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005E41F9  89 85 44 FE FF FF         MOV dword ptr [EBP + 0xfffffe44],EAX
005E41FF  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005E4202  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
005E4205  89 B5 60 FE FF FF         MOV dword ptr [EBP + 0xfffffe60],ESI
005E420B  8D B5 38 FE FF FF         LEA ESI,[EBP + 0xfffffe38]
005E4211  89 95 4C FE FF FF         MOV dword ptr [EBP + 0xfffffe4c],EDX
005E4217  89 85 58 FE FF FF         MOV dword ptr [EBP + 0xfffffe58],EAX
005E421D  89 85 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],EAX
005E4223  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005E4226  6A 00                     PUSH 0x0
005E4228  BA 02 00 00 00            MOV EDX,0x2
005E422D  56                        PUSH ESI
005E422E  8D 75 FC                  LEA ESI,[EBP + -0x4]
005E4231  89 95 5C FE FF FF         MOV dword ptr [EBP + 0xfffffe5c],EDX
005E4237  89 95 9C FE FF FF         MOV dword ptr [EBP + 0xfffffe9c],EDX
005E423D  89 85 A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],EAX
005E4243  8B 01                     MOV EAX,dword ptr [ECX]
005E4245  6A 00                     PUSH 0x0
005E4247  56                        PUSH ESI
005E4248  52                        PUSH EDX
005E4249  FF 50 08                  CALL dword ptr [EAX + 0x8]
005E424C  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005E424F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E4252  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E4258  5F                        POP EDI
005E4259  5E                        POP ESI
005E425A  8B E5                     MOV ESP,EBP
005E425C  5D                        POP EBP
005E425D  C2 20 00                  RET 0x20
LAB_005e4260:
005E4260  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005E4263  68 74 DC 7C 00            PUSH 0x7cdc74
005E4268  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E426D  56                        PUSH ESI
005E426E  6A 00                     PUSH 0x0
005E4270  68 A0 04 00 00            PUSH 0x4a0
005E4275  68 94 D9 7C 00            PUSH 0x7cd994
005E427A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E4280  E8 4B 92 0C 00            CALL 0x006ad4d0
005E4285  83 C4 18                  ADD ESP,0x18
005E4288  85 C0                     TEST EAX,EAX
005E428A  74 01                     JZ 0x005e428d
005E428C  CC                        INT3
LAB_005e428d:
005E428D  68 A0 04 00 00            PUSH 0x4a0
005E4292  68 94 D9 7C 00            PUSH 0x7cd994
005E4297  6A 00                     PUSH 0x0
005E4299  56                        PUSH ESI
005E429A  E8 A1 1B 0C 00            CALL 0x006a5e40
005E429F  5F                        POP EDI
005E42A0  33 C0                     XOR EAX,EAX
005E42A2  5E                        POP ESI
005E42A3  8B E5                     MOV ESP,EBP
005E42A5  5D                        POP EBP
005E42A6  C2 20 00                  RET 0x20
