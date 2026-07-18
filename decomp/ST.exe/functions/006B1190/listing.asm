FUN_006b1190:
006B1190  53                        PUSH EBX
006B1191  8B D9                     MOV EBX,ECX
006B1193  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006B1196  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006B1199  3B C1                     CMP EAX,ECX
006B119B  73 2C                     JNC 0x006b11c9
006B119D  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006B11A0  56                        PUSH ESI
006B11A1  8B F1                     MOV ESI,ECX
006B11A3  57                        PUSH EDI
006B11A4  0F AF F0                  IMUL ESI,EAX
006B11A7  8B 7B 1C                  MOV EDI,dword ptr [EBX + 0x1c]
006B11AA  8B C1                     MOV EAX,ECX
006B11AC  03 F7                     ADD ESI,EDI
006B11AE  8B FA                     MOV EDI,EDX
006B11B0  C1 E9 02                  SHR ECX,0x2
006B11B3  F3 A5                     MOVSD.REP ES:EDI,ESI
006B11B5  8B C8                     MOV ECX,EAX
006B11B7  83 E1 03                  AND ECX,0x3
006B11BA  F3 A4                     MOVSB.REP ES:EDI,ESI
006B11BC  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006B11BF  5F                        POP EDI
006B11C0  5E                        POP ESI
006B11C1  8D 48 01                  LEA ECX,[EAX + 0x1]
006B11C4  89 4B 04                  MOV dword ptr [EBX + 0x4],ECX
006B11C7  5B                        POP EBX
006B11C8  C3                        RET
LAB_006b11c9:
006B11C9  B8 FC FF FF FF            MOV EAX,0xfffffffc
006B11CE  5B                        POP EBX
006B11CF  C3                        RET
