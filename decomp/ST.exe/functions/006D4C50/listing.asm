FUN_006d4c50:
006D4C50  55                        PUSH EBP
006D4C51  8B EC                     MOV EBP,ESP
006D4C53  53                        PUSH EBX
006D4C54  56                        PUSH ESI
006D4C55  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D4C58  57                        PUSH EDI
006D4C59  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006D4C5C  A9 00 00 10 00            TEST EAX,0x100000
006D4C61  74 1E                     JZ 0x006d4c81
006D4C63  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D4C68  68 0E 02 00 00            PUSH 0x20e
006D4C6D  68 2C E2 7E 00            PUSH 0x7ee22c
006D4C72  50                        PUSH EAX
006D4C73  6A D0                     PUSH -0x30
006D4C75  E8 C6 11 FD FF            CALL 0x006a5e40
006D4C7A  5F                        POP EDI
006D4C7B  5E                        POP ESI
006D4C7C  5B                        POP EBX
006D4C7D  5D                        POP EBP
006D4C7E  C2 0C 00                  RET 0xc
LAB_006d4c81:
006D4C81  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006D4C84  BF AF FF FF FF            MOV EDI,0xffffffaf
006D4C89  85 C9                     TEST ECX,ECX
006D4C8B  74 42                     JZ 0x006d4ccf
006D4C8D  A9 00 00 80 00            TEST EAX,0x800000
006D4C92  74 32                     JZ 0x006d4cc6
006D4C94  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D4C97  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D4C9A  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006D4C9D  8D 1C 10                  LEA EBX,[EAX + EDX*0x1]
006D4CA0  3B D9                     CMP EBX,ECX
006D4CA2  76 1A                     JBE 0x006d4cbe
006D4CA4  2B C1                     SUB EAX,ECX
006D4CA6  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
006D4CA9  03 C2                     ADD EAX,EDX
006D4CAB  3B C1                     CMP EAX,ECX
006D4CAD  73 02                     JNC 0x006d4cb1
006D4CAF  8B C1                     MOV EAX,ECX
LAB_006d4cb1:
006D4CB1  50                        PUSH EAX
006D4CB2  56                        PUSH ESI
006D4CB3  E8 88 FA FF FF            CALL 0x006d4740
006D4CB8  8B F8                     MOV EDI,EAX
006D4CBA  85 FF                     TEST EDI,EDI
006D4CBC  75 11                     JNZ 0x006d4ccf
LAB_006d4cbe:
006D4CBE  39 5E 18                  CMP dword ptr [ESI + 0x18],EBX
006D4CC1  73 03                     JNC 0x006d4cc6
006D4CC3  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
LAB_006d4cc6:
006D4CC6  5F                        POP EDI
006D4CC7  5E                        POP ESI
006D4CC8  33 C0                     XOR EAX,EAX
006D4CCA  5B                        POP EBX
006D4CCB  5D                        POP EBP
006D4CCC  C2 0C 00                  RET 0xc
LAB_006d4ccf:
006D4CCF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006D4CD5  68 22 02 00 00            PUSH 0x222
006D4CDA  68 2C E2 7E 00            PUSH 0x7ee22c
006D4CDF  51                        PUSH ECX
006D4CE0  57                        PUSH EDI
006D4CE1  E8 5A 11 FD FF            CALL 0x006a5e40
006D4CE6  8B C7                     MOV EAX,EDI
006D4CE8  5F                        POP EDI
006D4CE9  5E                        POP ESI
006D4CEA  5B                        POP EBX
006D4CEB  5D                        POP EBP
006D4CEC  C2 0C 00                  RET 0xc
