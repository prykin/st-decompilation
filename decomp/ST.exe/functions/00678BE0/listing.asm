AiPlrClassTy::PrepareToSave:
00678BE0  55                        PUSH EBP
00678BE1  8B EC                     MOV EBP,ESP
00678BE3  83 EC 54                  SUB ESP,0x54
00678BE6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00678BEB  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00678BEE  56                        PUSH ESI
00678BEF  8D 55 B0                  LEA EDX,[EBP + -0x50]
00678BF2  8D 4D AC                  LEA ECX,[EBP + -0x54]
00678BF5  6A 00                     PUSH 0x0
00678BF7  52                        PUSH EDX
00678BF8  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00678BFF  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00678C06  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00678C09  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00678C0F  E8 DC 4B 0B 00            CALL 0x0072d7f0
00678C14  8B F0                     MOV ESI,EAX
00678C16  83 C4 08                  ADD ESP,0x8
00678C19  85 F6                     TEST ESI,ESI
00678C1B  75 5F                     JNZ 0x00678c7c
00678C1D  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00678C20  8D 45 F4                  LEA EAX,[EBP + -0xc]
00678C23  50                        PUSH EAX
00678C24  8D 4E 1C                  LEA ECX,[ESI + 0x1c]
00678C27  E8 E5 90 D8 FF            CALL 0x00401d11
00678C2C  85 F6                     TEST ESI,ESI
00678C2E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00678C31  74 08                     JZ 0x00678c3b
00678C33  8D 8E D3 05 00 00         LEA ECX,[ESI + 0x5d3]
00678C39  EB 02                     JMP 0x00678c3d
LAB_00678c3b:
00678C3B  33 C9                     XOR ECX,ECX
LAB_00678c3d:
00678C3D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00678C40  52                        PUSH EDX
00678C41  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00678C44  52                        PUSH EDX
00678C45  50                        PUSH EAX
00678C46  51                        PUSH ECX
00678C47  E8 B8 C5 D8 FF            CALL 0x00405204
00678C4C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00678C4F  C7 40 0C 01 00 00 00      MOV dword ptr [EAX + 0xc],0x1
00678C56  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00678C59  83 C4 10                  ADD ESP,0x10
00678C5C  85 C0                     TEST EAX,EAX
00678C5E  74 09                     JZ 0x00678c69
00678C60  8D 45 FC                  LEA EAX,[EBP + -0x4]
00678C63  50                        PUSH EAX
00678C64  E8 F7 23 03 00            CALL 0x006ab060
LAB_00678c69:
00678C69  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00678C6C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00678C6F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00678C75  5E                        POP ESI
00678C76  8B E5                     MOV ESP,EBP
00678C78  5D                        POP EBP
00678C79  C2 04 00                  RET 0x4
LAB_00678c7c:
00678C7C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00678C7F  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00678C82  85 C0                     TEST EAX,EAX
00678C84  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00678C8A  74 09                     JZ 0x00678c95
00678C8C  8D 45 FC                  LEA EAX,[EBP + -0x4]
00678C8F  50                        PUSH EAX
00678C90  E8 CB 23 03 00            CALL 0x006ab060
LAB_00678c95:
00678C95  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00678C98  85 C0                     TEST EAX,EAX
00678C9A  74 09                     JZ 0x00678ca5
00678C9C  8D 4D F8                  LEA ECX,[EBP + -0x8]
00678C9F  51                        PUSH ECX
00678CA0  E8 BB 23 03 00            CALL 0x006ab060
LAB_00678ca5:
00678CA5  68 88 2E 7D 00            PUSH 0x7d2e88
00678CAA  68 CC 4C 7A 00            PUSH 0x7a4ccc
00678CAF  56                        PUSH ESI
00678CB0  6A 00                     PUSH 0x0
00678CB2  6A 61                     PUSH 0x61
00678CB4  68 4C 2E 7D 00            PUSH 0x7d2e4c
00678CB9  E8 12 48 03 00            CALL 0x006ad4d0
00678CBE  83 C4 18                  ADD ESP,0x18
00678CC1  85 C0                     TEST EAX,EAX
00678CC3  74 01                     JZ 0x00678cc6
00678CC5  CC                        INT3
LAB_00678cc6:
00678CC6  6A 62                     PUSH 0x62
00678CC8  68 4C 2E 7D 00            PUSH 0x7d2e4c
00678CCD  6A 00                     PUSH 0x0
00678CCF  56                        PUSH ESI
00678CD0  E8 6B D1 02 00            CALL 0x006a5e40
00678CD5  33 C0                     XOR EAX,EAX
00678CD7  5E                        POP ESI
00678CD8  8B E5                     MOV ESP,EBP
00678CDA  5D                        POP EBP
00678CDB  C2 04 00                  RET 0x4
