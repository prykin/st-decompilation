FUN_00496e40:
00496E40  55                        PUSH EBP
00496E41  8B EC                     MOV EBP,ESP
00496E43  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00496E46  53                        PUSH EBX
00496E47  8B D9                     MOV EBX,ECX
00496E49  56                        PUSH ESI
00496E4A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00496E4D  8D 45 14                  LEA EAX,[EBP + 0x14]
00496E50  57                        PUSH EDI
00496E51  50                        PUSH EAX
00496E52  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00496E55  51                        PUSH ECX
00496E56  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00496E59  52                        PUSH EDX
00496E5A  6A 00                     PUSH 0x0
00496E5C  50                        PUSH EAX
00496E5D  51                        PUSH ECX
00496E5E  8B CB                     MOV ECX,EBX
00496E60  E8 26 D0 F6 FF            CALL 0x00403e8b
00496E65  8B F8                     MOV EDI,EAX
00496E67  85 FF                     TEST EDI,EDI
00496E69  7C 4F                     JL 0x00496eba
00496E6B  A1 70 B2 7F 00            MOV EAX,[0x007fb270]
00496E70  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
00496E73  73 0D                     JNC 0x00496e82
00496E75  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00496E78  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00496E7B  0F AF F7                  IMUL ESI,EDI
00496E7E  03 F1                     ADD ESI,ECX
00496E80  EB 02                     JMP 0x00496e84
LAB_00496e82:
00496E82  33 F6                     XOR ESI,ESI
LAB_00496e84:
00496E84  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00496E87  6A 00                     PUSH 0x0
00496E89  52                        PUSH EDX
00496E8A  57                        PUSH EDI
00496E8B  8B CB                     MOV ECX,EBX
00496E8D  E8 A7 C7 F6 FF            CALL 0x00403639
00496E92  A1 70 B2 7F 00            MOV EAX,[0x007fb270]
00496E97  8B 76 08                  MOV ESI,dword ptr [ESI + 0x8]
00496E9A  57                        PUSH EDI
00496E9B  50                        PUSH EAX
00496E9C  E8 CF 9D 21 00            CALL 0x006b0c70
00496EA1  56                        PUSH ESI
00496EA2  8B CB                     MOV ECX,EBX
00496EA4  E8 24 A2 F6 FF            CALL 0x004010cd
00496EA9  85 C0                     TEST EAX,EAX
00496EAB  75 0D                     JNZ 0x00496eba
00496EAD  8D 0C B5 4C B2 7F 00      LEA ECX,[ESI*0x4 + 0x7fb24c]
00496EB4  51                        PUSH ECX
00496EB5  E8 A6 41 21 00            CALL 0x006ab060
LAB_00496eba:
00496EBA  5F                        POP EDI
00496EBB  5E                        POP ESI
00496EBC  5B                        POP EBX
00496EBD  5D                        POP EBP
00496EBE  C2 10 00                  RET 0x10
