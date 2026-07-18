FUN_00693dc0:
00693DC0  55                        PUSH EBP
00693DC1  8B EC                     MOV EBP,ESP
00693DC3  B8 A4 19 00 00            MOV EAX,0x19a4
00693DC8  E8 73 9C 09 00            CALL 0x0072da40
00693DCD  53                        PUSH EBX
00693DCE  8B D9                     MOV EBX,ECX
00693DD0  56                        PUSH ESI
00693DD1  57                        PUSH EDI
00693DD2  8D 8D 5C E6 FF FF         LEA ECX,[EBP + 0xffffe65c]
00693DD8  E8 CD FA D6 FF            CALL 0x004038aa
00693DDD  B9 66 06 00 00            MOV ECX,0x666
00693DE2  8B F3                     MOV ESI,EBX
00693DE4  8D BD 5C E6 FF FF         LEA EDI,[EBP + 0xffffe65c]
00693DEA  F3 A5                     MOVSD.REP ES:EDI,ESI
00693DEC  A4                        MOVSB ES:EDI,ESI
00693DED  33 F6                     XOR ESI,ESI
LAB_00693def:
00693DEF  56                        PUSH ESI
00693DF0  8B CB                     MOV ECX,EBX
00693DF2  E8 0E E1 D6 FF            CALL 0x00401f05
00693DF7  46                        INC ESI
00693DF8  83 FE 08                  CMP ESI,0x8
00693DFB  7C F2                     JL 0x00693def
00693DFD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00693E00  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00693E03  50                        PUSH EAX
00693E04  51                        PUSH ECX
00693E05  8B CB                     MOV ECX,EBX
00693E07  E8 F7 E2 D6 FF            CALL 0x00402103
00693E0C  B9 66 06 00 00            MOV ECX,0x666
00693E11  8D B5 5C E6 FF FF         LEA ESI,[EBP + 0xffffe65c]
00693E17  8B FB                     MOV EDI,EBX
00693E19  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00693E1C  F3 A5                     MOVSD.REP ES:EDI,ESI
00693E1E  8D 8D 5C E6 FF FF         LEA ECX,[EBP + 0xffffe65c]
00693E24  A4                        MOVSB ES:EDI,ESI
00693E25  E8 59 F9 D6 FF            CALL 0x00403783
00693E2A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00693E2D  5F                        POP EDI
00693E2E  5E                        POP ESI
00693E2F  5B                        POP EBX
00693E30  8B E5                     MOV ESP,EBP
00693E32  5D                        POP EBP
00693E33  C2 08 00                  RET 0x8
