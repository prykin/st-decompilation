FUN_006ae140:
006AE140  55                        PUSH EBP
006AE141  8B EC                     MOV EBP,ESP
006AE143  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006AE146  53                        PUSH EBX
006AE147  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006AE14A  56                        PUSH ESI
006AE14B  3B 43 10                  CMP EAX,dword ptr [EBX + 0x10]
006AE14E  72 16                     JC 0x006ae166
LAB_006ae150:
006AE150  53                        PUSH EBX
006AE151  E8 DA 00 00 00            CALL 0x006ae230
006AE156  8B F0                     MOV ESI,EAX
006AE158  85 F6                     TEST ESI,ESI
006AE15A  75 3D                     JNZ 0x006ae199
006AE15C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006AE15F  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
006AE162  3B C1                     CMP EAX,ECX
006AE164  73 EA                     JNC 0x006ae150
LAB_006ae166:
006AE166  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006AE169  57                        PUSH EDI
006AE16A  8B F9                     MOV EDI,ECX
006AE16C  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
006AE16F  0F AF F8                  IMUL EDI,EAX
006AE172  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006AE175  03 FA                     ADD EDI,EDX
006AE177  8B D1                     MOV EDX,ECX
006AE179  C1 E9 02                  SHR ECX,0x2
006AE17C  F3 A5                     MOVSD.REP ES:EDI,ESI
006AE17E  8B CA                     MOV ECX,EDX
006AE180  83 E1 03                  AND ECX,0x3
006AE183  F3 A4                     MOVSB.REP ES:EDI,ESI
006AE185  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006AE188  5F                        POP EDI
006AE189  3B C1                     CMP EAX,ECX
006AE18B  72 06                     JC 0x006ae193
006AE18D  8D 48 01                  LEA ECX,[EAX + 0x1]
006AE190  89 4B 0C                  MOV dword ptr [EBX + 0xc],ECX
LAB_006ae193:
006AE193  5E                        POP ESI
006AE194  5B                        POP EBX
006AE195  5D                        POP EBP
006AE196  C2 0C 00                  RET 0xc
LAB_006ae199:
006AE199  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006AE19F  6A 0E                     PUSH 0xe
006AE1A1  68 14 DA 7E 00            PUSH 0x7eda14
006AE1A6  51                        PUSH ECX
006AE1A7  56                        PUSH ESI
006AE1A8  E8 93 7C FF FF            CALL 0x006a5e40
006AE1AD  8B C6                     MOV EAX,ESI
006AE1AF  5E                        POP ESI
006AE1B0  5B                        POP EBX
006AE1B1  5D                        POP EBP
006AE1B2  C2 0C 00                  RET 0xc
