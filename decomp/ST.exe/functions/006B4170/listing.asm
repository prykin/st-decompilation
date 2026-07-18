FUN_006b4170:
006B4170  55                        PUSH EBP
006B4171  8B EC                     MOV EBP,ESP
006B4173  6A FF                     PUSH -0x1
006B4175  68 B0 D8 79 00            PUSH 0x79d8b0
006B417A  68 64 D9 72 00            PUSH 0x72d964
006B417F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006B4185  50                        PUSH EAX
006B4186  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006B418D  83 EC 40                  SUB ESP,0x40
006B4190  53                        PUSH EBX
006B4191  56                        PUSH ESI
006B4192  57                        PUSH EDI
006B4193  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B4196  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006B4199  85 DB                     TEST EBX,EBX
006B419B  0F 8E 13 01 00 00         JLE 0x006b42b4
006B41A1  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006B41A4  85 FF                     TEST EDI,EDI
006B41A6  0F 8E 08 01 00 00         JLE 0x006b42b4
006B41AC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B41AF  85 C0                     TEST EAX,EAX
006B41B1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B41B4  75 09                     JNZ 0x006b41bf
006B41B6  56                        PUSH ESI
006B41B7  E8 E4 0D 00 00            CALL 0x006b4fa0
006B41BC  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006b41bf:
006B41BF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B41C2  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006B41C5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B41C8  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006B41CB  03 C7                     ADD EAX,EDI
006B41CD  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006B41D0  03 CB                     ADD ECX,EBX
006B41D2  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006B41D5  33 C9                     XOR ECX,ECX
006B41D7  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006B41DA  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006B41DD  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B41E0  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006B41E3  8D 78 03                  LEA EDI,[EAX + 0x3]
006B41E6  83 E7 FC                  AND EDI,0xfffffffc
006B41E9  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
006B41EC  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006B41EF  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006B41F2  3B C1                     CMP EAX,ECX
006B41F4  7D 0A                     JGE 0x006b4200
006B41F6  F7 D8                     NEG EAX
006B41F8  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006B41FB  F7 DF                     NEG EDI
006B41FD  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
LAB_006b4200:
006B4200  8D 45 D8                  LEA EAX,[EBP + -0x28]
006B4203  50                        PUSH EAX
006B4204  8D 4D C8                  LEA ECX,[EBP + -0x38]
006B4207  51                        PUSH ECX
006B4208  8D 55 B0                  LEA EDX,[EBP + -0x50]
006B420B  52                        PUSH EDX
006B420C  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006B4212  85 C0                     TEST EAX,EAX
006B4214  0F 84 9A 00 00 00         JZ 0x006b42b4
006B421A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006B421D  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006B4220  2B C8                     SUB ECX,EAX
006B4222  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006B4225  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006B4228  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006B422B  2B CA                     SUB ECX,EDX
006B422D  85 FF                     TEST EDI,EDI
006B422F  7D 10                     JGE 0x006b4241
006B4231  8D 54 0A FF               LEA EDX,[EDX + ECX*0x1 + -0x1]
006B4235  0F AF D7                  IMUL EDX,EDI
006B4238  2B C2                     SUB EAX,EDX
006B423A  03 45 0C                  ADD EAX,dword ptr [EBP + 0xc]
006B423D  8B F0                     MOV ESI,EAX
006B423F  EB 0F                     JMP 0x006b4250
LAB_006b4241:
006B4241  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
006B4244  2B F2                     SUB ESI,EDX
006B4246  2B F1                     SUB ESI,ECX
006B4248  0F AF F7                  IMUL ESI,EDI
006B424B  03 F0                     ADD ESI,EAX
006B424D  03 75 0C                  ADD ESI,dword ptr [EBP + 0xc]
LAB_006b4250:
006B4250  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006b4257:
006B4257  8B C1                     MOV EAX,ECX
006B4259  49                        DEC ECX
006B425A  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006B425D  85 C0                     TEST EAX,EAX
006B425F  74 4C                     JZ 0x006b42ad
006B4261  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B4264  8A 45 20                  MOV AL,byte ptr [EBP + 0x20]
006B4267  8B FE                     MOV EDI,ESI
006B4269  8B D1                     MOV EDX,ECX
006B426B  8A D8                     MOV BL,AL
006B426D  8A FB                     MOV BH,BL
006B426F  8B C3                     MOV EAX,EBX
006B4271  C1 E0 10                  SHL EAX,0x10
006B4274  66 8B C3                  MOV AX,BX
006B4277  C1 E9 02                  SHR ECX,0x2
006B427A  F3 AB                     STOSD.REP ES:EDI
006B427C  8B CA                     MOV ECX,EDX
006B427E  83 E1 03                  AND ECX,0x3
006B4281  F3 AA                     STOSB.REP ES:EDI
006B4283  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006B4286  03 F0                     ADD ESI,EAX
006B4288  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
006B428B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B428E  EB C7                     JMP 0x006b4257
LAB_006b42ad:
006B42AD  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_006b42b4:
006B42B4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B42B7  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B42BE  5F                        POP EDI
006B42BF  5E                        POP ESI
006B42C0  5B                        POP EBX
006B42C1  8B E5                     MOV ESP,EBP
006B42C3  5D                        POP EBP
006B42C4  C2 1C 00                  RET 0x1c
