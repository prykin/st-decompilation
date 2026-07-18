UpgPanelTy::Update:
00552BC0  55                        PUSH EBP
00552BC1  8B EC                     MOV EBP,ESP
00552BC3  81 EC 94 02 00 00         SUB ESP,0x294
00552BC9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00552BCE  53                        PUSH EBX
00552BCF  56                        PUSH ESI
00552BD0  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00552BD3  57                        PUSH EDI
00552BD4  8D 55 B0                  LEA EDX,[EBP + -0x50]
00552BD7  8D 4D AC                  LEA ECX,[EBP + -0x54]
00552BDA  6A 00                     PUSH 0x0
00552BDC  52                        PUSH EDX
00552BDD  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00552BE0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00552BE6  E8 05 AC 1D 00            CALL 0x0072d7f0
00552BEB  8B F0                     MOV ESI,EAX
00552BED  83 C4 08                  ADD ESP,0x8
00552BF0  85 F6                     TEST ESI,ESI
00552BF2  0F 85 87 01 00 00         JNZ 0x00552d7f
00552BF8  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00552BFB  B9 90 00 00 00            MOV ECX,0x90
00552C00  8D BD 6C FD FF FF         LEA EDI,[EBP + 0xfffffd6c]
00552C06  8D 83 AB 01 00 00         LEA EAX,[EBX + 0x1ab]
00552C0C  8B F0                     MOV ESI,EAX
00552C0E  50                        PUSH EAX
00552C0F  F3 A5                     MOVSD.REP ES:EDI,ESI
00552C11  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00552C17  6A 10                     PUSH 0x10
00552C19  E8 9E 09 EB FF            CALL 0x004035bc
00552C1E  BF 19 00 00 00            MOV EDI,0x19
00552C23  8D B3 AB 01 00 00         LEA ESI,[EBX + 0x1ab]
00552C29  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
LAB_00552c30:
00552C30  8B 06                     MOV EAX,dword ptr [ESI]
00552C32  8A 0E                     MOV CL,byte ptr [ESI]
00552C34  C1 E8 10                  SHR EAX,0x10
00552C37  50                        PUSH EAX
00552C38  51                        PUSH ECX
00552C39  E8 B2 07 EB FF            CALL 0x004033f0
00552C3E  8A 4E 08                  MOV CL,byte ptr [ESI + 0x8]
00552C41  83 C4 08                  ADD ESP,0x8
00552C44  84 C9                     TEST CL,CL
00552C46  50                        PUSH EAX
00552C47  74 09                     JZ 0x00552c52
00552C49  8B 93 EB 03 00 00         MOV EDX,dword ptr [EBX + 0x3eb]
00552C4F  52                        PUSH EDX
00552C50  EB 07                     JMP 0x00552c59
LAB_00552c52:
00552C52  8B 83 EF 03 00 00         MOV EAX,dword ptr [EBX + 0x3ef]
00552C58  50                        PUSH EAX
LAB_00552c59:
00552C59  E8 42 87 1B 00            CALL 0x0070b3a0
00552C5E  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00552C61  83 C4 08                  ADD ESP,0x8
00552C64  50                        PUSH EAX
00552C65  6A 01                     PUSH 0x1
00552C67  57                        PUSH EDI
00552C68  6A 24                     PUSH 0x24
00552C6A  51                        PUSH ECX
00552C6B  E8 B9 05 EB FF            CALL 0x00403229
00552C70  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00552C73  83 C4 14                  ADD ESP,0x14
00552C76  83 C6 30                  ADD ESI,0x30
00552C79  83 C7 1B                  ADD EDI,0x1b
00552C7C  48                        DEC EAX
00552C7D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00552C80  75 AE                     JNZ 0x00552c30
00552C82  C7 45 FC 5E 00 00 00      MOV dword ptr [EBP + -0x4],0x5e
00552C89  8D B3 3B 02 00 00         LEA ESI,[EBX + 0x23b]
00552C8F  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
LAB_00552c96:
00552C96  BF 19 00 00 00            MOV EDI,0x19
00552C9B  C7 45 F4 03 00 00 00      MOV dword ptr [EBP + -0xc],0x3
LAB_00552ca2:
00552CA2  8B 16                     MOV EDX,dword ptr [ESI]
00552CA4  8A 06                     MOV AL,byte ptr [ESI]
00552CA6  C1 EA 10                  SHR EDX,0x10
00552CA9  52                        PUSH EDX
00552CAA  50                        PUSH EAX
00552CAB  E8 40 07 EB FF            CALL 0x004033f0
00552CB0  8A 4E 08                  MOV CL,byte ptr [ESI + 0x8]
00552CB3  83 C4 08                  ADD ESP,0x8
00552CB6  84 C9                     TEST CL,CL
00552CB8  50                        PUSH EAX
00552CB9  74 09                     JZ 0x00552cc4
00552CBB  8B 8B EB 03 00 00         MOV ECX,dword ptr [EBX + 0x3eb]
00552CC1  51                        PUSH ECX
00552CC2  EB 07                     JMP 0x00552ccb
LAB_00552cc4:
00552CC4  8B 93 EF 03 00 00         MOV EDX,dword ptr [EBX + 0x3ef]
00552CCA  52                        PUSH EDX
LAB_00552ccb:
00552CCB  E8 D0 86 1B 00            CALL 0x0070b3a0
00552CD0  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00552CD3  83 C4 08                  ADD ESP,0x8
00552CD6  50                        PUSH EAX
00552CD7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00552CDA  6A 01                     PUSH 0x1
00552CDC  57                        PUSH EDI
00552CDD  50                        PUSH EAX
00552CDE  51                        PUSH ECX
00552CDF  E8 45 05 EB FF            CALL 0x00403229
00552CE4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00552CE7  83 C4 14                  ADD ESP,0x14
00552CEA  83 C6 30                  ADD ESI,0x30
00552CED  83 C7 1B                  ADD EDI,0x1b
00552CF0  48                        DEC EAX
00552CF1  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00552CF4  75 AC                     JNZ 0x00552ca2
00552CF6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00552CF9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00552CFC  83 C1 33                  ADD ECX,0x33
00552CFF  48                        DEC EAX
00552D00  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00552D03  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00552D06  75 8E                     JNZ 0x00552c96
00552D08  BF 19 00 00 00            MOV EDI,0x19
00552D0D  8D B3 5B 03 00 00         LEA ESI,[EBX + 0x35b]
00552D13  C7 45 F8 03 00 00 00      MOV dword ptr [EBP + -0x8],0x3
LAB_00552d1a:
00552D1A  8B 16                     MOV EDX,dword ptr [ESI]
00552D1C  8A 06                     MOV AL,byte ptr [ESI]
00552D1E  C1 EA 10                  SHR EDX,0x10
00552D21  52                        PUSH EDX
00552D22  50                        PUSH EAX
00552D23  E8 C8 06 EB FF            CALL 0x004033f0
00552D28  8A 4E 08                  MOV CL,byte ptr [ESI + 0x8]
00552D2B  83 C4 08                  ADD ESP,0x8
00552D2E  84 C9                     TEST CL,CL
00552D30  50                        PUSH EAX
00552D31  74 09                     JZ 0x00552d3c
00552D33  8B 8B EB 03 00 00         MOV ECX,dword ptr [EBX + 0x3eb]
00552D39  51                        PUSH ECX
00552D3A  EB 07                     JMP 0x00552d43
LAB_00552d3c:
00552D3C  8B 93 EF 03 00 00         MOV EDX,dword ptr [EBX + 0x3ef]
00552D42  52                        PUSH EDX
LAB_00552d43:
00552D43  E8 58 86 1B 00            CALL 0x0070b3a0
00552D48  83 C4 08                  ADD ESP,0x8
00552D4B  50                        PUSH EAX
00552D4C  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
00552D4F  6A 01                     PUSH 0x1
00552D51  57                        PUSH EDI
00552D52  68 D3 00 00 00            PUSH 0xd3
00552D57  50                        PUSH EAX
00552D58  E8 CC 04 EB FF            CALL 0x00403229
00552D5D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00552D60  83 C4 14                  ADD ESP,0x14
00552D63  83 C6 30                  ADD ESI,0x30
00552D66  83 C7 1B                  ADD EDI,0x1b
00552D69  48                        DEC EAX
00552D6A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00552D6D  75 AB                     JNZ 0x00552d1a
00552D6F  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00552D72  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00552D78  5F                        POP EDI
00552D79  5E                        POP ESI
00552D7A  5B                        POP EBX
00552D7B  8B E5                     MOV ESP,EBP
00552D7D  5D                        POP EBP
00552D7E  C3                        RET
LAB_00552d7f:
00552D7F  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00552D82  68 50 88 7C 00            PUSH 0x7c8850
00552D87  68 CC 4C 7A 00            PUSH 0x7a4ccc
00552D8C  56                        PUSH ESI
00552D8D  6A 00                     PUSH 0x0
00552D8F  6A 54                     PUSH 0x54
00552D91  68 B8 87 7C 00            PUSH 0x7c87b8
00552D96  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00552D9C  E8 2F A7 15 00            CALL 0x006ad4d0
00552DA1  83 C4 18                  ADD ESP,0x18
00552DA4  85 C0                     TEST EAX,EAX
00552DA6  74 01                     JZ 0x00552da9
00552DA8  CC                        INT3
LAB_00552da9:
00552DA9  6A 54                     PUSH 0x54
00552DAB  68 B8 87 7C 00            PUSH 0x7c87b8
00552DB0  6A 00                     PUSH 0x0
00552DB2  56                        PUSH ESI
00552DB3  E8 88 30 15 00            CALL 0x006a5e40
00552DB8  5F                        POP EDI
00552DB9  5E                        POP ESI
00552DBA  5B                        POP EBX
00552DBB  8B E5                     MOV ESP,EBP
00552DBD  5D                        POP EBP
00552DBE  C3                        RET
