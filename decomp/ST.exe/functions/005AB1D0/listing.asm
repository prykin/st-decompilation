FUN_005ab1d0:
005AB1D0  55                        PUSH EBP
005AB1D1  8B EC                     MOV EBP,ESP
005AB1D3  83 EC 4C                  SUB ESP,0x4c
005AB1D6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005AB1D9  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005AB1DF  53                        PUSH EBX
005AB1E0  56                        PUSH ESI
005AB1E1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005AB1E4  57                        PUSH EDI
005AB1E5  8D 45 B8                  LEA EAX,[EBP + -0x48]
005AB1E8  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005AB1EB  6A 00                     PUSH 0x0
005AB1ED  50                        PUSH EAX
005AB1EE  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
005AB1F1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AB1F7  E8 F4 25 18 00            CALL 0x0072d7f0
005AB1FC  8B F0                     MOV ESI,EAX
005AB1FE  83 C4 08                  ADD ESP,0x8
005AB201  85 F6                     TEST ESI,ESI
005AB203  75 76                     JNZ 0x005ab27b
005AB205  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005AB208  85 C9                     TEST ECX,ECX
005AB20A  74 5D                     JZ 0x005ab269
005AB20C  8B B1 7B 1C 00 00         MOV ESI,dword ptr [ECX + 0x1c7b]
005AB212  85 F6                     TEST ESI,ESI
005AB214  74 53                     JZ 0x005ab269
005AB216  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005AB219  80 CB FF                  OR BL,0xff
005AB21C  32 C0                     XOR AL,AL
005AB21E  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
LAB_005ab221:
005AB221  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005AB224  81 E7 FF 00 00 00         AND EDI,0xff
005AB22A  39 94 B9 23 1C 00 00      CMP dword ptr [ECX + EDI*0x4 + 0x1c23],EDX
005AB231  74 0B                     JZ 0x005ab23e
005AB233  FE C0                     INC AL
005AB235  3C 16                     CMP AL,0x16
005AB237  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005AB23A  72 E5                     JC 0x005ab221
005AB23C  EB 02                     JMP 0x005ab240
LAB_005ab23e:
005AB23E  8A D8                     MOV BL,AL
LAB_005ab240:
005AB240  80 FB FF                  CMP BL,0xff
005AB243  74 24                     JZ 0x005ab269
005AB245  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005AB248  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005AB24B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005AB24E  6A 00                     PUSH 0x0
005AB250  51                        PUSH ECX
005AB251  8D 48 C1                  LEA ECX,[EAX + -0x3f]
005AB254  52                        PUSH EDX
005AB255  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005AB258  51                        PUSH ECX
005AB259  6A 00                     PUSH 0x0
005AB25B  6A 00                     PUSH 0x0
005AB25D  56                        PUSH ESI
005AB25E  50                        PUSH EAX
005AB25F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005AB262  52                        PUSH EDX
005AB263  50                        PUSH EAX
005AB264  E8 17 94 10 00            CALL 0x006b4680
LAB_005ab269:
005AB269  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005AB26C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AB272  5F                        POP EDI
005AB273  5E                        POP ESI
005AB274  5B                        POP EBX
005AB275  8B E5                     MOV ESP,EBP
005AB277  5D                        POP EBP
005AB278  C2 20 00                  RET 0x20
LAB_005ab27b:
005AB27B  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005AB27E  68 50 C7 7C 00            PUSH 0x7cc750
005AB283  68 CC 4C 7A 00            PUSH 0x7a4ccc
005AB288  56                        PUSH ESI
005AB289  6A 00                     PUSH 0x0
005AB28B  6A 1B                     PUSH 0x1b
005AB28D  68 28 C7 7C 00            PUSH 0x7cc728
005AB292  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AB298  E8 33 22 10 00            CALL 0x006ad4d0
005AB29D  83 C4 18                  ADD ESP,0x18
005AB2A0  85 C0                     TEST EAX,EAX
005AB2A2  74 01                     JZ 0x005ab2a5
005AB2A4  CC                        INT3
LAB_005ab2a5:
005AB2A5  6A 1B                     PUSH 0x1b
005AB2A7  68 28 C7 7C 00            PUSH 0x7cc728
005AB2AC  6A 00                     PUSH 0x0
005AB2AE  56                        PUSH ESI
005AB2AF  E8 8C AB 0F 00            CALL 0x006a5e40
005AB2B4  5F                        POP EDI
005AB2B5  5E                        POP ESI
005AB2B6  5B                        POP EBX
005AB2B7  8B E5                     MOV ESP,EBP
005AB2B9  5D                        POP EBP
005AB2BA  C2 20 00                  RET 0x20
