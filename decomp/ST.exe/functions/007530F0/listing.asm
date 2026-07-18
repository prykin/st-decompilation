FUN_007530f0:
007530F0  55                        PUSH EBP
007530F1  8B EC                     MOV EBP,ESP
007530F3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007530F6  83 F8 28                  CMP EAX,0x28
007530F9  73 05                     JNC 0x00753100
007530FB  B8 28 00 00 00            MOV EAX,0x28
LAB_00753100:
00753100  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00753103  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00753106  51                        PUSH ECX
00753107  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075310A  52                        PUSH EDX
0075310B  50                        PUSH EAX
0075310C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075310F  50                        PUSH EAX
00753110  51                        PUSH ECX
00753111  E8 0A 11 F8 FF            CALL 0x006d4220
00753116  8B D0                     MOV EDX,EAX
00753118  85 D2                     TEST EDX,EDX
0075311A  75 04                     JNZ 0x00753120
0075311C  5D                        POP EBP
0075311D  C2 14 00                  RET 0x14
LAB_00753120:
00753120  56                        PUSH ESI
00753121  8B 72 34                  MOV ESI,dword ptr [EDX + 0x34]
00753124  57                        PUSH EDI
00753125  B9 0A 00 00 00            MOV ECX,0xa
0075312A  33 C0                     XOR EAX,EAX
0075312C  8B FE                     MOV EDI,ESI
0075312E  F3 AB                     STOSD.REP ES:EDI
00753130  C7 06 44 4B 46 4D         MOV dword ptr [ESI],0x4d464b44
00753136  66 C7 46 04 01 01         MOV word ptr [ESI + 0x4],0x101
0075313C  C7 46 0C 20 00 00 00      MOV dword ptr [ESI + 0xc],0x20
00753143  C7 46 08 28 00 00 00      MOV dword ptr [ESI + 0x8],0x28
0075314A  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
0075314D  8D 7A 10                  LEA EDI,[EDX + 0x10]
00753150  B9 08 00 00 00            MOV ECX,0x8
00753155  C7 40 20 E0 FF FF 3F      MOV dword ptr [EAX + 0x20],0x3fffffe0
0075315C  8B C2                     MOV EAX,EDX
0075315E  F3 A5                     MOVSD.REP ES:EDI,ESI
00753160  5F                        POP EDI
00753161  5E                        POP ESI
00753162  5D                        POP EBP
00753163  C2 14 00                  RET 0x14
