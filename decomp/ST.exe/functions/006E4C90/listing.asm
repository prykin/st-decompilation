FUN_006e4c90:
006E4C90  55                        PUSH EBP
006E4C91  8B EC                     MOV EBP,ESP
006E4C93  83 EC 0C                  SUB ESP,0xc
006E4C96  53                        PUSH EBX
006E4C97  56                        PUSH ESI
006E4C98  57                        PUSH EDI
006E4C99  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006E4C9C  8B D9                     MOV EBX,ECX
006E4C9E  8D 55 F4                  LEA EDX,[EBP + -0xc]
006E4CA1  8B CF                     MOV ECX,EDI
006E4CA3  C7 47 04 00 00 00 00      MOV dword ptr [EDI + 0x4],0x0
006E4CAA  E8 E1 C4 FC FF            CALL 0x006b1190
006E4CAF  8B F0                     MOV ESI,EAX
006E4CB1  85 F6                     TEST ESI,ESI
006E4CB3  7C 56                     JL 0x006e4d0b
LAB_006e4cb5:
006E4CB5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E4CB8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006E4CBB  3B C1                     CMP EAX,ECX
006E4CBD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E4CC0  74 26                     JZ 0x006e4ce8
006E4CC2  85 C0                     TEST EAX,EAX
006E4CC4  74 09                     JZ 0x006e4ccf
006E4CC6  50                        PUSH EAX
006E4CC7  51                        PUSH ECX
006E4CC8  8B CB                     MOV ECX,EBX
006E4CCA  E8 C1 FF FF FF            CALL 0x006e4c90
LAB_006e4ccf:
006E4CCF  8D 55 F4                  LEA EDX,[EBP + -0xc]
006E4CD2  8B CF                     MOV ECX,EDI
006E4CD4  E8 B7 C4 FC FF            CALL 0x006b1190
006E4CD9  8B F0                     MOV ESI,EAX
006E4CDB  85 F6                     TEST ESI,ESI
006E4CDD  7D D6                     JGE 0x006e4cb5
006E4CDF  5F                        POP EDI
006E4CE0  5E                        POP ESI
006E4CE1  5B                        POP EBX
006E4CE2  8B E5                     MOV ESP,EBP
006E4CE4  5D                        POP EBP
006E4CE5  C2 08 00                  RET 0x8
LAB_006e4ce8:
006E4CE8  85 C0                     TEST EAX,EAX
006E4CEA  74 18                     JZ 0x006e4d04
006E4CEC  50                        PUSH EAX
006E4CED  8B CB                     MOV ECX,EBX
006E4CEF  E8 8C E9 FF FF            CALL 0x006e3680
006E4CF4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E4CF7  50                        PUSH EAX
006E4CF8  E8 13 94 FC FF            CALL 0x006ae110
006E4CFD  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006e4d04:
006E4D04  56                        PUSH ESI
006E4D05  57                        PUSH EDI
006E4D06  E8 65 BF FC FF            CALL 0x006b0c70
LAB_006e4d0b:
006E4D0B  5F                        POP EDI
006E4D0C  5E                        POP ESI
006E4D0D  5B                        POP EBX
006E4D0E  8B E5                     MOV ESP,EBP
006E4D10  5D                        POP EBP
006E4D11  C2 08 00                  RET 0x8
