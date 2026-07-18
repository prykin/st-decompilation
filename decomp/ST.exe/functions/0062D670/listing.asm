FUN_0062d670:
0062D670  55                        PUSH EBP
0062D671  8B EC                     MOV EBP,ESP
0062D673  83 EC 10                  SUB ESP,0x10
0062D676  53                        PUSH EBX
0062D677  56                        PUSH ESI
0062D678  8B F1                     MOV ESI,ECX
0062D67A  57                        PUSH EDI
0062D67B  68 98 00 00 00            PUSH 0x98
0062D680  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0062D683  8B 86 B4 00 00 00         MOV EAX,dword ptr [ESI + 0xb4]
0062D689  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0062D690  89 86 B0 00 00 00         MOV dword ptr [ESI + 0xb0],EAX
0062D696  E8 D5 D5 07 00            CALL 0x006aac70
0062D69B  85 F6                     TEST ESI,ESI
0062D69D  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062D6A0  C7 46 28 02 00 00 00      MOV dword ptr [ESI + 0x28],0x2
0062D6A7  74 05                     JZ 0x0062d6ae
0062D6A9  83 C6 1C                  ADD ESI,0x1c
0062D6AC  EB 02                     JMP 0x0062d6b0
LAB_0062d6ae:
0062D6AE  33 F6                     XOR ESI,ESI
LAB_0062d6b0:
0062D6B0  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0062D6B3  B9 26 00 00 00            MOV ECX,0x26
0062D6B8  8B F8                     MOV EDI,EAX
0062D6BA  F3 A5                     MOVSD.REP ES:EDI,ESI
0062D6BC  33 F6                     XOR ESI,ESI
0062D6BE  C7 03 98 00 00 00         MOV dword ptr [EBX],0x98
0062D6C4  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_0062d6c7:
0062D6C7  83 FE 03                  CMP ESI,0x3
0062D6CA  77 7E                     JA 0x0062d74a
switchD_0062d6cc::switchD:
0062D6CC  FF 24 B5 64 D7 62 00      JMP dword ptr [ESI*0x4 + 0x62d764]
switchD_0062d6cc::caseD_0:
0062D6D3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062D6D6  8D 41 30                  LEA EAX,[ECX + 0x30]
0062D6D9  EB 19                     JMP 0x0062d6f4
switchD_0062d6cc::caseD_1:
0062D6DB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0062D6DE  8D 42 50                  LEA EAX,[EDX + 0x50]
0062D6E1  EB 11                     JMP 0x0062d6f4
switchD_0062d6cc::caseD_2:
0062D6E3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062D6E6  83 C0 70                  ADD EAX,0x70
0062D6E9  EB 09                     JMP 0x0062d6f4
switchD_0062d6cc::caseD_3:
0062D6EB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062D6EE  8D 81 90 00 00 00         LEA EAX,[ECX + 0x90]
LAB_0062d6f4:
0062D6F4  85 C0                     TEST EAX,EAX
0062D6F6  74 52                     JZ 0x0062d74a
0062D6F8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062D6FB  8D 55 F8                  LEA EDX,[EBP + -0x8]
0062D6FE  52                        PUSH EDX
0062D6FF  50                        PUSH EAX
0062D700  E8 73 75 DD FF            CALL 0x00404c78
0062D705  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0062D708  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062D70B  85 C0                     TEST EAX,EAX
0062D70D  74 3B                     JZ 0x0062d74a
0062D70F  8B 0B                     MOV ECX,dword ptr [EBX]
0062D711  03 C8                     ADD ECX,EAX
0062D713  8B C1                     MOV EAX,ECX
0062D715  89 0B                     MOV dword ptr [EBX],ECX
0062D717  50                        PUSH EAX
0062D718  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0062D71B  50                        PUSH EAX
0062D71C  E8 2F F8 07 00            CALL 0x006acf50
0062D721  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0062D724  8B 3B                     MOV EDI,dword ptr [EBX]
0062D726  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0062D729  2B F9                     SUB EDI,ECX
0062D72B  8B D1                     MOV EDX,ECX
0062D72D  03 F8                     ADD EDI,EAX
0062D72F  C1 E9 02                  SHR ECX,0x2
0062D732  F3 A5                     MOVSD.REP ES:EDI,ESI
0062D734  8B CA                     MOV ECX,EDX
0062D736  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062D739  83 E1 03                  AND ECX,0x3
0062D73C  8D 45 F0                  LEA EAX,[EBP + -0x10]
0062D73F  F3 A4                     MOVSB.REP ES:EDI,ESI
0062D741  50                        PUSH EAX
0062D742  E8 19 D9 07 00            CALL 0x006ab060
0062D747  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
switchD_0062d6cc::default:
0062D74A  46                        INC ESI
0062D74B  83 FE 04                  CMP ESI,0x4
0062D74E  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0062D751  0F 8C 70 FF FF FF         JL 0x0062d6c7
0062D757  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0062D75A  5F                        POP EDI
0062D75B  5E                        POP ESI
0062D75C  5B                        POP EBX
0062D75D  8B E5                     MOV ESP,EBP
0062D75F  5D                        POP EBP
0062D760  C2 04 00                  RET 0x4
