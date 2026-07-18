FUN_006b0060:
006B0060  55                        PUSH EBP
006B0061  8B EC                     MOV EBP,ESP
006B0063  56                        PUSH ESI
006B0064  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B0067  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006B006A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006B006D  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006B0070  50                        PUSH EAX
006B0071  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B0074  51                        PUSH ECX
006B0075  52                        PUSH EDX
006B0076  50                        PUSH EAX
006B0077  E8 14 E2 FF FF            CALL 0x006ae290
006B007C  85 C0                     TEST EAX,EAX
006B007E  75 05                     JNZ 0x006b0085
006B0080  5E                        POP ESI
006B0081  5D                        POP EBP
006B0082  C2 08 00                  RET 0x8
LAB_006b0085:
006B0085  8B 0E                     MOV ECX,dword ptr [ESI]
006B0087  8B 10                     MOV EDX,dword ptr [EAX]
006B0089  0B D1                     OR EDX,ECX
006B008B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006B008E  89 10                     MOV dword ptr [EAX],EDX
006B0090  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006B0093  0F AF CA                  IMUL ECX,EDX
006B0096  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006B0099  8B D1                     MOV EDX,ECX
006B009B  57                        PUSH EDI
006B009C  8B 78 1C                  MOV EDI,dword ptr [EAX + 0x1c]
006B009F  83 C6 1C                  ADD ESI,0x1c
006B00A2  C1 E9 02                  SHR ECX,0x2
006B00A5  F3 A5                     MOVSD.REP ES:EDI,ESI
006B00A7  8B CA                     MOV ECX,EDX
006B00A9  83 E1 03                  AND ECX,0x3
006B00AC  F3 A4                     MOVSB.REP ES:EDI,ESI
006B00AE  5F                        POP EDI
006B00AF  5E                        POP ESI
006B00B0  5D                        POP EBP
006B00B1  C2 08 00                  RET 0x8
