FUN_006ea560:
006EA560  55                        PUSH EBP
006EA561  8B EC                     MOV EBP,ESP
006EA563  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EA569  56                        PUSH ESI
006EA56A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006EA56D  57                        PUSH EDI
006EA56E  33 FF                     XOR EDI,EDI
006EA570  3B F0                     CMP ESI,EAX
006EA572  73 48                     JNC 0x006ea5bc
006EA574  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EA57A  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
006EA57D  C1 E0 03                  SHL EAX,0x3
006EA580  2B C6                     SUB EAX,ESI
006EA582  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA585  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
006EA588  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006EA58B  F6 C4 80                  TEST AH,0x80
006EA58E  74 2C                     JZ 0x006ea5bc
006EA590  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
006EA593  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006EA596  8B C1                     MOV EAX,ECX
006EA598  F7 D0                     NOT EAX
006EA59A  C1 E8 02                  SHR EAX,0x2
006EA59D  83 E0 01                  AND EAX,0x1
006EA5A0  85 F6                     TEST ESI,ESI
006EA5A2  74 0C                     JZ 0x006ea5b0
006EA5A4  83 E1 FB                  AND ECX,0xfffffffb
006EA5A7  5F                        POP EDI
006EA5A8  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006EA5AB  5E                        POP ESI
006EA5AC  5D                        POP EBP
006EA5AD  C2 08 00                  RET 0x8
LAB_006ea5b0:
006EA5B0  83 C9 04                  OR ECX,0x4
006EA5B3  5F                        POP EDI
006EA5B4  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006EA5B7  5E                        POP ESI
006EA5B8  5D                        POP EBP
006EA5B9  C2 08 00                  RET 0x8
LAB_006ea5bc:
006EA5BC  83 FE FF                  CMP ESI,-0x1
006EA5BF  74 0A                     JZ 0x006ea5cb
006EA5C1  68 94 EE 7E 00            PUSH 0x7eee94
006EA5C6  E8 85 E6 FF FF            CALL 0x006e8c50
LAB_006ea5cb:
006EA5CB  8B C7                     MOV EAX,EDI
006EA5CD  5F                        POP EDI
006EA5CE  5E                        POP ESI
006EA5CF  5D                        POP EBP
006EA5D0  C2 08 00                  RET 0x8
