FUN_00753ff7:
00753FF7  57                        PUSH EDI
00753FF8  51                        PUSH ECX
00753FF9  52                        PUSH EDX
00753FFA  F6 45 3F 80               TEST byte ptr [EBP + 0x3f],0x80
00753FFE  75 31                     JNZ 0x00754031
00754000  8D 75 4E                  LEA ESI,[EBP + 0x4e]
00754003  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00754006  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
LAB_00754009:
00754009  FF 45 40                  INC dword ptr [EBP + 0x40]
0075400C  A4                        MOVSB ES:EDI,ESI
0075400D  E2 17                     LOOP 0x00754026
0075400F  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
00754012  E8 90 FF FF FF            CALL 0x00753fa7
00754017  73 07                     JNC 0x00754020
00754019  C7 45 3C CD FF FF FF      MOV dword ptr [EBP + 0x3c],0xffffffcd
LAB_00754020:
00754020  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00754023  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
LAB_00754026:
00754026  3B 75 48                  CMP ESI,dword ptr [EBP + 0x48]
00754029  75 DE                     JNZ 0x00754009
0075402B  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
0075402E  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
LAB_00754031:
00754031  66 C7 45 4C 01 00         MOV word ptr [EBP + 0x4c],0x1
00754037  66 C7 45 4E 00 00         MOV word ptr [EBP + 0x4e],0x0
0075403D  8D 55 50                  LEA EDX,[EBP + 0x50]
00754040  89 55 48                  MOV dword ptr [EBP + 0x48],EDX
00754043  5A                        POP EDX
00754044  59                        POP ECX
00754045  5F                        POP EDI
00754046  C3                        RET
