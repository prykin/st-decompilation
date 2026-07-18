FUN_00757530:
00757530  55                        PUSH EBP
00757531  8B EC                     MOV EBP,ESP
00757533  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00757536  53                        PUSH EBX
00757537  56                        PUSH ESI
00757538  57                        PUSH EDI
00757539  85 C0                     TEST EAX,EAX
0075753B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075753E  74 08                     JZ 0x00757548
00757540  8D 78 1C                  LEA EDI,[EAX + 0x1c]
00757543  8D 70 24                  LEA ESI,[EAX + 0x24]
00757546  EB 06                     JMP 0x0075754e
LAB_00757548:
00757548  8D 78 18                  LEA EDI,[EAX + 0x18]
0075754B  8D 70 20                  LEA ESI,[EAX + 0x20]
LAB_0075754e:
0075754E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00757551  66 8B 48 34               MOV CX,word ptr [EAX + 0x34]
00757555  66 85 C9                  TEST CX,CX
00757558  74 05                     JZ 0x0075755f
0075755A  0F BF C1                  MOVSX EAX,CX
0075755D  EB 0A                     JMP 0x00757569
LAB_0075755f:
0075755F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00757562  83 C1 08                  ADD ECX,0x8
00757565  51                        PUSH ECX
00757566  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_00757569:
00757569  8D 58 08                  LEA EBX,[EAX + 0x8]
0075756C  8B 06                     MOV EAX,dword ptr [ESI]
0075756E  3B D8                     CMP EBX,EAX
00757570  7E 11                     JLE 0x00757583
00757572  8B 17                     MOV EDX,dword ptr [EDI]
00757574  53                        PUSH EBX
00757575  52                        PUSH EDX
00757576  E8 D5 85 F6 FF            CALL 0x006bfb50
0075757B  85 C0                     TEST EAX,EAX
0075757D  89 07                     MOV dword ptr [EDI],EAX
0075757F  74 24                     JZ 0x007575a5
00757581  89 1E                     MOV dword ptr [ESI],EBX
LAB_00757583:
00757583  85 DB                     TEST EBX,EBX
00757585  74 15                     JZ 0x0075759c
00757587  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0075758A  8B 3F                     MOV EDI,dword ptr [EDI]
0075758C  8B CB                     MOV ECX,EBX
0075758E  8B C1                     MOV EAX,ECX
00757590  C1 E9 02                  SHR ECX,0x2
00757593  F3 A5                     MOVSD.REP ES:EDI,ESI
00757595  8B C8                     MOV ECX,EAX
00757597  83 E1 03                  AND ECX,0x3
0075759A  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0075759c:
0075759C  5F                        POP EDI
0075759D  8B C3                     MOV EAX,EBX
0075759F  5E                        POP ESI
007575A0  5B                        POP EBX
007575A1  5D                        POP EBP
007575A2  C2 0C 00                  RET 0xc
LAB_007575a5:
007575A5  5F                        POP EDI
007575A6  5E                        POP ESI
007575A7  33 C0                     XOR EAX,EAX
007575A9  5B                        POP EBX
007575AA  5D                        POP EBP
007575AB  C2 0C 00                  RET 0xc
