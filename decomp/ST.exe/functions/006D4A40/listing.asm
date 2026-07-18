FUN_006d4a40:
006D4A40  55                        PUSH EBP
006D4A41  8B EC                     MOV EBP,ESP
006D4A43  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D4A46  F7 42 08 00 00 10 00      TEST dword ptr [EDX + 0x8],0x100000
006D4A4D  74 1B                     JZ 0x006d4a6a
006D4A4F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D4A54  68 9A 01 00 00            PUSH 0x19a
006D4A59  68 2C E2 7E 00            PUSH 0x7ee22c
006D4A5E  50                        PUSH EAX
006D4A5F  6A D0                     PUSH -0x30
006D4A61  E8 DA 13 FD FF            CALL 0x006a5e40
006D4A66  5D                        POP EBP
006D4A67  C2 0C 00                  RET 0xc
LAB_006d4a6a:
006D4A6A  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
006D4A6D  B8 AF FF FF FF            MOV EAX,0xffffffaf
006D4A72  85 C9                     TEST ECX,ECX
006D4A74  74 24                     JZ 0x006d4a9a
006D4A76  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D4A79  56                        PUSH ESI
006D4A7A  57                        PUSH EDI
006D4A7B  8B 7A 38                  MOV EDI,dword ptr [EDX + 0x38]
006D4A7E  8D 70 04                  LEA ESI,[EAX + 0x4]
006D4A81  3B F7                     CMP ESI,EDI
006D4A83  5F                        POP EDI
006D4A84  5E                        POP ESI
006D4A85  77 0E                     JA 0x006d4a95
006D4A87  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D4A8A  8B 0C 01                  MOV ECX,dword ptr [ECX + EAX*0x1]
006D4A8D  33 C0                     XOR EAX,EAX
006D4A8F  89 0A                     MOV dword ptr [EDX],ECX
006D4A91  5D                        POP EBP
006D4A92  C2 0C 00                  RET 0xc
LAB_006d4a95:
006D4A95  B8 F2 FF FF FF            MOV EAX,0xfffffff2
LAB_006d4a9a:
006D4A9A  5D                        POP EBP
006D4A9B  C2 0C 00                  RET 0xc
