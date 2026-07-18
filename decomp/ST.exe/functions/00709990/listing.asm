FUN_00709990:
00709990  55                        PUSH EBP
00709991  8B EC                     MOV EBP,ESP
00709993  83 EC 30                  SUB ESP,0x30
00709996  53                        PUSH EBX
00709997  56                        PUSH ESI
00709998  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070999B  57                        PUSH EDI
0070999C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0070999F  8D 55 D0                  LEA EDX,[EBP + -0x30]
007099A2  C7 07 FF FF FF FF         MOV dword ptr [EDI],0xffffffff
007099A8  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
007099AB  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
007099B2  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
007099B5  E8 D6 77 FA FF            CALL 0x006b1190
007099BA  85 C0                     TEST EAX,EAX
007099BC  7C 17                     JL 0x007099d5
007099BE  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_007099c1:
007099C1  39 5D F9                  CMP dword ptr [EBP + -0x7],EBX
007099C4  74 18                     JZ 0x007099de
007099C6  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
007099C9  8D 55 D0                  LEA EDX,[EBP + -0x30]
007099CC  E8 BF 77 FA FF            CALL 0x006b1190
007099D1  85 C0                     TEST EAX,EAX
007099D3  7D EC                     JGE 0x007099c1
LAB_007099d5:
007099D5  5F                        POP EDI
007099D6  5E                        POP ESI
007099D7  33 C0                     XOR EAX,EAX
007099D9  5B                        POP EBX
007099DA  8B E5                     MOV ESP,EBP
007099DC  5D                        POP EBP
007099DD  C3                        RET
LAB_007099de:
007099DE  89 07                     MOV dword ptr [EDI],EAX
007099E0  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
007099E3  3B 46 0C                  CMP EAX,dword ptr [ESI + 0xc]
007099E6  73 14                     JNC 0x007099fc
007099E8  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
007099EB  5F                        POP EDI
007099EC  0F AF C8                  IMUL ECX,EAX
007099EF  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
007099F2  5E                        POP ESI
007099F3  03 C8                     ADD ECX,EAX
007099F5  5B                        POP EBX
007099F6  8B C1                     MOV EAX,ECX
007099F8  8B E5                     MOV ESP,EBP
007099FA  5D                        POP EBP
007099FB  C3                        RET
LAB_007099fc:
007099FC  33 C9                     XOR ECX,ECX
007099FE  5F                        POP EDI
007099FF  5E                        POP ESI
00709A00  8B C1                     MOV EAX,ECX
00709A02  5B                        POP EBX
00709A03  8B E5                     MOV ESP,EBP
00709A05  5D                        POP EBP
00709A06  C3                        RET
