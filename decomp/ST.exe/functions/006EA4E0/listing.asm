FUN_006ea4e0:
006EA4E0  55                        PUSH EBP
006EA4E1  8B EC                     MOV EBP,ESP
006EA4E3  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EA4E9  56                        PUSH ESI
006EA4EA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006EA4ED  57                        PUSH EDI
006EA4EE  33 FF                     XOR EDI,EDI
006EA4F0  3B F0                     CMP ESI,EAX
006EA4F2  73 52                     JNC 0x006ea546
006EA4F4  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EA4FA  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
006EA4FD  C1 E0 03                  SHL EAX,0x3
006EA500  2B C6                     SUB EAX,ESI
006EA502  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA505  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
006EA508  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006EA50B  F6 C4 80                  TEST AH,0x80
006EA50E  74 36                     JZ 0x006ea546
006EA510  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
006EA513  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006EA516  8B C1                     MOV EAX,ECX
006EA518  C1 E8 07                  SHR EAX,0x7
006EA51B  83 E0 01                  AND EAX,0x1
006EA51E  85 F6                     TEST ESI,ESI
006EA520  74 18                     JZ 0x006ea53a
006EA522  80 C9 80                  OR CL,0x80
006EA525  5F                        POP EDI
006EA526  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006EA529  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006EA52C  89 4A 24                  MOV dword ptr [EDX + 0x24],ECX
006EA52F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006EA532  89 4A 28                  MOV dword ptr [EDX + 0x28],ECX
006EA535  5E                        POP ESI
006EA536  5D                        POP EBP
006EA537  C2 10 00                  RET 0x10
LAB_006ea53a:
006EA53A  80 E1 7F                  AND CL,0x7f
006EA53D  5F                        POP EDI
006EA53E  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006EA541  5E                        POP ESI
006EA542  5D                        POP EBP
006EA543  C2 10 00                  RET 0x10
LAB_006ea546:
006EA546  83 FE FF                  CMP ESI,-0x1
006EA549  74 0A                     JZ 0x006ea555
006EA54B  68 80 EE 7E 00            PUSH 0x7eee80
006EA550  E8 FB E6 FF FF            CALL 0x006e8c50
LAB_006ea555:
006EA555  8B C7                     MOV EAX,EDI
006EA557  5F                        POP EDI
006EA558  5E                        POP ESI
006EA559  5D                        POP EBP
006EA55A  C2 10 00                  RET 0x10
