STAllPlayersC::DestroyObjectMsg:
00449B60  55                        PUSH EBP
00449B61  8B EC                     MOV EBP,ESP
00449B63  83 EC 3C                  SUB ESP,0x3c
00449B66  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00449B69  56                        PUSH ESI
00449B6A  48                        DEC EAX
00449B6B  83 F8 05                  CMP EAX,0x5
00449B6E  0F 87 CA 00 00 00         JA 0x00449c3e
switchD_00449b74::switchD:
00449B74  FF 24 85 6C 9C 44 00      JMP dword ptr [EAX*0x4 + 0x449c6c]
switchD_00449b74::caseD_1:
00449B7B  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
00449B7F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00449B82  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00449B85  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
00449B88  C1 E1 04                  SHL ECX,0x4
00449B8B  03 C8                     ADD ECX,EAX
00449B8D  8B 0C 4D 29 4E 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f4e29]
00449B94  EB 26                     JMP 0x00449bbc
switchD_00449b74::caseD_2:
00449B96  8B 0D 54 A1 7F 00         MOV ECX,dword ptr [0x007fa154]
00449B9C  EB 1E                     JMP 0x00449bbc
switchD_00449b74::caseD_3:
00449B9E  8B 0D 58 A1 7F 00         MOV ECX,dword ptr [0x007fa158]
00449BA4  EB 16                     JMP 0x00449bbc
switchD_00449b74::caseD_4:
00449BA6  8B 0D 5C A1 7F 00         MOV ECX,dword ptr [0x007fa15c]
00449BAC  EB 0E                     JMP 0x00449bbc
switchD_00449b74::caseD_5:
00449BAE  8B 0D 60 A1 7F 00         MOV ECX,dword ptr [0x007fa160]
00449BB4  EB 06                     JMP 0x00449bbc
switchD_00449b74::caseD_6:
00449BB6  8B 0D 64 A1 7F 00         MOV ECX,dword ptr [0x007fa164]
LAB_00449bbc:
00449BBC  85 C9                     TEST ECX,ECX
00449BBE  0F 84 9F 00 00 00         JZ 0x00449c63
00449BC4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00449BC7  8D 55 08                  LEA EDX,[EBP + 0x8]
00449BCA  52                        PUSH EDX
00449BCB  8B D6                     MOV EDX,ESI
00449BCD  81 E2 FF FF 00 00         AND EDX,0xffff
00449BD3  E8 98 30 26 00            CALL 0x006acc70
00449BD8  83 F8 FC                  CMP EAX,-0x4
00449BDB  0F 84 82 00 00 00         JZ 0x00449c63
00449BE1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00449BE4  85 C9                     TEST ECX,ECX
00449BE6  74 7B                     JZ 0x00449c63
00449BE8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00449BEB  C7 45 E4 10 27 00 00      MOV dword ptr [EBP + -0x1c],0x2710
00449BF2  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
00449BF9  C7 45 EC FE 00 00 00      MOV dword ptr [EBP + -0x14],0xfe
00449C00  66 89 75 F0               MOV word ptr [EBP + -0x10],SI
00449C04  66 8B 41 18               MOV AX,word ptr [ECX + 0x18]
00449C08  66 89 45 F2               MOV word ptr [EBP + -0xe],AX
00449C0C  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00449C0F  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00449C12  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00449C19  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
00449C20  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00449C23  C7 45 D4 28 01 00 00      MOV dword ptr [EBP + -0x2c],0x128
00449C2A  8B 11                     MOV EDX,dword ptr [ECX]
00449C2C  8D 45 C4                  LEA EAX,[EBP + -0x3c]
00449C2F  50                        PUSH EAX
00449C30  FF 12                     CALL dword ptr [EDX]
00449C32  B8 01 00 00 00            MOV EAX,0x1
00449C37  5E                        POP ESI
00449C38  8B E5                     MOV ESP,EBP
00449C3A  5D                        POP EBP
00449C3B  C2 10 00                  RET 0x10
switchD_00449b74::default:
00449C3E  68 E0 86 7A 00            PUSH 0x7a86e0
00449C43  68 CC 4C 7A 00            PUSH 0x7a4ccc
00449C48  6A 00                     PUSH 0x0
00449C4A  6A 00                     PUSH 0x0
00449C4C  68 B1 2E 00 00            PUSH 0x2eb1
00449C51  68 04 60 7A 00            PUSH 0x7a6004
00449C56  E8 75 38 26 00            CALL 0x006ad4d0
00449C5B  83 C4 18                  ADD ESP,0x18
00449C5E  85 C0                     TEST EAX,EAX
00449C60  74 01                     JZ 0x00449c63
00449C62  CC                        INT3
LAB_00449c63:
00449C63  33 C0                     XOR EAX,EAX
00449C65  5E                        POP ESI
00449C66  8B E5                     MOV ESP,EBP
00449C68  5D                        POP EBP
00449C69  C2 10 00                  RET 0x10
