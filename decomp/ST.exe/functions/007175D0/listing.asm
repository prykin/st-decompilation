FUN_007175d0:
007175D0  55                        PUSH EBP
007175D1  8B EC                     MOV EBP,ESP
007175D3  53                        PUSH EBX
007175D4  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
007175D7  0F AF 5D 10               IMUL EBX,dword ptr [EBP + 0x10]
007175DB  56                        PUSH ESI
007175DC  57                        PUSH EDI
007175DD  53                        PUSH EBX
007175DE  E8 8D 36 F9 FF            CALL 0x006aac70
007175E3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007175E6  8B CB                     MOV ECX,EBX
007175E8  8B D1                     MOV EDX,ECX
007175EA  8B F8                     MOV EDI,EAX
007175EC  C1 E9 02                  SHR ECX,0x2
007175EF  F3 A5                     MOVSD.REP ES:EDI,ESI
007175F1  8B CA                     MOV ECX,EDX
007175F3  83 E1 03                  AND ECX,0x3
007175F6  4B                        DEC EBX
007175F7  F3 A4                     MOVSB.REP ES:EDI,ESI
007175F9  8B C8                     MOV ECX,EAX
007175FB  78 10                     JS 0x0071760d
007175FD  8A 55 14                  MOV DL,byte ptr [EBP + 0x14]
00717600  8D 73 01                  LEA ESI,[EBX + 0x1]
LAB_00717603:
00717603  38 11                     CMP byte ptr [ECX],DL
00717605  76 02                     JBE 0x00717609
00717607  88 11                     MOV byte ptr [ECX],DL
LAB_00717609:
00717609  41                        INC ECX
0071760A  4E                        DEC ESI
0071760B  75 F6                     JNZ 0x00717603
LAB_0071760d:
0071760D  5F                        POP EDI
0071760E  5E                        POP ESI
0071760F  5B                        POP EBX
00717610  5D                        POP EBP
00717611  C2 10 00                  RET 0x10
