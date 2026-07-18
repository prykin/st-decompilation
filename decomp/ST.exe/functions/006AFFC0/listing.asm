FUN_006affc0:
006AFFC0  55                        PUSH EBP
006AFFC1  8B EC                     MOV EBP,ESP
006AFFC3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006AFFC6  53                        PUSH EBX
006AFFC7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006AFFCA  56                        PUSH ESI
006AFFCB  57                        PUSH EDI
006AFFCC  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006AFFCF  0F AF 53 08               IMUL EDX,dword ptr [EBX + 0x8]
006AFFD3  85 C0                     TEST EAX,EAX
006AFFD5  74 05                     JZ 0x006affdc
006AFFD7  8D 4A 1C                  LEA ECX,[EDX + 0x1c]
006AFFDA  89 08                     MOV dword ptr [EAX],ECX
LAB_006affdc:
006AFFDC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006AFFDF  B9 07 00 00 00            MOV ECX,0x7
006AFFE4  8B F3                     MOV ESI,EBX
006AFFE6  8B F8                     MOV EDI,EAX
006AFFE8  F3 A5                     MOVSD.REP ES:EDI,ESI
006AFFEA  8B 08                     MOV ECX,dword ptr [EAX]
006AFFEC  C7 40 18 00 00 00 00      MOV dword ptr [EAX + 0x18],0x0
006AFFF3  81 E1 F7 FE FF FF         AND ECX,0xfffffef7
006AFFF9  8D 78 1C                  LEA EDI,[EAX + 0x1c]
006AFFFC  89 08                     MOV dword ptr [EAX],ECX
006AFFFE  8B 73 1C                  MOV ESI,dword ptr [EBX + 0x1c]
006B0001  8B CA                     MOV ECX,EDX
006B0003  C1 E9 02                  SHR ECX,0x2
006B0006  F3 A5                     MOVSD.REP ES:EDI,ESI
006B0008  8B CA                     MOV ECX,EDX
006B000A  83 E1 03                  AND ECX,0x3
006B000D  F3 A4                     MOVSB.REP ES:EDI,ESI
006B000F  5F                        POP EDI
006B0010  5E                        POP ESI
006B0011  5B                        POP EBX
006B0012  5D                        POP EBP
006B0013  C2 0C 00                  RET 0xc
