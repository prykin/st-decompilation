FUN_005ec370:
005EC370  55                        PUSH EBP
005EC371  8B EC                     MOV EBP,ESP
005EC373  83 EC 18                  SUB ESP,0x18
005EC376  53                        PUSH EBX
005EC377  56                        PUSH ESI
005EC378  57                        PUSH EDI
005EC379  8B D9                     MOV EBX,ECX
005EC37B  68 46 02 00 00            PUSH 0x246
005EC380  E8 EB E8 0B 00            CALL 0x006aac70
005EC385  B9 54 00 00 00            MOV ECX,0x54
005EC38A  8D B3 26 03 00 00         LEA ESI,[EBX + 0x326]
005EC390  8B F8                     MOV EDI,EAX
005EC392  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005EC395  F3 A5                     MOVSD.REP ES:EDI,ESI
005EC397  A4                        MOVSB ES:EDI,ESI
005EC398  B9 3D 00 00 00            MOV ECX,0x3d
005EC39D  8D B3 31 02 00 00         LEA ESI,[EBX + 0x231]
005EC3A3  8D B8 51 01 00 00         LEA EDI,[EAX + 0x151]
005EC3A9  F3 A5                     MOVSD.REP ES:EDI,ESI
005EC3AB  A4                        MOVSB ES:EDI,ESI
005EC3AC  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
005EC3B3  8D 45 FC                  LEA EAX,[EBP + -0x4]
005EC3B6  50                        PUSH EAX
005EC3B7  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
005EC3BD  E8 12 55 E1 FF            CALL 0x004018d4
005EC3C2  8D 4D F8                  LEA ECX,[EBP + -0x8]
005EC3C5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005EC3C8  51                        PUSH ECX
005EC3C9  8B CB                     MOV ECX,EBX
005EC3CB  E8 CA 4D E1 FF            CALL 0x0040119a
005EC3D0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005EC3D3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005EC3D6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005EC3D9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005EC3DC  8D 84 10 4E 02 00 00      LEA EAX,[EAX + EDX*0x1 + 0x24e]
005EC3E3  50                        PUSH EAX
005EC3E4  51                        PUSH ECX
005EC3E5  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005EC3E8  E8 63 0B 0C 00            CALL 0x006acf50
005EC3ED  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005EC3F0  8D 98 46 02 00 00         LEA EBX,[EAX + 0x246]
005EC3F6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005EC3F9  89 13                     MOV dword ptr [EBX],EDX
005EC3FB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005EC3FE  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005EC401  83 C3 04                  ADD EBX,0x4
005EC404  8B C1                     MOV EAX,ECX
005EC406  8B FB                     MOV EDI,EBX
005EC408  C1 E9 02                  SHR ECX,0x2
005EC40B  F3 A5                     MOVSD.REP ES:EDI,ESI
005EC40D  8B C8                     MOV ECX,EAX
005EC40F  83 E1 03                  AND ECX,0x3
005EC412  F3 A4                     MOVSB.REP ES:EDI,ESI
005EC414  8D 4D F0                  LEA ECX,[EBP + -0x10]
005EC417  51                        PUSH ECX
005EC418  E8 43 EC 0B 00            CALL 0x006ab060
005EC41D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005EC420  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005EC423  03 D8                     ADD EBX,EAX
005EC425  89 13                     MOV dword ptr [EBX],EDX
005EC427  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005EC42A  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
005EC42D  8B C1                     MOV EAX,ECX
005EC42F  8D 7B 04                  LEA EDI,[EBX + 0x4]
005EC432  C1 E9 02                  SHR ECX,0x2
005EC435  F3 A5                     MOVSD.REP ES:EDI,ESI
005EC437  8B C8                     MOV ECX,EAX
005EC439  83 E1 03                  AND ECX,0x3
005EC43C  F3 A4                     MOVSB.REP ES:EDI,ESI
005EC43E  8D 4D EC                  LEA ECX,[EBP + -0x14]
005EC441  51                        PUSH ECX
005EC442  E8 19 EC 0B 00            CALL 0x006ab060
005EC447  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005EC44A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005EC44D  5F                        POP EDI
005EC44E  5E                        POP ESI
005EC44F  89 02                     MOV dword ptr [EDX],EAX
005EC451  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005EC454  5B                        POP EBX
005EC455  8B E5                     MOV ESP,EBP
005EC457  5D                        POP EBP
005EC458  C2 04 00                  RET 0x4
