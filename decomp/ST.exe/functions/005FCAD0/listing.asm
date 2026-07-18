FUN_005fcad0:
005FCAD0  55                        PUSH EBP
005FCAD1  8B EC                     MOV EBP,ESP
005FCAD3  83 EC 18                  SUB ESP,0x18
005FCAD6  53                        PUSH EBX
005FCAD7  56                        PUSH ESI
005FCAD8  57                        PUSH EDI
005FCAD9  8B D9                     MOV EBX,ECX
005FCADB  68 4A 02 00 00            PUSH 0x24a
005FCAE0  E8 8B E1 0A 00            CALL 0x006aac70
005FCAE5  B9 55 00 00 00            MOV ECX,0x55
005FCAEA  8D B3 26 03 00 00         LEA ESI,[EBX + 0x326]
005FCAF0  8B F8                     MOV EDI,EAX
005FCAF2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005FCAF5  F3 A5                     MOVSD.REP ES:EDI,ESI
005FCAF7  A4                        MOVSB ES:EDI,ESI
005FCAF8  B9 3D 00 00 00            MOV ECX,0x3d
005FCAFD  8D B3 31 02 00 00         LEA ESI,[EBX + 0x231]
005FCB03  8D B8 55 01 00 00         LEA EDI,[EAX + 0x155]
005FCB09  F3 A5                     MOVSD.REP ES:EDI,ESI
005FCB0B  A4                        MOVSB ES:EDI,ESI
005FCB0C  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
005FCB13  8D 45 FC                  LEA EAX,[EBP + -0x4]
005FCB16  50                        PUSH EAX
005FCB17  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
005FCB1D  E8 B2 4D E0 FF            CALL 0x004018d4
005FCB22  8D 4D F8                  LEA ECX,[EBP + -0x8]
005FCB25  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005FCB28  51                        PUSH ECX
005FCB29  8B CB                     MOV ECX,EBX
005FCB2B  E8 6A 46 E0 FF            CALL 0x0040119a
005FCB30  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005FCB33  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005FCB36  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005FCB39  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005FCB3C  8D 84 10 52 02 00 00      LEA EAX,[EAX + EDX*0x1 + 0x252]
005FCB43  50                        PUSH EAX
005FCB44  51                        PUSH ECX
005FCB45  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005FCB48  E8 03 04 0B 00            CALL 0x006acf50
005FCB4D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005FCB50  8D 98 46 02 00 00         LEA EBX,[EAX + 0x246]
005FCB56  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005FCB59  89 13                     MOV dword ptr [EBX],EDX
005FCB5B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005FCB5E  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005FCB61  83 C3 04                  ADD EBX,0x4
005FCB64  8B C1                     MOV EAX,ECX
005FCB66  8B FB                     MOV EDI,EBX
005FCB68  C1 E9 02                  SHR ECX,0x2
005FCB6B  F3 A5                     MOVSD.REP ES:EDI,ESI
005FCB6D  8B C8                     MOV ECX,EAX
005FCB6F  83 E1 03                  AND ECX,0x3
005FCB72  F3 A4                     MOVSB.REP ES:EDI,ESI
005FCB74  8D 4D F0                  LEA ECX,[EBP + -0x10]
005FCB77  51                        PUSH ECX
005FCB78  E8 E3 E4 0A 00            CALL 0x006ab060
005FCB7D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FCB80  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005FCB83  03 D8                     ADD EBX,EAX
005FCB85  89 13                     MOV dword ptr [EBX],EDX
005FCB87  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005FCB8A  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
005FCB8D  8B C1                     MOV EAX,ECX
005FCB8F  8D 7B 04                  LEA EDI,[EBX + 0x4]
005FCB92  C1 E9 02                  SHR ECX,0x2
005FCB95  F3 A5                     MOVSD.REP ES:EDI,ESI
005FCB97  8B C8                     MOV ECX,EAX
005FCB99  83 E1 03                  AND ECX,0x3
005FCB9C  F3 A4                     MOVSB.REP ES:EDI,ESI
005FCB9E  8D 4D EC                  LEA ECX,[EBP + -0x14]
005FCBA1  51                        PUSH ECX
005FCBA2  E8 B9 E4 0A 00            CALL 0x006ab060
005FCBA7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005FCBAA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005FCBAD  5F                        POP EDI
005FCBAE  5E                        POP ESI
005FCBAF  89 02                     MOV dword ptr [EDX],EAX
005FCBB1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005FCBB4  5B                        POP EBX
005FCBB5  8B E5                     MOV ESP,EBP
005FCBB7  5D                        POP EBP
005FCBB8  C2 04 00                  RET 0x4
