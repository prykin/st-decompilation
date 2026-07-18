FUN_00717680:
00717680  55                        PUSH EBP
00717681  8B EC                     MOV EBP,ESP
00717683  53                        PUSH EBX
00717684  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00717687  0F AF 5D 14               IMUL EBX,dword ptr [EBP + 0x14]
0071768B  56                        PUSH ESI
0071768C  57                        PUSH EDI
0071768D  53                        PUSH EBX
0071768E  E8 DD 35 F9 FF            CALL 0x006aac70
00717693  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00717696  8B CB                     MOV ECX,EBX
00717698  8B D0                     MOV EDX,EAX
0071769A  8B C1                     MOV EAX,ECX
0071769C  8B FA                     MOV EDI,EDX
0071769E  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
007176A1  C1 E9 02                  SHR ECX,0x2
007176A4  F3 A5                     MOVSD.REP ES:EDI,ESI
007176A6  8B C8                     MOV ECX,EAX
007176A8  83 E1 03                  AND ECX,0x3
007176AB  4B                        DEC EBX
007176AC  F3 A4                     MOVSB.REP ES:EDI,ESI
007176AE  8B CA                     MOV ECX,EDX
007176B0  78 30                     JS 0x007176e2
007176B2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007176B5  8D 7B 01                  LEA EDI,[EBX + 0x1]
007176B8  2B F2                     SUB ESI,EDX
LAB_007176ba:
007176BA  8A 45 18                  MOV AL,byte ptr [EBP + 0x18]
007176BD  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
007176C0  3A D8                     CMP BL,AL
007176C2  76 04                     JBE 0x007176c8
007176C4  88 01                     MOV byte ptr [ECX],AL
007176C6  EB 16                     JMP 0x007176de
LAB_007176c8:
007176C8  8A 11                     MOV DL,byte ptr [ECX]
007176CA  8A 45 1C                  MOV AL,byte ptr [EBP + 0x1c]
007176CD  3A D0                     CMP DL,AL
007176CF  76 04                     JBE 0x007176d5
007176D1  8A D0                     MOV DL,AL
007176D3  88 01                     MOV byte ptr [ECX],AL
LAB_007176d5:
007176D5  3A DA                     CMP BL,DL
007176D7  76 02                     JBE 0x007176db
007176D9  88 19                     MOV byte ptr [ECX],BL
LAB_007176db:
007176DB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
LAB_007176de:
007176DE  41                        INC ECX
007176DF  4F                        DEC EDI
007176E0  75 D8                     JNZ 0x007176ba
LAB_007176e2:
007176E2  5F                        POP EDI
007176E3  5E                        POP ESI
007176E4  8B C2                     MOV EAX,EDX
007176E6  5B                        POP EBX
007176E7  5D                        POP EBP
007176E8  C2 18 00                  RET 0x18
