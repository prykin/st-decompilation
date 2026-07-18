FUN_00753090:
00753090  55                        PUSH EBP
00753091  8B EC                     MOV EBP,ESP
00753093  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00753096  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00753099  56                        PUSH ESI
0075309A  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
0075309D  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
007530A0  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007530A3  03 F1                     ADD ESI,ECX
007530A5  3B C1                     CMP EAX,ECX
007530A7  7D 02                     JGE 0x007530ab
007530A9  8B C1                     MOV EAX,ECX
LAB_007530ab:
007530AB  3B D6                     CMP EDX,ESI
007530AD  7E 02                     JLE 0x007530b1
007530AF  8B D6                     MOV EDX,ESI
LAB_007530b1:
007530B1  3B D0                     CMP EDX,EAX
007530B3  7F 07                     JG 0x007530bc
007530B5  33 C0                     XOR EAX,EAX
007530B7  5E                        POP ESI
007530B8  5D                        POP EBP
007530B9  C2 20 00                  RET 0x20
LAB_007530bc:
007530BC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007530BF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007530C2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007530C5  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
007530C8  03 D0                     ADD EDX,EAX
007530CA  03 F1                     ADD ESI,ECX
007530CC  3B C1                     CMP EAX,ECX
007530CE  7D 02                     JGE 0x007530d2
007530D0  8B C1                     MOV EAX,ECX
LAB_007530d2:
007530D2  3B D6                     CMP EDX,ESI
007530D4  7E 02                     JLE 0x007530d8
007530D6  8B D6                     MOV EDX,ESI
LAB_007530d8:
007530D8  33 C9                     XOR ECX,ECX
007530DA  3B D0                     CMP EDX,EAX
007530DC  0F 9F C1                  SETG CL
007530DF  8B C1                     MOV EAX,ECX
007530E1  5E                        POP ESI
007530E2  5D                        POP EBP
007530E3  C2 20 00                  RET 0x20
