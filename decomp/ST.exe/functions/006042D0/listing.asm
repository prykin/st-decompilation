FUN_006042d0:
006042D0  55                        PUSH EBP
006042D1  8B EC                     MOV EBP,ESP
006042D3  83 EC 20                  SUB ESP,0x20
006042D6  53                        PUSH EBX
006042D7  56                        PUSH ESI
006042D8  8B D9                     MOV EBX,ECX
006042DA  57                        PUSH EDI
006042DB  B9 08 00 00 00            MOV ECX,0x8
006042E0  33 C0                     XOR EAX,EAX
006042E2  8D 7D E0                  LEA EDI,[EBP + -0x20]
006042E5  33 F6                     XOR ESI,ESI
006042E7  F3 AB                     STOSD.REP ES:EDI
006042E9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006042EC  8B 8B 69 02 00 00         MOV ECX,dword ptr [EBX + 0x269]
006042F2  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006042F5  33 C0                     XOR EAX,EAX
006042F7  85 C9                     TEST ECX,ECX
006042F9  7E 2A                     JLE 0x00604325
006042FB  8D BB 19 02 00 00         LEA EDI,[EBX + 0x219]
LAB_00604301:
00604301  8B 0F                     MOV ECX,dword ptr [EDI]
00604303  85 C9                     TEST ECX,ECX
00604305  74 10                     JZ 0x00604317
00604307  8D 55 E0                  LEA EDX,[EBP + -0x20]
0060430A  40                        INC EAX
0060430B  52                        PUSH EDX
0060430C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0060430F  E8 86 19 E0 FF            CALL 0x00405c9a
00604314  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00604317:
00604317  8B 8B 69 02 00 00         MOV ECX,dword ptr [EBX + 0x269]
0060431D  46                        INC ESI
0060431E  83 C7 04                  ADD EDI,0x4
00604321  3B F1                     CMP ESI,ECX
00604323  7C DC                     JL 0x00604301
LAB_00604325:
00604325  5F                        POP EDI
00604326  5E                        POP ESI
00604327  5B                        POP EBX
00604328  8B E5                     MOV ESP,EBP
0060432A  5D                        POP EBP
0060432B  C2 04 00                  RET 0x4
