FUN_00617aa0:
00617AA0  55                        PUSH EBP
00617AA1  8B EC                     MOV EBP,ESP
00617AA3  56                        PUSH ESI
00617AA4  57                        PUSH EDI
00617AA5  8B F9                     MOV EDI,ECX
00617AA7  8B 4F 5E                  MOV ECX,dword ptr [EDI + 0x5e]
00617AAA  85 C9                     TEST ECX,ECX
00617AAC  74 38                     JZ 0x00617ae6
00617AAE  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00617AB1  33 F6                     XOR ESI,ESI
00617AB3  85 C0                     TEST EAX,EAX
00617AB5  7E 2F                     JLE 0x00617ae6
00617AB7  53                        PUSH EBX
00617AB8  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00617ABB  3B F0                     CMP ESI,EAX
LAB_00617abd:
00617ABD  73 0D                     JNC 0x00617acc
00617ABF  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00617AC2  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00617AC5  0F AF C6                  IMUL EAX,ESI
00617AC8  03 C2                     ADD EAX,EDX
00617ACA  EB 02                     JMP 0x00617ace
LAB_00617acc:
00617ACC  33 C0                     XOR EAX,EAX
LAB_00617ace:
00617ACE  39 58 1C                  CMP dword ptr [EAX + 0x1c],EBX
00617AD1  75 07                     JNZ 0x00617ada
00617AD3  56                        PUSH ESI
00617AD4  51                        PUSH ECX
00617AD5  E8 96 91 09 00            CALL 0x006b0c70
LAB_00617ada:
00617ADA  8B 4F 5E                  MOV ECX,dword ptr [EDI + 0x5e]
00617ADD  46                        INC ESI
00617ADE  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00617AE1  3B F0                     CMP ESI,EAX
00617AE3  7C D8                     JL 0x00617abd
00617AE5  5B                        POP EBX
LAB_00617ae6:
00617AE6  5F                        POP EDI
00617AE7  5E                        POP ESI
00617AE8  5D                        POP EBP
00617AE9  C2 04 00                  RET 0x4
