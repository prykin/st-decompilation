FUN_006ae1c0:
006AE1C0  55                        PUSH EBP
006AE1C1  8B EC                     MOV EBP,ESP
006AE1C3  53                        PUSH EBX
006AE1C4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006AE1C7  56                        PUSH ESI
006AE1C8  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006AE1CB  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
006AE1CE  3B C1                     CMP EAX,ECX
006AE1D0  72 28                     JC 0x006ae1fa
006AE1D2  53                        PUSH EBX
006AE1D3  E8 58 00 00 00            CALL 0x006ae230
006AE1D8  8B F0                     MOV ESI,EAX
006AE1DA  85 F6                     TEST ESI,ESI
006AE1DC  74 1C                     JZ 0x006ae1fa
006AE1DE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006AE1E4  6A 0E                     PUSH 0xe
006AE1E6  68 2C DA 7E 00            PUSH 0x7eda2c
006AE1EB  51                        PUSH ECX
006AE1EC  56                        PUSH ESI
006AE1ED  E8 4E 7C FF FF            CALL 0x006a5e40
006AE1F2  8B C6                     MOV EAX,ESI
006AE1F4  5E                        POP ESI
006AE1F5  5B                        POP EBX
006AE1F6  5D                        POP EBP
006AE1F7  C2 08 00                  RET 0x8
LAB_006ae1fa:
006AE1FA  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006AE1FD  57                        PUSH EDI
006AE1FE  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
006AE201  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
006AE204  0F AF F9                  IMUL EDI,ECX
006AE207  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006AE20A  03 FA                     ADD EDI,EDX
006AE20C  8B D1                     MOV EDX,ECX
006AE20E  C1 E9 02                  SHR ECX,0x2
006AE211  F3 A5                     MOVSD.REP ES:EDI,ESI
006AE213  8B CA                     MOV ECX,EDX
006AE215  83 E1 03                  AND ECX,0x3
006AE218  F3 A4                     MOVSB.REP ES:EDI,ESI
006AE21A  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006AE21D  5F                        POP EDI
006AE21E  5E                        POP ESI
006AE21F  8D 48 01                  LEA ECX,[EAX + 0x1]
006AE222  89 4B 0C                  MOV dword ptr [EBX + 0xc],ECX
006AE225  5B                        POP EBX
006AE226  5D                        POP EBP
006AE227  C2 08 00                  RET 0x8
