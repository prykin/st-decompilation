FUN_006d4860:
006D4860  55                        PUSH EBP
006D4861  8B EC                     MOV EBP,ESP
006D4863  53                        PUSH EBX
006D4864  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D4867  56                        PUSH ESI
006D4868  57                        PUSH EDI
006D4869  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006D486C  A9 00 00 10 00            TEST EAX,0x100000
006D4871  74 1E                     JZ 0x006d4891
006D4873  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D4878  68 4B 01 00 00            PUSH 0x14b
006D487D  68 2C E2 7E 00            PUSH 0x7ee22c
006D4882  50                        PUSH EAX
006D4883  6A D0                     PUSH -0x30
006D4885  E8 B6 15 FD FF            CALL 0x006a5e40
006D488A  5F                        POP EDI
006D488B  5E                        POP ESI
006D488C  5B                        POP EBX
006D488D  5D                        POP EBP
006D488E  C2 10 00                  RET 0x10
LAB_006d4891:
006D4891  8B 4B 34                  MOV ECX,dword ptr [EBX + 0x34]
006D4894  BE AF FF FF FF            MOV ESI,0xffffffaf
006D4899  85 C9                     TEST ECX,ECX
006D489B  74 67                     JZ 0x006d4904
006D489D  A9 00 00 80 00            TEST EAX,0x800000
006D48A2  74 57                     JZ 0x006d48fb
006D48A4  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006D48A7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D48AA  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
006D48AD  8D 14 38                  LEA EDX,[EAX + EDI*0x1]
006D48B0  3B D1                     CMP EDX,ECX
006D48B2  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006D48B5  76 20                     JBE 0x006d48d7
006D48B7  2B C1                     SUB EAX,ECX
006D48B9  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
006D48BC  03 C7                     ADD EAX,EDI
006D48BE  3B C1                     CMP EAX,ECX
006D48C0  73 02                     JNC 0x006d48c4
006D48C2  8B C1                     MOV EAX,ECX
LAB_006d48c4:
006D48C4  50                        PUSH EAX
006D48C5  53                        PUSH EBX
006D48C6  E8 75 FE FF FF            CALL 0x006d4740
006D48CB  8B F0                     MOV ESI,EAX
006D48CD  85 F6                     TEST ESI,ESI
006D48CF  75 33                     JNZ 0x006d4904
006D48D1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D48D4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_006d48d7:
006D48D7  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D48DA  85 F6                     TEST ESI,ESI
006D48DC  74 15                     JZ 0x006d48f3
006D48DE  8B CF                     MOV ECX,EDI
006D48E0  8B 7B 34                  MOV EDI,dword ptr [EBX + 0x34]
006D48E3  03 F8                     ADD EDI,EAX
006D48E5  8B C1                     MOV EAX,ECX
006D48E7  C1 E9 02                  SHR ECX,0x2
006D48EA  F3 A5                     MOVSD.REP ES:EDI,ESI
006D48EC  8B C8                     MOV ECX,EAX
006D48EE  83 E1 03                  AND ECX,0x3
006D48F1  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006d48f3:
006D48F3  39 53 18                  CMP dword ptr [EBX + 0x18],EDX
006D48F6  73 03                     JNC 0x006d48fb
006D48F8  89 53 18                  MOV dword ptr [EBX + 0x18],EDX
LAB_006d48fb:
006D48FB  5F                        POP EDI
006D48FC  5E                        POP ESI
006D48FD  33 C0                     XOR EAX,EAX
006D48FF  5B                        POP EBX
006D4900  5D                        POP EBP
006D4901  C2 10 00                  RET 0x10
LAB_006d4904:
006D4904  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006D490A  68 5F 01 00 00            PUSH 0x15f
006D490F  68 2C E2 7E 00            PUSH 0x7ee22c
006D4914  51                        PUSH ECX
006D4915  56                        PUSH ESI
006D4916  E8 25 15 FD FF            CALL 0x006a5e40
006D491B  8B C6                     MOV EAX,ESI
006D491D  5F                        POP EDI
006D491E  5E                        POP ESI
006D491F  5B                        POP EBX
006D4920  5D                        POP EBP
006D4921  C2 10 00                  RET 0x10
